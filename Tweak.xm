
#import "YCHongBaoMgr.h"

@interface WCBizUtil 
+ (id)dictionaryWithDecodedComponets:(id)arg1 separator:(id)arg2;
+ (void)showAlert:(NSString *)msg;
+ (void)enableAutoOpenWithNativeUrl:(NSString *)nativeUrl;
+ (BOOL)isEnableAutoOpenWithNativeUrl:(NSString *)nativeUrl;
+ (void)autoOpenWithNativeUrl:(NSString *)nativeUrl;
@end

@interface SKBuiltinBuffer_t 

+ (id)skBufferWithData:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSData *buffer; // @dynamic buffer;
@property(nonatomic) unsigned int iLen; // @dynamic iLen;

@end

@interface HongBaoReq 

@property(retain, nonatomic) SKBuiltinBuffer_t *reqText; // @dynamic reqText;
@property(nonatomic) unsigned int cgiCmd; // @dynamic cgiCmd;
@property(nonatomic) unsigned int outPutType; // @dynamic outPutType;



@end

@interface HongBaoRes 

@property(retain, nonatomic) SKBuiltinBuffer_t *retText; // @dynamic reqText;
@property(nonatomic) unsigned int cgiCmdid; // @dynamic cgiCmd;
@property(retain, nonatomic) NSString *platMsg; // @dynamic platMsg;
@property(nonatomic) int platRet; // @dynamic platRet;

@end

@interface MMServiceCenter
+ (id)defaultCenter;
- (id)getService:(id)cls;
@end

@interface CContactMgr
- (id)getSelfContact;
@end

@interface CBaseContact

@property(retain, nonatomic) NSString *m_nsHeadImgUrl;
@property(retain, nonatomic) NSString *m_nsUsrName;
- (id)getContactDisplayName;

@end

@interface WCPayInfoItem 
@property(retain, nonatomic) NSString *m_c2cNativeUrl; // @synthesize m_oSelectedMessageWrap;
@end

@interface CMessageWrap
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(retain, nonatomic) NSString *m_nsDisplayName; // @synthesize m_nsDisplayName;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
@property(retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr;
@property(nonatomic) int m_uiMessageType; // @synthesize m_uiMessageType;
@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem; 

@end

@interface WCRedEnvelopesLogicMgr

- (void)OpenRedEnvelopesRequest:(id)arg1;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
@end


%hook CMessageMgr

- (void)AsyncOnAddMsg:(NSString *)wxid MsgWrap:(CMessageWrap *)msg {

    %orig;

    int messageType = [msg m_uiMessageType];
    NSString *fromUsr = [msg m_nsFromUsr];

    if (messageType == 49)
    {
        NSLog(@"红包消息、转账消息");

        WCPayInfoItem *payInfoItem = [msg m_oWCPayInfoItem];
        NSString *m_c2cNativeUrl = [payInfoItem m_c2cNativeUrl];
        NSInteger index = [@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length];
        NSString *nativeUrlData = [m_c2cNativeUrl substringFromIndex:index];
        NSDictionary *nativeUrlDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:nativeUrlData separator:@"&"];
        
        BOOL isGroupHB = [fromUsr containsString:@"chatroom"];

        //if msgtype == 1 is enable auto open red envelopes
        id msgType = [nativeUrlDict valueForKey:@"msgtype"];
        if([msgType isEqual: @"1"]){
            [%c(WCBizUtil) enableAutoOpenWithNativeUrl:m_c2cNativeUrl];

            //************ auto get red envelopes info ****************//
            NSMutableDictionary *dictM = [NSMutableDictionary dictionary];
            //msgType: group and friend are same , value is 1
            [dictM setObject:@"1" forKey:@"msgType"]; 
            // agreeDuty is 0
            [dictM setValue:@"0" forKey:@"agreeDuty"];
            [dictM setValue:m_c2cNativeUrl forKey:@"nativeUrl"];
            id sendId = [nativeUrlDict objectForKey:@"sendid"];
            [dictM setObject:sendId forKey: @"sendId"];
            id channelId = [nativeUrlDict objectForKey:@"channelid"];
            [dictM setObject:channelId forKey:@"channelId"];
            //group hb is 0 ,friend hb is 1
            if(isGroupHB){
                [dictM setObject:@"0" forKey:@"inWay"];
            }else{
                [dictM setObject:@"1" forKey:@"inWay"]; 
            }

            NSLog(@"dictM: %@", dictM);
            // auto get red envelope info
            WCRedEnvelopesLogicMgr *redEnvelopesLogicMgr = [[%c(MMServiceCenter) defaultCenter] getService: [%c(WCRedEnvelopesLogicMgr) class]];
            [redEnvelopesLogicMgr ReceiverQueryRedEnvelopesRequest:dictM];


        }else{
            NSLog(@"msgtype : %@  mgtype class: %@", msgType, [msgType class]);
        }
    } 

}
%end


