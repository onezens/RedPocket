//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IClearDataMgrExt.h"
#import "MMHttpConnectionDelegate.h"
#import "MMService.h"

@class NSString;

@interface MMHttpCacheMgr : MMService <IClearDataMgrExt, MMService, MMHttpConnectionDelegate>
{
}

+ (void)ClearCacheDir:(unsigned int)arg1;
+ (void)ClearCacheDirByUsrName:(id)arg1;
+ (id)GetCacheDir:(unsigned int)arg1;
+ (unsigned int)GetCacheType:(id)arg1;
+ (id)GetFilePath:(id)arg1 Type:(unsigned int)arg2;
- (void)HttpConnectionFail:(id)arg1;
- (void)HttpConnectionFinished:(id)arg1 cachekey:(id)arg2 response:(id)arg3 ErrNo:(int)arg4;
- (void)LoadCache:(id *)arg1 CacheKey:(id)arg2 Type:(unsigned int)arg3;
- (void)addAutoCleanTask:(unsigned int)arg1;
- (void)dealloc;
- (void)getWithURL:(id)arg1 cacheKey:(id)arg2 Type:(unsigned int)arg3 NotifyKey:(id)arg4;
- (void)getWithURL:(id)arg1 cacheKey:(id)arg2 Type:(unsigned int)arg3 NotifyKey:(id)arg4 RefererHeader:(id)arg5;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

