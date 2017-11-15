//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "FavoritesAsyncUploadMgrDelegate.h"
#import "FavoritesBatchDelMgrDelegate.h"
#import "FavoritesBatchGetMgrDelegate.h"
#import "FavoritesDownloadMgrDelegate.h"
#import "FavoritesSearchMgrDelegate.h"
#import "FavoritesSyncMgrDelegate.h"
#import "FavoritesUploadMgrDelegate.h"
#import "IClearDataMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class FavoritesAsyncUploadMgr, FavoritesBatchDelMgr, FavoritesBatchGetMgr, FavoritesDownloadMgr, FavoritesItemDB, FavoritesRepairSvrDataLogic, FavoritesReportLogic, FavoritesSearchMgr, FavoritesSetting, FavoritesSyncMgr, FavoritesTagMgr, FavoritesUploadMgr, MyFavoritesDB, NSMutableArray, NSObject<OS_dispatch_semaphore>, NSString;

@interface FavoritesMgr : MMService <IClearDataMgrExt, MMService, PBMessageObserverDelegate, FavoritesUploadMgrDelegate, FavoritesDownloadMgrDelegate, FavoritesBatchGetMgrDelegate, FavoritesSearchMgrDelegate, FavoritesSyncMgrDelegate, FavoritesAsyncUploadMgrDelegate, FavoritesBatchDelMgrDelegate>
{
    FavoritesItemDB *_favItemDB;
    MyFavoritesDB *_favDB;
    FavoritesUploadMgr *_favUploadMgr;
    FavoritesDownloadMgr *_favDownloadMgr;
    FavoritesSearchMgr *_favSearchMgr;
    FavoritesTagMgr *_favTagMgr;
    FavoritesSyncMgr *_favSyncMgr;
    FavoritesAsyncUploadMgr *_favAsyncUploadMgr;
    FavoritesBatchDelMgr *_batchDelMgr;
    FavoritesBatchGetMgr *_batchGetMgr;
    FavoritesRepairSvrDataLogic *_repairSvrDataLogic;
    _Bool _isCheckingItem;
    NSMutableArray *_removingItemsArray;
    FavoritesSetting *_setting;
    unsigned int m_curMinItemUpdateTime;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    _Bool m_bCustomUsedCapacity_on;
    int m_usedCapacity;
    FavoritesReportLogic *_reportLogic;
}

