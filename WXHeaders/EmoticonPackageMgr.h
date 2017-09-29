//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class CEmoticonPackageDB, EmoticonSortSetting, NSMutableDictionary, NSRecursiveLock, NSString;

@interface EmoticonPackageMgr : MMService <MMService, PBMessageObserverDelegate>
{
    CEmoticonPackageDB *m_oEmoticonPackageDB;
    EmoticonSortSetting *m_sortSetting;
    _Bool m_isInstallingTusiji;
    NSRecursiveLock *_m_oLock;
    NSMutableDictionary *_m_packageDownloadStatusCacheDic;
}

+ (id)getEmoticonPackageImageByPid:(id)arg1;
- (void).cxx_destruct;
- (id)GetPanelListRequestBuffer;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnModEmotionPackage:(id)arg1;
- (id)PreProcessServerUpdateList:(id)arg1;
- (_Bool)SetPanelListRequestBuffer:(id)arg1;
- (_Bool)addEmoticonPackage:(id)arg1 name:(id)arg2 payStatus:(unsigned int)arg3 downloadStatus:(unsigned int)arg4;
- (_Bool)addEmoticonPackageSilently:(id)arg1 name:(id)arg2 iconUrl:(id)arg3 payStatus:(unsigned int)arg4 downloadStatus:(unsigned int)arg5;
- (_Bool)addPackageList:(id)arg1;
- (void)callUpdatePackageListExtension;
- (void)clearAllEmoticonPackageData;
- (void)dealloc;
- (_Bool)deleteEmoticonPackageWithoutUploadByPid:(id)arg1;
- (_Bool)deleteEmoticonSilentlyByPid:(id)arg1 needRemoveFile:(_Bool)arg2;
- (id)getCustomPackage;
- (id)getEmoticonPackageList;
- (id)getSortEmoticonPackageListWithDownloadedTusiji;
- (id)getSortEmoticonPackageListWithTusiji:(_Bool)arg1 withCustom:(_Bool)arg2;
- (id)getTusijiPackage;
- (_Bool)hadSetCustomToTop;
- (void)hardcodeTusiji;
- (id)init;
- (void)initLocalList;
- (_Bool)installPackageAtPath:(id)arg1 withName:(id)arg2 withPid:(id)arg3 iconUrl:(id)arg4;
- (_Bool)isCacheStatusDownloadedForPid:(id)arg1;
- (_Bool)isDBStatusDownloadedForPid:(id)arg1;
- (_Bool)isEmoticonPackageDownLoaded:(id)arg1;
- (_Bool)isEmoticonPackagePurchased:(id)arg1;
@property(retain, nonatomic) CEmoticonPackageDB *m_oEmoticonPackageDB; // @synthesize m_oEmoticonPackageDB;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
@property(retain) NSMutableDictionary *m_packageDownloadStatusCacheDic; // @synthesize m_packageDownloadStatusCacheDic=_m_packageDownloadStatusCacheDic;
@property(retain, nonatomic) EmoticonSortSetting *m_sortSetting; // @synthesize m_sortSetting;
- (void)notifyPackageListChanged;
- (void)notifyUpdatePackageList;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (id)pathForEmoticonPanelReqBufer;
- (void)saveSort:(id)arg1;
- (void)saveSortNotNotify:(id)arg1;
- (void)tryInstallTusiji;
- (_Bool)unzipPackageAtPath:(id)arg1 withPid:(id)arg2;
- (_Bool)update:(id)arg1 downloadStatus:(unsigned int)arg2;
- (_Bool)update:(id)arg1 payStatus:(unsigned int)arg2;
- (_Bool)updateCacheDownloadStatusForPid:(id)arg1;
- (_Bool)updateSilently:(id)arg1 downloadStatus:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

