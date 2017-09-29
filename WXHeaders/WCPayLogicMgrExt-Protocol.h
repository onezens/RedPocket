//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GenPrepayRequest, NSArray, NSDate, NSDictionary, NSError, NSMutableDictionary, NSString, Package, PayAuthAppRequest, TenpayBindCardSubscribeAppInfo, WCPayAuthenticationPay, WCPayAuthenticationPayStatusStruct, WCPayAuthenticationPayVerifySMSStruct, WCPayBalanceInfo, WCPayBindCardInfo, WCPayBindInfo, WCPayBindInfoSMS, WCPayBindQueryUserInfoStruct, WCPayCardBinInfo, WCPayCheckPayPwdByTokenResponse, WCPayCheckPayPwdVerifyTelCodeByTokenResponse, WCPayCheckTransferStatusResponse, WCPayConfirmTransferResponse, WCPayCreditCardDetailInfo, WCPayCreditCardInfo, WCPayCreditPayAuthenResponseStruct, WCPayCreditPayCommitWXCreditAnswerResponseStruct, WCPayCreditPayQueryQuestionResponseStruct, WCPayCreditPayVerifyAndCreateCardResponseStruct, WCPayCreditPayVerifyPasswdResponseStruct, WCPayCreditPayVerifySMSCodeResponseStruct, WCPayFacingReceiveMoneyMessageStruct, WCPayGetUserExInfoCgiResponse, WCPayHandleWCPayURLResult, WCPayLQTInfo, WCPayLoanEntryInfo, WCPayMultiOrderDetail, WCPayNoticeInfo, WCPayOfflinePayChangeLimitFeeResponseStruct, WCPayOfflinePayConfirmMessageStruct, WCPayOfflinePayCreateResponseStruct, WCPayOfflinePayFreezeMessageStruct, WCPayOfflinePayMessageStruct, WCPayOfflinePayQueryInfo, WCPayOfflinePayQueryUserResponseStruct, WCPayQueryWalletResponse, WCPayRealnameGuideInfo, WCPayRefuseTransferResponse, WCPayResetPasswordInfo, WCPayRetrySendMsgResponse, WCPaySendC2CSecMsgResponse, WCPaySwitchInfo, WCPayTranferGetUserNameResponse, WCPayTransferGetFixedAmountQRCodeResponse, WCPayTransferPrepayResponseStruct, WCPayUserInfo;

@protocol WCPayLogicMgrExt <NSObject>

