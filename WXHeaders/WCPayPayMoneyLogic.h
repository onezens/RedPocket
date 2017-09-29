//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IWCPayControlLogicExt.h"
#import "LocationRetrieveDelegate.h"
#import "WCBaseControlMgrExt.h"
#import "WCPayAutoDeductSettingViewControllerDelegate.h"
#import "WCPayAvaliablePayCardListViewDelegate.h"
#import "WCPayBalanceFetchMoneyViewControllerDelegate.h"
#import "WCPayBalanceSaveMoneyViewControllerDelegate.h"
#import "WCPayBindedCardListViewControllerDelegate.h"
#import "WCPayCouponsListViewDelegate.h"
#import "WCPayFillCardInfoViewControllerDelegate.h"
#import "WCPayFillCardNumberViewControllerDelegate.h"
#import "WCPayGenDigitalCertCgiDelegate.h"
#import "WCPayOrderDetailViewControllerDelegate.h"
#import "WCPayOrderPayConfirmViewDelegate.h"
#import "WCPayOverseasCarTipDelegate.h"
#import "WCPayPaidOrderDetailViewControllerDelegate.h"
#import "WCPayPayPwdViewControllerDelegate.h"
#import "WCPayResetBalanceTelephoneViewControllerDelegate.h"
#import "WCPayResetBindedCardInfoViewControllerDelegate.h"
#import "WCPayResetPhoneViewViewControllerDelegate.h"
#import "WCPaySpecifySelectePayCardListViewDelegate.h"
#import "WCPayTranferMoneyPaidSuccessViewControllerDelegate.h"
#import "WCPayVerifyPayCardViewControllerDelegate.h"

@class ABTestItem, LocationRetriever, MMLoadingView, NSCache, NSString, UIView, WCPayAddPayCardLogic, WCPayAvaliablePayCardListView, WCPayGenDigitalCertCgi, WCPayOverseasCardTipView, WCPaySetUserExInfoCgi;

@interface WCPayPayMoneyLogic : WCPayControlLogic <WCPayGenDigitalCertCgiDelegate, WCPayFillCardInfoViewControllerDelegate, WCPayFillCardNumberViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayOrderDetailViewControllerDelegate, WCPayPaidOrderDetailViewControllerDelegate, WCPayResetPhoneViewViewControllerDelegate, WCPayResetBindedCardInfoViewControllerDelegate, WCPayBindedCardListViewControllerDelegate, WCPayResetBalanceTelephoneViewControllerDelegate, WCPayOrderPayConfirmViewDelegate, WCPayOverseasCarTipDelegate, WCPayBalanceSaveMoneyViewControllerDelegate, WCPayBalanceFetchMoneyViewControllerDelegate, WCPayAvaliablePayCardListViewDelegate, WCPayTranferMoneyPaidSuccessViewControllerDelegate, WCPayCouponsListViewDelegate, WCPaySpecifySelectePayCardListViewDelegate, WCBaseControlMgrExt, IWCPayControlLogicExt, WCPayAutoDeductSettingViewControllerDelegate, LocationRetrieveDelegate>
{
    id <WCPayPayMoneyLogicDelegate> m_payMoneyLogicDelegate;
    WCPayOverseasCardTipView *m_overseasCardTipView;
    WCPayAddPayCardLogic *m_oWCPayAddPayCardLogic;
    LocationRetriever *locationReceiver;
    _Bool m_bUsingTouchIDAuth;
    _Bool m_bResetBalanceTeling;
    ABTestItem *_payABTestItem;
    _Bool m_bRetryPWD;
    UIView *oSubView;
    NSCache *internalCache;
    _Bool m_bIsUploadIdBack;
    WCPayAvaliablePayCardListView *m_avaliablePayCardView;
    _Bool m_shouldShowConfirmViewAfterGetOrderDetail;
    _Bool m_bResetBalanceTelingBySelectNewNumber;
    _Bool m_hasGoneToPaidDetailView;
    _Bool m_bNeedPreShowOrderDetailToGetPayCardList;
    _Bool m_bNeedForceDissmissSuccessViewNotAnimation;
    _Bool m_bPresentSuccessViewController;
    _Bool m_bNotShowSuccessViewController;
    _Bool _bIsCancelFromOrderConfirmView;
    Class m_oStartedClass;
    WCPayGenDigitalCertCgi *_m_genDigitalCertCgi;
    MMLoadingView *_m_webViewReturnLoadingView;
    NSString *_m_touchFingerData;
    WCPaySetUserExInfoCgi *_setUserExInfoCgi;
}

