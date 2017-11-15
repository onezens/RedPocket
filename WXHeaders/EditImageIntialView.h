//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "EditImageCropToolBarDelegate.h"
#import "EditImageEmotionToolAttrDelegate.h"
#import "EditImageMosaicToolAttrDelegate.h"
#import "EditImageOperationDelegate.h"
#import "EditImagePenToolAttrDelegate.h"
#import "IMMAssetICloudExt.h"
#import "IUiUtilExt.h"
#import "UIGestureRecognizerDelegate.h"

@class EditImageCropGridView, EditImageCropOverlayView, EditImageCropToolBarView, EditImageEmotionToolAttrView, EditImageMosaicToolAttrView, EditImagePenToolAttrView, EditImageScrollView, MMTimer, MMUIImageView, NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel, UIPanGestureRecognizer, UIView;

@interface EditImageIntialView : MMUIView <EditImageEmotionToolAttrDelegate, EditImageCropToolBarDelegate, UIGestureRecognizerDelegate, EditImageOperationDelegate, EditImagePenToolAttrDelegate, EditImageMosaicToolAttrDelegate, IUiUtilExt, IMMAssetICloudExt>
{
    _Bool m_hasClickEditButton;
    UIView *_topEditImageBar;
    MMUIImageView *_topBackgroundView;
    UIView *_bottomEditImageBar;
    MMUIImageView *_bottomBackgroundView;
    EditImagePenToolAttrView *_penAttrBar;
    EditImageMosaicToolAttrView *_mosaicAttrBar;
    EditImageEmotionToolAttrView *_emotionAttrView;
    UIView *_topGradientBar;
    UIView *_topGradientBar2;
    UIImageView *_gradientBgView;
    UIButton *_undoBtn;
    UIButton *_toolBtn;
    UIView *_toolsBarView;
    UIButton *_redoBtn;
    UIButton *_penBtn;
    UIButton *_mosaicBtn;
    UIButton *_textBtn;
    UIButton *_emotionBtn;
    UIButton *_cropBtn;
    UIButton *_cancelBtn;
    UIButton *_doneBtn;
    unsigned int fromScene;
    unsigned int fromEntrance;
    _Bool _hasDisplayImage;
    _Bool _hasOriginalImage;
    double _iCloudDownloadProgress;
    _Bool _bIsiCloudImage;
    NSMutableArray *_tmpSaveDrawLayerArray;
    UIView *_iCloudMaskView;
    UILabel *_iCloudProgressLabel;
    UIView *_iCloudBarBackgroundView;
    UIImageView *_iCloudImage;
    _Bool _bHasAbort;
    _Bool _bUseOriginalImage;
    UIImage *_saveOriginalImage;
    _Bool _isAnimating;
    _Bool _isToolBarOccupy;
    _Bool _isCropOver;
    _Bool _isCropStartAnimationReady;
    _Bool _isAnimateEnable;
    _Bool _isRotating;
    _Bool _isRotationIconLocked;
    _Bool _isAspectRatioLocked;
    int _lastToolType;
    id <EditImageInitialViewDelegate> _delegate;
    NSString *_assetURL;
    EditImageCropToolBarView *_cropToolBar;
    EditImageCropGridView *_cropGridView;
    UIPanGestureRecognizer *_gridPanGes;
    unsigned long long _cropEdge;
    double _naturalTopLength;
    EditImageCropOverlayView *_overlayView;
    MMTimer *_timer;
    unsigned long long _currentRotationOrientation;
    unsigned long long _startRotationOrientation;
    EditImageScrollView *_eIScrollView;
    struct CGPoint _cropTouchPoint;
    struct CGSize _oldStartImageFrameSize;
    struct CGPoint _originalScrollViewOffset;
    struct CGRect _cropFrame;
    struct CGRect _cropOriginalFrame;
    struct CGRect _cropTouchFrame;
    struct CGRect _contentFrame;
}