@optional
- (void)NoRetryGetOrderDetailInfoAfterPaidError:(NSError *)arg1;
- (void)OnAddCardError:(NSString *)arg1 ErrorMsg:(NSString *)arg2 ErrorType:(unsigned int)arg3;
- (void)OnAddCardError:(NSString *)arg1 ErrorType:(unsigned int)arg2;
- (void)OnAddCardToVerifyUserInfoError:(NSString *)arg1 ErrorType:(unsigned int)arg2;
- (void)OnAuthenticationCreditPayIdentifier:(WCPayCreditPayAuthenResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnAuthenticationPay:(WCPayAuthenticationPay *)arg1 PayStatus:(WCPayAuthenticationPayStatusStruct *)arg2 Error:(NSError *)arg3;
- (void)OnAuthenticationPayVerifyBind:(NSError *)arg1;
- (void)OnAuthenticationPayVerifySMS:(WCPayAuthenticationPayVerifySMSStruct *)arg1 PayStatus:(WCPayAuthenticationPayStatusStruct *)arg2 Error:(NSError *)arg3;
- (void)OnAuthenticationResetBalanceTelPay:(WCPayAuthenticationPay *)arg1 PayStatus:(WCPayAuthenticationPayStatusStruct *)arg2 Error:(NSError *)arg3;
- (void)OnAuthenticationResetBalanceTelPayVerifySMS:(WCPayAuthenticationPayVerifySMSStruct *)arg1 PayStatus:(WCPayAuthenticationPayStatusStruct *)arg2 Error:(NSError *)arg3;
- (void)OnBindCardVerifyCard:(WCPayBindInfo *)arg1 Error:(NSError *)arg2;
- (void)OnBindCardVerifySMS:(WCPayBindInfoSMS *)arg1 Error:(NSError *)arg2;
- (void)OnCVVAndValidError:(NSString *)arg1;
- (void)OnCVVError:(NSString *)arg1;
- (void)OnChangeOfflinePayLimit:(WCPayOfflinePayChangeLimitFeeResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnCheckTransferMoneyStatus:(WCPayCheckTransferStatusResponse *)arg1 Error:(NSError *)arg2;
- (void)OnCheckWCPayJsApiRequest:(NSDictionary *)arg1 Error:(NSError *)arg2;
- (void)OnCloseOfflinePayResponse:(NSError *)arg1;
- (void)OnCommitWXCreditAnswer:(WCPayCreditPayCommitWXCreditAnswerResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnConfirmOfflinePayResponse:(NSDictionary *)arg1 transID:(NSString *)arg2 Error:(NSError *)arg3;
- (void)OnConfirmTransferMoney:(WCPayConfirmTransferResponse *)arg1 Error:(NSError *)arg2;
- (void)OnCreateOfflinePayResponse:(WCPayOfflinePayCreateResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnDelAllOrder:(NSError *)arg1;
- (void)OnDelOrder:(NSString *)arg1 Error:(NSError *)arg2;
- (void)OnEnterForeground;
- (void)OnEntranceStatusChanged;
- (void)OnGetAppAuthUrlErrorRequest:(PayAuthAppRequest *)arg1;
- (void)OnGetAppAuthUrlRequest:(NSString *)arg1 AppSource:(NSString *)arg2 PrepayId:(NSString *)arg3 CallBackUrl:(NSString *)arg4 Error:(NSError *)arg5;
- (void)OnGetAvailableBank:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnGetBalanceFetchRequest:(NSString *)arg1 ExtData:(NSDictionary *)arg2 Error:(NSError *)arg3;
- (void)OnGetBalanceSaveRequest:(NSString *)arg1 Error:(NSError *)arg2;
- (void)OnGetBankCardReddotData;
- (void)OnGetBankPackage:(Package *)arg1 Error:(NSError *)arg2;
- (void)OnGetBankResources:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnGetBarCodeFromQRCodeResponse:(NSString *)arg1 Error:(NSError *)arg2;
- (void)OnGetBindQueryInfo:(WCPayBindQueryUserInfoStruct *)arg1 Error:(NSError *)arg2;
- (void)OnGetBindingCardBin:(WCPayCardBinInfo *)arg1 AvailableBank:(NSArray *)arg2 userExInfoResponse:(WCPayGetUserExInfoCgiResponse *)arg3 Error:(NSError *)arg4;
- (void)OnGetBindingCardBin:(WCPayCardBinInfo *)arg1 Error:(NSError *)arg2;
- (void)OnGetCheckPayPwdByToken:(WCPayCheckPayPwdByTokenResponse *)arg1 Error:(NSError *)arg2;
- (void)OnGetCheckPayPwdVerifyCodeByToken:(WCPayCheckPayPwdVerifyTelCodeByTokenResponse *)arg1 Error:(NSError *)arg2;
- (void)OnGetFixedAmountQRCode:(WCPayTransferGetFixedAmountQRCodeResponse *)arg1 Error:(NSError *)arg2;
- (void)OnGetGenPaypreErrorRequest:(GenPrepayRequest *)arg1 ErrorMsg:(NSMutableDictionary *)arg2;
- (void)OnGetGenPaypreRequest:(NSString *)arg1 SessionID:(NSString *)arg2 AppSource:(NSString *)arg3;
- (void)OnGetHistoryIapOrderDetailInfo:(WCPayMultiOrderDetail *)arg1 Error:(NSError *)arg2;
- (void)OnGetHistoryOrderDetailInfo:(WCPayMultiOrderDetail *)arg1 Error:(NSError *)arg2;
- (void)OnGetHtml5WalletUrl:(WCPayQueryWalletResponse *)arg1 Error:(NSError *)arg2;
- (void)OnGetLQTReddotData;
- (void)OnGetLocalPayCardList:(NSArray *)arg1 UsrVerifiedInfo:(WCPayUserInfo *)arg2 SwicthInfo:(WCPaySwitchInfo *)arg3 BalanceInfo:(WCPayBalanceInfo *)arg4 NoticeInfo:(WCPayNoticeInfo *)arg5 loanEntryInfo:(WCPayLoanEntryInfo *)arg6 LqtInfo:(WCPayLQTInfo *)arg7;
- (void)OnGetMallPrepayRequest:(NSString *)arg1 AppSource:(NSString *)arg2 Error:(NSError *)arg3;
- (void)OnGetOrderDetailInfo:(WCPayMultiOrderDetail *)arg1 BindQueryInfo:(WCPayBindQueryUserInfoStruct *)arg2 Error:(NSError *)arg3;
- (void)OnGetOrderDetailInfo:(WCPayMultiOrderDetail *)arg1 Error:(NSError *)arg2;
- (void)OnGetOrderDetailInfoAfterPaidError:(WCPayAuthenticationPayStatusStruct *)arg1 Error:(NSError *)arg2;
- (void)OnGetOrderList:(NSArray *)arg1 TotalCount:(unsigned int)arg2 Error:(NSError *)arg3;
- (void)OnGetReceiveOrPayReddotData;
- (void)OnGetTenpaySecureCtrlSalt:(NSString *)arg1 Date:(NSDate *)arg2 Error:(NSError *)arg3;
- (void)OnGetTransferPrepayRequest:(WCPayTransferPrepayResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnGetTransferUserName:(WCPayTranferGetUserNameResponse *)arg1 Error:(NSError *)arg2;
- (void)OnGetWebPayOrderDetailInfo:(WCPayMultiOrderDetail *)arg1 BindQueryInfo:(WCPayBindQueryUserInfoStruct *)arg2 Error:(NSError *)arg3;
- (void)OnHandleSpecialPayError:(NSString *)arg1 ErrorType:(unsigned int)arg2;
- (void)OnHandleVerifiedSMSString:(NSString *)arg1;
- (void)OnHandleWCPayURL:(WCPayHandleWCPayURLResult *)arg1 Error:(NSError *)arg2;
- (void)OnLimitInsufficientError:(NSString *)arg1 ErrorMsg:(NSString *)arg2 ErrorType:(unsigned int)arg3;
- (void)OnLimitInsufficientError:(NSString *)arg1 ErrorType:(unsigned int)arg2;
- (void)OnModifyWCPayPassword:(NSString *)arg1 NewWCPayPassword:(NSString *)arg2 Error:(NSError *)arg3;
- (void)OnNotifyAddFacingReceiveMoneyPayerInfo:(WCPayFacingReceiveMoneyMessageStruct *)arg1;
- (void)OnNotifyFreezeOfflinePay:(NSString *)arg1 Error:(WCPayOfflinePayFreezeMessageStruct *)arg2;
- (void)OnNotifyOfflinePayConfirm:(WCPayOfflinePayConfirmMessageStruct *)arg1;
- (void)OnNotifyOfflinePayConfirm:(WCPayOfflinePayConfirmMessageStruct *)arg1 ReqKey:(NSString *)arg2;
- (void)OnNotifyOfflinePayConfirm:(WCPayOfflinePayConfirmMessageStruct *)arg1 ReqKey:(NSString *)arg2 TransId:(NSString *)arg3;
- (void)OnNotifyOfflinePayConfirmWithReqkey:(NSString *)arg1;
- (void)OnNotifyOfflinePaySuccess:(WCPayMultiOrderDetail *)arg1 Error:(NSError *)arg2;
- (void)OnNotifyOfflinePaySuccess:(WCPayMultiOrderDetail *)arg1 RealNameInfo:(WCPayRealnameGuideInfo *)arg2 Error:(NSError *)arg3;
- (void)OnNotifyOfflinePaySuccess:(WCPayMultiOrderDetail *)arg1 RealNameInfo:(WCPayRealnameGuideInfo *)arg2 ReqKey:(NSString *)arg3 Error:(NSError *)arg4;
- (void)OnNotifyOfflinePaySuccess:(WCPayMultiOrderDetail *)arg1 RealNameInfo:(WCPayRealnameGuideInfo *)arg2 ReqKey:(NSString *)arg3 TransId:(NSString *)arg4 Error:(NSError *)arg5;
- (void)OnNotifyOfflinePaySuccess:(WCPayMultiOrderDetail *)arg1 ReqKey:(NSString *)arg2 TransId:(NSString *)arg3 Error:(NSError *)arg4;
- (void)OnNotifyOfflinePayUserPaying:(NSString *)arg1;
- (void)OnNotifyOverseaAddFacingReceiveMoneyPayerInfo:(WCPayFacingReceiveMoneyMessageStruct *)arg1;
- (void)OnNotifyResutltOfOfflinePay:(NSString *)arg1 Error:(NSError *)arg2;
- (void)OnOfflinePayCerticationOuttimeError:(NSError *)arg1;
- (void)OnOfflinePayMsgNotify:(WCPayOfflinePayMessageStruct *)arg1;
- (void)OnOfflinePayTokenInfoUpdated:(_Bool)arg1;
- (void)OnOrderStatusButtonControl:(NSError *)arg1;
- (void)OnPayCgiErrorWithError:(NSError *)arg1;
- (void)OnPayCgiErrorWithErrorCode:(unsigned int)arg1;
- (void)OnPayNeedToSwitchToPasswordPay;
- (void)OnPayPasswordError:(NSString *)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)OnPaySubscribeServiceApp:(NSString *)arg1 Error:(NSError *)arg2;
- (void)OnPhoneNumberError:(NSString *)arg1;
- (void)OnQueryOfflinePayInfo:(WCPayOfflinePayQueryInfo *)arg1 LocalCached:(_Bool)arg2 Error:(NSError *)arg3;
- (void)OnQueryOfflinePayLimit:(WCPayOfflinePayQueryUserResponseStruct *)arg1 fromCache:(_Bool)arg2 Error:(NSError *)arg3;
- (void)OnQueryOrderNoRetryWhenPaidErrorWithErrorCode:(unsigned int)arg1;
- (void)OnQueryUserWallet:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnQueryWXCreditCardDetail:(WCPayCreditCardDetailInfo *)arg1 Error:(NSError *)arg2;
- (void)OnQueryWXCreditCardInfo:(WCPayCreditCardInfo *)arg1 Error:(NSError *)arg2;
- (void)OnQueryWXCreditQuestion:(WCPayCreditPayQueryQuestionResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnRealnameAuthen:(NSString *)arg1 Error:(NSError *)arg2;
- (void)OnRealnameReg:(NSError *)arg1;
- (void)OnRefuseTransferMoney:(WCPayRefuseTransferResponse *)arg1 Error:(NSError *)arg2;
- (void)OnRemoveVirtualCard:(NSError *)arg1;
- (void)OnResetWCPayPasswordVerifyCard:(WCPayResetPasswordInfo *)arg1 Error:(NSError *)arg2;
- (void)OnResetWCPayPasswordVerifySMS:(NSError *)arg1;
- (void)OnRetrySendTransferMessage:(WCPayRetrySendMsgResponse *)arg1 Error:(NSError *)arg2;
- (void)OnSendC2CSecureMessageResponseStatus:(WCPaySendC2CSecMsgResponse *)arg1 Error:(NSError *)arg2;
- (void)OnSetEvaluateOrder:(NSError *)arg1;
- (void)OnSetMainCard:(NSString *)arg1 Error:(NSError *)arg2;
- (void)OnSetUserWallet:(NSError *)arg1;
- (void)OnSetWCPayPasswordInBind:(NSError *)arg1;
- (void)OnSetWCPayPasswordInPay:(WCPayAuthenticationPayStatusStruct *)arg1 Error:(NSError *)arg2;
- (void)OnSetWCPayPasswordInReset:(NSError *)arg1;
- (void)OnShouldChangePayCardError:(NSString *)arg1 ErrorMsg:(NSString *)arg2 ErrorType:(unsigned int)arg3;
- (void)OnShouldChangePayCardError:(NSString *)arg1 ErrorType:(unsigned int)arg2;
- (void)OnSnsAuthenticationContinueToUseCashierDesk;
- (void)OnSnsAuthenticationPay:(WCPayAuthenticationPay *)arg1 PayStatus:(WCPayAuthenticationPayStatusStruct *)arg2 Error:(NSError *)arg3;
- (void)OnStatusChangedOrderListCountChanged:(unsigned int)arg1;
- (void)OnTenpayImportBindQuery:(NSArray *)arg1 AppInfo:(TenpayBindCardSubscribeAppInfo *)arg2 UsrVerifiedInfo:(WCPayUserInfo *)arg3 Error:(NSError *)arg4;
- (void)OnUnBindCard:(WCPayBindCardInfo *)arg1 Error:(NSError *)arg2;
- (void)OnUnbindCreditPay:(NSError *)arg1;
- (void)OnUnfreezeOfflinePay:(NSError *)arg1;
- (void)OnValidError:(NSString *)arg1;
- (void)OnVerifyCreditPayAndCreateCard:(WCPayCreditPayVerifyAndCreateCardResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnVerifyCreditPayPassword:(WCPayCreditPayVerifyPasswdResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnVerifyCreditPaySmsVerifyCode:(WCPayCreditPayVerifySMSCodeResponseStruct *)arg1 Error:(NSError *)arg2;
- (void)OnVerifyPayPassword:(NSError *)arg1;
- (void)OnVerifyPayPassword:(NSError *)arg1 andRetToken:(NSString *)arg2;
- (void)OnWCPayBaseRequestNoKnownError:(NSError *)arg1 TenPayCmdType:(int)arg2;
- (void)ReloadWallet;
- (void)RetryGetOrderDetailInfoAfterPaidError:(NSError *)arg1;
- (void)onNotifyOfflinePayRealNameBlock:(NSString *)arg1 Error:(NSError *)arg2;
- (void)onNotifyOfflinePayRealNameGuide:(WCPayRealnameGuideInfo *)arg1;
@end

