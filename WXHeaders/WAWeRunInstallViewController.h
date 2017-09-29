//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "contactVerifyLogicDelegate.h"

@class CContact, CContactVerifyLogic, MMHeadImageView, MMUILabel, NSString, UIButton, UIImageView, UIScrollView, UIView;

@interface WAWeRunInstallViewController : MMUIViewController <contactVerifyLogicDelegate>
{
    CContact *m_weSportContact;
    NSString *m_nsWeappName;
    CDUnknownBlockType m_callBack;
    CContactVerifyLogic *m_oLogic;
    UIScrollView *_backgroundScrollView;
    UIView *m_headerView;
    MMHeadImageView *m_headImgView;
    MMUILabel *m_displayNameLabel;
    UIView *m_statusView;
    MMUILabel *m_statusLabel;
    UIImageView *m_statusImgView;
    UIView *m_descView;
    UIView *m_separateLine;
    MMUILabel *m_descTitleLabel;
    UIView *m_descTipsIcon;
    MMUILabel *m_descTipsLabel;
    UIButton *m_installBtn;
    _Bool bIsClosed;
}

- (void).cxx_destruct;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned int)arg2;
- (void)dealloc;
- (void)handleAddedContact;
- (id)initWithContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installPlugin;
- (void)layoutDescView;
- (void)layoutFooterView;
- (void)layoutHeaderView;
@property(copy, nonatomic) NSString *m_nsWeappName; // @synthesize m_nsWeappName;
- (void)onCloseModalView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

