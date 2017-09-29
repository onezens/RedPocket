//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMDiskBizUsageHandler, MMDiskUsageScanConfig, MMDiskUsageScanData, MMPathComponent, NSObject<OS_dispatch_queue>;

@interface MMDiskUsageScaner : NSObject
{
    _Bool m_isImmediateStop;
    int m_status;
    id <MMDiskUsageScannerDelegate> m_delegate;
    NSObject<OS_dispatch_queue> *m_workQueue;
    MMPathComponent *m_pathComponent;
    MMDiskBizUsageHandler *m_bizHandler;
    unsigned long long m_curScanDepth;
    MMDiskUsageScanData *m_scanData;
    MMDiskUsageScanConfig *m_config;
}

- (void).cxx_destruct;
- (void)ImmediateStop;
- (_Bool)IsRunning;
- (void)ReleaseWorkQueue;
- (void)SetWorkQueue:(id)arg1;
- (void)StartWithScanConfig:(id)arg1;
- (void)Stop;
- (void)addBizDelFileStat:(id)arg1 bizType:(int)arg2 delFileSize:(unsigned long long)arg3;
- (void)addBizDelFolderStat:(int)arg1 delFolderNum:(unsigned int)arg2 delFileNum:(unsigned int)arg3 delFileSize:(unsigned long long)arg4;
- (void)addBizFileStat:(id)arg1 bizType:(int)arg2 fileSize:(unsigned long long)arg3;
- (void)addMsgImageTypeStat:(const char *)arg1 bizType:(int)arg2 fileSize:(unsigned long long)arg3;
- (void)addSpecialFileStat:(const char *)arg1 bizType:(int)arg2 fileSize:(unsigned long long)arg3;
- (void)callScanStartWithConfig:(id)arg1;
- (void)checkFolderDelete:(id)arg1 path:(const char *)arg2;
- (void)checkNeedSlowDown;
- (void)clearCacheData;
- (unsigned long long)currentAppRootPathLength;
- (void)dealloc;
- (struct MMBizMatchInfo)fileMatchedBizType:(id)arg1 inFolder:(id)arg2;
- (void)finishScanFilesInFolder:(id)arg1;
- (void)finisheScanDisk:(id)arg1;
- (void)getChildFolderAndFile:(id)arg1;
- (id)init;
- (_Bool)isCanceled;
- (_Bool)isFileDelete:(const char *)arg1 matchInfo:(const struct MMBizMatchInfo *)arg2 accessTime:(long long)arg3 modifyTime:(long long)arg4 changeTime:(long long)arg5 birthTime:(long long)arg6 fileSize:(unsigned long long)arg7;
- (_Bool)isFileDelete:(const char *)arg1 storeTime:(long long)arg2 curTime:(long long)arg3 accessTime:(long long)arg4 modifyTime:(long long)arg5 changeTime:(long long)arg6 birthTime:(long long)arg7;
- (_Bool)isReadyToStart;
- (long long)latestTimeWithCurTime:(long long)arg1 accessTime:(long long)arg2 modifyTime:(long long)arg3 changeTime:(long long)arg4 birthTime:(long long)arg5;
- (long long)latestTimeWithCurTime:(long long)arg1 times:(long long *)arg2 len:(int)arg3;
- (void)loadBizHandler;
- (void)loadCacheData;
@property(retain, nonatomic) MMDiskBizUsageHandler *m_bizHandler; // @synthesize m_bizHandler;
@property(retain, nonatomic) MMDiskUsageScanConfig *m_config; // @synthesize m_config;
@property(nonatomic) unsigned long long m_curScanDepth; // @synthesize m_curScanDepth;
@property(nonatomic) __weak id <MMDiskUsageScannerDelegate> m_delegate; // @synthesize m_delegate;
@property _Bool m_isImmediateStop; // @synthesize m_isImmediateStop;
@property(retain, nonatomic) MMPathComponent *m_pathComponent; // @synthesize m_pathComponent;
@property(retain, nonatomic) MMDiskUsageScanData *m_scanData; // @synthesize m_scanData;
@property int m_status; // @synthesize m_status;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_workQueue; // @synthesize m_workQueue;
- (void)makeTmpFirstForRoot:(id)arg1;
- (void)matchBizWithChildFolder:(id)arg1 parentFolder:(id)arg2;
- (void)onScanDidStop;
- (void)onScanStart;
- (void)printCurrentScanSummary;
- (void)recursiveScanFolder:(id)arg1 isCanceled:(_Bool *)arg2;
- (void)removeCacheData;
- (void)reportUnknowDir:(const char *)arg1 fileNum:(unsigned int)arg2 fileSize:(unsigned long long)arg3;
- (void)reportUnknowFile:(const char *)arg1 accessTime:(long long)arg2 modifyTime:(long long)arg3 changeTime:(long long)arg4 birthTime:(long long)arg5 fileSize:(unsigned long long)arg6;
- (void)reportUnknowPath:(const char *)arg1 fileNum:(unsigned int)arg2 totalFileSize:(unsigned long long)arg3 latestFileTime:(unsigned int)arg4;
- (void)saveCacheData;
- (_Bool)scanBeginWithRootFolder;
- (void)scanDiskOnThread;
- (void)scanFileInFolder:(id)arg1 isCanceled:(_Bool *)arg2;
- (void)scanOneFolder:(id)arg1 isCanceled:(_Bool *)arg2;
- (id)scanRootDir;
- (void)scanSubFolder:(id)arg1 isCanceled:(_Bool *)arg2;
- (void)sumFolderStatData:(id)arg1;

@end

