//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "IDownloadImageExt.h"
#import "IMMAssetICloudExt.h"
#import "IMessageWrapImgExt.h"

@class ImageMessageViewModel, MMLoadingView, NSString, UIImageView, UILabel, YYAsyncImageView;

@interface ImageMessageCellView : CommonMessageCellView <IDownloadImageExt, IMessageWrapImgExt, IMMAssetICloudExt>
{
    YYAsyncImageView *m_imageView;
    UIImageView *m_imageDownloadFailView;
    MMLoadingView *m_imageLoadingView;
    _Bool m_bhasDownloadComplete;
    UIImageView *m_icloudImageIcon;
    UIImageView *m_icloudBackground;
    UILabel *m_icloudLabel;
}

- (void).cxx_destruct;
- (void)OnDownloadImageOk:(id)arg1;
- (void)addDownloadFailView;
- (void)addICloudIcon;
- (void)addLoadingView;
- (_Bool)canBeReused;
- (_Bool)canPeek;
- (void)dealloc;
- (id)displayViewForImageBrowser;
- (id)getCoverImage;
- (void)initImageView;
- (id)initWithViewModel:(id)arg1;
- (void)layoutContentView;
- (void)logExpLogWhenShowImage;
- (void)onAppear;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)onEdit:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)onThumbImageSave:(id)arg1;
- (void)onTouchEnded;
- (id)operationMenuItems;
- (void)prepareForReuse;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)removeICloudIcon;
- (void)showImage;
- (void)showImageNeedEdit:(_Bool)arg1;
- (struct CGRect)showRectForMenuController;
- (void)updateStatus;
- (id)viewControllerForPreview:(id)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) ImageMessageViewModel *viewModel; // @dynamic viewModel;

@end

