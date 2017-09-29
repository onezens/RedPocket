//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FTSTopHitDelegate.h"
#import "IGameCenterExt.h"
#import "IMMLanguageMgrExt.h"
#import "MMKernelExt.h"
#import "MMPackageDownloadMgrExt.h"

@class FTSTopHitMgr, NSArray, NSMutableArray, NSMutableDictionary, NSString, Package;

@interface FTSMemorySearchMgr : NSObject <IMMLanguageMgrExt, MMKernelExt, MMPackageDownloadMgrExt, IGameCenterExt, FTSTopHitDelegate>
{
    _Bool _hasInited;
    _Bool _isLocalGameCacheUpdating;
    unsigned long long _gameCacheModifyTime;
    NSString *_lastQueryText;
    NSString *_newestQueryText;
    NSMutableArray *_arrLastQueryKeywords;
    NSMutableDictionary *_dicSearchMatchTip;
    NSMutableArray *_arrFeatureResultItem;
    NSMutableDictionary *_dicSourceFeatureSearchItem;
    unsigned int _curFeatureListVersion;
    unsigned int _lastCheckPackageTime;
    Package *_downloadingPackage;
    NSMutableArray *_arrWCGameAllItem;
    NSMutableArray *_arrWCGameResultItem;
    NSMutableArray *_arrDetailPageWCGameResultItem;
    NSString *_newestDetailPageQueryText;
    NSString *_lastDetailPageQueryText;
    NSMutableArray *_arrDetailPageLastQueryKeywords;
    FTSTopHitMgr *_ftsTopHitMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrDetailPageLastQueryKeywords; // @synthesize arrDetailPageLastQueryKeywords=_arrDetailPageLastQueryKeywords;
@property(retain, nonatomic) NSArray *arrLastQueryKeywords; // @synthesize arrLastQueryKeywords=_arrLastQueryKeywords;
- (void)asyncInitFeatureItem;
- (void)asyncInitSearchItem;
- (void)asyncSearchText:(id)arg1;
- (void)asyncSearchTextForGameDetailPage:(id)arg1;
- (void)cancelSearch;
- (void)cancelSearchForGameDetailPage;
- (id)convertFeatureItem:(id)arg1;
- (id)createWeSportSearchItem;
- (void)dealloc;
- (void)delayCheckUpdate;
- (void)doCheckUpdate;
- (void)doInitWorker;
- (void)doSearch:(id)arg1;
@property(retain, nonatomic) FTSTopHitMgr *ftsTopHitMgr; // @synthesize ftsTopHitMgr=_ftsTopHitMgr;
- (unsigned int)getCurrenPackageVersion;
- (id)getFeatureDictionary;
- (id)getFeatureIcon:(unsigned int)arg1;
- (id)getFeatureItem:(id)arg1 index:(unsigned long long)arg2;
- (id)getFeatureListFilePath:(id)arg1;
- (id)getFeatureListPackageRootPath;
- (id)getFeatureListPackageZipFile;
- (id)getFeatureListTempZipPayloadPath;
- (id)getFeatureListVersionFile;
- (id)getFeatureListZipPayloadPath;
- (unsigned long long)getFeatureSearchItemCount:(id)arg1;
- (unsigned long long)getGameCachedModifiedTime;
- (unsigned long long)getGameDetailSearchItemCount:(id)arg1;
- (id)getMatchTip:(id)arg1 featureID:(unsigned int)arg2;
- (id)getPackageKey;
- (id)getSearchItemForGameDetailPage:(id)arg1 index:(unsigned long long)arg2;
- (id)getSearchItemsForGameDetailPage:(id)arg1;
- (id)getSourceSearchItem;
- (id)getWCGameItem:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)getWCGameSearchItemCount:(id)arg1;
- (_Bool)hasFeatureSearchResult:(id)arg1;
- (_Bool)hasGameSearchResult:(id)arg1;
- (_Bool)hasSearchDone:(id)arg1;
- (_Bool)hasSearchDoneForGameDetailPage:(id)arg1;
- (_Bool)hasWCGameSearchResult:(id)arg1;
- (id)init;
- (void)initFeatureItem;
- (void)initSearchItem;
- (_Bool)isTopHitFeatureReady;
@property(retain, nonatomic) NSString *lastDetailPageQueryText; // @synthesize lastDetailPageQueryText=_lastDetailPageQueryText;
@property(retain, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
- (id)loadSearchItem:(id)arg1;
@property(retain, nonatomic) NSString *newestDetailPageQueryText; // @synthesize newestDetailPageQueryText=_newestDetailPageQueryText;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
- (void)onAuthOK;
- (void)onGetAllGameList:(id)arg1 error:(long long)arg2;
- (void)onLanguageChange;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageListUpdated:(id)arg1;
- (id)removeTopHitFeaturesWithinArray:(id)arg1;
- (_Bool)shouldUpdateGameCache;
- (void)sortFeatures:(id)arg1 matchTips:(id)arg2;
- (void)tryAsyncUpdateLocalGameCache;
- (void)updateVersion:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

