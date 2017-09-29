//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INewABTestMgrExt.h"

@class MemoryRecordInfo, MemoryStatConfig, MemoryStatReporter, NSRecursiveLock, NSString;

@interface MemoryStatManager : NSObject <INewABTestMgrExt>
{
    NSString *m_rootDir;
    NSString *m_dataDir;
    NSString *m_configPath;
    NSRecursiveLock *m_lock;
    MemoryStatConfig *m_config;
    MemoryRecordInfo *m_currRecord;
    MemoryRecordInfo *m_lastRecord;
    unsigned long long m_userType;
    _Bool m_isStartTracking;
    MemoryStatReporter *m_reporter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addCurrentThreadToMonitor:(id)arg1;
- (void)checkABTest:(_Bool)arg1;
- (void)checkAndRecord;
- (_Bool)checkDataValid;
- (_Bool)checkDeviceSatisfied;
- (void)clearUnnecessaryData;
- (void)doIDKeyReport:(int)arg1 value:(int)arg2;
- (void)getlastFOOMThreadInfos;
- (void)handleDidBecomeActiveNotification:(id)arg1;
- (void)handleDidEnterBackgroundNotification:(id)arg1;
- (void)handleWillEnterForegroundNotification:(id)arg1;
- (id)init;
- (_Bool)isMemoryStatEnabled;
- (void)loadConfig;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (void)onSignalCrash;
- (id)recordList;
- (void)removeAllFullReport;
- (void)removeCurrentThread;
- (void)saveConfig;
- (void)setMemoryStatEnabled:(_Bool)arg1;
- (_Bool)shouldEnterUploadReport;
- (void)startTracking;
- (void)uploadAllFullReport;
- (void)uploadLog;
- (void)uploadReport:(id)arg1;

@end

