
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

    if (messageType == 1)
    {
        NSLog(@"文本消息");
    }else if (messageType == 3)
    {
        NSLog(@"图片消息");
    }else if (messageType == 48)
    {
        NSLog(@"位置消息");
    }else if (messageType == 49)
    {
        NSLog(@"红包消息、转账消息");

        // agreeDuty = 0;
        // channelId = 1;
        // inWay = 1;
        // msgType = 1;
        // nativeUrl = "wxpay://c2cbizmessagehandler/hongbao/receivehongbao?msgtype=1&channelid=1&sendid=1000039401201711157020140209144&sendusername=wxid_y9bs6i3qil6m21&ver=6&sign=cb7ee087ec43110c0bc02a9120e5f2cca5194d7249f2384ec67a8a6d140a2664cc91bd9f3a6df2a1413e740620ddc015796f7d21d18da3c60ac48f0fe06044f5ac0b87b4724ca218adb6345e25f573e5";
        // sendId = 1000039401201711157020140209144;



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


    }else{
        NSLog(@"未知");
    }

    

}
%end


%hook WCRedEnvelopesLogicMgr
- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2 {
    // %log; 
    %orig;
    // NSLog(@"HongBaoRes --->  cgiCmdid: %d  platRet: %d  retText: %@ platMsg : %@ ",arg1.cgiCmdid, arg1.platRet, arg1.retText, arg1.platMsg);

    // NSLog(@"HongBaoReq --->  cgiCmdid: %d  outPutType : %d  reqText: %@ ",arg2.cgiCmd, arg2.outPutType, arg2.reqText);

    // NSLog(@"HongBaoRes buffer: %@", [[NSString alloc] initWithData:arg1.retText.buffer encoding:NSUTF8StringEncoding]);
    // NSLog(@"HongBaoReq buffer:  %@", [[NSString alloc] initWithData:arg2.reqText.buffer encoding:NSUTF8StringEncoding]);

    // if (arg1.retText.buffer.length>0)
    // {
    //     // NSLog(@"arg1.retText.buffer:\n");
        
    //     NSDictionary *retTextObj =  [NSJSONSerialization JSONObjectWithData:arg1.retText.buffer options:0 error:nil];
    //     NSLog(@"%@", retTextObj);
    //     // NSString *retTextStr = [[NSString alloc] initWithData:arg1.retText.buffer encoding:NSUTF8StringEncoding];
    //     // NSDictionary *retTextDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:retTextStr separator:@"&"];
    //     // NSLog(@"retTextDict: %@",retTextDict);
    // }

    // if (arg2.reqText.buffer.length>0)
    // {
    //     // NSLog(@"arg2.reqText.buffer :\n");
    //     NSString *reqTextStr = [[NSString alloc] initWithData:arg2.reqText.buffer encoding:NSUTF8StringEncoding];
    //     NSDictionary *reqTextDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:reqTextStr separator:@"&"];
    //     NSLog(@"reqTextDict: %@",reqTextDict);
    // }



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

        sleep(1);

        //auto open red envelopes
        WCRedEnvelopesLogicMgr *redEnvelopesLogicMgr = [serviceCenter getService: [%c(WCRedEnvelopesLogicMgr) class]];
        [redEnvelopesLogicMgr OpenRedEnvelopesRequest: dictM];

        
    }


}


%end

%hook WCRedEnvelopesLogicMgr
- (void)OpenRedEnvelopesRequest:(id)arg1 {
    %orig;
    %log;
    NSLog(@"OpenRedEnvelopesRequest param: %@", [arg1 class]);

}

- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1 { %log; %orig; }
%end


%hook MicroMessengerAppDelegate

- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {
     %log;
     [%c(WCBizUtil) showAlert:@"start...."];
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


 // {
 //        channelId = 1;
 //        headImg = "http://wx.qlogo.cn/mmhead/ver_1/dE3om8P2WCFmIe3beWMRicvRPveuUVF7X8xqpOle86QY9iaoqiazgaujFibEu9MhjLFtV4SoY8xZ2ExbrFYH4oxVRA/132";
 //        msgType = 1;
 //        nativeUrl = "wxpay://c2cbizmessagehandler/hongbao/receivehongbao?msgtype=1&channelid=1&sendid=1000039401201711167006341343302&sendusername=wxid_y9bs6i3qil6m21&ver=6&sign=5d8c10bb214950d2fe10ba8b6805c25a6334d87edc24dcbc69623753074249094ff02c7caf0ebee5e7074b4065494df0e70ffcf2b8f5a0933fa09860148cdd4be678cb1d9bde7ba9797c3212f92881c9";
 //        nickName = "\U6e05\U53f6\U6a80";
 //        sendId = 1000039401201711167006341343302;
 //        sessionUserName = "wxid_y9bs6i3qil6m21";
 //        timingIdentifier = 25A717343CC91E8594BDF949D902A23C;
 //    }


 //    {
 //        channelId = 1;
 //        headImg = "http://wx.qlogo.cn/mmhead/ver_1/dE3om8P2WCFmIe3beWMRicvRPveuUVF7X8xqpOle86QY9iaoqiazgaujFibEu9MhjLFtV4SoY8xZ2ExbrFYH4oxVRA/132";
 //        msgType = 1;
 //        nativeUrl = "wxpay://c2cbizmessagehandler/hongbao/receivehongbao?msgtype=1&channelid=1&sendid=1000039401201711167006341343302&sendusername=wxid_y9bs6i3qil6m21&ver=6&sign=5d8c10bb214950d2fe10ba8b6805c25a6334d87edc24dcbc69623753074249094ff02c7caf0ebee5e7074b4065494df0e70ffcf2b8f5a0933fa09860148cdd4be678cb1d9bde7ba9797c3212f92881c9";
 //        nickName = "\U6e05\U53f6\U6a80";
 //        sendId = 1000039401201711167006341343302;
 //        sessionUserName = "wxid_y9bs6i3qil6m21";
 //        timingIdentifier = 25A717343CC91E8594BDF949D902A23C;
 //    }

