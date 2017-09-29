//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSObject<OS_dispatch_queue>, NSString, WACacheFileCleanStatus;

@interface WACacheFileCleanMgr : MMService <MMService>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    WACacheFileCleanStatus *_status;
    unsigned int _lastUpdateStatusTime;
    unsigned long long _scanPhase;
    unsigned long long _maxTotalFileSize;
}

- (void).cxx_destruct;
- (void)addFileSize:(unsigned long long)arg1 contentModifyTime:(unsigned int)arg2 withAppID:(id)arg3;
- (void)addTempFileStatWithPath:(id)arg1 appID:(id)arg2;
- (id)allAppIDInStatus;
- (id)appItemInStatus:(id)arg1;
- (id)arrSortAppItemFromStatus;
- (void)asyncCleanFiles;
- (void)asyncScanFiles;
- (unsigned int)contentModiyTimeWithAppFolderPath:(id)arg1 tempDirPath:(id)arg2;
- (unsigned long long)currentTotalFileSize;
- (void)dealloc;
- (void)fileStatWithPath:(id)arg1 getCreateTime:(unsigned int *)arg2 modifyTime:(unsigned int *)arg3 fileSize:(unsigned long long *)arg4;
- (unsigned int)getModifyTimeWithPath:(id)arg1;
- (id)init;
- (void)innerScanFiles;
- (_Bool)isTimeForSaveStatus;
- (_Bool)isTotalFileSizeExceed;
- (_Bool)isTotalFileSizeExceedHalfMax;
@property unsigned int lastUpdateStatusTime; // @synthesize lastUpdateStatusTime=_lastUpdateStatusTime;
- (void)loadStatus;
@property unsigned long long maxTotalFileSize; // @synthesize maxTotalFileSize=_maxTotalFileSize;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)removeAppItemNotHasFolder:(id)arg1;
- (void)removeFileSize:(unsigned long long)arg1 contentModifyTime:(unsigned int)arg2 withAppID:(id)arg3;
- (void)removeItemAndUpdateTotalSize:(id)arg1;
- (void)removeTempFileStatWithFileSize:(unsigned long long)arg1 appID:(id)arg2;
- (void)saveStatus;
- (void)scanFolder:(id)arg1 getTotalFileSize:(unsigned long long *)arg2 totalFileNum:(unsigned int *)arg3;
@property unsigned long long scanPhase; // @synthesize scanPhase=_scanPhase;
- (id)scanRootDir;
- (void)setTotalFileSize:(unsigned long long)arg1 totalFileNum:(unsigned int)arg2 contentModifyTime:(unsigned int)arg3 scanTime:(unsigned int)arg4 withAppID:(id)arg5;
- (void)setupMaxTotalFileSize;
- (id)statusFilePath;
- (id)subFolderNamesWithPath:(id)arg1;
- (void)workThread_scanFiles;
- (void)workthread_cleanFiles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

