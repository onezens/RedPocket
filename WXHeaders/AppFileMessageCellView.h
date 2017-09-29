//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "UIAlertViewDelegate.h"

@class AppFileMessageViewModel, AppFileNodeProgressView, NSString, UIImageView, UILabel;

@interface AppFileMessageCellView : CommonMessageCellView <UIAlertViewDelegate>
{
    int m_uiStatus;
    UILabel *m_titleLabel;
    UILabel *m_detailLabel;
    UIImageView *m_thumbImageView;
    AppFileNodeProgressView *m_fileProgressView;
}

- (void).cxx_destruct;
- (id)displayViewForImageBrowser;
- (void)initDetailLabel;
- (void)initThumbImageView;
- (void)initTitleLabel;
- (void)layoutContentView;
- (void)onAppear;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)updateStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppFileMessageViewModel *viewModel; // @dynamic viewModel;

@end

