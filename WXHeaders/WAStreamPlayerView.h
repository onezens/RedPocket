//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "WAStreamPlayerInterface.h"
#import "WAVideoPlayerCoreDelegate.h"

@class AVPlayerItemVideoOutput, MMProgressViewEx, MMUIButton, MMUILabel, NSString, UIButton, UIColor, UIImage, UIImageView, UILabel, WAScreenBrightnessStateView, WAVideoLayer, WAVideoPlayerCore, WCNetworkMediaSlider;

@interface WAStreamPlayerView : UIView <WAVideoPlayerCoreDelegate, UIGestureRecognizerDelegate, WAStreamPlayerInterface>
{
    _Bool _disableScroll;
    unsigned int _controlsMask;
    UIColor *_scrollBgColor;
    UIColor *_webViewBgColor;
    _Bool _landscape;
    _Bool _lockSlider;
    _Bool _touchesProgressMoved;
    _Bool _useCustomDuration;
    _Bool _customThumb;
    _Bool _live;
    unsigned int _pauseTemp;
    long long _panDirection;
    _Bool _adjustVolume;
    WAScreenBrightnessStateView *_bvstatusView;
    double _totalDuration;
    _Bool _customCache;
    _Bool _showDanmu;
    _Bool _autoPlay;
    _Bool _needUpdateEvent;
    _Bool _enablePageGesture;
    _Bool _loop;
    unsigned int _videoId;
    unsigned long long _orientation;
    id <MMVideoPlayerViewDelegate> _videoDelagate;
    NSString *_userData;
    WAVideoPlayerCore *_mediaCore;
    UIView *_bottomView;
    MMUILabel *_currentLabel;
    WCNetworkMediaSlider *_progressSlider;
    MMUILabel *_durationLabel;
    UIButton *_playBtn;
    UIButton *_fullBtn;
    UIButton *_danmuBtn;
    MMProgressViewEx *_loadingView;
    UIView *_coverView;
    UILabel *_coverTime;
    MMUILabel *_centerTime;
    UIImageView *_thumbImage;
    MMUIButton *_coverButton;
    MMUILabel *_liveLabel;
    WAVideoLayer *_danmuLayer;
    NSString *_videoGravity;
    UIImage *_snapImage;
    AVPlayerItemVideoOutput *_snapshotOutput;
    struct CGSize _videoSize;
    struct CGRect _rect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
- (void)catchTap:(id)arg1;
@property(retain, nonatomic) MMUILabel *centerTime; // @synthesize centerTime=_centerTime;
@property(retain, nonatomic) MMUIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(retain, nonatomic) UILabel *coverTime; // @synthesize coverTime=_coverTime;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
- (void)createFloatLayer;
@property(retain, nonatomic) MMUILabel *currentLabel; // @synthesize currentLabel=_currentLabel;
@property(nonatomic) _Bool customCache; // @synthesize customCache=_customCache;
@property(retain, nonatomic) UIButton *danmuBtn; // @synthesize danmuBtn=_danmuBtn;
@property(retain, nonatomic) WAVideoLayer *danmuLayer; // @synthesize danmuLayer=_danmuLayer;
- (void)dealloc;
- (void)disableFull;
- (void)disableScroll:(_Bool)arg1;
- (id)drawInRectAspectFill:(id)arg1;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
- (void)enableFull;
- (void)enableFullScreen:(_Bool)arg1;
@property(nonatomic) _Bool enablePageGesture; // @synthesize enablePageGesture=_enablePageGesture;
@property(retain, nonatomic) UIButton *fullBtn; // @synthesize fullBtn=_fullBtn;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (unsigned int)getControlsMask;
- (id)getCurrentSnapshot;
- (void)hideBrightnessStatusView;
- (void)hideControlViews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)horizontalMoveEnd;
- (void)horizontalMoved:(double)arg1;
- (void)initMediaCore:(id)arg1 initialTime:(unsigned int)arg2;
- (id)initWithThumb:(id)arg1 frame:(struct CGRect)arg2;
- (_Bool)isForground;
- (_Bool)isFullScreen;
- (_Bool)isFullscreenLandscape;
- (_Bool)isPlaying;
@property(retain, nonatomic) MMUILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(retain, nonatomic) WAVideoPlayerCore *mediaCore; // @synthesize mediaCore=_mediaCore;
@property(nonatomic) _Bool needUpdateEvent; // @synthesize needUpdateEvent=_needUpdateEvent;
- (void)onCacheUpdate:(double)arg1;
- (void)onCurrentTimeUpdate:(double)arg1;
- (void)onDanmuClick;
- (void)onFullClick;
- (void)onLargePlay;
- (void)onLoadingBegin;
- (void)onLoadingEnd;
- (void)onNetWorkError:(long long)arg1;
- (void)onPlayClick;
- (void)onSliderChange;
- (void)onSliderTouchDown;
- (void)onSliderTouchUp;
- (void)onStateChange:(long long)arg1;
- (void)onTotalTimeUpdate:(double)arg1;
- (void)onVideoPlayEnd;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
- (void)panGestureControl:(id)arg1;
- (void)pause;
- (long long)pauseCount;
- (void)pausePlayAndLoading;
- (void)pauseTemp:(_Bool)arg1;
- (void)play:(_Bool)arg1;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) WCNetworkMediaSlider *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (void)resetSliderLock;
- (void)resizeThumbImage;
- (void)retryToLoadVideo;
- (void)routeChange:(id)arg1;
- (void)seek:(unsigned int)arg1;
- (void)sendDanmu:(id)arg1 color:(id)arg2;
- (void)setControls:(unsigned int)arg1;
- (void)setDanmuList:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setObjectFit:(long long)arg1;
- (void)setPlayBackRate:(float)arg1;
@property(nonatomic) _Bool showDanmu; // @synthesize showDanmu=_showDanmu;
@property(retain, nonatomic) UIImage *snapImage; // @synthesize snapImage=_snapImage;
@property(retain, nonatomic) AVPlayerItemVideoOutput *snapshotOutput; // @synthesize snapshotOutput=_snapshotOutput;
@property(retain, nonatomic) UIImageView *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(copy, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(nonatomic) __weak id <MMVideoPlayerViewDelegate> videoDelagate; // @synthesize videoDelagate=_videoDelagate;
- (void)setVideoFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) unsigned int videoId; // @synthesize videoId=_videoId;
- (void)setVideoPath:(id)arg1 initialTime:(unsigned int)arg2;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
- (void)setVideoThumb:(id)arg1;
- (void)setVideoThumbImage:(id)arg1;
- (void)showControlViews;
- (void)stop;
- (id)timeFormat:(int)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateLiveSize;
- (void)updateSubviews:(struct CGSize)arg1;
- (void)updateThumbImage;
- (void)verticalMoved:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