- (void).cxx_destruct;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
@property(retain, nonatomic) NSString *_assetURL; // @synthesize _assetURL;
@property(nonatomic) struct CGRect _contentFrame; // @synthesize _contentFrame;
@property(nonatomic) unsigned long long _cropEdge; // @synthesize _cropEdge;
@property(nonatomic) struct CGRect _cropFrame; // @synthesize _cropFrame;
@property(retain, nonatomic) EditImageCropGridView *_cropGridView; // @synthesize _cropGridView;
@property(nonatomic) struct CGRect _cropOriginalFrame; // @synthesize _cropOriginalFrame;
@property(retain, nonatomic) EditImageCropToolBarView *_cropToolBar; // @synthesize _cropToolBar;
@property(nonatomic) struct CGRect _cropTouchFrame; // @synthesize _cropTouchFrame;
@property(nonatomic) struct CGPoint _cropTouchPoint; // @synthesize _cropTouchPoint;
@property(nonatomic) unsigned long long _currentRotationOrientation; // @synthesize _currentRotationOrientation;
@property(nonatomic) __weak id <EditImageInitialViewDelegate> _delegate; // @synthesize _delegate;
@property(retain, nonatomic) UIPanGestureRecognizer *_gridPanGes; // @synthesize _gridPanGes;
@property(nonatomic) _Bool _isAnimateEnable; // @synthesize _isAnimateEnable;
@property(nonatomic) _Bool _isAnimating; // @synthesize _isAnimating;
@property(nonatomic) _Bool _isCropOver; // @synthesize _isCropOver;
@property(nonatomic) _Bool _isCropStartAnimationReady; // @synthesize _isCropStartAnimationReady;
@property(nonatomic) _Bool _isRotating; // @synthesize _isRotating;
@property(nonatomic) _Bool _isRotationIconLocked; // @synthesize _isRotationIconLocked;
@property(nonatomic) _Bool _isToolBarOccupy; // @synthesize _isToolBarOccupy;
@property(nonatomic) int _lastToolType; // @synthesize _lastToolType;
@property(nonatomic) double _naturalTopLength; // @synthesize _naturalTopLength;
@property(nonatomic) struct CGSize _oldStartImageFrameSize; // @synthesize _oldStartImageFrameSize;
@property(nonatomic) __weak EditImageCropOverlayView *_overlayView; // @synthesize _overlayView;
@property(nonatomic) unsigned long long _startRotationOrientation; // @synthesize _startRotationOrientation;
@property(retain, nonatomic) MMTimer *_timer; // @synthesize _timer;
- (void)abortEditImageAndShowMessage:(id)arg1;
- (void)afterDisplayImage:(id)arg1 withArray:(id)arg2;
- (struct CGRect)calculateTrueEditImageViewFrameWithRatioImage:(struct CGSize)arg1;
- (void)cancelCropToolBar;
- (void)checkForCanRevert;
- (void)checkiCloudImage;
- (void)clearEmotionToolOperation;
- (void)clearOperation;
- (void)commitRotateChanges;
- (unsigned long long)cropEdgeForPoint:(struct CGPoint)arg1;
- (void)croppingView;
- (void)dealloc;
- (void)didSelectEmotion:(id)arg1 withMd5:(id)arg2;
@property(retain, nonatomic) EditImageScrollView *eIScrollView; // @synthesize eIScrollView=_eIScrollView;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (void)endEditImageView;
- (void)finishCroppingView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)goBackToEditView;
- (void)gridPanGestureRecognized:(id)arg1;
- (void)initBottomEditImageBar;
- (void)initContentImage;
- (void)initEditImageView;
- (void)initEmotionToolAttrBar;
- (void)initMosaicToolAttrBar;
- (void)initPenToolAttrBar;
- (void)initTopEditImageBar;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initiCloudMaskView;
@property(nonatomic) _Bool isAspectRatioLocked; // @synthesize isAspectRatioLocked=_isAspectRatioLocked;
- (_Bool)isCropped;
- (_Bool)isRotated;
- (void)makeAllUIHidden:(_Bool)arg1;
- (void)makeToolBarFadeAnimationHidden:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)makeToolBarFlyAnimationHidden:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)matchOverlayViewToCropGridView;
- (void)moveContentToCenter;
- (void)onAssetImageDonwloadFail:(id)arg1;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)onClickDoneBtn:(CDUnknownBlockType)arg1;
- (void)onCropCancel;
- (void)onCropDone;
- (void)onCropEditImage:(id)arg1;
- (void)onCropToolBarCancelBtnClicked;
- (void)onCropToolBarDoneBtnClicked;
- (void)onCropToolBarRevertBtnClicked;
- (void)onCropToolBarRotateBtnClicked;
- (void)onEditImage:(unsigned int)arg1 withEditEntrance:(unsigned int)arg2;
- (void)onEmotionEditImage:(id)arg1;
- (void)onEmotionToolBarDoneBtnClicked;
- (void)onEmotionToolBarDoneBtnClicked:(_Bool)arg1;
- (void)onMainWindowFrameChanged;
- (void)onMosaicEditImage:(id)arg1;
- (void)onPenEditImage:(id)arg1;
- (void)onTextEditImage:(id)arg1;
@property(nonatomic) struct CGPoint originalScrollViewOffset; // @synthesize originalScrollViewOffset=_originalScrollViewOffset;
- (void)postInit;
- (void)postStartCropView;
- (void)reloadBottomEditImageBar;
- (void)reloadEmotionToolAttrBar;
- (void)reloadMosaicToolAttrBar;
- (void)reloadPenToolAttrBar;
- (void)reloadTopEditImageBar;
- (void)reloadViews;
- (void)resetTimer;
- (void)restoreLayoutContentImage;
- (void)revertAllRotationChangesInEditPhase;
- (void)revertLayoutContentImage;
- (void)revertRotateChanges;
- (void)rotateImageDirectly:(_Bool)arg1;
- (void)rotateImageToOrientation:(unsigned long long)arg1 withAnimation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveProperties;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)scrollViewDidZoom:(id)arg1;
- (void)selectLastToolType;
- (void)setAspectRatio:(struct CGSize)arg1 withAnimation:(_Bool)arg2;
- (void)setEditImageAttrBarHiddenWithAnimation:(_Bool)arg1;
- (void)setEditImageToolBarHiddenWithAnimationInBeganOrEndPhase:(_Bool)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandler:(_Bool)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(_Bool)arg1;
- (void)setEmotionToolAttrViewHidden:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setScrollViewMaxMinZoomScale:(_Bool)arg1;
- (void)setSelectedColorFromGradientBar:(id)arg1;
- (void)setSelectedMosaicStyleFromToolAttrView:(unsigned long long)arg1;
- (void)setSelectedWidthFromToolAttrView:(double)arg1;
- (void)setToolsBarViewHidden:(_Bool)arg1;
- (_Bool)shouldUseOriginImage:(struct CGSize)arg1;
- (void)showCropToolBarViewWithAnimated:(_Bool)arg1;
- (void)startAnimateAspectCrop;
- (void)startAnimateToCropFrame;
- (void)startCropView:(struct CGRect)arg1;
- (void)startEmotionTool;
- (void)startTimer;
- (void)startTimer:(double)arg1;
- (void)trackFrameWhileAnimating;
- (void)triggerTimer;
- (void)trueCommitRotateChanges;
- (void)undoMosaicEditImage;
- (void)undoPenEditImage;
- (void)updateBtns;
- (void)updateCropLinesWithPoint:(struct CGPoint)arg1;
- (void)updateToolBtns;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

