//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt.h"
#import "TransitioningAnimationDelegate.h"
#import "whatsnewViewDelegateEx.h"

@class CrossfadeAnimationController, MMTableViewInfo, NSString, PhoneNumberFormatLogic, UILabel, WCOutWhatsNewViewController;

@interface SettingAboutMMViewController : MMUIViewController <whatsnewViewDelegateEx, TransitioningAnimationDelegate, ILinkEventExt>
{
    MMTableViewInfo *m_tableViewInfo;
    UILabel *m_labelProduct;
    _Bool m_bFullVersion;
    _Bool m_bFromSetting;
    WCOutWhatsNewViewController *m_whatsNewViewController;
    CrossfadeAnimationController *m_transitionInstance;
    PhoneNumberFormatLogic *m_phoneNumFormatter;
}

- (void).cxx_destruct;
- (void)ShowWhatsNew;
- (void)dealloc;
- (id)getHeaderView;
- (id)init;
- (void)onAboutVersion;
- (void)onLaw;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)reloadData;
- (void)showRate;
- (void)showSystemNotice;
- (void)showUpdate;
- (void)showWhatsNewEnd;
- (void)showWhatsNewWillEnd;
- (void)updateProduct;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
