//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCBaseControlLogicDeleagte.h"
#import "WCPayBizF2FActQryCgiDelegate.h"
#import "WCPayBizF2FPaidSuccViewControllerDelegate.h"
#import "WCPayBizF2FPayCheckCgiDelegate.h"
#import "WCPayBizF2FPayOkCgiDelegate.h"
#import "WCPayBizF2FPlaceOrderCgiDelegate.h"
#import "WCPayBizF2FTransferMoneyViewControllerDelegate.h"
#import "WCPayPayMoneyLogicDelegate.h"

@class NSString, WCPayBizF2FActQryCgi, WCPayBizF2FPayCheckCgi, WCPayBizF2FPayOkCgi, WCPayBizF2FPlaceOrderCgi, WCPayPayMoneyLogic;

@interface WCPayBizF2FTransferControlLogic : WCPayControlLogic <WCPayBizF2FTransferMoneyViewControllerDelegate, WCPayBizF2FPaidSuccViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCPayBizF2FPlaceOrderCgiDelegate, WCPayBizF2FPayOkCgiDelegate, WCPayBizF2FActQryCgiDelegate, WCPayBizF2FPayCheckCgiDelegate, WCBaseControlLogicDeleagte>
{
    _Bool _bHasPaySucc;
    id <WCPayBizF2FTransferControlLogicDelegate> _bizF2FLogicDelagte;
    WCPayBizF2FPlaceOrderCgi *_placeOrderCgi;
    WCPayBizF2FPayOkCgi *_payOkCgi;
    WCPayBizF2FPayCheckCgi *_payCheckCgi;
    WCPayBizF2FActQryCgi *_actQryCgi;
    WCPayPayMoneyLogic *_payMoneyLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBizF2FActQryCgi *actQryCgi; // @synthesize actQryCgi=_actQryCgi;
@property(nonatomic) _Bool bHasPaySucc; // @synthesize bHasPaySucc=_bHasPaySucc;
@property(nonatomic) __weak id <WCPayBizF2FTransferControlLogicDelegate> bizF2FLogicDelagte; // @synthesize bizF2FLogicDelagte=_bizF2FLogicDelagte;
- (void)dealloc;
- (_Bool)gotoViewController:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)onBizF2FPaidSuccViewControllerClickActivityBtn;
- (void)onBizF2FPaidSuccViewControllerDoneBtnClick;
- (void)onBizF2FPaidSuccViewControllerQueryActivity;
- (void)onBizTransferMoneyTransferBtnClickWithAmount:(unsigned int)arg1 payerComment:(id)arg2;
- (void)onBizTransferMoneyViewControllerBack;
- (void)onGetBizF2FActQryResp:(id)arg1;
- (void)onGetBizF2FPayOkResp:(id)arg1;
- (void)onGetBizF2FPlaceOrderResp:(id)arg1;
- (void)onGetF2FPayCheckCgiResp:(id)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)onPayMoneyLogicSuccess;
@property(retain, nonatomic) WCPayBizF2FPayCheckCgi *payCheckCgi; // @synthesize payCheckCgi=_payCheckCgi;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(retain, nonatomic) WCPayBizF2FPayOkCgi *payOkCgi; // @synthesize payOkCgi=_payOkCgi;
- (void)placeOrderAlertRightBtnClick;
@property(retain, nonatomic) WCPayBizF2FPlaceOrderCgi *placeOrderCgi; // @synthesize placeOrderCgi=_placeOrderCgi;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
