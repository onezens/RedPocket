//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullScreenViewController.h"

#import "EditImageForwardAndEditLogicDelegate.h"
#import "ForwardMessageLogicDelegate.h"
#import "IVOIPUILogicMgrExt.h"
#import "MMExposeViewControllerDelegate.h"
#import "ShareDataToOpenSDKControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCImageFullScreenViewContainerDelegate.h"
#import "WCPayControlMgrExt.h"
#import "WCShareAuthViewControllerExt.h"
#import "scrollViewDelegate.h"

@class EditImageForwardAndEditLogicController, ForwardMessageLogicController, MMScrollView, NSArray, NSMutableArray, NSString, ShareDataToOpenSDKController, UIPageControl, UIView;

@interface WCImageFullScreenViewController : FullScreenViewController <UIScrollViewDelegate, scrollViewDelegate, WCImageFullScreenViewContainerDelegate, IVOIPUILogicMgrExt, MMExposeViewControllerDelegate, ShareDataToOpenSDKControllerDelegate, ForwardMessageLogicDelegate, WCShareAuthViewControllerExt, EditImageForwardAndEditLogicDelegate, WCPayControlMgrExt>
{
    UIView *m_fakeScreenView;
    NSArray *m_arrOriginView;
    struct CGRect m_originImageRectInScreen;
    _Bool m_isAnimating;
    MMScrollView *m_scrollView;
    UIPageControl *m_pageCtrl;
    UIView *m_blackMask;
    NSArray *m_arrMediaDataWrap;
    NSArray *m_arrMediaData;
    NSMutableArray *m_arrImage;
    unsigned int m_iCurIndex;
    _Bool m_hasScroll;
    long long m_lastDeviceOrientation;
    _Bool m_isAnimationShowing;
    _Bool m_isRotating;
    _Bool m_forbidPreloadImg;
    ShareDataToOpenSDKController *m_shareDataToOpenSDKController;
    ForwardMessageLogicController *m_forwardMsgLogic;
    unsigned int _startTime;
    EditImageForwardAndEditLogicController *m_editImageLogicController;
    _Bool m_isAllowRotate;
    id <WCImageFullScreenViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)animationHideStop;
- (void)animationHideWithRotate;
- (void)captureScreen;
- (void)clearStatus;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)downloadImage;
- (id)getCurMediaItemWrap;
- (id)getCurrentViewController;
- (id)getVisibleViewController;
- (void)hideWithoutAnimation;
- (_Bool)isContainerVisible:(id)arg1;
@property(nonatomic) __weak id <WCImageFullScreenViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned int m_iCurIndex; // @synthesize m_iCurIndex;
- (void)onAnimateFadeOut;
- (double)onBeforeForwardMessageAndReturnDelayTime:(id)arg1;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationShowStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerDidZoomWithScale:(double)arg1 andIndex:(unsigned int)arg2;
- (void)onDismissEditView;
- (void)onExposeCancel;
- (void)onExposeComplete;
- (void)onExposeWithDataItem:(id)arg1;
- (void)onForwardMessageCancelInEditView;
- (void)onForwardMessageSendOKInEditView;
- (id)onGetViewController;
- (void)onLongPressedAddFav:(id)arg1;
- (void)onLongPressedEditImage:(id)arg1 atPath:(id)arg2 withFavItem:(id)arg3 editAtFirst:(_Bool)arg4;
- (void)onLongPressedWithMediaItem:(id)arg1;
- (void)onPushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)onShareDataToOpenSDKCancel;
- (void)onShareToOpenSDKWithDataItem:(id)arg1 mediaItem:(id)arg2;
- (void)onShowingEditView;
- (void)onTopBarFrameChanged;
- (void)onTryHideWCImageFullScreen;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onWindowHide;
- (void)resetScrollView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setMediaDataArray:(id)arg1 mediaDataWrapArray:(id)arg2 originView:(id)arg3 index:(unsigned int)arg4 needEdit:(_Bool)arg5;
- (void)setMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 needEdit:(_Bool)arg4;
- (_Bool)shouldAutorotate;
- (_Bool)shouldHideContainerOnRotate;
- (void)shouldHideFullScreenForWCPay;
- (_Bool)shouldRotateToInterfaceOrientation:(long long)arg1;
- (void)showVCAnimation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

