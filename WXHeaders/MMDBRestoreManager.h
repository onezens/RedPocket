//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WCDBCorruptReportExt.h"
#import "WCDBRestoreProtocol.h"

@class MMDBRestoreReport, NSString;

@interface MMDBRestoreManager : MMService <MMService, WCDBRestoreProtocol, WCDBCorruptReportExt>
{
    MMDBRestoreReport *m_reporter;
    _Bool m_needBinning;
    _Bool m_pauseBinning;
    int m_restoreCount;
    int m_restoreDoneCount;
}

- (void).cxx_destruct;
- (void)ReportDatabaseCorrupt:(id)arg1;
- (_Bool)binning;
- (int)binningCount;
- (id)binningDirectoriesFrom:(id)arg1;
- (void)checkRemindFromWechatTeam;
- (Class)classFromTableName:(id)arg1;
- (void)clearBinning:(_Bool)arg1;
- (void)dealloc;
- (id)errorDescription:(id)arg1;
- (id)findBinningPathsFrom:(id)arg1;
- (id)init;
@property _Bool m_needBinning; // @synthesize m_needBinning;
@property _Bool m_pauseBinning; // @synthesize m_pauseBinning;
@property int m_restoreCount; // @synthesize m_restoreCount;
@property int m_restoreDoneCount; // @synthesize m_restoreDoneCount;
- (_Bool)needBinning;
- (_Bool)needRestore;
- (void)onRepairProgressUpdate:(float)arg1;
- (void)onServiceInit;
- (void)pauseBinning;
- (id)reporter;
- (void)resetInitMark:(_Bool)arg1;
- (long long)restoreRequireSize;
- (_Bool)restoreWithError:(id *)arg1 isAutoRestore:(_Bool)arg2;
- (void)setupMMDB:(id)arg1;
- (_Bool)shouldCloseMMCommand;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

