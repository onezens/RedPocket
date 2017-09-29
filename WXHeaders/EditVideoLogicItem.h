//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "EditVideoInitialViewDelegate.h"

@class AVAsset, EditVideoAttr, EditVideoInitialView, MMAsset, NSArray, NSString, UIImage;

@interface EditVideoLogicItem : MMObject <EditVideoInitialViewDelegate>
{
    EditVideoAttr *_videoAttr;
    UIImage *_thumbImage;
    MMAsset *_asset;
    AVAsset *_avAsset;
    EditVideoInitialView *_editVideoInitialView;
    NSArray *_drawLayers;
    CDStruct_1b6d18a9 _videoDuration;
    CDStruct_e83c9415 _editedTimeRange;
    CDStruct_e83c9415 _originalTimeRange;
    id <EditVideoLogicItemDelegate> _delegate;
    unsigned long long _entranceType;
}

- (void).cxx_destruct;
- (void)cancelLoopPlay;
- (void)dealloc;
@property(nonatomic) __weak id <EditVideoLogicItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
- (id)getAssetUrl;
- (void)getEditedResult:(CDUnknownBlockType)arg1;
- (CDStruct_e83c9415)getEditedVideoTimeRange;
- (struct CGSize)getImageRatioSize;
- (float)getOutputTime;
- (id)getThumbImage;
- (id)getVideoAttr;
- (id)init;
- (_Bool)isExceedTimelineTimeLimit;
- (void)loadDurationComplete:(CDUnknownBlockType)arg1;
- (void)loopPlay;
- (void)onClickEditVideoCancelButton;
- (void)onClickEditVideoDoneButton;
- (void)onCropCancel;
- (void)onCropDone:(CDStruct_e83c9415)arg1;
- (void)onCropTimeChange:(CDStruct_e83c9415)arg1;
- (void)onEditVideo:(id)arg1 onView:(id)arg2;
- (void)onEditVideoAtPath:(id)arg1 andThumbImage:(id)arg2 onView:(id)arg3;
- (void)onEditVideoFinish;
- (void)onEnterForeground:(id)arg1;
- (void)onResigned:(id)arg1;
- (void)onSeekTime:(double)arg1;
- (void)resetEditVideoAttr;
- (void)showEditVideoViewOn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

