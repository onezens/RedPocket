//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMActivityIndicator, UIButton, UILabel;

@interface RecoverPermissionViewController : MMUIViewController
{
    int m_percent;
    MMActivityIndicator *m_loadingView;
    UILabel *m_loadingTip;
    UIButton *m_goBackButton;
}

- (void).cxx_destruct;
- (void)onGoBackButtonClicked:(id)arg1;
- (void)resetProtectionOnFile:(const char *)arg1;
- (void)resetProtectionOnPath:(const char *)arg1;
- (void)startFakeLoadingToProgress:(int)arg1;
- (void)updateProgress:(unsigned int)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

