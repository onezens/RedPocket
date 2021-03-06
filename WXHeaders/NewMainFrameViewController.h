//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "CreateChatLogicDelegate.h"
#import "IAcctStorageMgrExt.h"
#import "IAutoSetRemarkExt.h"
#import "IMMFacebookMgrExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "IWCDeviceBrandMgrExt.h"
#import "IWXTalkPresentExt.h"
#import "MMKernelExt.h"
#import "MMSearchBarDelegate.h"
#import "MMVoiceSearchBarDelegate.h"
#import "MMVoiceSearchDelegate.h"
#import "MainFrameHeaderDelegate.h"
#import "MainTableDelegate.h"
#import "SelectContactsViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCBarMessageWindowDelegate.h"
#import "contactInfoDelegate.h"
#import "mainFrameLogicControllerDelegate.h"

@class CreateChatLogic, MFTitleView, MMLoadingView, MMMainTableView, MMSessionInfo, MainFrameHeaderLogic, MainFrameLogicController, NSString, UIDynamicAnimator, UIImageView, WCBarMessageWindow;

@interface NewMainFrameViewController : MMTabBarBaseViewController <SelectContactsViewControllerDelegate, IMMFacebookMgrExt, mainFrameLogicControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, WCActionSheetDelegate, contactInfoDelegate, CreateChatLogicDelegate, MMVoiceSearchDelegate, MMSearchBarDelegate, MMVoiceSearchBarDelegate, MMKernelExt, IWXTalkPresentExt, IVOIPUILogicMgrExt, IAutoSetRemarkExt, UIGestureRecognizerDelegate, IAcctStorageMgrExt, UIAlertViewDelegate, WCBarMessageWindowDelegate, MainTableDelegate, IWCDeviceBrandMgrExt, MainFrameHeaderDelegate>
{
    MainFrameLogicController *m_mainFrameLogicController;
    MMMainTableView *m_tableView;
    UIImageView *logoImageView;
    MFTitleView *m_titleView;
    MMLoadingView *m_loadingView;
    _Bool m_bSearching;
    struct CGPoint m_tableContentOffset;
    _Bool m_bFromReg;
    unsigned int m_uiTipStatus;
    CreateChatLogic *m_createChatLogic;
    _Bool m_tableViewReady;
    MainFrameHeaderLogic *m_headerLogic;
    NSString *m_nsTitle;
    int m_voiceSearchLevelNumber;
    _Bool m_bFirstInitView;
    _Bool m_bOnMemoryWarningToFinishedSearchBar;
    struct CGPoint m_tableViewOffset;
    _Bool m_bIsLastViewStatusBarHidden;
    _Bool m_hasAddBlurEffectView;
    _Bool m_needResetTableViewOffset;
    double m_preContentOffset;
    WCBarMessageWindow *m_barMessageWindow;
    _Bool m_forbidShowTip;
    MMSessionInfo *_peekedSession;
    _Bool m_firstLoadFinished;
    _Bool m_canSearchAfterInit;
    double m_messageCellHeight;
    long long m_lastRowNum;
    NSString *m_confirmingSessionName;
    unsigned int _startTime;
    id <UIViewControllerPreviewing> _previewingContext;
    UIDynamicAnimator *_animator;
}

