//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface WAMsgNodeActionReportMgr : MMService <MMService>
{
    NSMutableDictionary *_coreId2ReportInfo;
}

- (void).cxx_destruct;
- (void)logActionForCore:(id)arg1 withActionInfo:(id)arg2;
- (void)logActionForCore:(id)arg1 withType:(int)arg2;
- (void)logJSApiCallForCore:(id)arg1 withName:(id)arg2;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
- (void)reportForCore:(id)arg1;
- (void)startLogForCore:(id)arg1 withStatId:(id)arg2 debugMode:(unsigned int)arg3;
- (void)stopLogForCore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

