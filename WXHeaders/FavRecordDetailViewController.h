//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavBaseDetailViewController.h"

#import "BaseScanLogicDelegate.h"
#import "FavFileDetailDelegate.h"
#import "FavForwardLogicDelegate.h"
#import "FavRecordNodeViewDelegate.h"
#import "FavSightViewDelegate.h"
#import "FavVideoDetailDelegate.h"
#import "ForwardMessageLogicDelegate.h"
#import "ViewLocationDelegate.h"
#import "WCActionSheetDelegate.h"
#import "scrollViewDelegate.h"

@class FavForwardLogicController, FavSightView, ForwardMessageLogicController, NSString, ScanQRCodeLogicController, UIView, WCActionSheet;

@interface FavRecordDetailViewController : FavBaseDetailViewController <ForwardMessageLogicDelegate, BaseScanLogicDelegate, WCActionSheetDelegate, scrollViewDelegate, FavSightViewDelegate, FavRecordNodeViewDelegate, ViewLocationDelegate, FavFileDetailDelegate, FavVideoDetailDelegate, FavForwardLogicDelegate>
{
    FavForwardLogicController *m_favForwardController;
    FavSightView *m_sightView;
    unsigned int m_uiLongPressedIndex;
    _Bool m_hasIllegalData;
    NSString *m_chatDate;
    NSString *m_chatDatePrefix;
    UIView *m_headerView;
    UIView *m_headerContainView;
    UIView *m_headerSepLine;
    double lastContentOffset;
    _Bool isDragging;
    ForwardMessageLogicController *m_forwardLogic;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheet *favImgLongPressAction;
}

+ (id)genHeaderViewWithTitle:(id)arg1;
- (void).cxx_destruct;
- (void)OnDownloadFavoritesItemFail:(id)arg1 LocalDataId:(id)arg2;
- (void)OnDownloadFavoritesItemOK:(id)arg1 LocalDataId:(id)arg2;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)OpenVideoFavDataWrap:(id)arg1;
- (void)OpenVideoFileByFavDataWrap:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustViewAndNavBarRect;
- (void)dealloc;
- (void)didFinishedLoading:(id)arg1;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (void)genTimeCell:(id)arg1;
- (id)getCurrentViewController;
- (id)getFavForawrdViewController;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (void)hideTopBar;
- (void)initNavigationBar;
- (id)initWithFavItem:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onAction:(id)arg1;
- (void)onClickOnImgNode:(id)arg1 DataIndex:(unsigned int)arg2;
- (void)onClickOnNode:(id)arg1;
- (void)onExitFullScreen;
- (void)onFavViewSizeDidChange:(id)arg1 withFavData:(id)arg2;
- (void)onForwardFavDataWrap2Msg;
- (void)onForwardFavDataWrap2WC;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onLongPressImgNode:(id)arg1;
- (void)onSaveFavDataImg;
- (void)onScanEnds;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (void)onWillLongPressImgNode:(id)arg1;
- (void)pulseAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)resetHeader:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)showTopBar;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
