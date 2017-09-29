//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "EmoticonBoughtListMgrExt.h"
#import "EmoticonStoreCellDelegate.h"
#import "EmoticonStoreMgrExt.h"
#import "EmotionCollectionFooterViewDelegate.h"
#import "LoopPageScrollViewDataSourceDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class EmotionCollectionFooterView, LoopPageScrollView, MMEmotionStoreNewSearchController, MMTimer, NSArray, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView, UIViewController;

@interface MMWechatEmotionsViewController : MMSearchBarDisplayController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, EmoticonStoreMgrExt, EmoticonBoughtListMgrExt, LoopPageScrollViewDataSourceDelegate, EmoticonStoreCellDelegate, EmotionCollectionFooterViewDelegate>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    LoopPageScrollView *_bannerView;
    UIView *m_collectionHeaderView;
    EmotionCollectionFooterView *_footerView;
    MMTimer *m_timer;
    NSArray *m_sectionInfoArray;
    NSMutableArray *_storeItemArray;
    NSMutableArray *_storeAdsArray;
    NSMutableArray *m_cellSetList;
    unsigned int _topHotNum;
    unsigned int m_recentHotNum;
    unsigned int _scene;
    unsigned int _reqType;
    _Bool m_hasGetFirstResponse;
    UIViewController *m_contentsViewController;
    MMEmotionStoreNewSearchController *m_searchController;
}

- (void).cxx_destruct;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (void)OnRestoreEmoticonItemSuccess;
- (void)OnShowAlertWithIKnow:(id)arg1;
- (void)OnShowAlertWithOK:(id)arg1;
- (void)OnStartLoadingAndShowString:(id)arg1;
- (void)OnStartLoadingAndShowStringBlocked:(id)arg1;
- (void)OnStopLoading;
- (void)OnStopLoadingAndShowError:(id)arg1;
- (void)OnStopLoadingAndShowOK:(id)arg1;
- (void)OnStoreListChanged:(id)arg1 withRet:(int)arg2 withReqType:(unsigned int)arg3 Response:(id)arg4;
- (void)adjustContentInsetAndSearchBarMask;
- (void)changeBannerToNextPage;
- (void)clearSearchDisplayController;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)configBanner;
- (void)configCollectionView;
- (void)configData;
- (void)configHeaderView;
- (void)configSectionInfos;
- (void)configTailView;
- (void)configViews;
- (void)dealloc;
- (void)didChangeToPage:(unsigned int)arg1;
- (void)didTapPageAtNum:(unsigned int)arg1;
- (id)init;
- (void)initBannerPageTimer;
- (id)initWithEmotionScene:(unsigned int)arg1 AndParentViewController:(id)arg2;
- (id)itemForSectionType:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)openPageForBannerSet:(id)arg1 IsFromBanner:(_Bool)arg2;
- (void)reloadAdsFromMgr;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (_Bool)shouldInteractivePop;
- (void)stopBannerPageTimer;
- (int)totalNumOfPage;
- (void)tryInitViewOfSearchController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForPage:(id)arg1 pageNum:(unsigned int)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

