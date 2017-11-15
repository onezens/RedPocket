text:00000001011FF35C ; void __cdecl -[WCRedEnvelopesReceiveControlLogic WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes](WCRedEnvelopesReceiveControlLogic *self, SEL)
__text:00000001011FF35C __WCRedEnvelopesReceiveControlLogic_WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes_
... ;省略部分代码
__text:00000001011FF35C    SUB    SP, SP, #0x130
__text:00000001011FF360    STP    D9, D8, [SP,#0x120+var_60]
__text:00000001011FF364    STP    X28, X27, [SP,#0x120+var_50]
__text:00000001011FF368    STP    X26, X25, [SP,#0x120+var_40]
__text:00000001011FF36C    STP    X24, X23, [SP,#0x120+var_30]
__text:00000001011FF370    STP    X22, X21, [SP,#0x120+var_20]
__text:00000001011FF374    STP    X20, X19, [SP,#0x120+var_10]
__text:00000001011FF378    STP    X29, X30, [SP,#0x120+var_s0]
__text:00000001011FF37C    ADD    X29, SP, #0x120
__text:00000001011FF380    MOV    X27, X0
__text:00000001011FF384    ADRP   X8, #_OBJC_IVAR_$_WCRedEnvelopesControlLogic.m_data@PAGE ; WCRedEnvelopesControlData *m_data;
__text:00000001011FF388    NOP
__text:00000001011FF38C    LDRSW  X21, [X8,#_OBJC_IVAR_$_WCRedEnvelopesControlLogic.m_data@PAGEOFF] ; WCRedEnvelopesControlData *m_data;
__text:00000001011FF390    LDR    X0, [X27,X21] 
__text:00000001011FF394    ADRP   X8, #selRef_m_oSelectedMessageWrap@PAGE
__text:00000001011FF398    LDR    X19, [X8,#selRef_m_oSelectedMessageWrap@PAGEOFF]
__text:00000001011FF39C    MOV    X1, X19
__text:00000001011FF3A0    BL     _objc_msgSend
__text:00000001011FF3A4    MOV    X29, X29
__text:00000001011FF3A8    BL     _objc_retainAutoreleasedReturnValue
;上面返回值 CMessageWrap *messageWrap = [self.m_data m_oSelectedMessageWrap];


__text:00000001011FF3AC    MOV    X22, X0 ;x0返回值，是messageWrap的地址
__text:00000001011FF3B0    ADRP   X8, #selRef_m_oWCPayInfoItem@PAGE
__text:00000001011FF3B4    LDR    X1, [X8,#selRef_m_oWCPayInfoItem@PAGEOFF]
__text:00000001011FF3B8    STR    X1, [SP,#0x120+var_100] ;x1是m_oWCPayInfoItem方法地址
__text:00000001011FF3BC    BL     _objc_msgSend
__text:00000001011FF3C0    MOV    X29, X29
__text:00000001011FF3C4    BL     _objc_retainAutoreleasedReturnValue
;上面返回值 WCPayInfoItem *payInfoItem = [messageWrap m_oWCPayInfoItem];

__text:00000001011FF3C8    MOV    X23, X0
__text:00000001011FF3CC    ADRP   X8, #selRef_m_c2cNativeUrl@PAGE
__text:00000001011FF3D0    LDR    X24, [X8,#selRef_m_c2cNativeUrl@PAGEOFF]
__text:00000001011FF3D4    MOV    X1, X24
__text:00000001011FF3D8    BL     _objc_msgSend
__text:00000001011FF3DC    MOV    X29, X29
__text:00000001011FF3E0    BL     _objc_retainAutoreleasedReturnValue
;上面返回值 NSString *m_c2cNativeUrl = [payInfoItem m_c2cNativeUrl];

__text:00000001011FF3E4    MOV    X25, X0
__text:00000001011FF3E8    ADRP   X8, #selRef_length@PAGE
__text:00000001011FF3EC    LDR    X1, [X8,#selRef_length@PAGEOFF]
__text:00000001011FF3F0    ADRP   X0, #cfstr_WxpayC2cbizmes_0@PAGE ; "wxpay://c2cbizmessagehandler/hongbao/receivehongbao?"
__text:00000001011FF3F4    ADD    X0, X0, #cfstr_WxpayC2cbizmes_0@PAGEOFF ; "wxpay://c2cbizmessagehandler/hongbao/receivehongbao?"
__text:00000001011FF3F8    STR    X1, [SP,#0x120+var_F8] ;[SP,#0x120+var_F8] = 字符串length方法
__text:00000001011FF3FC    BL     _objc_msgSend
__text:00000001011FF400    MOV    X2, X0
__text:00000001011FF404    ADRP   X8, #selRef_substringFromIndex_@PAGE
__text:00000001011FF408    LDR    X1, [X8,#selRef_substringFromIndex_@PAGEOFF]
__text:00000001011FF40C    MOV    X0, X25
__text:00000001011FF410    BL     _objc_msgSend
__text:00000001011FF414    MOV    X29, X29
__text:00000001011FF418    BL     _objc_retainAutoreleasedReturnValue
;上面有两个方法：1. [@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length] 2. [m_c2cNativeUrl substringFromIndex]
;NSInterger index = [@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length];
;上面的返回值 :  NSString *nativeUrlData = [m_c2cNativeUrl substringFromIndex:index];

__text:00000001011FF41C    MOV    X20, X0 ;x20是nativeUrlData
__text:00000001011FF420    MOV    X0, X25 ;此时的x25是m_c2cNativeUrl的地址
__text:00000001011FF424    BL     _objc_release
__text:00000001011FF428    MOV    X0, X23
__text:00000001011FF42C    BL     _objc_release
__text:00000001011FF430    MOV    X0, X22  ; x22 是messageWrap的地址
__text:00000001011FF434    BL     _objc_release
__text:00000001011FF438    ADRP   X8, #classRef_WCBizUtil@PAGE
__text:00000001011FF43C    LDR    X0, [X8,#classRef_WCBizUtil@PAGEOFF]  ;x0是WCBizUtil
__text:00000001011FF440    ADRP   X8, #selRef_dictionaryWithDecodedComponets_separator_@PAGE
__text:00000001011FF444    LDR    X1, [X8,#selRef_dictionaryWithDecodedComponets_separator_@PAGEOFF] ;x1是dictionaryWithDecodedComponets_separator
__text:00000001011FF448    ADRP   X3, #stru_10330F0F8@PAGE  ; "&" x3是字符串 "&"
__text:00000001011FF44C    ADD    X3, X3, #stru_10330F0F8@PAGEOFF  ; "&"
__text:00000001011FF450    STR    X20, [SP,#0x120+var_E0]
__text:00000001011FF454    MOV    X2, X20  ;x2 是nativeUrlData
__text:00000001011FF458    BL     _objc_msgSend
__text:00000001011FF45C    MOV    X29, X29
__text:00000001011FF460    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：
;NSDictionary *nativeUrlDict = [WCBizUtil dictionaryWithDecodedComponets:nativeUrlData separator:@"&"]

__text:00000001011FF464    MOV    X20, X0 ;x20 是 nativeUrlDict
__text:00000001011FF468    ADRP   X8, #classRef_NSMutableDictionary@PAGE
__text:00000001011FF46C    LDR    X0, [X8,#classRef_NSMutableDictionary@PAGEOFF] ;x0是NSMutableDictionary
__text:00000001011FF470    ADRP   X8, #selRef_dictionary@PAGE
__text:00000001011FF474    LDR    X1, [X8,#selRef_dictionary@PAGEOFF] ;x1是dictionary
__text:00000001011FF478    BL     _objc_msgSend
__text:00000001011FF47C    MOV    X29, X29
__text:00000001011FF480    BL     _objc_retainAutoreleasedReturnValue
;上面返回值： NSMutableDictionary *dictM = [NSMutableDictionary dictionary];

__text:00000001011FF484    MOV    X22, X0 ;x22是dictM
__text:00000001011FF488    ADRP   X8, #selRef_safeSetObject_forKey_@PAGE
__text:00000001011FF48C    LDR    X25, [X8,#selRef_safeSetObject_forKey_@PAGEOFF]
__text:00000001011FF490    ADRP   X2, #cfstr_1@PAGE ; "1"
__text:00000001011FF494    ADD    X2, X2, #cfstr_1@PAGEOFF ; "1"
__text:00000001011FF498    ADRP   X3, #cfstr_Msgtype_1@PAGE ; "msgType"
__text:00000001011FF49C    ADD    X3, X3, #cfstr_Msgtype_1@PAGEOFF ; "msgType"
__text:00000001011FF4A0    MOV    X1, X25
__text:00000001011FF4A4    BL     _objc_msgSend 
;上面代码: [dictM setObject:@"1" forKey:@"msgType"];

__text:00000001011FF4A8    ADRP   X8, #selRef_objectForKey_@PAGE
__text:00000001011FF4AC    LDR    X23, [X8,#selRef_objectForKey_@PAGEOFF]
__text:00000001011FF4B0    ADRP   X2, #cfstr_Sendid_2@PAGE ; "sendid"
__text:00000001011FF4B4    ADD    X2, X2, #cfstr_Sendid_2@PAGEOFF ; "sendid"
__text:00000001011FF4B8    MOV    X0, X20 ;x20是nativeUrlData
__text:00000001011FF4BC    MOV    X1, X23
__text:00000001011FF4C0    BL     _objc_msgSend
__text:00000001011FF4C4    MOV    X29, X29
__text:00000001011FF4C8    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：id sendId = [nativeUrlData objectForKey:@"sendid"];

__text:00000001011FF4CC    MOV    X26, X0 ;X26是 sendId
__text:00000001011FF4D0    ADRP   X3, #cfstr_Sendid_1@PAGE ; "sendId"
__text:00000001011FF4D4    ADD    X3, X3, #cfstr_Sendid_1@PAGEOFF ; "sendId"
__text:00000001011FF4D8    MOV    X0, X22 ;x22是dictM
__text:00000001011FF4DC    MOV    X1, X25 ;x25是方法setObject: forKey:
__text:00000001011FF4E0    MOV    X2, X26 ;X26是sendId
__text:00000001011FF4E4    BL     _objc_msgSend
;上面代码：[dictM setObject:sendId forKey: @"sendId"]

__text:00000001011FF4E8    MOV    X0, X26
__text:00000001011FF4EC    MOV    X26, X21
__text:00000001011FF4F0    BL     _objc_release
__text:00000001011FF4F4    ADRP   X2, #cfstr_Channelid_0@PAGE ; "channelid"
__text:00000001011FF4F8    ADD    X2, X2, #cfstr_Channelid_0@PAGEOFF ; "channelid"
__text:00000001011FF4FC    STR    X20, [SP,#0x120+var_E8]
__text:00000001011FF500    MOV    X0, X20 ;x20是nativeUrlData
__text:00000001011FF504    MOV    X1, X23 ;X23是 objectForKey
__text:00000001011FF508    BL     _objc_msgSend
__text:00000001011FF50C    MOV    X29, X29
__text:00000001011FF510    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：id channelId = [nativeUrlData objectForKey:@"channelid"]

__text:00000001011FF514    MOV    X23, X0
__text:00000001011FF518    ADRP   X3, #cfstr_Channelid@PAGE ; "channelId"
__text:00000001011FF51C    ADD    X3, X3, #cfstr_Channelid@PAGEOFF ; "channelId"
__text:00000001011FF520    MOV    X0, X22
__text:00000001011FF524    MOV    X1, X25
__text:00000001011FF528    MOV    X2, X23
__text:00000001011FF52C    BL     _objc_msgSend
;上面代码：[dictM setObject:channelId forKey:@"channelId"]

__text:00000001011FF530    MOV    X0, X23
__text:00000001011FF534    BL     _objc_release
__text:00000001011FF538    ADRP   X8, #classRef_MMServiceCenter@PAGE
__text:00000001011FF53C    LDR    X0, [X8,#classRef_MMServiceCenter@PAGEOFF] ;x0是MMServiceCenter
__text:00000001011FF540    ADRP   X8, #selRef_defaultCenter@PAGE
__text:00000001011FF544    LDR    X28, [X8,#selRef_defaultCenter@PAGEOFF]
__text:00000001011FF548    MOV    X1, X28 ;x8是defaultCenter
__text:00000001011FF54C    BL     _objc_msgSend
__text:00000001011FF550    MOV    X29, X29
__text:00000001011FF554    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：MMServiceCenter *serviceCenter = [MMServiceCenter defaultCenter];
;MMServiceCenter 比较神奇，从classdump里找不到相关的头文件信息

__text:00000001011FF558    MOV    X23, X0
__text:00000001011FF55C    ADRP   X8, #classRef_CContactMgr@PAGE
__text:00000001011FF560    LDR    X0, [X8,#classRef_CContactMgr@PAGEOFF]
__text:00000001011FF564    ADRP   X8, #selRef_class@PAGE
__text:00000001011FF568    LDR    X1, [X8,#selRef_class@PAGEOFF]
__text:00000001011FF56C    STR    X1, [SP,#0x120+var_D0]
__text:00000001011FF570    BL     _objc_msgSend
;上面代码：Class contactMgrCls = [CContactMgr class];

__text:00000001011FF574    MOV    X2, X0
__text:00000001011FF578    ADRP   X8, #selRef_getService_@PAGE
__text:00000001011FF57C    LDR    X1, [X8,#selRef_getService_@PAGEOFF]
__text:00000001011FF580    MOV    X0, X23  ;X23是serviceCenter
__text:00000001011FF584    STR    X1, [SP,#0x120+var_D8]
__text:00000001011FF588    BL     _objc_msgSend
__text:00000001011FF58C    MOV    X29, X29
__text:00000001011FF590    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：id contactMgrSer = [serviceCenter getService: contactMrgCls]

__text:00000001011FF594    MOV    X21, X0
__text:00000001011FF598    ADRP   X8, #selRef_getSelfContact@PAGE
__text:00000001011FF59C    LDR    X1, [X8,#selRef_getSelfContact@PAGEOFF]
__text:00000001011FF5A0    BL     _objc_msgSend
__text:00000001011FF5A4    MOV    X29, X29
__text:00000001011FF5A8    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：id contactMgrSelfContact = [contactMgrSer getSelfContact];

__text:00000001011FF5AC    MOV    X20, X0
__text:00000001011FF5B0    MOV    X0, X21
__text:00000001011FF5B4    BL     _objc_release
__text:00000001011FF5B8    MOV    X0, X23
__text:00000001011FF5BC    BL     _objc_release
__text:00000001011FF5C0    ADRP   X8, #selRef_getContactDisplayName@PAGE
__text:00000001011FF5C4    LDR    X1, [X8,#selRef_getContactDisplayName@PAGEOFF]
__text:00000001011FF5C8    MOV    X0, X20
__text:00000001011FF5CC    BL     _objc_msgSend
__text:00000001011FF5D0    MOV    X29, X29
__text:00000001011FF5D4    BL     _objc_retainAutoreleasedReturnValue
;上面返回值： NSString *displayName = [contactMgrSelfContact getContactDisplayName];

__text:00000001011FF5D8    MOV    X21, X0
__text:00000001011FF5DC    ADRP   X3, #cfstr_Nickname_4@PAGE ; "nickName"
__text:00000001011FF5E0    ADD    X3, X3, #cfstr_Nickname_4@PAGEOFF ; "nickName"
__text:00000001011FF5E4    MOV    X0, X22 ;x22是dictM
__text:00000001011FF5E8    MOV    X1, X25 ;x25是方法setObject: forKey:
__text:00000001011FF5EC    MOV    X2, X21 
__text:00000001011FF5F0    BL     _objc_msgSend
;上面代码： [dictM setObject:displayName forKey: @"nickName"];

__text:00000001011FF5F4    MOV    X0, X21
__text:00000001011FF5F8    BL     _objc_release
__text:00000001011FF5FC    ADRP   X8, #selRef_m_nsHeadImgUrl@PAGE
__text:00000001011FF600    LDR    X1, [X8,#selRef_m_nsHeadImgUrl@PAGEOFF]
__text:00000001011FF604    STR    X20, [SP,#0x120+var_F0]
__text:00000001011FF608    MOV    X0, X20
__text:00000001011FF60C    BL     _objc_msgSend
__text:00000001011FF610    MOV    X29, X29
__text:00000001011FF614    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：NSString *headImgUrl = [contactMgrSelfContact m_nsHeadImgUrl];

__text:00000001011FF618    MOV    X21, X0
__text:00000001011FF61C    ADRP   X3, #cfstr_Headimg_2@PAGE ; "headImg"
__text:00000001011FF620    ADD    X3, X3, #cfstr_Headimg_2@PAGEOFF ; "headImg"
__text:00000001011FF624    MOV    X0, X22
__text:00000001011FF628    MOV    X1, X25
__text:00000001011FF62C    MOV    X2, X21
__text:00000001011FF630    BL     _objc_msgSend
;上面代码：[dictM setObject: headImgUrl forKey:@"headImg"]

__text:00000001011FF634    MOV    X0, X21
__text:00000001011FF638    BL     _objc_release
__text:00000001011FF63C    LDR    X0, [X27,X26] ;x26=X21 即[X27, x26] = [x27,x21] self.m_data
__text:00000001011FF640    MOV    X1, X19 ;X19是m_oSelectedMessageWrap方法
__text:00000001011FF644    BL     _objc_msgSend
__text:00000001011FF648    MOV    X29, X29
__text:00000001011FF64C    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：CMessageWrap *messageWrap = [self.m_data m_oSelectedMessageWrap];

__text:00000001011FF650    MOV    X21, X0
__text:00000001011FF654    BL     _objc_release

__text:00000001011FF658    CBZ    X21, loc_1011FF6CC ;如果messageWrap为空跳转loc_1011FF6CC
__text:00000001011FF65C    LDR    X0, [X27,X26]
__text:00000001011FF660    MOV    X1, X19
__text:00000001011FF664    BL     _objc_msgSend
__text:00000001011FF668    MOV    X29, X29
__text:00000001011FF66C    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：CMessageWrap *messageWrap = [self.m_data m_oSelectedMessageWrap];

__text:00000001011FF670    MOV    X19, X0 ;x19是messageWrap
__text:00000001011FF674    LDR    X1, [SP,#0x120+var_100] ; [SP,#0x120+var_100] 是m_oWCPayInfoItem方法地址
__text:00000001011FF678    BL     _objc_msgSend
__text:00000001011FF67C    MOV    X29, X29
__text:00000001011FF680    BL     _objc_retainAutoreleasedReturnValue
;上面返回值 WCPayInfoItem *payInfoItem = [messageWrap m_oWCPayInfoItem];

__text:00000001011FF684    MOV    X21, X0
__text:00000001011FF688    MOV    X1, X24
__text:00000001011FF68C    BL     _objc_msgSend
__text:00000001011FF690    MOV    X29, X29
__text:00000001011FF694    BL     _objc_retainAutoreleasedReturnValue
;上面返回值 NSString *m_c2cNativeUrl = [payInfoItem m_c2cNativeUrl];

__text:00000001011FF698    MOV    X23, X0
__text:00000001011FF69C    ADRP   X3, #cfstr_Nativeurl_4@PAGE ; "nativeUrl"
__text:00000001011FF6A0    ADD    X3, X3, #cfstr_Nativeurl_4@PAGEOFF ; "nativeUrl"
__text:00000001011FF6A4    MOV    X0, X22 ;x22是dictM
__text:00000001011FF6A8    MOV    X1, X25 ;x25是方法setObject: forKey:
__text:00000001011FF6AC    MOV    X2, X23 ;
__text:00000001011FF6B0    BL     _objc_msgSend
;上面代码：[dictM setObject:m_c2cNativeUrl forKey: @"nativeUrl"];

__text:00000001011FF6B4    MOV    X0, X23
__text:00000001011FF6B8    BL     _objc_release
__text:00000001011FF6BC    MOV    X0, X21
__text:00000001011FF6C0    BL     _objc_release
__text:00000001011FF6C4    MOV    X0, X19
__text:00000001011FF6C8    BL     _objc_release

__text:00000001011FF6CC
__text:00000001011FF6CC loc_1011FF6CC                  ; CODE XREF: -[WCRedEnvelopesReceiveControlLogic WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes]+2FC↑j
__text:00000001011FF6CC    ADRP   X8, #classRef_MMServiceCenter@PAGE
__text:00000001011FF6D0    LDR    X0, [X8,#classRef_MMServiceCenter@PAGEOFF] ;MMServiceCenter
__text:00000001011FF6D4    STR    X28, [SP,#0x120+var_100]
__text:00000001011FF6D8    MOV    X1, X28  ;x28是defaultCenter
__text:00000001011FF6DC    BL     _objc_msgSend
__text:00000001011FF6E0    MOV    X29, X29
__text:00000001011FF6E4    BL     _objc_retainAutoreleasedReturnValue
;上面返回值 MMServiceCenter *serviceCenter = [MMServiceCenter defaultCenter];

__text:00000001011FF6E8    MOV    X21, X0
__text:00000001011FF6EC    ADRP   X8, #classRef_MMMsgLogicManager@PAGE
__text:00000001011FF6F0    LDR    X0, [X8,#classRef_MMMsgLogicManager@PAGEOFF] ; MMMsgLogicManager
__text:00000001011FF6F4    LDR    X1, [SP,#0x120+var_D0] ;class方法
__text:00000001011FF6F8    BL     _objc_msgSend
;上面代码: Class logicMgrCls = [MMMsgLogicManager class];

__text:00000001011FF6FC    MOV    X2, X0
__text:00000001011FF700    MOV    X0, X21
__text:00000001011FF704    LDR    X1, [SP,#0x120+var_D8] ;getService方法
__text:00000001011FF708    BL     _objc_msgSend
__text:00000001011FF70C    MOV    X29, X29
__text:00000001011FF710    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：id logicMgrSer = [serviceCenter getService:logicMgrCls];

__text:00000001011FF714    MOV    X23, X0
__text:00000001011FF718    ADRP   X8, #selRef_GetCurrentLogicController@PAGE
__text:00000001011FF71C    LDR    X1, [X8,#selRef_GetCurrentLogicController@PAGEOFF]
__text:00000001011FF720    BL     _objc_msgSend
__text:00000001011FF724    MOV    X29, X29
__text:00000001011FF728    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：id currentVC = [logicMgrSer GetCurrentLogicController];

__text:00000001011FF72C    MOV    X28, X0
__text:00000001011FF730    MOV    X0, X23
__text:00000001011FF734    BL     _objc_release
__text:00000001011FF738    MOV    X0, X21
__text:00000001011FF73C    BL     _objc_release
__text:00000001011FF740    CBZ    X28, loc_1011FF810 ;如果currentVC为nil，跳转到loc_1011FF810
__text:00000001011FF744    ADRP   X8, #selRef_m_contact@PAGE
__text:00000001011FF748    LDR    X21, [X8,#selRef_m_contact@PAGEOFF]
__text:00000001011FF74C    MOV    X0, X28
__text:00000001011FF750    MOV    X1, X21
__text:00000001011FF754    BL     _objc_msgSend
__text:00000001011FF758    MOV    X29, X29
__text:00000001011FF75C    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：id contact = [currentVC m_contact];

__text:00000001011FF760    MOV    X23, X0 
__text:00000001011FF764    CBZ    X23, loc_1011FF810 ;如果contact为nil，跳转loc_1011FF810
__text:00000001011FF768    MOV    X0, X28 
__text:00000001011FF76C    MOV    X1, X21 
__text:00000001011FF770    BL     _objc_msgSend
__text:00000001011FF774    MOV    X29, X29
__text:00000001011FF778    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：id contact = [currentVC m_contact];

__text:00000001011FF77C    MOV    X19, X26
__text:00000001011FF780    MOV    X26, X0
__text:00000001011FF784    ADRP   X8, #selRef_m_nsUsrName@PAGE
__text:00000001011FF788    LDR    X24, [X8,#selRef_m_nsUsrName@PAGEOFF]
__text:00000001011FF78C    MOV    X1, X24
__text:00000001011FF790    BL     _objc_msgSend
__text:00000001011FF794    MOV    X29, X29
__text:00000001011FF798    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：NSString *userName = [contact m_nsUsrName];

__text:00000001011FF79C    MOV    X20, X0
__text:00000001011FF7A0    BL     _objc_release
__text:00000001011FF7A4    MOV    X0, X26
__text:00000001011FF7A8    MOV    X26, X19
__text:00000001011FF7AC    BL     _objc_release
__text:00000001011FF7B0    MOV    X0, X23
__text:00000001011FF7B4    BL     _objc_release
__text:00000001011FF7B8    CBZ    X20, loc_1011FF810 ;如果userName为空跳转到loc_1011FF810
__text:00000001011FF7BC    MOV    X0, X28
__text:00000001011FF7C0    MOV    X1, X21
__text:00000001011FF7C4    BL     _objc_msgSend
__text:00000001011FF7C8    MOV    X29, X29
__text:00000001011FF7CC    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：id contact = [currentVC m_contact];

__text:00000001011FF7D0    MOV    X20, X0
__text:00000001011FF7D4    MOV    X1, X24
__text:00000001011FF7D8    BL     _objc_msgSend
__text:00000001011FF7DC    MOV    X29, X29
__text:00000001011FF7E0    BL     _objc_retainAutoreleasedReturnValue
;上面返回值：NSString *userName = [contact m_nsUsrName];

__text:00000001011FF7E4    MOV    X21, X0
__text:00000001011FF7E8    ADRP   X3, #cfstr_Sessionusernam@PAGE ; "sessionUserName"
__text:00000001011FF7EC    ADD    X3, X3, #cfstr_Sessionusernam@PAGEOFF ; "sessionUserName"
__text:00000001011FF7F0    MOV    X0, X22 ;x22是dictM
__text:00000001011FF7F4    MOV    X1, X25 ;x25是方法setObject
__text:00000001011FF7F8    MOV    X2, X21 ;x21是username
__text:00000001011FF7FC    BL     _objc_msgSend
;上面代码： [dictM setObject:userName forKey:@"sessionUserName"]
__text:00000001011FF800    MOV    X0, X21
__text:00000001011FF804    BL     _objc_release
__text:00000001011FF808    MOV    X0, X20
__text:00000001011FF80C    BL     _objc_release
;判断语句结束

__text:00000001011FF810
__text:00000001011FF810 loc_1011FF810                  ; CODE XREF: -[WCRedEnvelopesReceiveControlLogic WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes]+3E4↑j
__text:00000001011FF810                                ;            -[WCRedEnvelopesReceiveControlLogic WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes]+408↑j ...
__text:00000001011FF810    STP    X28, X26, [SP,#0x120+var_110]
__text:00000001011FF814    LDR    X0, [X27,X26] ;x0是 self.m_data
__text:00000001011FF818    ADRP   X8, #selRef_m_structDicRedEnvelopesBaseInfo@PAGE ;m_structDicRedEnvelopesBaseInfo
__text:00000001011FF81C    LDR    X24, [X8,#selRef_m_structDicRedEnvelopesBaseInfo@PAGEOFF]
__text:00000001011FF820    MOV    X1, X24
__text:00000001011FF824    BL     _objc_msgSend
__text:00000001011FF828    MOV    X29, X29
__text:00000001011FF82C    BL     _objc_retainAutoreleasedReturnValue
;返回值：NSDictionary* baseInfoDict = [self.m_data m_structDicRedEnvelopesBaseInfo];

__text:00000001011FF830    MOV    X20, X0
__text:00000001011FF834    ADRP   X8, #selRef_stringForKey_@PAGE
__text:00000001011FF838    LDR    X1, [X8,#selRef_stringForKey_@PAGEOFF]
__text:00000001011FF83C    ADRP   X2, #cfstr_Timingidentifi@PAGE ; "timingIdentifier"
__text:00000001011FF840    ADD    X2, X2, #cfstr_Timingidentifi@PAGEOFF ; "timingIdentifier"
__text:00000001011FF844    BL     _objc_msgSend
__text:00000001011FF848    MOV    X29, X29
__text:00000001011FF84C    BL     _objc_retainAutoreleasedReturnValue
; NSString *timingIdentifier = [baseInfoDict stringForKey:@"timingIdentifier"];

__text:00000001011FF850    MOV    X19, X0
__text:00000001011FF854    MOV    X0, X20
__text:00000001011FF858    BL     _objc_release
__text:00000001011FF85C    MOV    X0, X19
__text:00000001011FF860    LDR    X1, [SP,#0x120+var_F8] ;字符串length方法
__text:00000001011FF864    BL     _objc_msgSend
; [timingIdentifier length]

__text:00000001011FF868    CBZ    X0, loc_1011FF884 ;如果[timingIdentifier length] = 0 跳转 loc_1011FF884
__text:00000001011FF86C    ADRP   X3, #cfstr_Timingidentifi@PAGE ; "timingIdentifier"
__text:00000001011FF870    ADD    X3, X3, #cfstr_Timingidentifi@PAGEOFF ; "timingIdentifier"
__text:00000001011FF874    MOV    X0, X22 
__text:00000001011FF878    MOV    X1, X25
__text:00000001011FF87C    MOV    X2, X19
__text:00000001011FF880    BL     _objc_msgSend
; [dictM setObject:timingIdentifier forKey:@"timingIdentifier"];

__text:00000001011FF884
__text:00000001011FF884 loc_1011FF884                  ; CODE XREF: -[WCRedEnvelopesReceiveControlLogic WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes]+50C↑j
__text:00000001011FF884    SUB    X0, X29, #-var_68 ;x0 = (x29-var_68)
__text:00000001011FF888    MOV    X1, X27
__text:00000001011FF88C    BL     _objc_initWeak
__text:00000001011FF890    ADRP   X28, #classRef_MMServiceCenter@PAGE
__text:00000001011FF894    LDR    X0, [X28,#classRef_MMServiceCenter@PAGEOFF]
__text:00000001011FF898    LDR    X26, [SP,#0x120+var_100]
__text:00000001011FF89C    MOV    X1, X26
__text:00000001011FF8A0    BL     _objc_msgSend
__text:00000001011FF8A4    MOV    X29, X29
__text:00000001011FF8A8    BL     _objc_retainAutoreleasedReturnValue
;上面返回值 MMServiceCenter *serviceCenter = [MMServiceCenter defaultCenter];

__text:00000001011FF8AC    MOV    X20, X0
__text:00000001011FF8B0    STR    X19, [SP,#0x120+var_F8]
__text:00000001011FF8B4    MOV    X19, X27
__text:00000001011FF8B8    ADRP   X27, #classRef_WCPayLogicMgr@PAGE
__text:00000001011FF8BC    LDR    X0, [X27,#classRef_WCPayLogicMgr@PAGEOFF]
__text:00000001011FF8C0    LDR    X21, [SP,#0x120+var_D0]
__text:00000001011FF8C4    MOV    X1, X21 ;x21是class
__text:00000001011FF8C8    BL     _objc_msgSend
;Class payLogicMgrCls =  [WCPayLogicMgr class];

__text:00000001011FF8CC    MOV    X2, X0
__text:00000001011FF8D0    MOV    X0, X20 ;serviceCenter
__text:00000001011FF8D4    MOV    X25, X22
__text:00000001011FF8D8    LDR    X22, [SP,#0x120+var_D8] ;getService方法
__text:00000001011FF8DC    MOV    X1, X22
__text:00000001011FF8E0    BL     _objc_msgSend
__text:00000001011FF8E4    MOV    X29, X29
__text:00000001011FF8E8    BL     _objc_retainAutoreleasedReturnValue
;id payLogicMgrSer = [serviceCenter getService: payLogicMgrCls];

__text:00000001011FF8EC    MOV    X23, X0
__text:00000001011FF8F0    ADRP   X8, #selRef_setRealnameReportScene_@PAGE
__text:00000001011FF8F4    LDR    X1, [X8,#selRef_setRealnameReportScene_@PAGEOFF]
__text:00000001011FF8F8    MOV    W2, #0x3EB
__text:00000001011FF8FC    BL     _objc_msgSend
;[payLogicMgrSer setRealnameReportScene:@"0x3EB"]

__text:00000001011FF900    MOV    X0, X23
__text:00000001011FF904    BL     _objc_release
__text:00000001011FF908    MOV    X0, X20
__text:00000001011FF90C    BL     _objc_release
__text:00000001011FF910    ADD    X8, SP, #0x120+var_C8
__text:00000001011FF914    ADD    X8, X8, #0x28
__text:00000001011FF918    STR    X8, [SP,#0x120+var_118]
__text:00000001011FF91C    LDR    X0, [X28,#classRef_MMServiceCenter@PAGEOFF]
__text:00000001011FF920    MOV    X1, X26
__text:00000001011FF924    BL     _objc_msgSend
__text:00000001011FF928    MOV    X29, X29
__text:00000001011FF92C    BL     _objc_retainAutoreleasedReturnValue
;上面返回值 MMServiceCenter *serviceCenter = [MMServiceCenter defaultCenter];

__text:00000001011FF930    MOV    X26, X0
__text:00000001011FF934    LDR    X0, [X27,#classRef_WCPayLogicMgr@PAGEOFF]
__text:00000001011FF938    MOV    X1, X21
__text:00000001011FF93C    BL     _objc_msgSend
__text:00000001011FF940    MOV    X2, X0
__text:00000001011FF944    MOV    X0, X26
__text:00000001011FF948    MOV    X1, X22 
__text:00000001011FF94C    BL     _objc_msgSend
__text:00000001011FF950    MOV    X29, X29
__text:00000001011FF954    BL     _objc_retainAutoreleasedReturnValue
;Class payLogicMgrCls =  [WCPayLogicMgr class];

__text:00000001011FF958    MOV    X27, X0
__text:00000001011FF95C    LDR    X8, [SP,#0x120+var_108]
__text:00000001011FF960    LDR    X0, [X19,X8]
__text:00000001011FF964    MOV    X1, X24
__text:00000001011FF968    BL     _objc_msgSend
__text:00000001011FF96C    MOV    X29, X29
__text:00000001011FF970    BL     _objc_retainAutoreleasedReturnValue
;返回值：NSDictionary* baseInfoDict = [self.m_data m_structDicRedEnvelopesBaseInfo];

__text:00000001011FF974    MOV    X24, X0
__text:00000001011FF978    ADRP   X8, #selRef_objectForKeyedSubscript_@PAGE
__text:00000001011FF97C    LDR    X1, [X8,#selRef_objectForKeyedSubscript_@PAGEOFF]
__text:00000001011FF980    ADRP   X2, #cfstr_AgreeDuty@PAGE ; "agree_duty"
__text:00000001011FF984    ADD    X2, X2, #cfstr_AgreeDuty@PAGEOFF ; "agree_duty"
__text:00000001011FF988    BL     _objc_msgSend
__text:00000001011FF98C    MOV    X29, X29
__text:00000001011FF990    BL     _objc_retainAutoreleasedReturnValue
; id agreeDuty = [baseInfoDict objectForKeyedSubscript:@"agree_duty"]

__text:00000001011FF994    MOV    X20, X0
__text:00000001011FF998    ADRP   X28, #__NSConcreteStackBlock_ptr@PAGE
__text:00000001011FF99C    LDR    X28, [X28,#__NSConcreteStackBlock_ptr@PAGEOFF] ; x28是NSConcreteStackBlock_ptr
__text:00000001011FF9A0    STR    X28, [SP,#0x120+var_98]  ;(sp+0x120+var_98) = x28
__text:00000001011FF9A4    ADRP   X8, #qword_103101B78@PAGE
__text:00000001011FF9A8    LDR    D8, [X8,#qword_103101B78@PAGEOFF]
__text:00000001011FF9AC    ADR    X8, sub_1011FFAD8
__text:00000001011FF9B0    NOP
;sub_1011FFAD8 子程序，分析里面的代码

__text:00000001011FF9B4    STR    D8, [SP,#0x120+var_90]
__text:00000001011FF9B8    STR    X8, [SP,#0x120+var_88]
__text:00000001011FF9BC    ADRP   X8, #unk_1032B3238@PAGE
__text:00000001011FF9C0    ADD    X8, X8, #unk_1032B3238@PAGEOFF
__text:00000001011FF9C4    STP    X8, X25, [SP,#0x120+var_80]
__text:00000001011FF9C8    MOV    X0, X25  ;x25是dictM
__text:00000001011FF9CC    BL     _objc_retain
__text:00000001011FF9D0    MOV    X22, X0
__text:00000001011FF9D4    MOV    X0, X19
__text:00000001011FF9D8    BL     _objc_retain
;第一个block参数 #0x120+var_98

__text:00000001011FF9DC    MOV    X23, X0
__text:00000001011FF9E0    STR    X23, [SP,#0x120+var_70]
__text:00000001011FF9E4    STR    X28, [SP,#0x120+var_C8]
__text:00000001011FF9E8    STR    D8, [SP,#0x120+var_C0]
__text:00000001011FF9EC    ADR    X8, sub_1011FFBF0
__text:00000001011FF9F0    NOP
;sub_1011FFBF0 子程序，分析里面的代码

__text:00000001011FF9F4    STR    X8, [SP,#0x120+var_B8]
__text:00000001011FF9F8    ADRP   X8, #unk_1032B3268@PAGE
__text:00000001011FF9FC    ADD    X8, X8, #unk_1032B3268@PAGEOFF
__text:00000001011FFA00    STR    X8, [SP,#0x120+var_B0]
__text:00000001011FFA04    SUB    X1, X29, #-var_68
__text:00000001011FFA08    LDR    X19, [SP,#0x120+var_118]
__text:00000001011FFA0C    MOV    X0, X19
__text:00000001011FFA10    BL     _objc_copyWeak
__text:00000001011FFA14    MOV    X0, X23
__text:00000001011FFA18    BL     _objc_retain
;第二个block参数 #0x120+var_C8

__text:00000001011FFA1C    STR    X0, [SP,#0x120+var_A8]
__text:00000001011FFA20    ADRP   X8, #selRef_checkHongbaoOpenLicense_acceptCallback_denyCallback_@PAGE
__text:00000001011FFA24    LDR    X1, [X8,#selRef_checkHongbaoOpenLicense_acceptCallback_denyCallback_@PAGEOFF]
__text:00000001011FFA28    ADD    X3, SP, #0x120+var_98
__text:00000001011FFA2C    ADD    X4, SP, #0x120+var_C8
__text:00000001011FFA30    MOV    X0, X27
__text:00000001011FFA34    MOV    X2, X20
__text:00000001011FFA38    BL     _objc_msgSend
;- (void)checkHongbaoOpenLicense:(id)arg1 acceptCallback:(CDUnknownBlockType)arg2 denyCallback:(CDUnknownBlockType)arg3;
; [payLogicMgrCls checkHongbaoOpenLicense:agreeDuty acceptCallback: denyCallback: ]

__text:00000001011FFA3C    MOV    X0, X20
__text:00000001011FFA40    BL     _objc_release
__text:00000001011FFA44    MOV    X0, X24
__text:00000001011FFA48    BL     _objc_release
__text:00000001011FFA4C    MOV    X0, X27
__text:00000001011FFA50    BL     _objc_release
__text:00000001011FFA54    MOV    X0, X26
__text:00000001011FFA58    BL     _objc_release
__text:00000001011FFA5C    LDR    X0, [SP,#0x120+var_A8]
__text:00000001011FFA60    BL     _objc_release
__text:00000001011FFA64    MOV    X0, X19
__text:00000001011FFA68    BL     _objc_destroyWeak
__text:00000001011FFA6C    LDR    X0, [SP,#0x120+var_70]
__text:00000001011FFA70    BL     _objc_release
__text:00000001011FFA74    LDR    X0, [SP,#0x120+var_78]
__text:00000001011FFA78    BL     _objc_release
__text:00000001011FFA7C    MOV    X0, X22
__text:00000001011FFA80    BL     _objc_release
__text:00000001011FFA84    SUB    X0, X29, #-var_68
__text:00000001011FFA88    BL     _objc_destroyWeak
__text:00000001011FFA8C    LDR    X0, [SP,#0x120+var_F8]
__text:00000001011FFA90    BL     _objc_release
__text:00000001011FFA94    LDR    X0, [SP,#0x120+var_110]
__text:00000001011FFA98    BL     _objc_release
__text:00000001011FFA9C    LDR    X0, [SP,#0x120+var_F0]
__text:00000001011FFAA0    BL     _objc_release
__text:00000001011FFAA4    LDR    X0, [SP,#0x120+var_E8]
__text:00000001011FFAA8    BL     _objc_release
__text:00000001011FFAAC    LDR    X0, [SP,#0x120+var_E0]
__text:00000001011FFAB0    BL     _objc_release
__text:00000001011FFAB4    LDP    X29, X30, [SP,#0x120+var_s0]
__text:00000001011FFAB8    LDP    X20, X19, [SP,#0x120+var_10]
__text:00000001011FFABC    LDP    X22, X21, [SP,#0x120+var_20]
__text:00000001011FFAC0    LDP    X24, X23, [SP,#0x120+var_30]
__text:00000001011FFAC4    LDP    X26, X25, [SP,#0x120+var_40]
__text:00000001011FFAC8    LDP    X28, X27, [SP,#0x120+var_50]
__text:00000001011FFACC    LDP    D9, D8, [SP,#0x120+var_60]
__text:00000001011FFAD0    ADD    SP, SP, #0x130
__text:00000001011FFAD4    RET
__text:00000001011FFAD4 ; End of function -[WCRedEnvelopesReceiveControlLogic WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes]



__text:00000001011FFAD4
__text:00000001011FFAD8
__text:00000001011FFAD8 ; =============== S U B R O U T I N E =======================================
__text:00000001011FFAD8
__text:00000001011FFAD8 ; Attributes: bp-based frame
__text:00000001011FFAD8 ; 第一个block参数里面的代码
__text:00000001011FFAD8 sub_1011FFAD8                           ; DATA XREF: -[WCRedEnvelopesReceiveControlLogic WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes]+650↑o
__text:00000001011FFAD8
__text:00000001011FFAD8 var_20          = -0x20
__text:00000001011FFAD8 var_10          = -0x10
__text:00000001011FFAD8 var_s0          =  0
__text:00000001011FFAD8
__text:00000001011FFAD8                 STP             X22, X21, [SP,#-0x10+var_20]!
__text:00000001011FFADC                 STP             X20, X19, [SP,#0x20+var_10]
__text:00000001011FFAE0                 STP             X29, X30, [SP,#0x20+var_s0]
__text:00000001011FFAE4                 ADD             X29, SP, #0x20
__text:00000001011FFAE8                 MOV             X19, X0
__text:00000001011FFAEC                 ADRP            X8, #classRef_MMServiceCenter@PAGE
__text:00000001011FFAF0                 LDR             X0, [X8,#classRef_MMServiceCenter@PAGEOFF] ; void *
__text:00000001011FFAF4                 ADRP            X8, #selRef_defaultCenter@PAGE
__text:00000001011FFAF8                 LDR             X1, [X8,#selRef_defaultCenter@PAGEOFF] ; char *
__text:00000001011FFAFC                 BL              _objc_msgSend
__text:00000001011FFB00                 MOV             X29, X29
__text:00000001011FFB04                 BL              _objc_retainAutoreleasedReturnValue
; [MMServiceCenter defaultCenter]

__text:00000001011FFB08                 MOV             X20, X0
__text:00000001011FFB0C                 ADRP            X8, #classRef_WCRedEnvelopesLogicMgr@PAGE
__text:00000001011FFB10                 LDR             X0, [X8,#classRef_WCRedEnvelopesLogicMgr@PAGEOFF] ; void *
__text:00000001011FFB14                 ADRP            X8, #selRef_class@PAGE
__text:00000001011FFB18                 LDR             X1, [X8,#selRef_class@PAGEOFF] ; char *
__text:00000001011FFB1C                 BL              _objc_msgSend
; [WCRedEnvelopesLogicMgr class]

__text:00000001011FFB20                 MOV             X2, X0
__text:00000001011FFB24                 ADRP            X8, #selRef_getService_@PAGE
__text:00000001011FFB28                 LDR             X1, [X8,#selRef_getService_@PAGEOFF] ; char *
__text:00000001011FFB2C                 MOV             X0, X20 ; void *
__text:00000001011FFB30                 BL              _objc_msgSend
__text:00000001011FFB34                 MOV             X29, X29
__text:00000001011FFB38                 BL              _objc_retainAutoreleasedReturnValue
; WCRedEnvelopesLogicMgr *redEnvelopesLogicMgr = [[MMServiceCenter defaultCenter] getService: [WCRedEnvelopesLogicMgr class]];

__text:00000001011FFB3C                 MOV             X21, X0
__text:00000001011FFB40                 LDR             X2, [X19,#0x20] ;[X19,#0x20] 是
__text:00000001011FFB44                 ADRP            X8, #selRef_OpenRedEnvelopesRequest_@PAGE
__text:00000001011FFB48                 LDR             X1, [X8,#selRef_OpenRedEnvelopesRequest_@PAGEOFF] ; char *
__text:00000001011FFB4C                 BL              _objc_msgSend
; [redEnvelopesLogicMgr OpenRedEnvelopesRequest: ]

;下面是打开红包的后的UI操作
__text:00000001011FFB50                 MOV             X0, X21
__text:00000001011FFB54                 BL              _objc_release
__text:00000001011FFB58                 MOV             X0, X20
__text:00000001011FFB5C                 BL              _objc_release
__text:00000001011FFB60                 LDR             X8, [X19,#0x28]
__text:00000001011FFB64                 ADRP            X9, #_OBJC_IVAR_$_WCBaseControlLogic.m_uiLogicStatus@PAGE ; unsigned int m_uiLogicStatus;
__text:00000001011FFB68                 NOP
__text:00000001011FFB6C                 LDRSW           X9, [X9,#_OBJC_IVAR_$_WCBaseControlLogic.m_uiLogicStatus@PAGEOFF] ; unsigned int m_uiLogicStatus;
__text:00000001011FFB70                 MOV             W10, #4
__text:00000001011FFB74                 STR             W10, [X8,X9]
__text:00000001011FFB78                 LDR             X8, [X19,#0x28]
__text:00000001011FFB7C                 ADRP            X9, #_OBJC_IVAR_$_WCRedEnvelopesReceiveControlLogic.introView@PAGE ; WCRedEnvelopesReceiveHomeView *introView;
__text:00000001011FFB80                 LDRSW           X9, [X9,#_OBJC_IVAR_$_WCRedEnvelopesReceiveControlLogic.introView@PAGEOFF] ; WCRedEnvelopesReceiveHomeView *introView;
__text:00000001011FFB84                 LDR             X0, [X8,X9]
__text:00000001011FFB88                 ADRP            X8, #selRef_startReceiveAnimation@PAGE
__text:00000001011FFB8C                 LDR             X1, [X8,#selRef_startReceiveAnimation@PAGEOFF]
__text:00000001011FFB90                 LDP             X29, X30, [SP,#0x20+var_s0]
__text:00000001011FFB94                 LDP             X20, X19, [SP,#0x20+var_10]
__text:00000001011FFB98                 LDP             X22, X21, [SP+0x20+var_20],#0x30
__text:00000001011FFB9C                 B               _objc_msgSend
;显示打开红包的UI

__text:00000001011FFB9C ; End of function sub_1011FFAD8
__text:00000001011FFB9C


_
__text:00000001011FFBF0 sub_1011FFBF0                           ; DATA XREF: -[WCRedEnvelopesReceiveControlLogic WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes]+690↑o
__text:00000001011FFBF0
__text:00000001011FFBF0 var_10          = -0x10
__text:00000001011FFBF0 var_s0          =  0
__text:00000001011FFBF0
__text:00000001011FFBF0                 STP             X20, X19, [SP,#-0x10+var_10]!
__text:00000001011FFBF4                 STP             X29, X30, [SP,#0x10+var_s0]
__text:00000001011FFBF8                 ADD             X29, SP, #0x10
__text:00000001011FFBFC                 MOV             X19, X0
__text:00000001011FFC00                 ADD             X0, X19, #0x28
__text:00000001011FFC04                 BL              _objc_loadWeakRetained
__text:00000001011FFC08                 MOV             X20, X0
__text:00000001011FFC0C                 ADRP            X8, #selRef_WCRedEnvelopesReceiveHomeViewBack@PAGE
__text:00000001011FFC10                 LDR             X1, [X8,#selRef_WCRedEnvelopesReceiveHomeViewBack@PAGEOFF] ; char *
__text:00000001011FFC14                 BL              _objc_msgSend
__text:00000001011FFC18                 MOV             X0, X20
__text:00000001011FFC1C                 BL              _objc_release
__text:00000001011FFC20                 LDR             X8, [X19,#0x20]
__text:00000001011FFC24                 ADRP            X9, #_OBJC_IVAR_$_WCRedEnvelopesReceiveControlLogic.introView@PAGE ; WCRedEnvelopesReceiveHomeView *introView;
__text:00000001011FFC28                 LDRSW           X9, [X9,#_OBJC_IVAR_$_WCRedEnvelopesReceiveControlLogic.introView@PAGEOFF] ; WCRedEnvelopesReceiveHomeView *introView;
__text:00000001011FFC2C                 LDR             X0, [X8,X9]
__text:00000001011FFC30                 ADRP            X8, #selRef_endAnimation@PAGE
__text:00000001011FFC34                 LDR             X1, [X8,#selRef_endAnimation@PAGEOFF]
__text:00000001011FFC38                 LDP             X29, X30, [SP,#0x10+var_s0]
__text:00000001011FFC3C                 LDP             X20, X19, [SP+0x10+var_10],#0x20
__text:00000001011FFC40                 B               _objc_msgSend ;结束动画
__text:00000001011FFC40 ; End of function sub_1011FFBF0






CMessageWrap *messageWrap = [self.m_data m_oSelectedMessageWrap];
WCPayInfoItem *payInfoItem = [messageWrap m_oWCPayInfoItem];
NSString *m_c2cNativeUrl = [payInfoItem m_c2cNativeUrl];
NSInterger index = [@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length];
NSString *nativeUrlData = [m_c2cNativeUrl substringFromIndex:index];
NSDictionary *nativeUrlDict = [WCBizUtil dictionaryWithDecodedComponets:nativeUrlData separator:@"&"]
NSMutableDictionary *dictM = [NSMutableDictionary dictionary];
[dictM setObject:@1 forKey:@"msgType"];
id sendId = [nativeUrlData objectForKey:@"sendid"];
[dictM setObject:sendId forKey: @"sendId"]
id channelId = [nativeUrlData objectForKey:@"channelid"]
[dictM setObject:channelId forKey:@"channelId"]
MMServiceCenter *serviceCenter = [MMServiceCenter defaultCenter];
Class contactMgrCls = [CContactMgr class];
CContactMgr *contactMgrSer = [serviceCenter getService: contactMrgCls]
CBaseContact *contactMgrSelfContact = [contactMgrSer getSelfContact];
NSString *displayName = [contactMgrSelfContact getContactDisplayName];
[dictM setObject:displayName forKey: @"nickName"];
NSString *headImgUrl = [contactMgrSelfContact m_nsHeadImgUrl];
[dictM setObject: headImgUrl forKey:@"headImg"]

if([self.m_data m_oSelectedMessageWrap]){
    CMessageWrap *messageWrap = [self.m_data m_oSelectedMessageWrap];
    WCPayInfoItem *payInfoItem = [messageWrap m_oWCPayInfoItem];
    NSString *m_c2cNativeUrl = [payInfoItem m_c2cNativeUrl];
    [dictM setObject:m_c2cNativeUrl forKey: @"nativeUrl"];
}
MMServiceCenter *serviceCenter = [MMServiceCenter defaultCenter];
Class logicMgrCls = [MMMsgLogicManager class];
MMMsgLogicManager *logicMgrSer = [serviceCenter getService:logicMgrCls];
BaseMsgContentLogicController *currentVC = [logicMgrSer GetCurrentLogicController];
if([currentVC m_contact];){
    id contact = [currentVC m_contact];
    NSString *userName = [contact m_nsUsrName];
    id contact = [currentVC m_contact];
    NSString *userName = [contact m_nsUsrName];
    [dictM setObject:userName forKey:@"sessionUserName"]
}
NSDictionary* baseInfoDict = [self.m_data m_structDicRedEnvelopesBaseInfo];
NSString *timingIdentifier = [baseInfoDict stringForKey:@"timingIdentifier"];
if([timingIdentifier length] > 0){
    [dictM setObject:timingIdentifier forKey:@"timingIdentifier"];
}
MMServiceCenter *serviceCenter = [MMServiceCenter defaultCenter];
Class payLogicMgrCls =  [WCPayLogicMgr class];
WCPayLogicMgr *payLogicMgrSer = [serviceCenter getService: payLogicMgrCls];
[payLogicMgrSer setRealnameReportScene:@"0x3EB"]

MMServiceCenter *serviceCenter = [MMServiceCenter defaultCenter];
NSDictionary* baseInfoDict = [self.m_data m_structDicRedEnvelopesBaseInfo];
id agreeDuty = [baseInfoDict objectForKeyedSubscript:@"agree_duty"];
 
[payLogicMgrSer checkHongbaoOpenLicense:agreeDuty acceptCallback: denyCallback: ];





__text:0000000100E4407C ; void __cdecl -[WCRedEnvelopesLogicMgr OpenRedEnvelopesRequest:](WCRedEnvelopesLogicMgr *self, SEL, id)
__text:0000000100E4407C __WCRedEnvelopesLogicMgr_OpenRedEnvelopesRequest__
__text:0000000100E4407C                                         ; DATA XREF: __objc_const:00000001036F6D68↓o
__text:0000000100E4407C                 ADRP            X8, #selRef_GetHongbaoBusinessRequest_CMDID_OutputType_@PAGE
__text:0000000100E44080                 LDR             X1, [X8,#selRef_GetHongbaoBusinessRequest_CMDID_OutputType_@PAGEOFF]
__text:0000000100E44084                 MOV             W3, #4
__text:0000000100E44088                 MOV             W4, #1
__text:0000000100E4408C                 B               _objc_msgSend
; [self GetHongbaoBusinessRequest:dictM CMDID:4 OutputType:1];
__text:0000000100E4408C ; End of function -[WCRedEnvelopesLogicMgr OpenRedEnvelopesRequest:]










__text:0000000100E4227C ; void __cdecl -[WCRedEnvelopesLogicMgr GetHongbaoBusinessRequest:CMDID:OutputType:](WCRedEnvelopesLogicMgr *self, SEL, id, unsigned int, unsigned int)
__text:0000000100E4227C __WCRedEnvelopesLogicMgr_GetHongbaoBusinessRequest_CMDID_OutputType__
__text:0000000100E4227C                                         ; DATA XREF: __objc_const:00000001036F6C60↓o
......
__text:0000000100E4227C
__text:0000000100E4227C    SUB    SP, SP, #0x1B0
__text:0000000100E42280    STP    X28, X27, [SP,#0x1A0+var_50]
__text:0000000100E42284    STP    X26, X25, [SP,#0x1A0+var_40]
__text:0000000100E42288    STP    X24, X23, [SP,#0x1A0+var_30]
__text:0000000100E4228C    STP    X22, X21, [SP,#0x1A0+var_20]
__text:0000000100E42290    STP    X20, X19, [SP,#0x1A0+var_10]
__text:0000000100E42294    STP    X29, X30, [SP,#0x1A0+var_s0]
__text:0000000100E42298    ADD    X29, SP, #0x1A0
__text:0000000100E4229C    STR    W4, [SP,#0x1A0+var_14C] ; OutputType = 1
__text:0000000100E422A0    STR    X3, [SP,#0x1A0+var_158] ; CMDID = 4
__text:0000000100E422A4    STR    X0, [SP,#0x1A0+var_140]
__text:0000000100E422A8    ADRP   X8, #___stack_chk_guard_ptr@PAGE
__text:0000000100E422AC    LDR    X8, [X8,#___stack_chk_guard_ptr@PAGEOFF]
__text:0000000100E422B0    LDR    X8, [X8]
__text:0000000100E422B4    STUR   X8, [X29,#var_58]
__text:0000000100E422B8    ADRP   X8, #classRef_HongBaoReq@PAGE
__text:0000000100E422BC    LDR    X19, [X8,#classRef_HongBaoReq@PAGEOFF]
__text:0000000100E422C0    ADRP   X8, #selRef_alloc@PAGE
__text:0000000100E422C4    LDR    X21, [X8,#selRef_alloc@PAGEOFF]
__text:0000000100E422C8    MOV    X0, X2
__text:0000000100E422CC    BL     _objc_retain
__text:0000000100E422D0    MOV    X20, X0 ; x20 = dictM
__text:0000000100E422D4    MOV    X0, X19 ; void *
__text:0000000100E422D8    MOV    X1, X21 ; char *
__text:0000000100E422DC    BL     _objc_msgSend
; [HongBaoReq alloc]

__text:0000000100E422E0    ADRP   X8, #selRef_init@PAGE
__text:0000000100E422E4    LDR    X22, [X8,#selRef_init@PAGEOFF]
__text:0000000100E422E8    MOV    X1, X22 ; char *
__text:0000000100E422EC    BL     _objc_msgSend
; HongBaoReq *hbReq = [[HongBaoReq alloc] init];

__text:0000000100E422F0    STR    X0, [SP,#0x1A0+var_138]
__text:0000000100E422F4    ADRP   X8, #classRef_SKBuiltinBuffer_t@PAGE
__text:0000000100E422F8    LDR    X0, [X8,#classRef_SKBuiltinBuffer_t@PAGEOFF] ; void *
__text:0000000100E422FC    MOV    X1, X21 ; char *
__text:0000000100E42300    BL     _objc_msgSend
; [SKBuiltinBuffer_t alloc]

__text:0000000100E42304    MOV    X1, X22 ; char *
__text:0000000100E42308    BL     _objc_msgSend
; SKBuiltinBuffer_t *skBuffer = [[SKBuiltinBuffer_t alloc] init];

__text:0000000100E4230C    STR    X0, [SP,#0x1A0+var_148]
__text:0000000100E42310    ADRP   X19, #classRef_SettingUtil@PAGE
__text:0000000100E42314    LDR    X0, [X19,#classRef_SettingUtil@PAGEOFF] ; void *
__text:0000000100E42318    ADRP   X8, #selRef_getMainSetting@PAGE
__text:0000000100E4231C    LDR    X22, [X8,#selRef_getMainSetting@PAGEOFF]
__text:0000000100E42320    MOV    X1, X22 ; char *
__text:0000000100E42324    BL     _objc_msgSend
__text:0000000100E42328    MOV    X29, X29
__text:0000000100E4232C    BL     _objc_retainAutoreleasedReturnValue
;SettingUtil *setting = [SettingUtil getMainSetting];

__text:0000000100E42330    MOV    X21, X0
__text:0000000100E42334    ADRP   X8, #selRef_m_nsProvince@PAGE
__text:0000000100E42338    LDR    X24, [X8,#selRef_m_nsProvince@PAGEOFF]
__text:0000000100E4233C    MOV    X1, X24 ; char *
__text:0000000100E42340    BL     _objc_msgSend
__text:0000000100E42344    MOV    X29, X29
__text:0000000100E42348    BL     _objc_retainAutoreleasedReturnValue
; NSString *nsPro = [setting m_nsProvince];

__text:0000000100E4234C    MOV    X23, X0
__text:0000000100E42350    CBZ    X23, loc_100E4238C
;if(nsPro){ loc_100E4238C }else{ NSString *nsPro = [setting m_nsProvince] }
__text:0000000100E42354    LDR    X0, [X19,#classRef_SettingUtil@PAGEOFF] ; void *
__text:0000000100E42358    MOV    X1, X22 ; char *
__text:0000000100E4235C    BL     _objc_msgSend
__text:0000000100E42360    MOV    X29, X29
__text:0000000100E42364    BL     _objc_retainAutoreleasedReturnValue
; [SettingUtil getMainSetting]

__text:0000000100E42368    MOV    X25, X0
__text:0000000100E4236C    MOV    X1, X24 ; char *
__text:0000000100E42370    BL     _objc_msgSend
__text:0000000100E42374    MOV    X29, X29
__text:0000000100E42378    BL     _objc_retainAutoreleasedReturnValue
; [[SettingUtil getMainSetting] m_nsProvince]

__text:0000000100E4237C    MOV    X26, X0
__text:0000000100E42380    MOV    X0, X25
__text:0000000100E42384    BL     _objc_release
__text:0000000100E42388    B      loc_100E4239C
__text:0000000100E4238C ; ---------------------------------------------------------------------------
__text:0000000100E4238C
__text:0000000100E4238C loc_100E4238C                           ; CODE XREF: -[WCRedEnvelopesLogicMgr GetHongbaoBusinessRequest:CMDID:OutputType:]+D4↑j
__text:0000000100E4238C    ADRP   X26, #stru_10330D018@PAGE
__text:0000000100E42390    ADD    X26, X26, #stru_10330D018@PAGEOFF
__text:0000000100E42394    MOV    X0, X26
__text:0000000100E42398    BL     _objc_retain
__text:0000000100E4239C
__text:0000000100E4239C loc_100E4239C                           ; CODE XREF: -[WCRedEnvelopesLogicMgr GetHongbaoBusinessRequest:CMDID:OutputType:]+10C↑j
__text:0000000100E4239C    MOV    X0, X23
__text:0000000100E423A0    BL     _objc_release
__text:0000000100E423A4    MOV    X0, X21
__text:0000000100E423A8    BL     _objc_release
__text:0000000100E423AC    LDR    X0, [X19,#classRef_SettingUtil@PAGEOFF] ; void *
__text:0000000100E423B0    MOV    X1, X22 ; char *
__text:0000000100E423B4    BL     _objc_msgSend
__text:0000000100E423B8    MOV    X29, X29
__text:0000000100E423BC    BL     _objc_retainAutoreleasedReturnValue
; [SettingUtil getMainSetting]

__text:0000000100E423C0    MOV    X21, X0
__text:0000000100E423C4    ADRP   X8, #selRef_m_nsCity@PAGE
__text:0000000100E423C8    LDR    X24, [X8,#selRef_m_nsCity@PAGEOFF]
__text:0000000100E423CC    MOV    X1, X24 ; char *
__text:0000000100E423D0    BL     _objc_msgSend
__text:0000000100E423D4    MOV    X29, X29
__text:0000000100E423D8    BL     _objc_retainAutoreleasedReturnValue
;[[SettingUtil getMainSetting] m_nsCity]

__text:0000000100E423E0    CBZ    X23, loc_100E4241C
;if(nsPro){[[SettingUtil getMainSetting] m_nsCity]}
__text:0000000100E423E4    LDR    X0, [X19,#classRef_SettingUtil@PAGEOFF] ; void *
__text:0000000100E423E8    MOV    X1, X22 ; char *
__text:0000000100E423EC    BL     _objc_msgSend
__text:0000000100E423F0    MOV    X29, X29
__text:0000000100E423F4    BL     _objc_retainAutoreleasedReturnValue

__text:0000000100E423F8    MOV    X22, X0
__text:0000000100E423FC    MOV    X1, X24 ; char *
__text:0000000100E42400    BL     _objc_msgSend
__text:0000000100E42404    MOV    X29, X29
__text:0000000100E42408    BL     _objc_retainAutoreleasedReturnValue
;NSString *city [[SettingUtil getMainSetting] m_nsCity];
__text:0000000100E4240C    MOV    X19, X0
__text:0000000100E42410    MOV    X0, X22
__text:0000000100E42414    BL     _objc_release
__text:0000000100E42418    B      loc_100E4242C
__text:0000000100E4241C ; ---------------------------------------------------------------------------
__text:0000000100E4241C
__text:0000000100E4241C loc_100E4241C                           ; CODE XREF: -[WCRedEnvelopesLogicMgr GetHongbaoBusinessRequest:CMDID:OutputType:]+164↑j
__text:0000000100E4241C    ADRP   X19, #stru_10330D018@PAGE
__text:0000000100E42420    ADD    X19, X19, #stru_10330D018@PAGEOFF
__text:0000000100E42424    MOV    X0, X19
__text:0000000100E42428    BL     _objc_retain
__text:0000000100E4242C
__text:0000000100E4242C loc_100E4242C                           ; CODE XREF: -[WCRedEnvelopesLogicMgr GetHongbaoBusinessRequest:CMDID:OutputType:]+19C↑j
__text:0000000100E4242C    MOV    X0, X23
__text:0000000100E42430    BL     _objc_release
__text:0000000100E42434    MOV    X0, X21
__text:0000000100E42438    BL     _objc_release
__text:0000000100E4243C    ADRP   X24, #classRef_NSMutableDictionary@PAGE
__text:0000000100E42440    LDR    X0, [X24,#classRef_NSMutableDictionary@PAGEOFF] ; void *
__text:0000000100E42444    ADRP   X8, #selRef_dictionaryWithDictionary_@PAGE
__text:0000000100E42448    LDR    X1, [X8,#selRef_dictionaryWithDictionary_@PAGEOFF] ; char *
__text:0000000100E4244C    MOV    X2, X20
__text:0000000100E42450    BL     _objc_msgSend
__text:0000000100E42454    MOV    X21, X0
__text:0000000100E42458    MOV    X0, X20
__text:0000000100E4245C    BL     _objc_release
__text:0000000100E42460    MOV    X0, X21
__text:0000000100E42464    BL     _objc_retainAutoreleasedReturnValue
;NSMutableDictionary *newDictM = [NSMutableDictionary dictionaryWithDictionary:dictM] //传入参数dictM

__text:0000000100E42468    MOV    X27, X0
__text:0000000100E4246C    ADRP   X8, #selRef_safeSetObject_forKey_@PAGE
__text:0000000100E42470    LDR    X20, [X8,#selRef_safeSetObject_forKey_@PAGEOFF]
__text:0000000100E42474    ADRP   X3, #cfstr_Province_2@PAGE ; "province"
__text:0000000100E42478    ADD    X3, X3, #cfstr_Province_2@PAGEOFF ; "province"
__text:0000000100E4247C    MOV    X1, X20 ; char *
__text:0000000100E42480    STR    X26, [SP,#0x1A0+var_160] ; nsPro
__text:0000000100E42484    MOV    X2, X26
__text:0000000100E42488    BL     _objc_msgSend
; [newDictM safeSetObject:nsPro forKey:@"province"];

__text:0000000100E4248C    ADRP   X3, #cfstr_City_2@PAGE ; "city"
__text:0000000100E42490    ADD    X3, X3, #cfstr_City_2@PAGEOFF ; "city"
__text:0000000100E42494    MOV    X0, X27 ; void *
__text:0000000100E42498    STR    X20, [SP,#0x1A0+var_128]
__text:0000000100E4249C    MOV    X1, X20 ; char *
__text:0000000100E424A0    STR    X19, [SP,#0x1A0+var_168]
__text:0000000100E424A4    MOV    X2, X19
__text:0000000100E424A8    BL     _objc_msgSend
; [newDictM safeSetObject:city forKey:@"city"];

__text:0000000100E424AC    ADRP   X8, #classRef_CUtility@PAGE
__text:0000000100E424B0    LDR    X20, [X8,#classRef_CUtility@PAGEOFF]
__text:0000000100E424B4    ADRP   X8, #classRef_WCBizUtil@PAGE
__text:0000000100E424B8    LDR    X0, [X8,#classRef_WCBizUtil@PAGEOFF] ; void *
__text:0000000100E424BC    ADRP   X8, #selRef_getWCPaySwitchInfoPath@PAGE
__text:0000000100E424C0    LDR    X1, [X8,#selRef_getWCPaySwitchInfoPath@PAGEOFF] ; char *
__text:0000000100E424C4    BL     _objc_msgSend
__text:0000000100E424C8    MOV    X29, X29
__text:0000000100E424CC    BL     _objc_retainAutoreleasedReturnValue
; NSString *payInfoPath = [WCBizUtil getWCPaySwitchInfoPath];

__text:0000000100E424D0    MOV    X21, X0
__text:0000000100E424D4    ADRP   X8, #selRef_SafeUnarchive_@PAGE
__text:0000000100E424D8    LDR    X1, [X8,#selRef_SafeUnarchive_@PAGEOFF] ; char *
__text:0000000100E424DC    MOV    X0, X20 ; void *
__text:0000000100E424E0    MOV    X2, X21
__text:0000000100E424E4    BL     _objc_msgSend
__text:0000000100E424E8    MOV    X29, X29
__text:0000000100E424EC    BL     _objc_retainAutoreleasedReturnValue
; WCPaySwitchInfo *safeUnarchive = [CUtility SafeUnarchive: payInfoPath];

__text:0000000100E424F0    MOV    X28, X0
__text:0000000100E424F4    MOV    X0, X21
__text:0000000100E424F8    BL     _objc_release
__text:0000000100E424FC    ADRP   X8, #selRef_m_bEnableReportLocation@PAGE
__text:0000000100E42500    LDR    X22, [X8,#selRef_m_bEnableReportLocation@PAGEOFF]
__text:0000000100E42504    MOV    X0, X28 ; void *
__text:0000000100E42508    MOV    X1, X22 ; char *
__text:0000000100E4250C    BL     _objc_msgSend
;BOOL isEnableReportLocation = [safeUnarchive m_bEnableReportLocation];

__text:0000000100E42510    ADRP   X8, #selRef_m_bEnableReportSSID@PAGE
__text:0000000100E42514    LDR    X23, [X8,#selRef_m_bEnableReportSSID@PAGEOFF]
__text:0000000100E42518    STR    X27, [SP,#0x1A0+var_120] ; newDictM
__text:0000000100E4251C    STR    X28, [SP,#0x1A0+var_170]
__text:0000000100E42520    TBNZ   W0, #0, loc_100E42534
; if(isEnableReportLocation){loc_100E42534}
__text:0000000100E42524    MOV    X0, X28 ; void *
__text:0000000100E42528    MOV    X1, X23 ; char *
__text:0000000100E4252C    BL     _objc_msgSend
;BOOL isEnableReportSSID = [safeUnarchive m_bEnableReportSSID]

__text:0000000100E42530    CBZ    W0, loc_100E42750
;if(isEnableReportSSID){loc_100E42750}
__text:0000000100E42534
__text:0000000100E42534 loc_100E42534                           ; CODE XREF: -[WCRedEnvelopesLogicMgr GetHongbaoBusinessRequest:CMDID:OutputType:]+2A4↑j
__text:0000000100E42534    ADRP   X8, #classRef_iConsole@PAGE
__text:0000000100E42538    LDR    X0, [X8,#classRef_iConsole@PAGEOFF] ; void *
__text:0000000100E4253C    ADRP   X8, #selRef_logWithLevel_module_errorCode_file_line_func_format_@PAGE
__text:0000000100E42540    LDR    X1, [X8,#selRef_logWithLevel_module_errorCode_file_line_func_format_@PAGEOFF] ; char *
__text:0000000100E42544    ADRP   X8, #cfstr_LocationReport@PAGE ; "location: report enable."
__text:0000000100E42548    ADD    X8, X8, #cfstr_LocationReport@PAGEOFF ; "location: report enable."
__text:0000000100E4254C    STR    X8, [SP,#0x1A0+var_1A0]
__text:0000000100E42550    ADRP   X8, #aUsersIoscmechi_788@PAGE ; "/Users/ioscmechine/Desktop/hudson/works"...
__text:0000000100E42554    ADD    X8, X8, #aUsersIoscmechi_788@PAGEOFF ; "/Users/ioscmechine/Desktop/hudson/works"...
__text:0000000100E42558    ADD    X5, X8, #0x5F
__text:0000000100E4255C    ADRP   X3, #aWcpay@PAGE ; "WcPay"
__text:0000000100E42560    ADD    X3, X3, #aWcpay@PAGEOFF ; "WcPay"
__text:0000000100E42564    ADRP   X7, #aWcredenvelopes_18@PAGE ; "-[WCRedEnvelopesLogicMgr GetHongbaoBusi"...
__text:0000000100E42568    ADD    X7, X7, #aWcredenvelopes_18@PAGEOFF ; "-[WCRedEnvelopesLogicMgr GetHongbaoBusi"...
__text:0000000100E4256C    MOV    W2, #2
__text:0000000100E42570    MOV    W6, #0x245
__text:0000000100E42574    STR    X1, [SP,#0x1A0+var_178]
__text:0000000100E42578    MOV    W4, #0
__text:0000000100E4257C    BL     _objc_msgSend
;[iConsole ]

__text:0000000100E42580    ADRP   X26, #classRef_MMServiceCenter@PAGE
__text:0000000100E42584    LDR    X0, [X26,#classRef_MMServiceCenter@PAGEOFF] ; void *
__text:0000000100E42588    ADRP   X8, #selRef_defaultCenter@PAGE
__text:0000000100E4258C    LDR    X24, [X8,#selRef_defaultCenter@PAGEOFF]
__text:0000000100E42590    MOV    X1, X24 ; char *
__text:0000000100E42594    BL     _objc_msgSend
__text:0000000100E42598    MOV    X29, X29
__text:0000000100E4259C    BL     _objc_retainAutoreleasedReturnValue
; [MMServiceCenter defaultCenter]

__text:0000000100E425A0    MOV    X20, X0
__text:0000000100E425A4    ADRP   X27, #classRef_MMLocationMgr@PAGE
__text:0000000100E425A8    LDR    X0, [X27,#classRef_MMLocationMgr@PAGEOFF] ; void *
__text:0000000100E425AC    ADRP   X8, #selRef_class@PAGE
__text:0000000100E425B0    LDR    X25, [X8,#selRef_class@PAGEOFF]
__text:0000000100E425B4    MOV    X1, X25 ; char *
__text:0000000100E425B8    BL     _objc_msgSend
; [MMLocationMgr class]

__text:0000000100E425BC    MOV    X2, X0
__text:0000000100E425C0    ADRP   X8, #selRef_getService_@PAGE
__text:0000000100E425C4    LDR    X21, [X8,#selRef_getService_@PAGEOFF]
__text:0000000100E425C8    MOV    X0, X20 ; void *
__text:0000000100E425CC    MOV    X1, X21 ; char *
__text:0000000100E425D0    BL     _objc_msgSend
__text:0000000100E425D4    MOV    X29, X29
__text:0000000100E425D8    BL     _objc_retainAutoreleasedReturnValue
;MMLocationMgr *locationMgr = [[MMServiceCenter defaultCenter] getService:[MMLocationMgr class]];

__text:0000000100E425DC    MOV    X19, X0
__text:0000000100E425E0    MOV    X0, X28 ; void *
__text:0000000100E425E4    MOV    X1, X22 ; char *
__text:0000000100E425E8    BL     _objc_msgSend
;[safeUnarchive m_bEnableReportLocation]

__text:0000000100E425EC    MOV    X22, X0
__text:0000000100E425F0    MOV    X0, X28 ; void *
__text:0000000100E425F4    MOV    X1, X23 ; char *
__text:0000000100E425F8    BL     _objc_msgSend
; [safeUnarchive m_bEnableReportSSID]
__text:0000000100E425FC    MOV    X3, X0
__text:0000000100E42600    ADRP   X8, #selRef_getEncryptReportWithLocation_WithSSID_@PAGE
__text:0000000100E42604    LDR    X1, [X8,#selRef_getEncryptReportWithLocation_WithSSID_@PAGEOFF] ; char *
__text:0000000100E42608    MOV    X0, X19 ; void *
__text:0000000100E4260C    MOV    X2, X22
__text:0000000100E42610    BL     _objc_msgSend
__text:0000000100E42614    MOV    X29, X29
__text:0000000100E42618    BL     _objc_retainAutoreleasedReturnValue
; id encry = [locationMgr getEncryptReportWithLocation: [safeUnarchive m_bEnableReportLocation] WithSSID:[safeUnarchive m_bEnableReportSSID]];

__text:0000000100E4261C    MOV    X22, X0
__text:0000000100E42620    MOV    X0, X19
__text:0000000100E42624    BL     _objc_release
__text:0000000100E42628    MOV    X0, X20
__text:0000000100E4262C    BL     _objc_release
__text:0000000100E42630    LDR    X0, [X26,#classRef_MMServiceCenter@PAGEOFF] ; void *
__text:0000000100E42634    MOV    X1, X24 ; char *
__text:0000000100E42638    BL     _objc_msgSend
__text:0000000100E4263C    MOV    X29, X29
__text:0000000100E42640    BL     _objc_retainAutoreleasedReturnValue
; [MMServiceCenter defaultCenter]

__text:0000000100E42644    MOV    X19, X0
__text:0000000100E42648    LDR    X0, [X27,#classRef_MMLocationMgr@PAGEOFF] ; void *
__text:0000000100E4264C    LDR    X27, [SP,#0x1A0+var_120]
__text:0000000100E42650    MOV    X1, X25 ; char *
__text:0000000100E42654    BL     _objc_msgSend
; [MMLocationMgr class]

__text:0000000100E42658    MOV    X2, X0
__text:0000000100E4265C    MOV    X0, X19 ; void *
__text:0000000100E42660    MOV    X1, X21 ; char *
__text:0000000100E42664    BL     _objc_msgSend
__text:0000000100E42668    MOV    X29, X29
__text:0000000100E4266C    BL     _objc_retainAutoreleasedReturnValue
 [[MMServiceCenter defaultCenter] getService: [MMLocationMgr class]]

__text:0000000100E42670    MOV    X20, X0
__text:0000000100E42674    ADRP   X8, #selRef_getAESKeyWithRSAEncrypted@PAGE
__text:0000000100E42678    LDR    X1, [X8,#selRef_getAESKeyWithRSAEncrypted@PAGEOFF] ; char *
__text:0000000100E4267C    BL     _objc_msgSend
__text:0000000100E42680    MOV    X29, X29
__text:0000000100E42684    BL     _objc_retainAutoreleasedReturnValue
; NSString *rsaEncrypted = [locationMgr getAESKeyWithRSAEncrypted];

__text:0000000100E42688    MOV    X21, X0
__text:0000000100E4268C    MOV    X0, X20
__text:0000000100E42690    BL     _objc_release
__text:0000000100E42694    MOV    X0, X19
__text:0000000100E42698    BL     _objc_release
__text:0000000100E4269C    ADRP   X25, #classRef_NSString@PAGE
__text:0000000100E426A0    LDR    X0, [X25,#classRef_NSString@PAGEOFF] ; void *
__text:0000000100E426A4    ADRP   X8, #selRef_stringWithFormat_@PAGE
__text:0000000100E426A8    LDR    X19, [X8,#selRef_stringWithFormat_@PAGEOFF]
__text:0000000100E426AC    STR    X22, [SP,#0x1A0+var_1A0]
__text:0000000100E426B0    ADRP   X20, #stru_103314F78@PAGE ; "%@"
__text:0000000100E426B4    ADD    X20, X20, #stru_103314F78@PAGEOFF ; "%@"
__text:0000000100E426B8    MOV    X1, X19 ; char *
__text:0000000100E426BC    MOV    X2, X20
__text:0000000100E426C0    BL     _objc_msgSend
__text:0000000100E426C4    MOV    X29, X29
__text:0000000100E426C8    BL     _objc_retainAutoreleasedReturnValue
; NSString *encryptInfo = [NSString stringWithFormat:@"%@",encry];

__text:0000000100E426CC    MOV    X23, X0
__text:0000000100E426D0    ADRP   X8, #selRef_setObject_forKey_@PAGE
__text:0000000100E426D4    LDR    X24, [X8,#selRef_setObject_forKey_@PAGEOFF]
__text:0000000100E426D8    ADRP   X3, #cfstr_EncryptUserinf@PAGE ; "encrypt_userinfo"
__text:0000000100E426DC    ADD    X3, X3, #cfstr_EncryptUserinf@PAGEOFF ; "encrypt_userinfo"
__text:0000000100E426E0    MOV    X0, X27 ; void *
__text:0000000100E426E4    MOV    X1, X24 ; char *
__text:0000000100E426E8    MOV    X2, X23
__text:0000000100E426EC    BL     _objc_msgSend
; [newDictM setObject:encryptInfo forKey: @"encrypt_userinfo"];

__text:0000000100E426F0    MOV    X0, X23
__text:0000000100E426F4    BL     _objc_release
__text:0000000100E426F8    LDR    X0, [X25,#classRef_NSString@PAGEOFF] ; void *
__text:0000000100E426FC    STR    X21, [SP,#0x1A0+var_1A0]
__text:0000000100E42700    MOV    X1, X19 ; char *
__text:0000000100E42704    MOV    X2, X20
__text:0000000100E42708    BL     _objc_msgSend
__text:0000000100E4270C    MOV    X29, X29
__text:0000000100E42710    BL     _objc_retainAutoreleasedReturnValue
; NSString *encryKey = [NSString stringWithFormat:@"%@" , rsaEncrypted];

__text:0000000100E42714    MOV    X19, X0
__text:0000000100E42718    ADRP   X3, #cfstr_EncryptKey_0@PAGE ; "encrypt_key"
__text:0000000100E4271C    ADD    X3, X3, #cfstr_EncryptKey_0@PAGEOFF ; "encrypt_key"
__text:0000000100E42720    MOV    X0, X27 ; void *
__text:0000000100E42724    MOV    X1, X24 ; char *
__text:0000000100E42728    ADRP   X24, #0x103C07000
__text:0000000100E4272C    MOV    X2, X19
__text:0000000100E42730    BL     _objc_msgSend
;[newDictM setObject:encryKey forKey:@"encrypt_key"];

__text:0000000100E42734    MOV    X0, X19
__text:0000000100E42738    BL     _objc_release
__text:0000000100E4273C    MOV    X0, X21
__text:0000000100E42740    BL     _objc_release
__text:0000000100E42744    MOV    X0, X22
__text:0000000100E42748    BL     _objc_release
__text:0000000100E4274C    B      loc_100E4279C
__text:0000000100E42750 ; ---------------------------------------------------------------------------
__text:0000000100E42750
__text:0000000100E42750 loc_100E42750                           ; CODE XREF: -[WCRedEnvelopesLogicMgr GetHongbaoBusinessRequest:CMDID:OutputType:]+2B4↑j
__text:0000000100E42750    ADRP   X8, #classRef_iConsole@PAGE
__text:0000000100E42754    LDR    X0, [X8,#classRef_iConsole@PAGEOFF] ; void *
__text:0000000100E42758    ADRP   X8, #selRef_logWithLevel_module_errorCode_file_line_func_format_@PAGE
__text:0000000100E4275C    LDR    X1, [X8,#selRef_logWithLevel_module_errorCode_file_line_func_format_@PAGEOFF] ; char *
__text:0000000100E42760    ADRP   X8, #cfstr_LocationReport_0@PAGE ; "location: report disable."
__text:0000000100E42764    ADD    X8, X8, #cfstr_LocationReport_0@PAGEOFF ; "location: report disable."
__text:0000000100E42768    STR    X8, [SP,#0x1A0+var_1A0]
__text:0000000100E4276C    ADRP   X8, #aUsersIoscmechi_788@PAGE ; "/Users/ioscmechine/Desktop/hudson/works"...
__text:0000000100E42770    ADD    X8, X8, #aUsersIoscmechi_788@PAGEOFF ; "/Users/ioscmechine/Desktop/hudson/works"...
__text:0000000100E42774    ADD    X5, X8, #0x5F
__text:0000000100E42778    ADRP   X3, #aWcpay@PAGE ; "WcPay"
__text:0000000100E4277C    ADD    X3, X3, #aWcpay@PAGEOFF ; "WcPay"
__text:0000000100E42780    ADRP   X7, #aWcredenvelopes_18@PAGE ; "-[WCRedEnvelopesLogicMgr GetHongbaoBusi"...
__text:0000000100E42784    ADD    X7, X7, #aWcredenvelopes_18@PAGEOFF ; "-[WCRedEnvelopesLogicMgr GetHongbaoBusi"...
__text:0000000100E42788    MOV    W2, #2
__text:0000000100E4278C    MOV    W6, #0x259
__text:0000000100E42790    STR    X1, [SP,#0x1A0+var_178]
__text:0000000100E42794    MOV    W4, #0
__text:0000000100E42798    BL     _objc_msgSend

__text:0000000100E4279C
__text:0000000100E4279C loc_100E4279C                           ; CODE XREF: -[WCRedEnvelopesLogicMgr GetHongbaoBusinessRequest:CMDID:OutputType:]+4D0↑j
__text:0000000100E4279C    LDR    X0, [X24,#classRef_NSMutableDictionary@PAGEOFF] ; void *
__text:0000000100E427A0    ADRP   X8, #selRef_dictionary@PAGE
__text:0000000100E427A4    LDR    X1, [X8,#selRef_dictionary@PAGEOFF] ; char *
__text:0000000100E427A8    BL     _objc_msgSend
__text:0000000100E427AC    MOV    X29, X29
__text:0000000100E427B0    BL     _objc_retainAutoreleasedReturnValue
; NSMutableDictionary *subDictM = [NSMutableDictionary dictionary]
__text:0000000100E427B4    MOV    X22, X0
__text:0000000100E427B8    STP    XZR, XZR, [SP,#0x1A0+var_E8]
__text:0000000100E427BC    STP    XZR, XZR, [SP,#0x1A0+var_F8]
__text:0000000100E427C0    STP    XZR, XZR, [SP,#0x1A0+var_108]
__text:0000000100E427C4    STP    XZR, XZR, [SP,#0x1A0+var_118]
__text:0000000100E427C8    ADRP   X8, #selRef_allKeys@PAGE
__text:0000000100E427CC    LDR    X1, [X8,#selRef_allKeys@PAGEOFF] ; char *
__text:0000000100E427D0    MOV    X0, X27 ; void *
__text:0000000100E427D4    BL     _objc_msgSend
__text:0000000100E427D8    MOV    X29, X29
__text:0000000100E427DC    BL     _objc_retainAutoreleasedReturnValue
; [newDictM allKeys]

__text:0000000100E427E0    MOV    X23, X0
__text:0000000100E427E4    ADRP   X8, #selRef_countByEnumeratingWithState_objects_count_@PAGE
__text:0000000100E427E8    LDR    X1, [X8,#selRef_countByEnumeratingWithState_objects_count_@PAGEOFF] ; char *
__text:0000000100E427EC    ADD    X2, SP, #0x1A0+var_118
__text:0000000100E427F0    ADD    X3, SP, #0x1A0+var_D8
__text:0000000100E427F4    MOV    W4, #0x10
__text:0000000100E427F8    STR    X1, [SP,#0x1A0+var_130]
__text:0000000100E427FC    BL     _objc_msgSend
; [[newDictM allKeys] countByEnumeratingWithState:0 objects: count:0x10];

__text:0000000100E42800    MOV    X25, X0
__text:0000000100E42804    CBZ    X25, loc_100E428C8
;if(x0 == 0){loc_100E428C8}

__text:0000000100E42808    LDR    X8, [SP,#0x1A0+var_108]
__text:0000000100E4280C    LDR    X26, [X8]
__text:0000000100E42810
__text:0000000100E42810 loc_100E42810                           ; CODE XREF: -[WCRedEnvelopesLogicMgr GetHongbaoBusinessRequest:CMDID:OutputType:]+648↓j
__text:0000000100E42810    MOV    X28, #0
__text:0000000100E42814    ADRP   X8, #selRef_objectForKey_@PAGE
__text:0000000100E42818    LDR    X21, [X8,#selRef_objectForKey_@PAGEOFF]
__text:0000000100E4281C    ADRP   X8, #selRef_gtm_stringByEscapingForURLArgument@PAGE
__text:0000000100E42820    LDR    X20, [X8,#selRef_gtm_stringByEscapingForURLArgument@PAGEOFF]
__text:0000000100E42824
__text:0000000100E42824 loc_100E42824                           ; CODE XREF: -[WCRedEnvelopesLogicMgr GetHongbaoBusinessRequest:CMDID:OutputType:]+628↓j
__text:0000000100E42824    LDR    X8, [SP,#0x1A0+var_108]
__text:0000000100E42828    LDR    X8, [X8]
__text:0000000100E4282C    CMP    X8, X26
__text:0000000100E42830    B.EQ   loc_100E4283C
__text:0000000100E42834    MOV    X0, X23
__text:0000000100E42838    BL     _objc_enumerationMutation
__text:0000000100E4283C
__text:0000000100E4283C loc_100E4283C                           ; CODE XREF: -[WCRedEnvelopesLogicMgr GetHongbaoBusinessRequest:CMDID:OutputType:]+5B4↑j
__text:0000000100E4283C    LDR    X8, [SP,#0x1A0+var_110]
__text:0000000100E42840    LDR    X19, [X8,X28,LSL#3]
__text:0000000100E42844    MOV    X0, X27 ; void *
__text:0000000100E42848    MOV    X1, X21 ; char *
__text:0000000100E4284C    MOV    X2, X19
__text:0000000100E42850    BL     _objc_msgSend
__text:0000000100E42854    MOV    X29, X29
__text:0000000100E42858    BL     _objc_retainAutoreleasedReturnValue
; id obj =  [newDictM objectForKey:@""];

__text:0000000100E4285C    MOV    X27, X0
__text:0000000100E42860    MOV    X1, X20 ; char *
__text:0000000100E42864    BL     _objc_msgSend
__text:0000000100E42868    MOV    X29, X29
__text:0000000100E4286C    BL     _objc_retainAutoreleasedReturnValue
;id urlArgs = [obj gtm_stringByEscapingForURLArgument];

__text:0000000100E42870    MOV    X24, X0
__text:0000000100E42874    MOV    X0, X22 ; void *
__text:0000000100E42878    LDR    X1, [SP,#0x1A0+var_128] ; char *
__text:0000000100E4287C    MOV    X2, X24
__text:0000000100E42880    MOV    X3, X19
__text:0000000100E42884    BL     _objc_msgSend
; [subDictM safeSetObject:urlArgs forKey:@""]

__text:0000000100E42888    MOV    X0, X24
__text:0000000100E4288C    BL     _objc_release
__text:0000000100E42890    MOV    X0, X27
__text:0000000100E42894    LDR    X27, [SP,#0x1A0+var_120]
__text:0000000100E42898    BL     _objc_release
__text:0000000100E4289C    ADD    X28, X28, #1
__text:0000000100E428A0    CMP    X28, X25
__text:0000000100E428A4    B.CC   loc_100E42824
__text:0000000100E428A8    ADD    X2, SP, #0x1A0+var_118
__text:0000000100E428AC    ADD    X3, SP, #0x1A0+var_D8
__text:0000000100E428B0    MOV    W4, #0x10
__text:0000000100E428B4    MOV    X0, X23 ; void *
__text:0000000100E428B8    LDR    X1, [SP,#0x1A0+var_130] ; char *
__text:0000000100E428BC    BL     _objc_msgSend
; [[newDictM allKeys] ]

__text:0000000100E428C0    MOV    X25, X0
__text:0000000100E428C4    CBNZ   X25, loc_100E42810
__text:0000000100E428C8
__text:0000000100E428C8 loc_100E428C8                           ; CODE XREF: -[WCRedEnvelopesLogicMgr GetHongbaoBusinessRequest:CMDID:OutputType:]+588↑j
__text:0000000100E428C8    MOV    X0, X23
__text:0000000100E428CC    BL     _objc_release
__text:0000000100E428D0    ADRP   X8, #classRef_WCBizUtil@PAGE
__text:0000000100E428D4    LDR    X0, [X8,#classRef_WCBizUtil@PAGEOFF] ; void *
__text:0000000100E428D8    ADRP   X8, #selRef_stringWithFormEncodedComponentsAscending_ascending_skipempty_separator_@PAGE
__text:0000000100E428DC    LDR    X1, [X8,#selRef_stringWithFormEncodedComponentsAscending_ascending_skipempty_separator_@PAGEOFF] ; char *
__text:0000000100E428E0    ADRP   X5, #stru_10330F0F8@PAGE ; "&"
__text:0000000100E428E4    ADD    X5, X5, #stru_10330F0F8@PAGEOFF ; "&"
__text:0000000100E428E8    MOV    W3, #1
__text:0000000100E428EC    MOV    W4, #1
__text:0000000100E428F0    MOV    X2, X22
__text:0000000100E428F4    BL     _objc_msgSend
__text:0000000100E428F8    MOV    X29, X29
__text:0000000100E428FC    BL     _objc_retainAutoreleasedReturnValue
; NSString *encodeStr = [WCBizUtil stringWithFormEncodedComponentsAscending:subDictM ascending:1 skipempty:1 separator:@"&"];

__text:0000000100E42900    MOV    X19, X0
__text:0000000100E42904    ADRP   X8, #classRef_iConsole@PAGE
__text:0000000100E42908    LDR    X0, [X8,#classRef_iConsole@PAGEOFF] ; void *
__text:0000000100E4290C    ADRP   X8, #cfstr_WcbizrequestHo@PAGE ; "\n---------------WCBizRequest Hongbao cmd_id = %u ------------\n--queryDic:\n%@\n----------------------------------------"
__text:0000000100E42910    ADD    X8, X8, #cfstr_WcbizrequestHo@PAGEOFF ; "\n---------------WCBizRequest Hongbao cmd_id = %u ------------\n--queryDic:\n%@\n----------------------------------------"
__text:0000000100E42914    STR    X8, [SP,#0x1A0+var_1A0]
__text:0000000100E42918    LDR    X24, [SP,#0x1A0+var_158]
__text:0000000100E4291C    STP    X24, X27, [SP,#0x1A0+var_198]
__text:0000000100E42920    ADRP   X8, #aUsersIoscmechi_788@PAGE ; "/Users/ioscmechine/Desktop/hudson/works"...
__text:0000000100E42924    ADD    X8, X8, #aUsersIoscmechi_788@PAGEOFF ; "/Users/ioscmechine/Desktop/hudson/works"...
__text:0000000100E42928    ADD    X5, X8, #0x5F
__text:0000000100E4292C    ADRP   X3, #aWcredenvelopes_12@PAGE ; "WCRedEnvelopes"
__text:0000000100E42930    ADD    X3, X3, #aWcredenvelopes_12@PAGEOFF ; "WCRedEnvelopes"
__text:0000000100E42934    ADRP   X7, #aWcredenvelopes_18@PAGE ; "-[WCRedEnvelopesLogicMgr GetHongbaoBusi"...
__text:0000000100E42938    ADD    X7, X7, #aWcredenvelopes_18@PAGEOFF ; "-[WCRedEnvelopesLogicMgr GetHongbaoBusi"...
__text:0000000100E4293C    MOV    W2, #1
__text:0000000100E42940    MOV    W6, #0x26C
__text:0000000100E42944    LDR    X1, [SP,#0x1A0+var_178] ; char *
__text:0000000100E42948    MOV    W4, #0
__text:0000000100E4294C    BL     _objc_msgSend
; 

__text:0000000100E42950    MOV    X0, X19
__text:0000000100E42954    BL     _objc_retainAutorelease
__text:0000000100E42958    MOV    X20, X0
__text:0000000100E4295C    ADRP   X8, #selRef_UTF8String@PAGE
__text:0000000100E42960    LDR    X1, [X8,#selRef_UTF8String@PAGEOFF] ; char *
__text:0000000100E42964    BL     _objc_msgSend
; [encodeStr UTF8String]

__text:0000000100E42968    MOV    X19, X0
__text:0000000100E4296C    ADRP   X8, #classRef_NSData@PAGE
__text:0000000100E42970    LDR    X21, [X8,#classRef_NSData@PAGEOFF]
__text:0000000100E42974    BL     _strlen
__text:0000000100E42978    MOV    X3, X0
__text:0000000100E4297C    ADRP   X8, #selRef_dataWithBytes_length_@PAGE
__text:0000000100E42980    LDR    X1, [X8,#selRef_dataWithBytes_length_@PAGEOFF] ; char *
__text:0000000100E42984    MOV    X0, X21 ; void *
__text:0000000100E42988    MOV    X2, X19
__text:0000000100E4298C    BL     _objc_msgSend
__text:0000000100E42990    MOV    X29, X29
__text:0000000100E42994    BL     _objc_retainAutoreleasedReturnValue
; NSData *encodeStrData = [NSData dataWithBytes:[encodeStr UTF8String] length:[[encodeStr UTF8String] length];

__text:0000000100E42998    MOV    X19, X0
__text:0000000100E4299C    ADRP   X8, #selRef_setBuffer_@PAGE
__text:0000000100E429A0    LDR    X1, [X8,#selRef_setBuffer_@PAGEOFF] ; char *
__text:0000000100E429A4    LDR    X23, [SP,#0x1A0+var_148]
__text:0000000100E429A8    MOV    X0, X23 ; void *
__text:0000000100E429AC    MOV    X2, X19
__text:0000000100E429B0    BL     _objc_msgSend
; [skBuffer setBuffer:encodeStrData];

__text:0000000100E429B4    ADRP   X8, #selRef_length@PAGE
__text:0000000100E429B8    LDR    X1, [X8,#selRef_length@PAGEOFF] ; char *
__text:0000000100E429BC    MOV    X0, X19 ; void *
__text:0000000100E429C0    BL     _objc_msgSend
; [encodeStrData length]

__text:0000000100E429C4    MOV    X2, X0
__text:0000000100E429C8    ADRP   X8, #selRef_setILen_@PAGE
__text:0000000100E429CC    LDR    X1, [X8,#selRef_setILen_@PAGEOFF] ; char *
__text:0000000100E429D0    MOV    X0, X23 ; void *
__text:0000000100E429D4    BL     _objc_msgSend
; [skBuffer setILen: [encodeStrData length]]

__text:0000000100E429D8    ADRP   X8, #selRef_setReqText_@PAGE
__text:0000000100E429DC    LDR    X1, [X8,#selRef_setReqText_@PAGEOFF] ; char *
__text:0000000100E429E0    LDR    X21, [SP,#0x1A0+var_138]
__text:0000000100E429E4    MOV    X0, X21 ; void *
__text:0000000100E429E8    MOV    X2, X23
__text:0000000100E429EC    BL     _objc_msgSend
; [hbReq setReqText: skBuffer];

__text:0000000100E429F0    ADRP   X8, #selRef_setCgiCmd_@PAGE
__text:0000000100E429F4    LDR    X1, [X8,#selRef_setCgiCmd_@PAGEOFF] ; char *
__text:0000000100E429F8    MOV    X0, X21 ; void *
__text:0000000100E429FC    MOV    X2, X24
__text:0000000100E42A00    BL     _objc_msgSend
; [hbReq setCgiCmd:4];

__text:0000000100E42A04    ADRP   X8, #selRef_setOutPutType_@PAGE
__text:0000000100E42A08    LDR    X1, [X8,#selRef_setOutPutType_@PAGEOFF] ; char *
__text:0000000100E42A0C    MOV    X0, X21 ; void *
__text:0000000100E42A10    LDR    W2, [SP,#0x1A0+var_14C]
__text:0000000100E42A14    BL     _objc_msgSend
; [hbReq setOutPutType:1];

__text:0000000100E42A18    ADRP   X8, #_OBJC_IVAR_$_WCRedEnvelopesLogicMgr.m_networkHelper@PAGE ; WCRedEnvelopesNetworkHelper *m_networkHelper;
__text:0000000100E42A1C    LDRSW  X8, [X8,#_OBJC_IVAR_$_WCRedEnvelopesLogicMgr.m_networkHelper@PAGEOFF] ; WCRedEnvelopesNetworkHelper *m_networkHelper;
__text:0000000100E42A20    LDR    X9, [SP,#0x1A0+var_140]
__text:0000000100E42A24    LDR    X0, [X9,X8] ; void *
__text:0000000100E42A28    ADRP   X8, #selRef_WCToHongbaoCommonRequest_@PAGE
__text:0000000100E42A2C    LDR    X1, [X8,#selRef_WCToHongbaoCommonRequest_@PAGEOFF] ; char *
__text:0000000100E42A30    MOV    X2, X21
__text:0000000100E42A34    BL     _objc_msgSend
; [self.m_networkHelper WCToHongbaoCommonRequest:hbReq];

__text:0000000100E42A38    MOV    X0, X19
__text:0000000100E42A3C    BL     _objc_release
__text:0000000100E42A40    MOV    X0, X20
__text:0000000100E42A44    BL     _objc_release
__text:0000000100E42A48    MOV    X0, X22
__text:0000000100E42A4C    BL     _objc_release
__text:0000000100E42A50    LDR    X0, [SP,#0x1A0+var_170]
__text:0000000100E42A54    BL     _objc_release
__text:0000000100E42A58    MOV    X0, X27
__text:0000000100E42A5C    BL     _objc_release
__text:0000000100E42A60    LDR    X0, [SP,#0x1A0+var_168]
__text:0000000100E42A64    BL     _objc_release
__text:0000000100E42A68    LDR    X0, [SP,#0x1A0+var_160]
__text:0000000100E42A6C    BL     _objc_release
__text:0000000100E42A70    MOV    X0, X23
__text:0000000100E42A74    BL     _objc_release
__text:0000000100E42A78    MOV    X0, X21
__text:0000000100E42A7C    BL     _objc_release
__text:0000000100E42A80    LDUR   X8, [X29,#var_58]
__text:0000000100E42A84    ADRP   X9, #___stack_chk_guard_ptr@PAGE
__text:0000000100E42A88    LDR    X9, [X9,#___stack_chk_guard_ptr@PAGEOFF]
__text:0000000100E42A8C    LDR    X9, [X9]
__text:0000000100E42A90    SUB    X8, X9, X8
__text:0000000100E42A94    CBNZ   X8, loc_100E42AB8
__text:0000000100E42A98    LDP    X29, X30, [SP,#0x1A0+var_s0]
__text:0000000100E42A9C    LDP    X20, X19, [SP,#0x1A0+var_10]
__text:0000000100E42AA0    LDP    X22, X21, [SP,#0x1A0+var_20]
__text:0000000100E42AA4    LDP    X24, X23, [SP,#0x1A0+var_30]
__text:0000000100E42AA8    LDP    X26, X25, [SP,#0x1A0+var_40]
__text:0000000100E42AAC    LDP    X28, X27, [SP,#0x1A0+var_50]
__text:0000000100E42AB0    ADD    SP, SP, #0x1B0
__text:0000000100E42AB4    RET
__text:0000000100E42AB8
__text:0000000100E42AB8 loc_100E42AB8                           ; CODE XREF: -[WCRedEnvelopesLogicMgr GetHongbaoBusinessRequest:CMDID:OutputType:]+818↑j
__text:0000000100E42AB8                 BL              ___stack_chk_fail
__text:0000000100E42AB8 ; End of function -[WCRedEnvelopesLogicMgr GetHongbaoBusinessRequest:CMDID:OutputType:]