%hook WCRedEnvelopesLogicMgr
- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2 {
    %orig;
    
    //HongBaoRes.cgiCmdid = 3 is get hongbao info, .cgiCmdid = 4 is open hongbao
    if(arg1.retText.buffer.length>0 && arg2.reqText.buffer.length>0 && arg1.cgiCmdid == 3 ){

        //********** auto open red envelopes **********//

        //HonBaoRes
        NSDictionary *retTextObj =  [NSJSONSerialization JSONObjectWithData:arg1.retText.buffer options:0 error:nil];
        //HonBaoReq
        NSString *reqTextStr = [[NSString alloc] initWithData:arg2.reqText.buffer encoding:NSUTF8StringEncoding];
        NSDictionary *reqTextDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:reqTextStr separator:@"&"];

        NSMutableDictionary *dictM = [NSMutableDictionary dictionary];
        [dictM setValue:@"1" forKey:@"msgType"];
        //m_c2cNativeUrl is url encode
        NSString *m_c2cNativeUrl = [reqTextDict valueForKey:@"nativeUrl"];

        //decode url 
        m_c2cNativeUrl = (NSString *)CFBridgingRelease(CFURLCreateStringByReplacingPercentEscapesUsingEncoding(kCFAllocatorDefault,(CFStringRef)m_c2cNativeUrl, CFSTR(""),kCFStringEncodingUTF8));


        if(![%c(WCBizUtil) isEnableAutoOpenWithNativeUrl:m_c2cNativeUrl]){
            return;
        }else{
            [%c(WCBizUtil) autoOpenWithNativeUrl:m_c2cNativeUrl];
        }

        NSInteger index = [@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length];
        NSString *nativeUrlData = [m_c2cNativeUrl substringFromIndex:index];

        NSDictionary *nativeUrlDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:nativeUrlData separator:@"&"];
        id sendId = [nativeUrlDict valueForKey:@"sendid"];
        [dictM setValue:sendId forKey: @"sendId"];
        id channelId = [nativeUrlDict valueForKey:@"channelid"];
        [dictM setValue:channelId forKey:@"channelId"];

        MMServiceCenter *serviceCenter = [%c(MMServiceCenter) defaultCenter];
        Class contactMgrCls = [%c(CContactMgr) class];
        CContactMgr *contactMgrSer = [serviceCenter getService: contactMgrCls];
        CBaseContact *contactMgrSelfContact = [contactMgrSer getSelfContact];
        NSString *displayName = [contactMgrSelfContact getContactDisplayName];
        [dictM setValue:displayName forKey: @"nickName"];
        NSString *headImgUrl = [contactMgrSelfContact m_nsHeadImgUrl];
        [dictM setValue: headImgUrl forKey:@"headImg"];
        [dictM setValue:m_c2cNativeUrl forKey: @"nativeUrl"];

        NSString *userName = [nativeUrlDict valueForKey:@"sendusername"];
        if(userName.length > 0){
            [dictM setValue:[nativeUrlDict valueForKey:@"sendusername"] forKey:@"sessionUserName"];
        }
        
        NSString *timingIdentifier = [retTextObj valueForKey:@"timingIdentifier"];
        if([timingIdentifier length] > 0){
            [dictM setValue:timingIdentifier forKey:@"timingIdentifier"];
        }

        NSLog(@"dictM Count:%lu data: %@",[dictM count], dictM);

        //等待0.5s
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            //auto open red envelopes
            WCRedEnvelopesLogicMgr *redEnvelopesLogicMgr = [serviceCenter getService: [%c(WCRedEnvelopesLogicMgr) class]];
            [redEnvelopesLogicMgr OpenRedEnvelopesRequest: dictM];
        });
    }
}


%end

%hook WCRedEnvelopesLogicMgr
- (void)OpenRedEnvelopesRequest:(id)arg1 {
    %orig;
    %log;
}

- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1 { %log; %orig; }
%end


%hook MicroMessengerAppDelegate

- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {
     %log;
     [%c(YCHongBaoMgr) showAlert:@"start...."];
     return  %orig;
}

%end

%hook WCBizUtil

%new
+ (void)enableAutoOpenWithNativeUrl:(NSString *)nativeUrl{
    
    NSMutableDictionary *dictM =  [[NSUserDefaults standardUserDefaults] valueForKey:@"AutoOpenWithNativeUrl"];
    
    if (!dictM) {
        dictM = [NSMutableDictionary dictionary];
    }else{
        dictM = [NSMutableDictionary dictionaryWithDictionary:dictM];
    }
    [dictM setValue:@1 forKey:nativeUrl];
    [[NSUserDefaults standardUserDefaults] setObject:dictM forKey:@"AutoOpenWithNativeUrl"];
}
%new
+ (BOOL)isEnableAutoOpenWithNativeUrl:(NSString *)nativeUrl{
    NSMutableDictionary *dictM =  [[NSUserDefaults standardUserDefaults] valueForKey:@"AutoOpenWithNativeUrl"];
    if (dictM) {
        NSNumber *val = [dictM valueForKey:nativeUrl];
        if (val.intValue == 1) {
            return true;
        }
    }
    
    return false;
}
%new
+ (void)autoOpenWithNativeUrl:(NSString *)nativeUrl {
    NSMutableDictionary *dictM =  [[NSUserDefaults standardUserDefaults] valueForKey:@"AutoOpenWithNativeUrl"];
    if (dictM) {
        dictM = [NSMutableDictionary dictionaryWithDictionary:dictM];
        [dictM setValue:@0 forKey:nativeUrl];
        [[NSUserDefaults standardUserDefaults] setObject:dictM forKey:@"AutoOpenWithNativeUrl"];
    }

}


%new
+ (void)showAlert:(NSString *)msg {
    [[[UIAlertView alloc] initWithTitle:msg message:nil delegate:nil cancelButtonTitle:@"confirm" otherButtonTitles:nil, nil] show];
}

%end


