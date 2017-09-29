//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSession, NSURLSessionDownloadTask, WADownloadFileProgressInfo;

@interface WADownloadFileTask : NSObject
{
    NSString *_appID;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSString *_taskID;
    NSURLSessionDownloadTask *_task;
    CDUnknownBlockType _completionHandler;
    _Bool _isRedirectInvalid;
    NSString *_url;
    NSMutableDictionary *_dicContext;
    _Bool _isExceedMaxFileSize;
    _Bool _isCanceled;
    id <WADownloadFileTaskDelegate> delegate;
    NSString *_savePath;
    NSString *_localID;
    unsigned long long _lastUpdateProgressAbsoluteTime;
    WADownloadFileProgressInfo *_lastNotNotifyProgressInfo;
}

- (void).cxx_destruct;
- (void)anyThread_didFinishDownloadingToURL:(id)arg1 mimeType:(id)arg2;
- (void)anyThread_updateTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)callCompletionHandlerWithLocalID:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;
- (void)cancel;
- (void)cancelForExceedMaxSize;
- (void)cancelWithError:(id)arg1;
- (void)dealloc;
@property __weak id <WADownloadFileTaskDelegate> delegate; // @synthesize delegate;
- (void)flushProgressNotifcation;
- (id)getTaskID;
- (id)initWithAppID:(id)arg1 urlSession:(id)arg2 workerQueue:(id)arg3 taskID:(id)arg4;
@property _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property _Bool isExceedMaxFileSize; // @synthesize isExceedMaxFileSize=_isExceedMaxFileSize;
@property(retain) WADownloadFileProgressInfo *lastNotNotifyProgressInfo; // @synthesize lastNotNotifyProgressInfo=_lastNotNotifyProgressInfo;
@property unsigned long long lastUpdateProgressAbsoluteTime; // @synthesize lastUpdateProgressAbsoluteTime=_lastUpdateProgressAbsoluteTime;
@property(retain) NSString *localID; // @synthesize localID=_localID;
- (void)markRedirectFail;
- (void)notifyProgressWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)reportTaskRecord:(id)arg1 url:(id)arg2 method:(id)arg3 statusCode:(unsigned int)arg4 result:(_Bool)arg5;
@property(retain) NSString *savePath; // @synthesize savePath=_savePath;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithURL:(id)arg1 httpHeaders:(id)arg2 userAgent:(id)arg3 referer:(id)arg4 context:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)task;
- (void)taskDidCompleteWithError:(id)arg1 statusCode:(unsigned long long)arg2;
- (void)taskDidEnd;
- (id)workerQueue;

@end
