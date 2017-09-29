//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "IdleTimerUtilExt.h"
#import "MMKernelExt.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCPayLogicMgrExt.h"
#import "WCPayNoticeBannerDelegate.h"
#import "WCPayOfflineAddNewCardTipsViewDelegate.h"
#import "WCPayOfflinePayCodeViewDelegate.h"
#import "WCPayOfflinePayCreateOffinePayTipsViewDelegate.h"
#import "WCPayOfflinePayInvalidCheckTipsViewDelegate.h"
#import "WCPayOfflinePayNoCodeTipsViewDelegate.h"
#import "WCPayOfflinePaySelectPayCardViewDelegate.h"
#import "WCPayPickerViewDelegate.h"
#import "WCPayWalletLockSettingLogicDelegate.h"
#import "WCPayWalletLockVerifyLogicDelegate.h"

@class MMUILabel, MMUIView, NSDictionary, NSObject<OS_dispatch_queue>, NSString, RichTextView, UIAttachmentBehavior, UIButton, UIDynamicAnimator, WCPayOfflinePayAddNewCardTipsView, WCPayOfflinePayBottomButton, WCPayOfflinePayCodeView, WCPayOfflinePayCreateOfflinePayTipsView, WCPayOfflinePayInvalidCheckTipsView, WCPayOfflinePayNoCodeTipsView, WCPayOfflinePaySelectPayCardView, WCPayPickerView, WCPayWebImageView, WCUIAlertView;

@interface WCPayOfflinePayViewController : WCPayBaseViewController <WCPayOfflinePayCodeViewDelegate, UIGestureRecognizerDelegate, MMKernelExt, IdleTimerUtilExt, WCPayNoticeBannerDelegate, WCPayOfflinePayInvalidCheckTipsViewDelegate, WCPayOfflinePaySelectPayCardViewDelegate, WCPayOfflineAddNewCardTipsViewDelegate, WCPayOfflinePayCreateOffinePayTipsViewDelegate, WCPayOfflinePayNoCodeTipsViewDelegate, WCPayWalletLockVerifyLogicDelegate, WCPayWalletLockSettingLogicDelegate, WCActionSheetDelegate, ILinkEventExt, UIAlertViewDelegate, WCPayPickerViewDelegate, WCPayLogicMgrExt>
{
    id <WCPayOfflinePayViewControllerDelegate> m_delegate;
    _Bool m_bFreezeAlertShowed;
    _Bool m_bReadAgreement;
    UIButton *footerButton;
    RichTextView *m_cardInfoLabel;
    WCPayOfflinePayCodeView *m_PayOfflinePayCodeView;
    int m_enCurrentOfflinePayCodeDisplayScene;
    double _oldBrightness;
    WCPayPickerView *m_pickerView;
    WCPayWebImageView *_bankIcon;
    WCPayOfflinePayBottomButton *_changeCardBtn;
    NSString *_cacheCode;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    _Bool _isRefreshing;
    _Bool _triggeredGetToken;
    UIAttachmentBehavior *_attachment;
    MMUIView *_cardInfoView;
    NSDictionary *m_dicBanners;
    double bannerHeight;
    _Bool _isViewDidAppear;
    _Bool _bNeedUpdateCodeView;
    _Bool _bRefreshFromCreateOfflinePay;
    _Bool _isPatternLockShowing;
    _Bool _bHasCheckFirstTips;
    _Bool _bIsAllCardNotSupportOfflinePay;
    _Bool _bIsShowingAddNewCardTipsView;
    _Bool _bNeedShowNoCodeTipsView;
    _Bool _bIsNavigateToReceiveLogic;
    _Bool _bNeedShowReCreateOfflinePayTipsView;
    _Bool _bIsFirstRefresh;
    int _entryScene;
    unsigned int _patternLockLogicTag;
    UIDynamicAnimator *_animator;
    WCUIAlertView *_snapshotAlertView;
    WCPayOfflinePayInvalidCheckTipsView *_invalidTipsView;
    WCPayOfflinePaySelectPayCardView *_selectCardView;
    WCPayOfflinePayAddNewCardTipsView *_addNewCardTipsView;
    WCPayOfflinePayCreateOfflinePayTipsView *_createOfflinePayTipsView;
    WCPayOfflinePayNoCodeTipsView *_noCodeTipsView;
    MMUIView *_actionBarView;
    MMUILabel *_bankNameLabel;
    MMUILabel *_bankDescLabel;
    MMUILabel *_bankForbidWordLabel;
}

