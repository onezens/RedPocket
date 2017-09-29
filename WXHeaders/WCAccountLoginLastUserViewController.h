//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "IMMLanguageMgrExt.h"
#import "WCActionSheetDelegate.h"

@class NSArray, NSMutableArray, NSString, UIButton, UILabel, UIView, WCAccountTextFieldItem, WCBaseKeyboardToolBar;

@interface WCAccountLoginLastUserViewController : WCAccountBaseViewController <IMMLanguageMgrExt, WCActionSheetDelegate>
{
    WCBaseKeyboardToolBar *m_keyboardBar;
    UILabel *m_labelUserName;
    UILabel *m_labelPhoneNumber;
    UIView *m_passwordView;
    UIView *m_passwordNeedAnimationView;
    WCAccountTextFieldItem *m_textFieldPwdItem;
    UIView *m_passwordSeparatorLine;
    UIButton *m_passwordSwitchAccountBtn;
    UIButton *m_passwordLoginBtn;
    UIView *m_verifyCodeView;
    UIView *m_verifyCodeNeedAnimationView;
    WCAccountTextFieldItem *m_textFieldVerifyCodeItem;
    UIButton *m_resendCodeBtn;
    UIView *m_verifyCodeSeparatorLine;
    UIButton *m_verifyCodeSwitchAccountBtn;
    UIButton *m_verifyCodeLoginBtn;
    UIView *m_voicePrintView;
    UIButton *m_voicePrintLoginBtn;
    UIButton *m_voiceSwitchAccountBtn;
    id <WCAccountLoginLastUserViewControllerDelegate> m_delegate;
    NSString *m_nsName;
    long long m_iCountDown;
    _Bool m_bFirstLoop;
    NSMutableArray *m_availableLoginTypeArr;
    long long m_currentLoginType;
    NSArray *m_accountChangeLoginTypeWording;
    _Bool m_bInAnimation;
    long long m_uiLastLoginType;
    long long _m_iCount;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustTableViewRect;
- (void)adjustViewAndNavBarRect;
- (id)createHeadImgView;
- (id)createPwdInputView:(id)arg1;
- (id)createVoicePrintLoginBtn;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)getDisplayLoginName;
- (id)getDisplayPhoneNumber;
- (id)getSwitchBtnTitleWithCurrentLoginType:(unsigned long long)arg1;
- (double)getVisibleHeight;
- (void)hideKeyBoard;
- (id)init;
- (void)initData;
- (void)initFooterView;
- (void)initHeaderView;
- (void)initNavigationBar;
- (void)initPasswordView;
- (void)initVerifyCodeView;
- (void)initVoicePrintView;
- (_Bool)isLastLoginAcountTypePhone;
- (_Bool)isLastQQLogin;
@property(nonatomic) long long m_iCount; // @synthesize m_iCount=_m_iCount;
- (void)onBothDeviceClicked;
- (void)onLastUserVoicePrintLogin;
- (void)onMore:(id)arg1;
- (void)onNext;
- (void)onResendClicked;
- (void)onSwitch;
- (void)onSwitchPwdInput;
- (void)setDelegate:(id)arg1;
- (void)startTimer;
- (void)switchEaseInOutToType:(long long)arg1;
- (void)updateSendVerifyCodeButton;
- (_Bool)useGrayBackgroundColor;
- (void)vcResignFirstResponder;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
