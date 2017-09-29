//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "CNetworkStatusExt.h"
#import "IChatMigrationServerExt.h"
#import "UIAlertViewDelegate.h"

@class MMUILabel, NSString, UIActivityIndicatorView, UIButton, UIImageView, UIView, WXGDotDotDotLabel;

@interface WXGMigrationServerEntryViewController : MMWindowViewController <IChatMigrationServerExt, UIAlertViewDelegate, CNetworkStatusExt>
{
    UIView *m_backgroundView;
    UIView *m_barLine;
    UIButton *m_leftTopCornerButton;
    UIImageView *m_iconImageView;
    UIActivityIndicatorView *m_QRCLoadingView;
    MMUILabel *m_tipsLabel;
    MMUILabel *m_smallTipsLabel;
    MMUILabel *m_titleInGBPLable;
    UIButton *m_greenButton;
    unsigned long long m_notifyCode;
    unsigned long long m_childNotifyCode;
    WXGDotDotDotLabel *m_dotDotDotLabel;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    NSString *m_speedString;
    int m_retryGetQRCodeTimes;
    id <WXGMigrationServerEntryViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <WXGMigrationServerEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)onAlertCancelQuickMigration;
- (void)onAlertCancelQuickMigrationAndTimeSelect;
- (void)onAlertCancelTimeSelect;
- (void)onCloseView;
- (void)onCloseViewAndShowAlert;
- (void)onGetQRCodeImg:(id)arg1;
- (void)onMigrationCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onMigrationServerAlertCode:(unsigned long long)arg1;
- (void)onMigrationServerNotifyCode:(unsigned long long)arg1;
- (void)onMigrationServerTransferSpeed:(float)arg1;
- (void)onMinimizeView;
- (void)p_addBlurEffectForView;
- (void)p_addGreenButton;
- (void)p_addIconImageView;
- (void)p_addLeftCornerButton;
- (void)p_addLine;
- (void)p_addSmallTipsLabel;
- (void)p_addTipsLabel;
- (void)p_makeFakeQRCodeView;
- (void)p_refreshQRCode;
- (void)p_resetIconImageViewWithImage:(id)arg1;
- (void)p_setupView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

