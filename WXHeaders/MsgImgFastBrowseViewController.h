//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMsgExt.h"
#import "IVideoExt.h"
#import "MsgDataSaveLogicDelegate.h"
#import "MsgFastBrowseViewDelegate.h"
#import "MsgImgDataLogicDelegate.h"
#import "MsgImgFullScreenViewControllerDelegate.h"
#import "MsgImgFullScreenWindowDelegate.h"
#import "MsgNewImgDataLogicDelegate.h"
#import "MultiSelectContollerDelegate.h"
#import "ViewAppMsgControllerDelegate.h"
#import "WCActionSheetDelegate.h"

@class CMessageWrap, MsgDataSaveLogic, MsgFastBrowseView, MsgImgFullScreenWindow, MsgNewImgDataLogic, MultiSelectController, NSMutableSet, NSString, UIButton, UIView, ViewAppMsgController;

@interface MsgImgFastBrowseViewController : MMUIViewController <MsgImgFullScreenWindowDelegate, MsgFastBrowseViewDelegate, MultiSelectContollerDelegate, MsgImgDataLogicDelegate, IMsgExt, MsgDataSaveLogicDelegate, MsgImgFullScreenViewControllerDelegate, ViewAppMsgControllerDelegate, WCActionSheetDelegate, MsgNewImgDataLogicDelegate, IVideoExt>
{
    id <MsgImgFastBrowseViewControllerDelegate> m_delegate;
    MsgFastBrowseView *m_msgFastBrowseView;
    MsgImgFullScreenWindow *m_imgFullScreenWnd;
    UIView *m_filterFooterView;
    UIButton *m_forwardBtn;
    UIButton *m_favBtn;
    UIButton *m_deleteBtn;
    UIButton *m_saveBtn;
    _Bool m_bEditing;
    MultiSelectController *m_multiSelectController;
    MsgNewImgDataLogic *m_newDataLogic;
    _Bool m_bHasLoadData;
    ViewAppMsgController *m_viewAppMsgController;
    MsgDataSaveLogic *m_MsgDataSaveLogic;
    NSMutableSet *m_arrMsgExpired;
    _Bool m_bHighlightCurrentImage;
    CMessageWrap *m_curMsgWrap;
    NSString *m_nsChatName;
    double m_scrollOffset;
    unsigned long long m_eFilterType;
}

- (void).cxx_destruct;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnVideoThumbDidChange:(id)arg1;
- (void)PreviewImage:(id)arg1 MsgSquareThumb:(id)arg2;
- (void)addFilterFooterView:(id)arg1;
- (id)createBtnWithImg:(id)arg1 HLImg:(id)arg2 sel:(SEL)arg3;
- (void)dealloc;
- (void)doDelete;
- (id)expiredMsgForMsgFastBrowseView:(id)arg1;
- (id)getCurrentViewController;
- (id)getMsgFrom:(id)arg1;
- (id)getSelectArray;
- (id)getViewController;
- (void)initData;
- (void)initFilterFooterView;
- (void)initNavBar;
- (void)initView;
- (id)initWithMsgWrap:(id)arg1;
- (void)jumpToDetail:(id)arg1;
@property(nonatomic) _Bool m_bHighlightCurrentImage; // @synthesize m_bHighlightCurrentImage;
@property(retain, nonatomic) CMessageWrap *m_curMsgWrap; // @synthesize m_curMsgWrap;
@property(nonatomic) __weak id <MsgImgFastBrowseViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned long long m_eFilterType; // @synthesize m_eFilterType;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(nonatomic) double m_scrollOffset; // @synthesize m_scrollOffset;
- (_Bool)messageWrapMatchAll:(id)arg1;
- (_Bool)messageWrapMatchFile:(id)arg1;
- (_Bool)messageWrapMatchImage:(id)arg1;
- (_Bool)messageWrapMatchVideo:(id)arg1;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (_Bool)msgFastBrowseView:(id)arg1 willChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (void)onCancel;
- (void)onDel;
- (void)onEdit;
- (void)onFav;
- (void)onForward;
- (void)onForwardMessageOK;
- (void)onImgMsgLocate:(id)arg1 vc:(id)arg2;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onMsgDataSaveLogicEnd:(_Bool)arg1 expiredMsgs:(id)arg2;
- (void)onMsgFastBrowseViewGetMoreMsg:(id)arg1 Last:(_Bool)arg2 Next:(_Bool)arg3;
- (_Bool)onMsgImgDataMatch:(id)arg1;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (_Bool)onMsgNewImgLogicDataMatch:(id)arg1;
- (void)onMultiOprationComplete;
- (void)onPlayAttachVideo:(id)arg1 vc:(id)arg2;
- (void)onSave;
- (void)onSightViewDetail:(id)arg1 vc:(id)arg2;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (void)previewImage:(id)arg1 originFrame:(struct CGRect)arg2;
- (void)updateEditView;
- (void)updateFilterFooterView;
- (_Bool)useBlackStatusbar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillPop:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
