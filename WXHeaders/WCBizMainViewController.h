//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBizBaseViewController.h"

#import "ILinkEventExt.h"
#import "IWCMallControlLogicExt.h"
#import "IWCPayControlLogicExt.h"
#import "LocationRetrieveDelegate.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCMallFunctionActivityViewDelegate.h"
#import "WCPayLogicMgrExt.h"
#import "WCPayNoticeBannerDelegate.h"
#import "WCPayOpenECardControlLogicExt.h"
#import "WCPayPwdViewControllerDelegate.h"
#import "WCPayUploadIDCardTipsViewControllerDelegate.h"

@class LocationRetriever, NSDictionary, NSMutableArray, NSString, UIButton, UIImageView, UIView, UrlLabel, WCMallControlData, WCPayControlData, WCUIPageControl;

@interface WCBizMainViewController : WCBizBaseViewController <UITableViewDelegate, WCPayNoticeBannerDelegate, LocationRetrieveDelegate, WCPayUploadIDCardTipsViewControllerDelegate, WCPayOpenECardControlLogicExt, WCActionSheetDelegate, WCPayLogicMgrExt, WCPayPwdViewControllerDelegate, IWCPayControlLogicExt, IWCMallControlLogicExt, ILinkEventExt, WCMallFunctionActivityViewDelegate>
{
    unsigned int m_uiNewOrderCount;
    NSMutableArray *m_arrPayCardDetailView;
    WCMallControlData *m_oMallData;
    WCPayControlData *m_oPayData;
    UrlLabel *m_oBroadCastLabel;
    WCUIPageControl *_bigImagePageControl;
    UIView *m_oTipsView;
    UIView *m_oPrePageCurView;
    UIView *m_oNextPageCurView;
    _Bool m_bGetPayCardList;
    unsigned int m_uiCurrentShowedTipsActivityID;
    UIView *_topHeaderView;
    UIImageView *_redDotViewForTranslate;
    UIButton *_balanceBtn;
    UIButton *_cardListBtn;
    NSMutableArray *_activityGroups;
    NSDictionary *m_dicBanners;
    LocationRetriever *locationRetriever;
    _Bool m_hasShowUploadIdImageAlert;
    _Bool m_isTencentServiceFold;
    double m_dynamicCellHeight;
    UIView *_footerFolderView;
    unsigned int m_payCardListLogicTag;
    unsigned int m_functionActivityListLogicTag;
    _Bool _m_hasNewOrRedDotWhenOpen;
    UIImageView *_reddotForBalance;
}

- (void).cxx_destruct;
- (void)OnEntranceStatusChanged;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)OnGetFunctionList:(id)arg1 FromLocalCache:(_Bool)arg2;
- (void)OnGetLocalCachePayCardList:(id)arg1;
- (void)OnOrderHistory;
- (void)OnOrderHistoryH5;
- (void)OnPayCardListChanged:(id)arg1;
- (void)OnStatusChangedOrderListCountChanged:(unsigned int)arg1;
- (void)OnStepInOfflinePay;
- (void)OnTransferMoney:(id)arg1;
- (void)OnWCMallFunctionActivityViewButtonDown:(id)arg1;
- (void)OnWCPayPwdViewControllerBack;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (double)calculateRedDotOffsetWithActivityList:(id)arg1 initOffset:(double)arg2;
- (void)caluateDynamicCellHeight:(_Bool)arg1;
- (double)contentHeightWithActivityCount:(unsigned long long)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)getActivityCellView:(id)arg1 showActivityCount:(unsigned long long)arg2;
- (id)getBannerView;
- (id)getFolderFooterView:(_Bool)arg1 isNeedShowRedDot:(_Bool)arg2;
- (float)headerViewHeight;
- (float)headerViewPaddingTop;
- (id)init;
- (void)initView;
- (_Bool)isNeedFold:(unsigned int)arg1;
@property(nonatomic) _Bool m_hasNewOrRedDotWhenOpen; // @synthesize m_hasNewOrRedDotWhenOpen=_m_hasNewOrRedDotWhenOpen;
@property(nonatomic) unsigned int m_uiNewOrderCount; // @synthesize m_uiNewOrderCount;
- (void)makeCardHeaderView:(id)arg1;
- (id)makeNewOrderRecord:(id)arg1;
- (_Bool)needToShowRedDotForTransfer;
- (void)onAddPayCard;
- (void)onAddPayCardInUnregView;
- (void)onBalanceBtnCancel;
- (void)onBalanceBtnDown;
- (void)onBalanceClick;
- (void)onCardListBtnCancel;
- (void)onCardListBtnDown;
- (void)onCardListClick;
- (void)onClickAddCardButton:(id)arg1;
- (void)onClickCard:(id)arg1;
- (void)onClickCardListButton:(id)arg1;
- (void)onClickFolder;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onOfflinePayClick;
- (void)onOpenTouchIDAuth;
- (void)onOperate:(id)arg1;
- (void)onPageControllerChangePage:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)openECardLogicDidSuccess:(id)arg1;
- (void)openPWDViewController;
@property(retain, nonatomic) UIImageView *reddotForBalance; // @synthesize reddotForBalance=_reddotForBalance;
- (void)refreshView;
- (void)refreshViewWithContentOffSet:(struct CGPoint)arg1;
- (void)refreshViewWithMallControlData:(id)arg1;
- (void)refreshViewWithPayControlData:(id)arg1;
- (void)reloadNavigationItem;
- (void)removeRedDotForTransferNowAndForever;
- (void)scrollToOffset:(id)arg1;
- (double)sectionHeaderViewHeight;
- (void)showAddCardView;
- (void)showTouchIDConfirmIfNeed;
- (struct CGSize)tableViewContentSize;
- (struct CGRect)tableViewFrame;
- (unsigned int)tencentServiceFoldedCount;
- (id)testMakeLabel:(id)arg1;
- (double)testRowHeight;
- (void)unHighlineActivityView;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

