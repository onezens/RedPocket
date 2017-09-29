//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIControl.h"

#import "UIActionSheetDelegate.h"
#import "WCDownloadImageCdnMgrExt.h"
#import "WCFacadeExt.h"
#import "WCSightFullPlayViewControllerDelegate.h"

@class NSString, SightIconView, UIImageView, WCDataItem, WCMediaItem, WCSightViewController;

@interface WCSNSNodeVideoView : MMUIControl <WCFacadeExt, UIActionSheetDelegate, WCSightFullPlayViewControllerDelegate, WCDownloadImageCdnMgrExt>
{
    _Bool _bIsLongPressHandled;
    WCDataItem *_dataItem;
    UIImageView *_thumbImageView;
    WCSightViewController *_videoPlayerVC;
    SightIconView *_playIconView;
    _Bool _isImageReady;
    _Bool _bIgnoreLongPress;
    id <WCSNSNodeVideoViewDelegate> _delegate;
    WCMediaItem *_mediaData;
    NSString *_sightPath;
    NSString *_cpKey;
    unsigned long long _scene;
}

- (void).cxx_destruct;
- (void)LongPressEvents:(id)arg1;
@property(nonatomic) _Bool bIgnoreLongPress; // @synthesize bIgnoreLongPress=_bIgnoreLongPress;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)dealloc;
@property(nonatomic) __weak id <WCSNSNodeVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)exitFullScreenPlay;
- (id)getImage;
- (void)initData:(id)arg1;
- (id)initWithMediaData:(id)arg1;
- (id)initWithMediaData:(id)arg1 withFrame:(struct CGRect)arg2;
@property(readonly, nonatomic) _Bool isImageReady; // @synthesize isImageReady=_isImageReady;
- (_Bool)isSightVideoExist;
- (void)layoutSubviews;
@property(readonly, nonatomic) WCMediaItem *mediaData; // @synthesize mediaData=_mediaData;
- (void)onClickWCSight:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onImageDownloadFail:(id)arg1 downloadType:(int)arg2;
- (void)onImageDownloadSuccess:(id)arg1 downloadType:(int)arg2;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)playInFullScreen:(_Bool)arg1;
- (void)reloadSightPreviewImage;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSString *sightPath; // @synthesize sightPath=_sightPath;
- (void)silencePlay;
- (_Bool)tryDownloadForOperateMode:(unsigned int)arg1;
- (void)updateThumbImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
