//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class MidasIAPSecurityPolicy, NSData, NSDictionary, NSError, NSInputStream, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSOutputStream, NSRecursiveLock, NSSet, NSString, NSURLConnection, NSURLCredential, NSURLRequest, NSURLResponse;

@interface MidasIAPURLConnectionOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSSecureCoding, NSCopying>
{
    _Bool _shouldUseCredentialStorage;
    NSOutputStream *_outputStream;
    NSSet *_runLoopModes;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSError *_error;
    NSData *_responseData;
    NSURLCredential *_credential;
    MidasIAPSecurityPolicy *_securityPolicy;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSDictionary *_userInfo;
    long long _state;
    NSRecursiveLock *_lock;
    NSURLConnection *_connection;
    NSString *_responseString;
    unsigned long long _responseStringEncoding;
    long long _totalBytesRead;
    CDUnknownBlockType _backgroundTaskCleanup;
    CDUnknownBlockType _uploadProgress;
    CDUnknownBlockType _downloadProgress;
    CDUnknownBlockType _authenticationChallenge;
    CDUnknownBlockType _cacheResponse;
    CDUnknownBlockType _redirectResponse;
}

+ (id)batchOfRequestOperations:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)networkRequestThread;
+ (void)networkRequestThreadEntryPoint:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType authenticationChallenge; // @synthesize authenticationChallenge=_authenticationChallenge;
@property(copy, nonatomic) CDUnknownBlockType backgroundTaskCleanup; // @synthesize backgroundTaskCleanup=_backgroundTaskCleanup;
@property(copy, nonatomic) CDUnknownBlockType cacheResponse; // @synthesize cacheResponse=_cacheResponse;
- (void)cancel;
- (void)cancelConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // @synthesize completionGroup=_completionGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) CDUnknownBlockType downloadProgress; // @synthesize downloadProgress=_downloadProgress;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)finish;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1;
@property(retain, nonatomic) NSInputStream *inputStream;
- (_Bool)isConcurrent;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isPaused;
- (_Bool)isReady;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)operationDidPause;
- (void)operationDidStart;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
- (void)pause;
@property(copy, nonatomic) CDUnknownBlockType redirectResponse; // @synthesize redirectResponse=_redirectResponse;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(copy, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(nonatomic) unsigned long long responseStringEncoding; // @synthesize responseStringEncoding=_responseStringEncoding;
- (void)resume;
@property(retain, nonatomic) NSSet *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property(retain, nonatomic) MidasIAPSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
- (void)setCacheResponseBlock:(CDUnknownBlockType)arg1;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setDownloadProgressBlock:(CDUnknownBlockType)arg1;
- (void)setRedirectResponseBlock:(CDUnknownBlockType)arg1;
- (void)setShouldExecuteAsBackgroundTaskWithExpirationHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool shouldUseCredentialStorage; // @synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(copy, nonatomic) CDUnknownBlockType uploadProgress; // @synthesize uploadProgress=_uploadProgress;
- (void)setUploadProgressBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)setWillSendRequestForAuthenticationChallengeBlock:(CDUnknownBlockType)arg1;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

