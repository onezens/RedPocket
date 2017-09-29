//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IOplogExt.h"
#import "PBMessageObserverDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "WCPayF2FQrcodeCgiDelegate.h"
#import "WCPayFacingReceiveFixedAmountViewControllerDelegate.h"
#import "WCPayFacingReceiveQRCodeViewControllerDelegate.h"

@class NSString, WCPayF2FQrcodeCgi;

@interface WCPayFacingReceiveContorlLogic : WCPayControlLogic <UIViewControllerTransitioningDelegate, PBMessageObserverDelegate, IOplogExt, WCPayF2FQrcodeCgiDelegate, WCPayFacingReceiveQRCodeViewControllerDelegate, WCPayFacingReceiveFixedAmountViewControllerDelegate>
{
    NSString *m_nsFacingAmountTotalMoney;
    NSString *m_nsFacingAmountDesc;
    _Bool _m_isSoundOn;
    _Bool _m_bHasReportBottomDetailItem;
    WCPayF2FQrcodeCgi *_m_getQRCodeCgi;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetFixedAmountQRCode:(id)arg1 Error:(id)arg2;
- (void)OnNotifyAddFacingReceiveMoneyPayerInfo:(id)arg1;
- (void)VerifyUserInfo;
- (void)WCPayFacingReceiveChangeToFixedAmount;
- (void)WCPayFacingReceiveChangeToUnFixedAmount;
- (void)WCPayFacingReceiveFixedAmountViewControllerCancel:(_Bool)arg1;
- (void)WCPayFacingReceiveFixedAmountViewControllerNext:(id)arg1 Description:(id)arg2;
- (id)WCPayFacingReceiveGetOfflineLogo;
- (id)WCPayFacingReceiveGetOfflineSlogan;
- (void)WCPayFacingReceiveNoTruthNameBtnDone;
- (void)WCPayFacingReceiveQRCodeViewControllerCancel;
- (void)WCPayFacingReceiveSaveQRCodeImage;
- (void)WCPayFacingReceiveSaveQRCodeImageFromAlert;
- (void)WCPayFacingReceiveSettingSoundSwicthState:(_Bool)arg1;
- (void)WCPayFacingReceiveViewReceiveDetail;
- (void)WCPayFacingReceiveWitchBalance;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
- (void)handleSyncOplogFail;
- (void)handleSyncOplogSuccess;
- (id)initWithData:(id)arg1;
@property(nonatomic) _Bool m_bHasReportBottomDetailItem; // @synthesize m_bHasReportBottomDetailItem=_m_bHasReportBottomDetailItem;
@property(retain, nonatomic) WCPayF2FQrcodeCgi *m_getQRCodeCgi; // @synthesize m_getQRCodeCgi=_m_getQRCodeCgi;
@property(nonatomic) _Bool m_isSoundOn; // @synthesize m_isSoundOn=_m_isSoundOn;
- (void)onGetF2FQrcode:(id)arg1;
- (void)onGetF2FQrcodeError:(long long)arg1 errorMsg:(id)arg2;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)pause;
- (void)playVibration;
- (void)resume;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

