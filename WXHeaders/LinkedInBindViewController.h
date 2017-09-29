//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMWebViewDelegate.h"
#import "PBMessageObserverDelegate.h"

@class MMTableViewInfo, NSDictionary, NSString;

@interface LinkedInBindViewController : MMUIViewController <PBMessageObserverDelegate, MMWebViewDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    int m_uiScene;
    NSDictionary *m_dicParams;
    _Bool m_bSwitch;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)doUnBind;
- (id)getDicLinkedInID;
- (id)getDicLinkedInName;
- (id)getDicLinkedInUrl;
- (id)getSelfLinkedInID;
- (id)getSelfLinkedInName;
- (id)getSelfLinkedInUrl;
- (id)init;
- (void)initBindedView:(id)arg1;
- (void)initHeaderView:(id)arg1 Margin:(double)arg2;
- (void)initQRCodeResultView;
- (void)initUnbindView;
- (void)onBind;
- (void)onCancel;
- (void)onConfirm;
- (void)onQRCodeBind;
- (void)onShowLinkedInSwitch:(id)arg1;
- (void)onShowLinkedInSwitchQRcode:(id)arg1;
- (void)onUnBind;
- (void)onWebViewWillClose:(id)arg1;
- (void)setFromScene:(int)arg1;
- (void)setParams:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