- (void).cxx_destruct;
- (void)MMVoiceSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)MMVoiceSearchBarCancelButtonClicked:(id)arg1;
- (void)MMVoiceSearchBarSearchButtonClicked:(id)arg1;
- (_Bool)MMVoiceSearchBarShouldBeginEditing:(id)arg1;
- (void)OnRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)OnVoiceSearchButtonDown;
- (void)OpenContactInfo:(id)arg1;
- (void)PopViewContoller;
- (void)PushViewController:(id)arg1;
- (void)SearchBarBecomeActive;
- (void)SearchBarBecomeUnActive;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addBlurEffectView;
- (void)animationShow;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
- (void)applySearchBeginAnimation:(id)arg1;
- (void)applySearchBeginAnimationOnMainView;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (void)cancelSearch;
- (void)cancelSelectedCell;
- (void)changeNetworkStatus:(unsigned int)arg1;
- (void)checkDBAutoRecover;
- (void)checkDelayLoadData;
- (_Bool)checkHeaderRowValid:(unsigned int)arg1;
- (void)clearResource;
- (void)clearSessionCache;
- (void)createVideoVOIPChat;
- (void)createVoiceVOIPChat;
- (void)dealloc;
- (void)deleteSessionAtIndex:(unsigned long long)arg1;
- (void)deleteSessionCell:(unsigned int)arg1 withUser:(id)arg2;
- (void)deselectCellByUsername:(id)arg1 indexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)displayControllerSetActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)finishSearchBarImmediately;
- (id)getActionSheetTitle:(unsigned long long)arg1;
- (id)getDestructiveBtnTitle:(unsigned long long)arg1;
- (double)getLogoContentInsetTop;
- (long long)getSectionType:(long long)arg1;
- (id)getSessionInfoByContact:(id)arg1;
- (id)getSubImage:(struct CGRect)arg1 inImage:(id)arg2;
- (unsigned int)getTotalUnreadCount;
- (id)getVCWithDeepLinkName:(id)arg1;
- (id)getVoiceSearchBar;
- (void)handleBrandUnsubscribe:(id)arg1;
- (void)handleCommitEdit:(unsigned long long)arg1;
- (void)handleFrameChangeForSearchBar;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (_Bool)hasShowSearchBar;
- (void)hideSearchBar;
- (void)initBarItem;
- (void)initBarMessageWindow;
- (void)initData;
- (void)initDeepLinkConfig;
- (void)initFooterView;
- (void)initHeaderView;
- (void)initLoadingView;
- (void)initSearchController;
- (void)initShadowLogo;
- (void)initStatusBar;
- (void)initTableView;
- (void)initTitle;
- (void)initTitleView;
- (void)initView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertRow:(unsigned int)arg1;
- (_Bool)isNeedMutilLevelView:(id)arg1;
- (_Bool)isNeedShowProfileInVoiceSearch:(int)arg1;
- (_Bool)isOpenPluginContactInfoView:(id)arg1;
- (_Bool)isSeachActive;
- (_Bool)isTopRightMenuShowID:(id)arg1;
@property(nonatomic) _Bool m_bFromReg; // @synthesize m_bFromReg;
@property(retain, nonatomic) CreateChatLogic *m_createChatLogic; // @synthesize m_createChatLogic;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
- (void)makeCellBackGroundBySession:(id)arg1 cell:(id)arg2 showTopList:(_Bool)arg3;
- (void)moveSearchGuideViewToDisplayContainer;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3 FromOtherTab:(_Bool)arg4;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3 FromOtherTab:(_Bool)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6;
- (void)newMessageFromContactInfo:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onArriveFundCancelDeleteSession:(id)arg1;
- (void)onArriveFundConfirmDeleteSession:(id)arg1;
- (void)onAuthOK;
- (void)onBarTipClicked;
- (void)onConfirmDeleteSessionAtIndex:(unsigned long long)arg1;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)onCreateNewMessage;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onMassSend;
- (void)onRadar;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)onSetStrangerRemark:(id)arg1;
- (void)onSettingChange;
- (void)onShowPhoneFriend;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)openAlbum;
- (void)openBrandSessionView;
- (void)openContactInfoView:(id)arg1;
- (void)openEnterpriseBrandSessionView:(id)arg1;
- (void)openEnterpriseChatSessionListView:(id)arg1 animated:(_Bool)arg2;
- (void)openFace2FaceReceiveMoney;
- (void)openFloatBottleContentView;
- (void)openMassSend;
- (void)openMessageContentView:(id)arg1 startSendMessage:(_Bool)arg2 msgWrapToAdd:(id)arg3 animated:(_Bool)arg4 jumpToFirstUnreadNode:(_Bool)arg5 indexPath:(id)arg6;
- (void)openMessageContentView:(id)arg1 startSendMessage:(_Bool)arg2 msgWrapToAdd:(id)arg3 animated:(_Bool)arg4 jumpToFirstUnreadNode:(_Bool)arg5 indexPath:(id)arg6 reuse:(_Bool)arg7 extraInfo:(id)arg8;
- (void)openOverseaFacingReceiveMoney;
- (void)openPluginContactInfoView:(id)arg1;
- (void)openSelectReceiveOrPayMoney;
- (void)openSelectReceiveOrPayMoneyFromShortcut;
- (void)openWeAppSessionView;
- (void)openWeSportView:(id)arg1;
- (void)popToMainFrameAnimated:(_Bool)arg1;
- (void)popToSelfViewController;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)reLayoutSubviews;
- (void)reloadAll;
- (void)reloadHeaderView;
- (void)reloadSessions;
- (void)removeBlurEffectView;
- (void)removeMainFrameTip;
- (void)removeRow:(unsigned int)arg1;
- (void)resetHeaderView;
- (void)resetSearchBar;
- (void)resetTableViewOffset:(id)arg1;
- (void)resetViewStatus;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)selectCellForName:(id)arg1;
- (void)setNewMainFrameTableViewContentOffset:(struct CGPoint)arg1;
- (void)setNewMainFrameTableViewContentOffsetToTheFirstUnreadSession;
- (void)setReadyToLoadData;
- (void)setSearchTableResultText:(id)arg1;
- (void)setTableViewContentInsetForSearchBar;
- (void)setUIEventEnabled:(_Bool)arg1;
- (_Bool)shouldDeselectCellByUsername:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldShowTabbar;
- (_Bool)shouldShowTitleWindow;
- (_Bool)shouldTopRightMenuShowID:(id)arg1;
- (void)showBrandUnsubscribeActionSheet:(unsigned long long)arg1;
- (void)showEditActionSheet:(unsigned long long)arg1;
- (void)showEmoticonStoreView;
- (void)showInviteFriendList;
- (void)showMyWCView;
- (void)showQRInfoView;
- (void)showWCPayView;
- (void)startLoading;
- (void)startLoadingForSessionRebuild;
- (void)stopLoading;
- (void)stopLoadingForSessionRebuild;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tagForCurrentPage;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tryHideSearchGuideView;
- (void)tryInitViewOfSearchController;
- (void)tryMoveToMainFrameTab;
- (void)unLoadData;
- (void)unLoadView;
- (void)updateAllItemTimeLabel;
- (void)updateItem:(id)arg1;
- (void)updateNearMode;
- (void)updateRow:(unsigned int)arg1;
- (void)updateSession:(id)arg1;
- (void)updateStatusBar;
- (void)updateUnReadCount;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)willAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

