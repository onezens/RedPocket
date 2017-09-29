//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IClearDataMgrExt.h"
#import "MMService.h"
#import "NSURLSessionDelegate.h"
#import "NSURLSessionDownloadDelegate.h"
#import "WCFacadeExt.h"

@class NSCache, NSString, NSURLSession;

@interface WCSightLoader : MMService <NSURLSessionDelegate, NSURLSessionDownloadDelegate, IClearDataMgrExt, WCFacadeExt, MMService>
{
    NSString *_sightCacheDirectory;
    NSURLSession *_session;
    NSCache *_observerCache;
    NSCache *_downloadItemCache;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)dealloc;
@property(retain, nonatomic) NSCache *downloadItemCache; // @synthesize downloadItemCache=_downloadItemCache;
- (id)genMp4PathForUrl:(id)arg1;
- (void)loadSightForUrl:(id)arg1 Observer:(id)arg2 atScene:(unsigned int)arg3 isPreload:(_Bool)arg4;
- (id)md5ForURL:(id)arg1;
@property(retain, nonatomic) NSCache *observerCache; // @synthesize observerCache=_observerCache;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onServiceInit;
- (_Bool)saveSightAtPath:(id)arg1 forUrl:(id)arg2;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *sightCacheDirectory; // @synthesize sightCacheDirectory=_sightCacheDirectory;
- (id)sightPathForUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

