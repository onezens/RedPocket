//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullScreenViewController.h"

#import "ForwardMessageLogicDelegate.h"
#import "FullScreenGestureDelegate.h"
#import "IUiUtilExt.h"
#import "SightViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class FavoritesItem, FavoritesItemDataField, ForwardMessageLogicController, MMUIViewController, NSString, SightView, UIImageView, UIView, WXFullScreenGestureRecognizer;

@interface WNSightViewController : FullScreenViewController <SightViewDelegate, IUiUtilExt, FullScreenGestureDelegate, ForwardMessageLogicDelegate, WCActionSheetDelegate>
{
    MMUIViewController *_fullScreenWindow;
    UIView *_nodeView;
    UIView *_fullScreenContent;
    SightView *_sightView;
    _Bool _fullScreenPlaying;
    UIImageView *_thumbImageView;
    struct CGRect _thumbRect;
    WXFullScreenGestureRecognizer *m_gestureReconizer;
    _Bool m_bPreventRotate;
    CDStruct_1b6d18a9 m_currentPlayTime;
    ForwardMessageLogicController *m_forwardMsgLogic;
    FavoritesItemDataField *_favData;
    FavoritesItem *_favItem;
    _Bool silencePlay;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (double)calTransformFromRect:(struct CGRect)arg1;
- (_Bool)checkDownloadForOperateMode:(unsigned int)arg1;
- (void)clearSubviews;
- (void)dealloc;
- (id)getCurrentViewController;
- (void)initGestures;
- (void)initWithWNSight:(id)arg1 FavoritesItem:(id)arg2 superWindow:(id)arg3 thumbView:(id)arg4 nodeView:(id)arg5;
- (_Bool)isFullScreenPlaying;
- (void)onFullScreenBackgroupColorAlphaChange:(double)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenSingleTap;
- (void)onShowSightAction;
@property(nonatomic) _Bool silencePlay; // @synthesize silencePlay;
- (void)setThumbImage:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)showVCAnimation;
- (void)startLoadFullDownloadView;
- (void)stopAndCloseFullScreenWindow;
- (void)trySendSightToFriend;
- (void)tryToSaveVideoToAlbum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

