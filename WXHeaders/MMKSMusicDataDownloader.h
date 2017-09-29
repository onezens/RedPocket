//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LZAudioDataDownloader.h"

@class LZDownloadTaskItem, NSURLConnection;

@interface MMKSMusicDataDownloader : LZAudioDataDownloader
{
    NSURLConnection *_urlConnection;
    LZDownloadTaskItem *_taskItem;
    long long _statusCode;
    long long _downloadDataLen;
    double _startTime;
    double _downloadSpeed;
    double _costTime;
    struct _NSRange _downloadRange;
}

- (void).cxx_destruct;
- (_Bool)ParseRangeInfo:(id)arg1 Result:(id)arg2;
- (_Bool)beginDownload:(id)arg1;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (long long)continuousLengh;
@property(nonatomic) double costTime; // @synthesize costTime=_costTime;
- (void)dealloc;
- (double)downloadCostTime;
@property(nonatomic) long long downloadDataLen; // @synthesize downloadDataLen=_downloadDataLen;
@property(nonatomic) struct _NSRange downloadRange; // @synthesize downloadRange=_downloadRange;
@property(nonatomic) double downloadSpeed; // @synthesize downloadSpeed=_downloadSpeed;
- (id)init;
- (_Bool)isErrorCanRetry:(id)arg1;
- (void)reportContentLengthError;
- (void)reportContentRangeError;
- (void)reportContentTypeError;
- (void)reportDownloadStart;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) LZDownloadTaskItem *taskItem; // @synthesize taskItem=_taskItem;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
- (id)syncReplaceRequestIPIfNeed:(id)arg1;

@end

