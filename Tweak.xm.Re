

@interface WCBizUtil 
+ (id)dictionaryWithDecodedComponets:(id)arg1 separator:(id)arg2;
@end

@interface WCPayInfoItem 
@property(retain, nonatomic) NSString *m_c2cNativeUrl; // @synthesize m_oSelectedMessageWrap;
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

@interface CMessageWrap
@property(nonatomic) _Bool m_bCdnForward; // @synthesize m_bCdnForward;
@property(nonatomic) _Bool m_bForward; // @synthesize m_bForward;
@property(nonatomic) _Bool m_bIsBrandSendMass; // @synthesize m_bIsBrandSendMass;
@property(nonatomic) _Bool m_bIsFromBrandSession; // @synthesize m_bIsFromBrandSession;
@property(nonatomic) _Bool m_bIsSplit; // @synthesize m_bIsSplit;
@property(nonatomic) _Bool m_bNew; // @synthesize m_bNew;
@property(nonatomic) unsigned int m_bReceiveMessageSwitchStatus; // @synthesize m_bReceiveMessageSwitchStatus;
@property(retain, nonatomic) NSString *m_bizMsgMenuID; // @synthesize m_bizMsgMenuID;
@property(retain, nonatomic) NSMutableDictionary *m_dicForwardParas; // @synthesize m_dicForwardParas=_m_dicForwardParas;
@property(retain, nonatomic) NSData *m_dtThumbnail; // @synthesize m_dtThumbnail;
@property(nonatomic) unsigned int m_forwardType; // @synthesize m_forwardType=_m_forwardType;
@property(nonatomic) _Bool m_isEnterpriseMsg; // @synthesize m_isEnterpriseMsg;
@property(nonatomic) _Bool m_isTempSessionMsg; // @synthesize m_isTempSessionMsg;
@property(nonatomic) long long m_n64MesSvrID; // @synthesize m_n64MesSvrID;
@property(retain, nonatomic) NSString *m_nsAtUserList; // @synthesize m_nsAtUserList;
@property(retain, nonatomic) NSString *m_nsBizChatId; // @synthesize m_nsBizChatId;
@property(retain, nonatomic) NSString *m_nsBizClientMsgID; // @synthesize m_nsBizClientMsgID;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(retain, nonatomic) NSString *m_nsDisplayName; // @synthesize m_nsDisplayName;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
@property(retain, nonatomic) NSString *m_nsKFWorkerOpenID; // @synthesize m_nsKFWorkerOpenID;
@property(retain, nonatomic) NSString *m_nsMsgSource; // @synthesize m_nsMsgSource;
@property(retain, nonatomic) NSString *m_nsPattern; // @synthesize m_nsPattern;
@property(retain, nonatomic) NSString *m_nsPushBody; // @synthesize m_nsPushBody;
@property(retain, nonatomic) NSString *m_nsPushContent; // @synthesize m_nsPushContent;
@property(retain, nonatomic) NSString *m_nsPushPrefix; // @synthesize m_nsPushPrefix;
@property(retain, nonatomic) NSString *m_nsPushTitle; // @synthesize m_nsPushTitle;
@property(retain, nonatomic) NSString *m_nsRealChatUsr; // @synthesize m_nsRealChatUsr;
@property(retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr;
@property(nonatomic) unsigned int m_sequenceId; // @synthesize m_sequenceId;
@property(nonatomic) unsigned int m_uiBizChatVer; // @synthesize m_uiBizChatVer;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned int m_uiDownloadStatus; // @synthesize m_uiDownloadStatus;
@property(nonatomic) unsigned int m_uiEmojiStatFlag; // @synthesize m_uiEmojiStatFlag;
@property(nonatomic) unsigned int m_uiImgStatus; // @synthesize m_uiImgStatus;
@property(nonatomic) unsigned int m_uiMesLocalID; // @synthesize m_uiMesLocalID;
@property(nonatomic) int m_uiMessageType; // @synthesize m_uiMessageType;
@property(nonatomic) unsigned int m_uiMsgFlag; // @synthesize m_uiMsgFlag;
@property(nonatomic) unsigned int m_uiPercent; // @synthesize m_uiPercent;
@property(nonatomic) unsigned int m_uiSendTime; // @synthesize m_uiSendTime;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem; 

-(id)yy_modelToJSONString;
@end


%hook CMessageMgr

- (void)AsyncOnAddMsg:(NSString *)wxid MsgWrap:(CMessageWrap *)msg {

    NSString *content = [msg m_nsContent];
    NSString *fromUsr = [msg m_nsFromUsr];
    NSString *toUsr = [msg m_nsToUsr];
    int messageType = [msg m_uiMessageType];

    NSLog(@"content: %@", content);
    NSLog(@"fromUsr: %@", fromUsr);
    NSLog(@"toUsr: %@", toUsr);
    NSLog(@"messageType: %d", messageType);
    NSLog(@"CMessageWrap: %@", [msg yy_modelToJSONString]);

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

        WCPayInfoItem *payInfoItem = [msg m_oWCPayInfoItem];
        NSMutableDictionary *dictM = [NSMutableDictionary dictionary];
        [dictM setObject:@"1" forKey:@"msgType"];
        NSString *m_c2cNativeUrl = [payInfoItem m_c2cNativeUrl];
        NSInteger index = [@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length];
        NSString *nativeUrlData = [m_c2cNativeUrl substringFromIndex:index];

        NSDictionary *nativeUrlDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:nativeUrlData separator:@"&"];
        id sendId = [nativeUrlDict objectForKey:@"sendid"];
        [dictM setObject:sendId forKey: @"sendId"];
        id channelId = [nativeUrlDict objectForKey:@"channelid"];
        [dictM setObject:channelId forKey:@"channelId"];

        MMServiceCenter *serviceCenter = [%c(MMServiceCenter) defaultCenter];
        Class contactMgrCls = [%c(CContactMgr) class];
        CContactMgr *contactMgrSer = [serviceCenter getService: contactMgrCls];
        CBaseContact *contactMgrSelfContact = [contactMgrSer getSelfContact];
        NSString *displayName = [contactMgrSelfContact getContactDisplayName];
        [dictM setObject:displayName forKey: @"nickName"];
        NSString *headImgUrl = [contactMgrSelfContact m_nsHeadImgUrl];
        [dictM setObject: headImgUrl forKey:@"headImg"];
        [dictM setObject:m_c2cNativeUrl forKey: @"nativeUrl"];
        NSString *userName = [nativeUrlDict valueForKey:@"sendusername"];
        if(userName.length > 0){
            [dictM setObject:[nativeUrlDict valueForKey:@"sendusername"] forKey:@"sessionUserName"];
        }
        NSLog(@"dictM: %@",dictM);

        // NSString *timingIdentifier = [baseInfoDict objectForKey:@"timingIdentifier"];
        // if([timingIdentifier length] > 0){
        //     [dictM setObject:timingIdentifier forKey:@"timingIdentifier"];
        // }



    }else{
        NSLog(@"未知");
    }

    %orig;

}
%end

%hook WCRedEnvelopesLogicMgr

- (void)OpenRedEnvelopesRequest:(id)arg1 {

    %log;
    NSLog(@"OpenRedEnvelopesRequest param: %@", [arg1 class]);

}

%end




