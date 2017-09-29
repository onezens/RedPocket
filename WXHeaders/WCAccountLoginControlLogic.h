//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "IMMFacebookMgrExt.h"
#import "WCAccountBackDeviceFirstViewControllerDelegate.h"
#import "WCAccountLoginFirstViewControllerDelegate.h"
#import "WCAccountLoginLastUserViewControllerDelegate.h"
#import "WCAccountMainLoginViewControllerDelegate.h"
#import "WCAccountManualAuthControlLogicDelegate.h"
#import "WCAccountSetPasswordViewControllerDelegate.h"
#import "WCAccountVerifyCodeHandlerDelegate.h"

@class NSString, VoicePrintHandler, WCAccountLoginLastUserViewController, WCAccountManualAuthControlLogic, WCAccountVerifyCodeHandler;

@interface WCAccountLoginControlLogic : WCAccountBaseControlLogic <IMMFacebookMgrExt, WCAccountLoginFirstViewControllerDelegate, WCAccountLoginLastUserViewControllerDelegate, WCAccountManualAuthControlLogicDelegate, WCAccountBackDeviceFirstViewControllerDelegate, WCAccountMainLoginViewControllerDelegate, WCAccountSetPasswordViewControllerDelegate, WCAccountVerifyCodeHandlerDelegate>
{
    _Bool m_bFromLogout;
    _Bool m_bNeverAutoStop;
    unsigned int m_uiPwdErrCount;
    WCAccountBaseControlLogic *m_subFBLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    _Bool m_bNeedSetPwd;
    unsigned int m_uiCurrentLoginType;
    WCAccountVerifyCodeHandler *m_verifyCodeHandler;
    VoicePrintHandler *m_VPHandler;
    WCAccountLoginLastUserViewController *m_lastUserVerifyVC;
}

- (void).cxx_destruct;
- (void)OnLoginVerifyOverLimit;
- (void)OnLoginVerifySucessWithRandomAuthKey:(id)arg1 andTicket:(id)arg2;
- (void)checkHavePwd;
- (void)checkStopLogic;
- (void)jumpToManulLoginControlMgrToRegister:(id)arg1;
- (void)loginAccount:(_Bool)arg1;
- (void)login_but_registerForPhone;
- (void)onFacebookConnect;
- (void)onFirstViewLogin;
- (void)onFirstViewRegester;
- (void)onGoToSecurityCenter:(unsigned int)arg1;
- (void)onHandlerCheckLoginVerifyCode:(id)arg1 ticket:(id)arg2 controlShowFlag:(unsigned int)arg3 userName:(id)arg4 password:(id)arg5 StyleKeyValue:(id)arg6;
- (void)onHandlerGetVerifyCodeSuccessWithStyleKeyValue:(id)arg1;
- (void)onIpadOneKeyLoginByQQ;
- (void)onLastUserBack;
- (void)onLastUserChangeAccount:(id)arg1;
- (void)onLastUserChangeAccountWithView:(id)arg1;
- (void)onLastUserGoToHelpCenter:(id)arg1;
- (void)onLastUserGoToSecurityCenter:(id)arg1;
- (void)onLastUserLoginByQRCode;
- (void)onLastUserLoginUserName:(id)arg1 Pwd:(id)arg2;
- (void)onLastUserProblem:(id)arg1;
- (void)onLastUserRegister;
- (void)onLastUserUseBothDevice;
- (void)onLastUserVerifyFirstTime:(_Bool)arg1;
- (void)onLastUserVerifyNextWithVerifyCode:(id)arg1;
- (void)onLastUserVoicePrintLogin:(id)arg1;
- (void)onLoginByPhone;
- (void)onLoginByQQ;
- (void)onLoginByQRCode;
- (void)onLoginByQRCodeWithOneClickDisconnect;
- (void)onMainLoginBack;
- (void)onMainLoginFacebookConnect;
- (void)onMainLoginGotoSecurityCenter;
- (void)onMainLoginNext:(id)arg1 phoneNumber:(id)arg2;
- (void)onMainLoginProblem;
- (void)onMainLoginUseBothDevice;
- (void)onMainLoginUserName:(id)arg1 Pwd:(id)arg2;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)onOneClickLoginGoToHelpCenter;
- (void)onOneClickLoginGoToSecurityCenter;
- (void)onOneClickLoginProblem;
- (void)onOneClickLoginSwitchAccount;
- (void)onSelectUserInfo:(id)arg1;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)onUseBothDevice;
- (void)onUseIPadOnly;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)pause;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2 shouldHideNavBar:(_Bool)arg3;
- (void)startIPadLoginLogic;
- (void)startIPhoneLoginLogic;
- (void)startLogic;
- (void)stopLogic;
- (void)true_login_but_registerForPhone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
