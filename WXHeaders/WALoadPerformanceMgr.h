//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString;

@interface WALoadPerformanceMgr : MMService <MMService>
{
    unsigned long long _lanchStartTimeStamp;
    unsigned long long _navigateToStartTimeStamp;
    unsigned long long _redirectToStartTimeStamp;
    unsigned long long _switchTabTimeStamp;
    unsigned long long _lastWebviewID;
    long long _lastActionType;
    NSString *_currentAppID;
    unsigned int _currentVersion;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (unsigned int)logAppRouteActionType:(long long)arg1 webviewID:(unsigned long long)arg2;
- (void)logFromJSWithAppID:(id)arg1 message:(id)arg2;
- (void)logLaunchAppWithAppID:(id)arg1 version:(unsigned int)arg2;
- (void)logPerformancePreloadCostTime:(unsigned long long)arg1 withAppID:(id)arg2 isPreload:(_Bool)arg3;
- (void)logPerformanceWithType:(long long)arg1 costTime:(unsigned long long)arg2 withAppID:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)reportLoadPerformanceInfo:(unsigned int)arg1 reportType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