- (void).cxx_destruct;
- (void)OnGetBarCodeFromQRCodeResponse:(id)arg1 Error:(id)arg2;
- (void)OnGetReceiveOrPayReddotData;
- (void)OnOfflinePayCancelPayNotification:(id)arg1;
- (void)OnOfflinePayCancelPosNotification:(id)arg1;
- (void)OnOfflinePayTokenInfoUpdated:(_Bool)arg1;
- (void)OnQueryOfflinePayLimit:(id)arg1 fromCache:(_Bool)arg2 Error:(id)arg3;
- (void)OnShouldChangeCard:(id)arg1;
- (void)OnShouldChangePayCardError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)Operate;
- (void)UpdateBarCodeImage;
- (void)UpdateQRCodeImage;
- (void)WCPayPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)WCPayPickerViewDidChooseRowTitle:(id)arg1 atSessionTitle:(id)arg2;
@property(retain, nonatomic) MMUIView *actionBarView; // @synthesize actionBarView=_actionBarView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) WCPayOfflinePayAddNewCardTipsView *addNewCardTipsView; // @synthesize addNewCardTipsView=_addNewCardTipsView;
- (void)adjustSubviewRects;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) _Bool bHasCheckFirstTips; // @synthesize bHasCheckFirstTips=_bHasCheckFirstTips;
@property(nonatomic) _Bool bIsAllCardNotSupportOfflinePay; // @synthesize bIsAllCardNotSupportOfflinePay=_bIsAllCardNotSupportOfflinePay;
@property(nonatomic) _Bool bIsFirstRefresh; // @synthesize bIsFirstRefresh=_bIsFirstRefresh;
@property(nonatomic) _Bool bIsNavigateToReceiveLogic; // @synthesize bIsNavigateToReceiveLogic=_bIsNavigateToReceiveLogic;
@property(nonatomic) _Bool bIsShowingAddNewCardTipsView; // @synthesize bIsShowingAddNewCardTipsView=_bIsShowingAddNewCardTipsView;
@property(nonatomic) _Bool bNeedShowNoCodeTipsView; // @synthesize bNeedShowNoCodeTipsView=_bNeedShowNoCodeTipsView;
@property(nonatomic) _Bool bNeedShowReCreateOfflinePayTipsView; // @synthesize bNeedShowReCreateOfflinePayTipsView=_bNeedShowReCreateOfflinePayTipsView;
@property(nonatomic) _Bool bNeedUpdateCodeView; // @synthesize bNeedUpdateCodeView=_bNeedUpdateCodeView;
@property(nonatomic) _Bool bRefreshFromCreateOfflinePay; // @synthesize bRefreshFromCreateOfflinePay=_bRefreshFromCreateOfflinePay;
@property(retain, nonatomic) MMUILabel *bankDescLabel; // @synthesize bankDescLabel=_bankDescLabel;
@property(retain, nonatomic) MMUILabel *bankForbidWordLabel; // @synthesize bankForbidWordLabel=_bankForbidWordLabel;
- (id)bankLogoUrlStrFromType:(id)arg1;
@property(retain, nonatomic) MMUILabel *bankNameLabel; // @synthesize bankNameLabel=_bankNameLabel;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (float)cardInfoContentHeight;
- (void)changeCodeScene;
- (void)checkAndShowFirstTips;
- (_Bool)checkIfAllCardCannotUseForOfflinePay;
- (void)clearOfflinePayAndPopWithoutAlert;
@property(retain, nonatomic) WCPayOfflinePayCreateOfflinePayTipsView *createOfflinePayTipsView; // @synthesize createOfflinePayTipsView=_createOfflinePayTipsView;
- (id)createPayCodeView;
- (id)currentCardInfoShouldUse;
- (void)dealloc;
- (void)doBackForTimeout;
@property(nonatomic) int entryScene; // @synthesize entryScene=_entryScene;
- (void)exitFullScreenIfNeedAnimation:(_Bool)arg1;
- (void)f2fHongBaoBtnPress:(id)arg1;
- (id)genBottomButtonWithTitle:(id)arg1 actionSelector:(SEL)arg2 logoImg:(id)arg3 buttonSize:(struct CGSize)arg4 bIsFirstBtn:(_Bool)arg5 bIsLastBtn:(_Bool)arg6 bNeedShowRedDot:(_Bool)arg7 reddotshowWording:(id)arg8;
- (id)getActionBarView;
- (id)getNoticeBanner;
- (id)getOfflinePayHelpUrl;
- (id)getQRCodeView;
- (void)grouppayBtnPress:(id)arg1;
- (void)hideAddNewCardTipsView;
- (void)hideInvalidTipsView;
- (void)hideNoCodeTipsView;
- (void)increaseBrightnessIfNeed;
- (id)init;
- (void)initInvalidTipsView;
@property(retain, nonatomic) WCPayOfflinePayInvalidCheckTipsView *invalidTipsView; // @synthesize invalidTipsView=_invalidTipsView;
@property(nonatomic) _Bool isPatternLockShowing; // @synthesize isPatternLockShowing=_isPatternLockShowing;
@property(nonatomic) _Bool isViewDidAppear; // @synthesize isViewDidAppear=_isViewDidAppear;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) WCPayOfflinePayNoCodeTipsView *noCodeTipsView; // @synthesize noCodeTipsView=_noCodeTipsView;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)onChooseCardIndex:(long long)arg1;
- (void)onClickLeftBarButton;
- (void)onClickedReadSupportBanks;
- (void)onCloseOfflinePay;
- (void)onIdleTimerUtilVoipQuit;
- (void)onKickQuit;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onMoreAction:(id)arg1;
- (void)onOffPayPauseAlertViewBtnClick:(id)arg1;
- (void)onReadAgreement:(id)arg1;
- (void)onSelectPayCardViewCancel;
- (void)onSelectPayCardViewClickForbidUrl:(id)arg1;
- (void)onSelectPayCardViewReturnWithNewSelectCardBindSerial:(id)arg1;
- (void)onSettingAction:(id)arg1;
- (void)onUserChooseCardForOfflinePay:(id)arg1;
- (void)patternLockDidSetup:(id)arg1;
@property(nonatomic) unsigned int patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
- (void)preLoadTokensIfNeed;
- (_Bool)preViewControllerIsKindOf:(Class)arg1;
- (void)receiveMoneyBtnPress:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)removeButtonRedDot:(id)arg1;
- (void)scrollContentToBottom;
@property(retain, nonatomic) WCPayOfflinePaySelectPayCardView *selectCardView; // @synthesize selectCardView=_selectCardView;
- (void)setDelegate:(id)arg1;
@property(retain, nonatomic) WCUIAlertView *snapshotAlertView; // @synthesize snapshotAlertView=_snapshotAlertView;
- (void)setupBottomButtonView;
- (void)setupChangeCardLabelUselessCode;
- (void)setupChangeCardView;
- (void)setupWCPayLogo;
- (void)showAddNewCardTipsView;
- (void)showCreateOfflinePayTipsView;
- (void)showInvalidTipsView;
- (void)showNoCodeTipsView;
- (void)showNoCodeTipsView:(id)arg1;
- (void)showReCreateOfflinePayTipsView;
- (float)tipsViewContentHeight;
- (float)topMarginOfTipView;
- (void)touchLockDidSetup:(id)arg1;
- (void)updateCodeImage;
- (void)updateCodeImageAndStartAutomaticUpdate;
- (void)updateCodeInNewWay;
- (void)updateCodeInNewWayWithTips:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)walletLockDidClose:(id)arg1;
- (_Bool)walletLockVerifyLogicNeedBlock:(id)arg1;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)wcPayOfflineAddNewCardTipsViewClickAddCardBtn;
- (void)wcPayOfflineAddNewCardTipsViewClickViewPayCardBtn;
- (id)wcPayOfflineAddNewCardTipsViewGetTipsTitleContent;
- (void)wcPayOfflinePayCodeViewAutoRefreshCountingFinished:(id)arg1;
- (void)wcPayOfflinePayCodeViewClickViewBarCodeBtn;
- (_Bool)wcPayOfflinePayCodeViewCouldStartSuccessAnimation:(id)arg1;
- (void)wcPayOfflinePayCodeViewDidCompletedSuccessAnimation:(id)arg1;
- (void)wcPayOfflinePayCodeViewExitFullScreenAnimationFinished:(id)arg1;
- (void)wcPayOfflinePayCreateOffinePayViewClickConfirmBtn;
- (void)wcPayOfflinePayInvalidCheckViewClickConfirmBtn;
- (void)wcPayOfflinePayInvalidCheckViewClickViewDetailLink;
- (void)wcPayOfflinePayNoCodeTipsViewClickRefreshBtn;
- (void)willAppear;
- (void)willDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

