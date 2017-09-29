//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "WCAccountManualAuthControlLogicDelegate.h"
#import "WCAccountNewPhoneVerifyViewControllerDelegate.h"
#import "WCAccountSetPasswordViewControllerDelegate.h"
#import "WCAccountVerifyCodeHandlerDelegate.h"

@class NSString, PhoneNumberFormatLogic, WCAccountManualAuthControlLogic, WCAccountNewPhoneVerifyViewController, WCAccountVerifyCodeHandler;

@interface WCAccountNewPhoneLoginControlLogic : WCAccountBaseControlLogic <WCAccountNewPhoneVerifyViewControllerDelegate, WCAccountManualAuthControlLogicDelegate, WCAccountSetPasswordViewControllerDelegate, WCAccountVerifyCodeHandlerDelegate>
{
    WCAccountVerifyCodeHandler *_verifyCodeHandler;
    WCAccountManualAuthControlLogic *_manualAuthLogic;
    _Bool _bNeedSetPwd;
    PhoneNumberFormatLogic *_phoneNumFormatter;
    WCAccountNewPhoneVerifyViewController *_currentVC;
}

- (void).cxx_destruct;
- (void)checkHavePwd;
- (id)initWithData:(id)arg1;
- (void)jumpToManulLoginControlMgrToRegister:(id)arg1;
- (void)loginAccount;
- (void)loginForPhone;
- (void)login_but_registerForPhone;
- (void)onGoToSecurityCenter:(unsigned int)arg1;
- (void)onHandlerCheckLoginVerifyCode:(id)arg1 ticket:(id)arg2 controlShowFlag:(unsigned int)arg3 userName:(id)arg4 password:(id)arg5 StyleKeyValue:(id)arg6;
- (void)onHandlerGetVerifyCodeSuccessWithStyleKeyValue:(id)arg1;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)onNewPhoneVerifyBack;
- (void)onNewPhoneVerifyFirstTime:(_Bool)arg1;
- (void)onNewPhoneVerifyGotoSecurityCenter;
- (void)onNewPhoneVerifyNextWithPwd:(id)arg1;
- (void)onNewPhoneVerifyNextWithVerifyCode:(id)arg1;
- (void)onNewPhoneVerifyProblem;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)startLogic;
- (void)true_login_but_registerForPhone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