- (void).cxx_destruct;
- (void)BroadcastAddFavoritesItemResult:(id)arg1 ErrCode:(int)arg2;
- (void)BroadcastDownloadFavoritesItemResult:(id)arg1 ErrCode:(int)arg2;
- (id)GetNextBatchGetList;
- (void)HandleGetFavInfoResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnNeedUpdateFavInfo;
- (void)OnSearch:(id)arg1;
- (void)OnSyncResult:(int)arg1;
- (void)SyncByNotify:(unsigned int)arg1;
- (_Bool)addFavoritesItem:(id)arg1;
- (_Bool)addFavoritesItem:(id)arg1 delayUpload:(_Bool)arg2;
- (_Bool)batchDelFavoritesItem:(id)arg1;
- (void)batchDownloadItemList:(id)arg1;
- (void)batchGetFavItem:(int)arg1;
- (void)checkBatchDelQueue;
- (void)checkInvalidNote:(id)arg1 batchgetList:(id)arg2;
- (void)clearSyncKey;
- (void)dealloc;
- (_Bool)delAllFavoritesItems;
- (_Bool)delFavoritesItem:(id)arg1;
- (_Bool)delFavoritesItemById:(unsigned int)arg1;
- (_Bool)delFavoritesItems:(id)arg1;
- (id)getAllTags;
- (_Bool)getCustomUsedCapacity;
- (id)getDownloadPausedItemList;
- (id)getDownloadingItemList;
- (id)getFavMusicList;
- (id)getFavoritesItemByLocalId:(unsigned int)arg1;
- (id)getFavoritesItemFrom:(unsigned int)arg1 Limit:(int)arg2;
- (void)getFirstPageFavoritesCapacityList;
- (void)getFirstPageFavoritesList:(int)arg1;
- (id)getItemTags:(unsigned int)arg1;
- (id)getLastFavItem;
- (id)getLastUpdateFavItem;
- (_Bool)getNativeNoteStatus;
- (void)getNextPageFavoritesCapacityListByCurMinDataSize:(unsigned int)arg1;
- (void)getNextPageFavoritesList:(int)arg1 byCurMinUpdateTime:(unsigned int)arg2;
- (id)getSemaphore;
- (int)getTotalCapacity;
- (id)getUploadFailedItemList;
- (id)getUploadPausedItemList;
- (id)getUploadingItemList;
- (int)getUsedCapacity;
- (unsigned long long)getUserUsedCapacity;
- (void)handleModifyFavItemDescriptionOk:(id)arg1;
- (void)handleModifyFavItemTagOk:(id)arg1;
- (id)init;
- (void)initDB:(id)arg1;
- (_Bool)isAutoUploadOrDownload;
- (_Bool)isNoteShareMomentEnable;
- (_Bool)isSaveNoteAsImageEnable;
- (void)loadFavoritesSetting;
- (void)onAsyncUploadFavoritesItemFinished:(id)arg1 ErrCode:(int)arg2;
- (void)onBatchDelItemSuccess;
- (void)onBatchGetItemList:(id)arg1 ErrCode:(int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onDownloadFavoritesItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onDownloadFavoritesItemFail:(id)arg1 LocalDataId:(id)arg2;
- (void)onDownloadFavoritesItemFinished:(id)arg1 ErrCode:(int)arg2;
- (void)onDownloadFavoritesItemOK:(id)arg1 LocalDataId:(id)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)onUploadFavoritesItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onUploadFavoritesItemFinished:(id)arg1 ErrCode:(int)arg2;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (_Bool)pauseDownloadFavoritesItem:(unsigned int)arg1;
- (_Bool)pauseUploadFavoritesItem:(unsigned int)arg1;
- (void)removeItemFile:(id)arg1;
@property(retain, nonatomic) FavoritesReportLogic *reportLogic; // @synthesize reportLogic=_reportLogic;
- (void)restartAllUploadFailedItems;
- (void)saveSetting;
- (void)search:(id)arg1 byType:(int)arg2;
- (void)search:(id)arg1 byType:(int)arg2 andTags:(id)arg3;
- (void)setCustomUsedCapacity:(_Bool)arg1;
- (void)setNativeNoteStatus:(_Bool)arg1;
@property(retain, nonatomic) FavoritesSetting *setting; // @synthesize setting=_setting;
- (void)setUserUsedCapacity:(int)arg1;
- (_Bool)startDownloadDataWrapPrior:(id)arg1;
- (_Bool)startDownloadFavoritesItem:(id)arg1 ISPriority:(_Bool)arg2;
- (_Bool)startUploadFavoritesItem:(id)arg1 IsPriority:(_Bool)arg2;
- (_Bool)tryCalculateFavItemSize;
- (void)updateCapacityInfo;
- (_Bool)updateFavoritesItem:(id)arg1;
- (_Bool)updateFavoritesItem:(id)arg1 delayUpload:(_Bool)arg2;
- (_Bool)updateItem:(id)arg1 Description:(id)arg2 Time:(unsigned int)arg3;
- (_Bool)updateItem:(id)arg1 Remark:(id)arg2 Time:(unsigned int)arg3;
- (_Bool)updateItem:(id)arg1 tags:(id)arg2;
- (void)updateItemTags:(id)arg1 byFavLocalId:(unsigned int)arg2;
- (void)updateItemUpdateTime:(id)arg1;
- (_Bool)updateItemXml:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

