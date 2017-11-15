//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMPickLocationViewControllerDelegate.h"

@class MMPickLocationViewController, NSMutableArray, WNParagraphInfo;

@interface WNToolViewHelper : MMObject <MMPickLocationViewControllerDelegate>
{
    WNParagraphInfo *_recordingInfo;
    MMPickLocationViewController *m_locationViewCtrl;
    NSMutableArray *items;
    int mmassetCount;
    id <WNArticleToolViewDelegate> delegate;
}

- (void).cxx_destruct;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)configImageItemMMAsset:(id)arg1;
- (id)configImageItemMMImage:(id)arg1;
- (id)configImageItemWithBigImgPath:(id)arg1 andThumbImgPath:(id)arg2 andImgSize:(struct CGSize)arg3;
- (id)configSightItemWithSightPath:(id)arg1 andThumbImgPath:(id)arg2 andDuration:(unsigned int)arg3;
- (id)createThumbImage:(id)arg1;
@property(nonatomic) __weak id <WNArticleToolViewDelegate> delegate; // @synthesize delegate;
- (_Bool)ifCanInsertOneItem;
- (void)insertSeperateLine;
- (void)onCancelSeletctedLocation;
- (void)onConfigImageItemAssetComplete:(id)arg1;
- (void)onCreatPostLocationView;
- (void)onCreatePostImageView;
- (void)onFinishSelectedLocation;
- (id)onGetRightBarButton;
- (void)onParagraphSetOl;
- (void)onParagraphSetUl;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3 isMuted:(_Bool)arg4 editVideoAttr:(id)arg5;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onTakePhotoForPost;
- (void)onTextSetBold;
- (void)onToolViewParagraphSetTodo;
- (_Bool)onVoiceRecordBegin;
- (void)onVoiceRecordEnd;
- (void)showImagePicker:(long long)arg1;

@end
