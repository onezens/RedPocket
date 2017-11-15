
;HongBaoReq *hbReq
-[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:](WCRedEnvelopesNetworkHelper *self, SEL, id)

__text:000000010127636C ; void __cdecl -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:](WCRedEnvelopesNetworkHelper *self, SEL, id)
__text:000000010127636C __WCRedEnvelopesNetworkHelper_WCToHongbaoCommonRequest__
__text:000000010127636C                                         ; DATA XREF: __objc_const:000000010378BC58↓o
__text:000000010127636C
__text:000000010127636C var_40          = -0x40
__text:000000010127636C var_30          = -0x30
__text:000000010127636C var_20          = -0x20
__text:000000010127636C var_10          = -0x10
__text:000000010127636C var_s0          =  0
__text:000000010127636C
__text:000000010127636C                 SUB             SP, SP, #0x50
__text:0000000101276370                 STP             X24, X23, [SP,#0x40+var_30]
__text:0000000101276374                 STP             X22, X21, [SP,#0x40+var_20]
__text:0000000101276378                 STP             X20, X19, [SP,#0x40+var_10]
__text:000000010127637C                 STP             X29, X30, [SP,#0x40+var_s0]
__text:0000000101276380                 ADD             X29, SP, #0x40
__text:0000000101276384                 MOV             X21, X2
__text:0000000101276388                 MOV             X20, X0
__text:000000010127638C                 ADRP            X8, #classRef_WCRedEnvelopesNetworkHelper@PAGE
__text:0000000101276390                 LDR             X19, [X8,#classRef_WCRedEnvelopesNetworkHelper@PAGEOFF]
__text:0000000101276394                 ADRP            X8, #selRef_cgiCmd@PAGE
__text:0000000101276398                 LDR             X22, [X8,#selRef_cgiCmd@PAGEOFF]
__text:000000010127639C                 MOV             X0, X21
__text:00000001012763A0                 BL              _objc_retain
__text:00000001012763A4                 MOV             X23, X0
__text:00000001012763A8                 MOV             X0, X21 ; void *
__text:00000001012763AC                 MOV             X1, X22 ; char *
__text:00000001012763B0                 BL              _objc_msgSend
; int cgiCmd = [hbReq cgiCmd];

__text:00000001012763B4                 MOV             X2, X0
__text:00000001012763B8                 ADRP            X8, #selRef_idkeyCmdReport_keyName_@PAGE
__text:00000001012763BC                 LDR             X1, [X8,#selRef_idkeyCmdReport_keyName_@PAGEOFF] ; char *
__text:00000001012763C0                 ADRP            X3, #cfstr_RequestTotalCo@PAGE ; "request_total_count"
__text:00000001012763C4                 ADD             X3, X3, #cfstr_RequestTotalCo@PAGEOFF ; "request_total_count"
__text:00000001012763C8                 MOV             X0, X19 ; void *
__text:00000001012763CC                 BL              _objc_msgSend
; [WCRedEnvelopesNetworkHelper idkeyCmdReport:cgiCmd keyName:@"request_total_count"];

__text:00000001012763D0                 ADRP            X8, #classRef_ProtobufCGIWrap@PAGE
__text:00000001012763D4                 LDR             X0, [X8,#classRef_ProtobufCGIWrap@PAGEOFF] ; void *
__text:00000001012763D8                 ADRP            X8, #selRef_alloc@PAGE
__text:00000001012763DC                 LDR             X1, [X8,#selRef_alloc@PAGEOFF] ; char *
__text:00000001012763E0                 BL              _objc_msgSend
; [ProtobufCGIWrap alloc] 

__text:00000001012763E4                 ADRP            X8, #selRef_init@PAGE
__text:00000001012763E8                 LDR             X1, [X8,#selRef_init@PAGEOFF] ; char *
__text:00000001012763EC                 BL              _objc_msgSend
; ProtobufCGIWrap *bufWrap = [[ProtobufCGIWrap alloc] init]

__text:00000001012763F0                 MOV             X19, X0
__text:00000001012763F4                 ADRP            X8, #selRef_setM_pbRequest_@PAGE
__text:00000001012763F8                 LDR             X1, [X8,#selRef_setM_pbRequest_@PAGEOFF] ; char *
__text:00000001012763FC                 MOV             X2, X23
__text:0000000101276400                 BL              _objc_msgSend
; bufWrap.m_pbRequest = self

__text:0000000101276404                 MOV             X0, X21 ; void *
__text:0000000101276408                 MOV             X1, X22 ; char *
__text:000000010127640C                 BL              _objc_msgSend
;int cgiCmd = [hbReq cgiCmd];

__text:0000000101276410                 MOV             X21, X0
__text:0000000101276414                 MOV             X0, X23  ;x23 = self
__text:0000000101276418                 BL              _objc_release


;switch(cgiCmd)
__text:000000010127641C                 CMP             W21, #0xA ; switch 11 cases
__text:0000000101276420                 B.HI            def_101276438 ; jumptable 0000000101276438 default case
; W21 > 11 跳转default
__text:0000000101276424                 MOV             W8, W21
__text:0000000101276428                 ADR             X9, jpt_101276438
__text:000000010127642C                 NOP
__text:0000000101276430                 LDRSW           X8, [X9,X8,LSL#2]
__text:0000000101276434                 ADD             X8, X8, X9
__text:0000000101276438                 BR              X8      ; switch jump
__text:000000010127643C ; ---------------------------------------------------------------------------
__text:000000010127643C
__text:000000010127643C loc_10127643C                           ; CODE XREF: -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+CC↑j
__text:000000010127643C                                         ; DATA XREF: __text:jpt_101276438↓o
__text:000000010127643C                 ADRP            X8, #selRef_setM_uiCgi_@PAGE ; jumptable 0000000101276438 case 0
__text:0000000101276440                 LDR             X1, [X8,#selRef_setM_uiCgi_@PAGEOFF]
__text:0000000101276444                 MOV             W2, #0x612
; self.ProtobufCGIWrap.m_uiCgi = 0x612

__text:0000000101276448                 B               loc_1012764E8
__text:000000010127644C ; ---------------------------------------------------------------------------
__text:000000010127644C
__text:000000010127644C loc_10127644C                           ; CODE XREF: -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+CC↑j
__text:000000010127644C                                         ; DATA XREF: __text:0000000101276640↓o
__text:000000010127644C                 ADRP            X8, #selRef_setM_uiCgi_@PAGE ; jumptable 0000000101276438 case 1
__text:0000000101276450                 LDR             X1, [X8,#selRef_setM_uiCgi_@PAGEOFF]
__text:0000000101276454                 MOV             W2, #0x627
; self.ProtobufCGIWrap.m_uiCgi = 0x612

__text:0000000101276458                 B               loc_1012764E8
__text:000000010127645C ; ---------------------------------------------------------------------------
__text:000000010127645C
__text:000000010127645C loc_10127645C                           ; CODE XREF: -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+CC↑j
__text:000000010127645C                                         ; DATA XREF: __text:0000000101276644↓o
__text:000000010127645C                 ADRP            X8, #selRef_setM_uiCgi_@PAGE ; jumptable 0000000101276438 case 2
__text:0000000101276460                 LDR             X1, [X8,#selRef_setM_uiCgi_@PAGEOFF]
__text:0000000101276464                 MOV             W2, #0x684
; self.ProtobufCGIWrap.m_uiCgi = 0x612
__text:0000000101276468                 B               loc_1012764E8
__text:000000010127646C ; ---------------------------------------------------------------------------
__text:000000010127646C
__text:000000010127646C loc_10127646C                           ; CODE XREF: -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+CC↑j
__text:000000010127646C                                         ; DATA XREF: __text:0000000101276648↓o
__text:000000010127646C                 ADRP            X8, #selRef_setM_uiCgi_@PAGE ; jumptable 0000000101276438 case 3
__text:0000000101276470                 LDR             X1, [X8,#selRef_setM_uiCgi_@PAGEOFF]
__text:0000000101276474                 MOV             W2, #0x62D
; self.ProtobufCGIWrap.m_uiCgi = 0x612

__text:0000000101276478                 B               loc_1012764E8
__text:000000010127647C ; ---------------------------------------------------------------------------
__text:000000010127647C
__text:000000010127647C loc_10127647C                           ; CODE XREF: -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+CC↑j
__text:000000010127647C                                         ; DATA XREF: __text:000000010127664C↓o
__text:000000010127647C                 ADRP            X8, #selRef_setM_uiCgi_@PAGE ; jumptable 0000000101276438 case 4
__text:0000000101276480                 LDR             X1, [X8,#selRef_setM_uiCgi_@PAGEOFF]
__text:0000000101276484                 MOV             W2, #0x695
; self.ProtobufCGIWrap.m_uiCgi = 0x612

__text:0000000101276488                 B               loc_1012764E8
__text:000000010127648C ; ---------------------------------------------------------------------------
__text:000000010127648C
__text:000000010127648C loc_10127648C                           ; CODE XREF: -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+CC↑j
__text:000000010127648C                                         ; DATA XREF: __text:0000000101276650↓o
__text:000000010127648C                 ADRP            X8, #selRef_setM_uiCgi_@PAGE ; jumptable 0000000101276438 case 5
__text:0000000101276490                 LDR             X1, [X8,#selRef_setM_uiCgi_@PAGEOFF]
__text:0000000101276494                 MOV             W2, #0x631
; self.ProtobufCGIWrap.m_uiCgi = 0x612

__text:0000000101276498                 B               loc_1012764E8
__text:000000010127649C ; ---------------------------------------------------------------------------
__text:000000010127649C
__text:000000010127649C loc_10127649C                           ; CODE XREF: -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+CC↑j
__text:000000010127649C                                         ; DATA XREF: __text:0000000101276654↓o
__text:000000010127649C                 ADRP            X8, #selRef_setM_uiCgi_@PAGE ; jumptable 0000000101276438 case 6
__text:00000001012764A0                 LDR             X1, [X8,#selRef_setM_uiCgi_@PAGEOFF]
__text:00000001012764A4                 MOV             W2, #0x5EA
; self.ProtobufCGIWrap.m_uiCgi = 0x612

__text:00000001012764A8                 B               loc_1012764E8
__text:00000001012764AC ; ---------------------------------------------------------------------------
__text:00000001012764AC
__text:00000001012764AC def_101276438                           ; CODE XREF: -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+B4↑j
__text:00000001012764AC                                         ; -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+CC↑j
__text:00000001012764AC                                         ; DATA XREF: ...
__text:00000001012764AC                 ADRP            X8, #selRef_setM_uiCgi_@PAGE ; jumptable 0000000101276438 default case
__text:00000001012764B0                 LDR             X1, [X8,#selRef_setM_uiCgi_@PAGEOFF]
__text:00000001012764B4                 MOV             W2, #0x614
; self.ProtobufCGIWrap.m_uiCgi = 0x612

__text:00000001012764B8                 B               loc_1012764E8
__text:00000001012764BC ; ---------------------------------------------------------------------------
__text:00000001012764BC
__text:00000001012764BC loc_1012764BC                           ; CODE XREF: -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+CC↑j
__text:00000001012764BC                                         ; DATA XREF: __text:000000010127665C↓o
__text:00000001012764BC                 ADRP            X8, #selRef_setM_uiCgi_@PAGE ; jumptable 0000000101276438 case 8
__text:00000001012764C0                 LDR             X1, [X8,#selRef_setM_uiCgi_@PAGEOFF]
__text:00000001012764C4                 MOV             W2, #0x692
; self.ProtobufCGIWrap.m_uiCgi = 0x612

__text:00000001012764C8                 B               loc_1012764E8
__text:00000001012764CC ; ---------------------------------------------------------------------------
__text:00000001012764CC
__text:00000001012764CC loc_1012764CC                           ; CODE XREF: -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+CC↑j
__text:00000001012764CC                                         ; DATA XREF: __text:0000000101276660↓o
__text:00000001012764CC                 ADRP            X8, #selRef_setM_uiCgi_@PAGE ; jumptable 0000000101276438 case 9
__text:00000001012764D0                 LDR             X1, [X8,#selRef_setM_uiCgi_@PAGEOFF]
__text:00000001012764D4                 MOV             W2, #0x64C
; self.ProtobufCGIWrap.m_uiCgi = 0x612

__text:00000001012764D8                 B               loc_1012764E8
__text:00000001012764DC ; ---------------------------------------------------------------------------
__text:00000001012764DC
__text:00000001012764DC loc_1012764DC                           ; CODE XREF: -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+CC↑j
__text:00000001012764DC                                         ; DATA XREF: __text:0000000101276664↓o
__text:00000001012764DC                 ADRP            X8, #selRef_setM_uiCgi_@PAGE ; jumptable 0000000101276438 case 10
__text:00000001012764E0                 LDR             X1, [X8,#selRef_setM_uiCgi_@PAGEOFF] ; char *
__text:00000001012764E4                 MOV             W2, #0x66D
; self.ProtobufCGIWrap.m_uiCgi = 0x612

__text:00000001012764E8
__text:00000001012764E8 loc_1012764E8                           ; CODE XREF: -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+DC↑j
__text:00000001012764E8                                         ; -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+EC↑j ...
__text:00000001012764E8                 MOV             X0, X19 ; void *
__text:00000001012764EC                 BL              _objc_msgSend
; []

__text:00000001012764F0                 ADRP            X8, #selRef_setM_uiRetryCount_@PAGE
__text:00000001012764F4                 LDR             X1, [X8,#selRef_setM_uiRetryCount_@PAGEOFF] ; char *
__text:00000001012764F8                 MOV             W2, #2
__text:00000001012764FC                 MOV             X0, X19 ; void *
__text:0000000101276500                 BL              _objc_msgSend
; [bufWrap setM_uiRetryCount: 2];

__text:0000000101276504                 ADRP            X8, #classRef_MMServiceCenter@PAGE
__text:0000000101276508                 LDR             X0, [X8,#classRef_MMServiceCenter@PAGEOFF] ; void *
__text:000000010127650C                 ADRP            X8, #selRef_defaultCenter@PAGE
__text:0000000101276510                 LDR             X1, [X8,#selRef_defaultCenter@PAGEOFF] ; char *
__text:0000000101276514                 BL              _objc_msgSend
__text:0000000101276518                 MOV             X29, X29
__text:000000010127651C                 BL              _objc_retainAutoreleasedReturnValue
; [MMServiceCenter defaultCenter]

__text:0000000101276520                 MOV             X22, X0
__text:0000000101276524                 ADRP            X8, #classRef_EventService@PAGE
__text:0000000101276528                 LDR             X0, [X8,#classRef_EventService@PAGEOFF] ; void *
__text:000000010127652C                 ADRP            X8, #selRef_class@PAGE
__text:0000000101276530                 LDR             X1, [X8,#selRef_class@PAGEOFF] ; char *
__text:0000000101276534                 BL              _objc_msgSend
; [EventService class]

__text:0000000101276538                 MOV             X2, X0
__text:000000010127653C                 ADRP            X8, #selRef_getService_@PAGE
__text:0000000101276540                 LDR             X1, [X8,#selRef_getService_@PAGEOFF] ; char *
__text:0000000101276544                 MOV             X0, X22 ; void *
__text:0000000101276548                 BL              _objc_msgSend
__text:000000010127654C                 MOV             X29, X29
__text:0000000101276550                 BL              _objc_retainAutoreleasedReturnValue
; EventService *eventSer = [[MMServiceCenter defaultCenter] getService: [EventService class]];

__text:0000000101276554                 MOV             X23, X0
__text:0000000101276558                 ADRP            X8, #selRef_CreateProtobufEvent_Flag_@PAGE
__text:000000010127655C                 LDR             X1, [X8,#selRef_CreateProtobufEvent_Flag_@PAGEOFF] ; char *
__text:0000000101276560                 MOV             W3, #5
__text:0000000101276564                 MOV             X2, X19
__text:0000000101276568                 BL              _objc_msgSend
; int flag = [eventSer CreateProtobufEvent:bufWrap Flag: 5];

__text:000000010127656C                 MOV             X21, X0
__text:0000000101276570                 MOV             X0, X23
__text:0000000101276574                 BL              _objc_release
__text:0000000101276578                 MOV             X0, X22
__text:000000010127657C                 BL              _objc_release
__text:0000000101276580                 CBZ             W21, loc_101276620
; if(flag == 0){loc_101276620} 

__text:0000000101276584                 ADRP            X8, #classRef_CAppUtil@PAGE
__text:0000000101276588                 LDR             X0, [X8,#classRef_CAppUtil@PAGEOFF] ; void *
__text:000000010127658C                 ADRP            X8, #selRef_addPBEventObserverListItem_andValue_@PAGE
__text:0000000101276590                 LDR             X1, [X8,#selRef_addPBEventObserverListItem_andValue_@PAGEOFF] ; char *
__text:0000000101276594                 MOV             X2, X21
__text:0000000101276598                 MOV             X3, X20
__text:000000010127659C                 BL              _objc_msgSend
; [CAppUtil addPBEventObserverListItem:flag andValue:self];

__text:00000001012765A0                 ADRP            X8, #_OBJC_IVAR_$_WCRedEnvelopesNetworkHelper.m_dicCGIStartedTime@PAGE ; NSMutableDictionary *m_dicCGIStartedTime;
__text:00000001012765A4                 LDRSW           X8, [X8,#_OBJC_IVAR_$_WCRedEnvelopesNetworkHelper.m_dicCGIStartedTime@PAGEOFF] ; NSMutableDictionary *m_dicCGIStartedTime;
__text:00000001012765A8                 LDR             X20, [X20,X8]
__text:00000001012765AC                 ADRP            X8, #classRef_NSDate@PAGE
__text:00000001012765B0                 LDR             X0, [X8,#classRef_NSDate@PAGEOFF] ; void *
__text:00000001012765B4                 ADRP            X8, #selRef_date@PAGE
__text:00000001012765B8                 LDR             X1, [X8,#selRef_date@PAGEOFF] ; char *
__text:00000001012765BC                 BL              _objc_msgSend
__text:00000001012765C0                 MOV             X29, X29
__text:00000001012765C4                 BL              _objc_retainAutoreleasedReturnValue
; [NSDate date]

__text:00000001012765C8                 MOV             X22, X0
__text:00000001012765CC                 ADRP            X8, #classRef_NSString@PAGE
__text:00000001012765D0                 LDR             X0, [X8,#classRef_NSString@PAGEOFF] ; void *
__text:00000001012765D4                 ADRP            X8, #selRef_stringWithFormat_@PAGE
__text:00000001012765D8                 LDR             X1, [X8,#selRef_stringWithFormat_@PAGEOFF] ; char *
__text:00000001012765DC                 STR             X21, [SP,#0x40+var_40]
__text:00000001012765E0                 ADRP            X2, #cfstr_U@PAGE ; "%u"
__text:00000001012765E4                 ADD             X2, X2, #cfstr_U@PAGEOFF ; "%u"
__text:00000001012765E8                 BL              _objc_msgSend
__text:00000001012765EC                 MOV             X29, X29
__text:00000001012765F0                 BL              _objc_retainAutoreleasedReturnValue
; NSString *flagStr = [NSString stringWithFormat:@"%u", flag];

__text:00000001012765F4                 MOV             X21, X0
__text:00000001012765F8                 ADRP            X8, #selRef_safeSetObject_forKey_@PAGE
__text:00000001012765FC                 LDR             X1, [X8,#selRef_safeSetObject_forKey_@PAGEOFF] ; char *
__text:0000000101276600                 MOV             X0, X20 ; void *
__text:0000000101276604                 MOV             X2, X22
__text:0000000101276608                 MOV             X3, X21
__text:000000010127660C                 BL              _objc_msgSend
; [self.m_dicCGIStartedTime safeSetObject:[NSDate date] forKey:flagStr];

__text:0000000101276610                 MOV             X0, X21
__text:0000000101276614                 BL              _objc_release
__text:0000000101276618                 MOV             X0, X22
__text:000000010127661C                 BL              _objc_release
__text:0000000101276620
__text:0000000101276620 loc_101276620                           ; CODE XREF: -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+214↑j
__text:0000000101276620                 MOV             X0, X19
__text:0000000101276624                 LDP             X29, X30, [SP,#0x40+var_s0]
__text:0000000101276628                 LDP             X20, X19, [SP,#0x40+var_10]
__text:000000010127662C                 LDP             X22, X21, [SP,#0x40+var_20]
__text:0000000101276630                 LDP             X24, X23, [SP,#0x40+var_30]
__text:0000000101276634                 ADD             SP, SP, #0x50
__text:0000000101276638                 B               _objc_release
__text:0000000101276638 ; End of function -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]


__text:0000000101276638 ; ---------------------------------------------------------------------------
__text:000000010127663C jpt_101276438   DCD loc_10127643C - 0x10127663C
__text:000000010127663C                                         ; DATA XREF: -[WCRedEnvelopesNetworkHelper WCToHongbaoCommonRequest:]+BC↑o
__text:000000010127663C                                         ; jump table for switch statement
__text:0000000101276640                 DCD loc_10127644C - 0x10127663C ; jumptable 0000000101276438 case 1
__text:0000000101276644                 DCD loc_10127645C - 0x10127663C ; jumptable 0000000101276438 case 2
__text:0000000101276648                 DCD loc_10127646C - 0x10127663C ; jumptable 0000000101276438 case 3
__text:000000010127664C                 DCD loc_10127647C - 0x10127663C ; jumptable 0000000101276438 case 4
__text:0000000101276650                 DCD loc_10127648C - 0x10127663C ; jumptable 0000000101276438 case 5
__text:0000000101276654                 DCD loc_10127649C - 0x10127663C ; jumptable 0000000101276438 case 6
__text:0000000101276658                 DCD def_101276438 - 0x10127663C ; jumptable 0000000101276438 default case
__text:000000010127665C                 DCD loc_1012764BC - 0x10127663C ; jumptable 0000000101276438 case 8
__text:0000000101276660                 DCD loc_1012764CC - 0x10127663C ; jumptable 0000000101276438 case 9
__text:0000000101276664                 DCD loc_1012764DC - 0x10127663C ; jumptable 0000000101276438 case 10
__text:0000000101276668
__text:0000000101276668 ; =============== S U B R O U T I N E =======================================