- (void).cxx_destruct;
- (void)FillCardInfoCancel;
- (void)FillCardInfoNext:(id)arg1;
- (void)FillCardInfoReadAgreement;
- (void)FillCardNumberCancel:(_Bool)arg1;
- (void)FillCardNumberConfirmWithImage:(id)arg1 cardNumber:(id)arg2 data:(id)arg3;
- (void)FillCardNumberNext:(id)arg1;
- (void)FillCardNumberShowedAllFavorInfo;
- (id)GetWCPaySetWCPayPasswordStruct:(id)arg1;
- (_Bool)NeedShowServiceAppInfo;
- (void)NoRetryGetOrderDetailInfoAfterPaidError:(id)arg1;
- (void)ONBindedCardListResetBalanceTel:(id)arg1;
- (void)ONBindedCardListResetBankTel:(id)arg1;
- (void)OnAlertGiveUpBind;
- (void)OnAlertResetPhoneNumber;
- (void)OnAuthenticationPay:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnAuthenticationPayVerifyBind:(id)arg1;
- (void)OnAuthenticationPayVerifySMS:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnAuthenticationResetBalanceTelPay:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnAuthenticationResetBalanceTelPayVerifySMS:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnAutoDeductSettingCancel;
- (void)OnBindedCardListBack;
- (void)OnBindedCardListNewCardClicked;
- (void)OnCVVAndValidError:(id)arg1;
- (void)OnCVVError:(id)arg1;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)OnFooterButtonClick:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 userExInfoResponse:(id)arg3 Error:(id)arg4;
- (void)OnGetOrderDetailInfo:(id)arg1 BindQueryInfo:(id)arg2 Error:(id)arg3;
- (void)OnGetOrderDetailInfoAfterPaidError:(id)arg1 Error:(id)arg2;
- (void)OnHandleSafariJumpedLogic;
- (void)OnHandleSpecialPayError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnHandleVerifiedSMSString:(id)arg1;
- (void)OnNewCardToPay;
- (void)OnOrderPayChangeConpons;
- (void)OnPayCgiErrorWithError:(id)arg1;
- (void)OnPayCgiErrorWithErrorCode:(unsigned int)arg1;
- (void)OnPayMoneyPayRetry;
- (void)OnPayNeedToSwitchToPasswordPay;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)OnPhoneNumberError:(id)arg1;
- (void)OnQueryOrderNoRetryWhenPaidErrorWithErrorCode:(unsigned int)arg1;
- (void)OnRealnameVerifySuccessNotification:(id)arg1;
- (void)OnResetBindedCardInfoCancel;
- (void)OnResetBindedCardInfoNext:(id)arg1;
- (void)OnResetPasswordCancel:(id)arg1;
- (void)OnResetPhoneCancel;
- (void)OnResetPhoneNext:(id)arg1;
- (void)OnRetryPayMoneyFromPwdError;
- (void)OnSelectOtherCardToPay;
- (void)OnSetWCPayPasswordInPay:(id)arg1 Error:(id)arg2;
- (void)OnUploadIdSuccess:(id)arg1;
- (void)OnValidError:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewAddPayCard;
- (void)OnWCPayAvaliablePayCardListViewBack;
- (void)OnWCPayAvaliablePayCardListViewCancel;
- (void)OnWCPayAvaliablePayCardListViewNext:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewPushWebView:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewWebViewReturn:(id)arg1;
- (void)OnWCPayCouponsListViewBack;
- (void)OnWCPayCouponsListViewNext:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerShowOpenTouchIDConfirmViewIfNeed;
- (void)OnWCPaySpecifySelectePayCardListViewBack;
- (void)OnWCPaySpecifySelectePayCardListViewBackAddCard;
- (void)OnWCPaySpecifySelectePayCardListViewNext:(id)arg1;
- (void)OrderDetailAdd:(id)arg1;
- (void)OrderDetailAddOrderCard:(id)arg1;
- (void)OrderDetailBack;
- (void)OrderDetailClickCoupousInfo;
- (void)OrderDetailPay:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)RepeatInputPayPwd:(id)arg1;
- (void)RetryGetOrderDetailInfoAfterPaidError:(id)arg1;
- (void)SetPayPwdNext:(id)arg1;
- (void)StartPayOrderQuery;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardModifyPhone:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)WCPayBalanceFetchMoneyViewControllerBack:(_Bool)arg1;
- (void)WCPayBalanceSaveMoneyViewControllerBack:(_Bool)arg1;
- (void)WCPayResetBalanceTelephoneViewControllerBack;
- (void)WCPayResetBalanceTelephoneViewControllerNext:(id)arg1;
- (void)WCPayTranferMoneyPaidSuccessViewControllerBack:(_Bool)arg1;
- (void)WCPayTranferMoneyPaidSuccessViewControllerViewDidAppear;
@property(nonatomic) _Bool bIsCancelFromOrderConfirmView; // @synthesize bIsCancelFromOrderConfirmView=_bIsCancelFromOrderConfirmView;
- (_Bool)beforePayBlockShowAlertWith:(id)arg1;
- (_Bool)checkBankAvailable:(id)arg1;
- (_Bool)checkHandlePrepayErrorPath;
- (_Bool)checkRealNameBlockWithData:(id)arg1;
- (void)dealloc;
- (void)disabelTouchIDAuthForCurrentOrder;
- (void)doAuthenticationPayWithPwd:(id)arg1 isTouchIDAuth:(_Bool)arg2;
- (id)favDesc:(id)arg1;
- (int)getABTestType;
- (id)getPayQueryOrderParams;
- (id)getRetryQueryOrderCacheKey:(id)arg1;
- (id)getTouchIDReasonFromData:(id)arg1;
- (id)getTransactionId;
- (id)getVerifyBindStruct;
- (id)getWCPayAuthenticationPay:(id)arg1;
- (id)getWCPayAuthenticationPayVerifySMSStruct:(id)arg1;
- (id)getWCPayAuthenticationResetBalanceTelPay:(id)arg1;
- (id)getWCPayAuthenticationResetBalanceTelPayVerifySMSStruct:(id)arg1;
- (void)gotoRootViewControllerIfNotInDetailView:(_Bool)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (_Bool)isLogicJumpedToSafari;
@property(nonatomic) _Bool m_bNeedForceDissmissSuccessViewNotAnimation; // @synthesize m_bNeedForceDissmissSuccessViewNotAnimation;
@property(nonatomic) _Bool m_bNeedPreShowOrderDetailToGetPayCardList; // @synthesize m_bNeedPreShowOrderDetailToGetPayCardList;
@property(nonatomic) _Bool m_bNotShowSuccessViewController; // @synthesize m_bNotShowSuccessViewController;
@property(nonatomic) _Bool m_bPresentSuccessViewController; // @synthesize m_bPresentSuccessViewController;
@property(retain, nonatomic) WCPayGenDigitalCertCgi *m_genDigitalCertCgi; // @synthesize m_genDigitalCertCgi=_m_genDigitalCertCgi;
@property(retain, nonatomic) Class m_oStartedClass; // @synthesize m_oStartedClass;
@property(nonatomic) __weak id <WCPayPayMoneyLogicDelegate> m_payMoneyLogicDelegate; // @synthesize m_payMoneyLogicDelegate;
@property(retain, nonatomic) NSString *m_touchFingerData; // @synthesize m_touchFingerData=_m_touchFingerData;
@property(retain, nonatomic) MMLoadingView *m_webViewReturnLoadingView; // @synthesize m_webViewReturnLoadingView=_m_webViewReturnLoadingView;
- (void)mergeBalanceMoneyContorlOrderDetail:(id)arg1;
- (void)mergeOrderDetail:(id)arg1;
- (void)mergePaymentOrderDetail:(id)arg1;
- (_Bool)needShowOverseasCardProtocalView;
- (void)onActionSheetCancelTouchId;
- (void)onActionSheetChangingOtherCards;
- (void)onActionSheetEndPay;
- (void)onActionSheetUsingPwdAuth;
- (void)onAgree:(_Bool)arg1;
- (void)onAlertResetCVV;
- (void)onAlertResetCVVAndValidDate;
- (void)onAlertResetValidDate;
- (void)onBeforePayBlockConfirm:(id)arg1;
- (void)onBeforePayRemindCancelPay:(id)arg1;
- (void)onBeforePayRemindContinuePay:(id)arg1;
- (void)onCancelOpenTouchIDAuth;
- (void)onDisagree;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)onOpenTouchIDAuth;
- (void)onOrderPayChangeCard;
- (void)onOrderPayConfirmViewCancel;
- (void)onOrderPayConfirmViewGotoPasswordAuth;
- (void)onOrderPayConfirmViewGotoTouchIDAuth;
- (void)onOrderPayConfirmViewPay:(id)arg1;
- (void)onOrderPayConfirmViewPerformTouchID;
- (void)onPushWebView:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onTouhcAuthConfirmAlertCancel:(id)arg1;
- (void)onTouhcAuthConfirmAlertOK:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onWCPayGenDigitalCertCgiWithResp:(id)arg1;
- (void)orderDetailPay:(id)arg1 checkTouchID:(_Bool)arg2;
- (void)performTouchID;
- (void)preShowOrderPaySuccess;
- (id)qrcodeUseQueryOrderInfoDefaultErrorWithErrorCode:(unsigned int)arg1;
- (unsigned int)qrcodeUseQueryOrderInfoDelayTime;
- (unsigned int)qrcodeUseQueryOrderInfoMaxCount;
- (void)reportOfflinePayTimeUsingEvent:(int)arg1;
@property(retain, nonatomic) WCPaySetUserExInfoCgi *setUserExInfoCgi; // @synthesize setUserExInfoCgi=_setUserExInfoCgi;
- (void)showConfirmTouchIDOrConfirmViewWithData:(id)arg1;
- (void)showGiveUpBindAlert;
- (void)showOpenTouchIDConfirmIfNeed;
- (void)showOrderPaySuccess;
- (void)showResetBindedCardInfoWithCVV:(_Bool)arg1 ValidDate:(_Bool)arg2;
- (void)showSafariWithData:(id)arg1;
- (void)showTouchIDAuthView:(id)arg1;
- (void)startBindCardToPay:(id)arg1;
- (void)startBindCardToSafariPay:(id)arg1;
- (void)startBindCardToVerifiedUser:(id)arg1;
- (void)startLoadingBlocked;
- (void)startLogic;
- (void)stopLoading;
- (void)stopLogic;
- (void)stopPaymoneyLogicAfterAuthenError;
- (void)webViewReturn:(id)arg1;
- (void)webviewReturnStartLoadingBlocked;
- (void)webviewReturnStopLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

