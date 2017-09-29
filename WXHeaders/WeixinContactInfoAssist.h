//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseContactInfoAssist.h"

#import "IAutoSetRemarkExt.h"
#import "IAutoSetStrangerAttributeExt.h"
#import "ILinkEventExt.h"
#import "MMCPLabelDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "WCFacadeExt.h"

@class CContact, CMessageWrap, ContactRelatedGroupLogic, MMTableViewInfo, NSMutableArray, NSString, UIButton;

@interface WeixinContactInfoAssist : CBaseContactInfoAssist <MMCPLabelDelegate, IAutoSetRemarkExt, IAutoSetStrangerAttributeExt, ILinkEventExt, RichTextLayoutDelegate, WCFacadeExt>
{
    _Bool m_bFirstBecomeFriend;
    UIButton *m_greenBtn;
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_hasRequestUpdateAlbum;
    NSString *m_location;
    CContact *m_chatContact;
    unsigned int m_uiVerify;
    NSMutableArray *m_arrayAlbum;
    int m_curDownloadEntrance;
    CMessageWrap *m_sourceMsg;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForChatRoomDisplayName;
    NSString *m_cpKeyForSignature;
    _Bool m_isNickNameUnsafe;
    _Bool m_isChatRoomDisplayNameUnsafe;
    _Bool m_isSignatureUnsafe;
    ContactRelatedGroupLogic *m_relatedGroupLogic;
    NSString *m_InviteUserName;
    _Bool _m_bDisableAllOperation;
}

- (void).cxx_destruct;
- (id)GetTableView;
- (_Bool)IsShowUserName;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addToBlackList:(id)arg1;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned int)arg2;
- (void)dealloc;
- (void)doAddToBlackList;
- (void)doDeleteContact;
- (void)getChatRoomMemberContact;
- (id)getInfoDisplayName;
- (void)handleAddedContact;
- (_Bool)hasMore;
- (id)init;
- (void)initAddContactBtn;
- (void)initBlackAndExposeContactBtn;
- (void)initBlackListTipsLabel;
- (void)initData;
- (void)initDeleteBtn;
- (void)initExposeBtn;
- (void)initFooterBtnArea;
- (void)initFooterView;
- (void)initQuitRoomTipsLabel;
- (void)initSayHelloBtn;
- (void)initSendMsgBtn;
- (void)initTableView;
- (void)initVerifyBtn;
- (_Bool)initVoipBtn;
- (void)initWCPrivacyButton;
- (id)initWithContact:(id)arg1 andChatContact:(id)arg2 andVerify:(unsigned int)arg3 delegate:(id)arg4 location:(id)arg5 sourceMsg:(id)arg6;
- (_Bool)isFromQRCode;
- (_Bool)isFromStrangeScene;
- (_Bool)isNeedHideUserName;
- (_Bool)isNeedShowRightBtn;
- (_Bool)isNeedVerify;
- (_Bool)isShowAddFriendScene;
- (_Bool)isShowBlackAction;
- (_Bool)isShowExposeButton;
- (void)loadLocalContactData;
@property(nonatomic) _Bool m_bDisableAllOperation; // @synthesize m_bDisableAllOperation=_m_bDisableAllOperation;
- (void)makeAlbumCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeCellTitle:(id)arg1 Title:(id)arg2 MaxWidth:(double)arg3;
- (void)makeDescriptionCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeEditRemarkNameCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeHeadCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeHeadSmallLabel:(id)arg1 Y:(double)arg2 text:(id)arg3 cpKey:(id)arg4 inUnsafe:(_Bool)arg5;
- (id)makeHeadSmallLabel:(id)arg1 Y:(double)arg2 text:(id)arg3 cpKey:(id)arg4 inUnsafe:(_Bool)arg5 withPrefixTitle:(id)arg6;
- (void)makeLeftValueCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMoreCell:(id)arg1 CellInfo:(id)arg2;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeSourceCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeTagsCell:(id)arg1 CellInfo:(id)arg2;
- (void)onAction;
- (void)onExposeByRecommand;
- (void)onHomepageUpdate:(int)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNewMessage:(id)arg1;
- (void)onOpenVoiceVoipView;
- (void)onOpenVoipActionSheet:(id)arg1;
- (void)onOpenVoipView;
- (void)onRelpyContact:(id)arg1;
- (void)onRestoreCPLabel:(id)arg1;
- (void)onSayHelloToContact;
- (void)onSocialInfoHandle;
- (void)onStartChat:(id)arg1;
- (void)onVerifyContact:(id)arg1 opcode:(unsigned int)arg2;
- (void)onVerifyContactOk;
- (void)opBlackList:(id)arg1;
- (void)opEditRemarkName;
- (void)opSetWCPermissions;
- (void)opSetWCStrangerPermissions;
- (void)reloadTableView;
- (void)removeFromBlackList;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)showAlbumList;
- (void)showRightButton;
- (void)tryCall:(id)arg1;
- (void)updateCPState;
- (void)updateFooterView;
- (void)updateToBigSendMsgBtn;
- (void)verifyContactWithOpCode:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

