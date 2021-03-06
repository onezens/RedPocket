//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVAssetReader, AVAssetReaderOutput, AVAssetReaderVideoCompositionOutput, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVVideoComposition, AVVideoCompositionCoreAnimationTool, NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface SightAssetExportSession : NSObject
{
    float _frameRate;
    float _scaleFactor;
    AVAsset *_asset;
    NSDictionary *_inputVideoSettings;
    NSDictionary *_videoSettings;
    NSDictionary *_audioSettings;
    NSString *_outputFileType;
    NSURL *_outputURL;
    NSDictionary *_extraVideoInfo;
    AVVideoCompositionCoreAnimationTool *_animationTool;
    long long _status;
    NSError *_error;
    AVVideoComposition *_videoComposition;
    AVAssetReader *_reader;
    AVAssetReaderVideoCompositionOutput *_videoOutput;
    AVAssetReaderOutput *_audioOutput;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInputPixelBufferAdaptor *_videoPixelBufferAdaptor;
    AVAssetWriterInput *_audioInput;
    NSObject<OS_dispatch_queue> *_processingQueue;
    double _videoDuration;
    CDUnknownBlockType _completionHandler;
    CDStruct_1b6d18a9 _startTimeStamp;
    CDStruct_1b6d18a9 _lastTimeStamp;
    struct CGRect _cropFrame;
    CDStruct_e83c9415 _timeRange;
    CDStruct_e83c9415 _adjustTimeRange;
}

- (void).cxx_destruct;
- (struct CGAffineTransform)adjustPreferredTransform:(struct CGAffineTransform)arg1 withNaturalSize:(struct CGSize)arg2;
@property(nonatomic) CDStruct_e83c9415 adjustTimeRange; // @synthesize adjustTimeRange=_adjustTimeRange;
@property(retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool; // @synthesize animationTool=_animationTool;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) AVAssetWriterInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVAssetReaderOutput *audioOutput; // @synthesize audioOutput=_audioOutput;
@property(retain, nonatomic) NSDictionary *audioSettings; // @synthesize audioSettings=_audioSettings;
- (void)cancel;
- (void)complete;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) struct CGRect cropFrame; // @synthesize cropFrame=_cropFrame;
- (_Bool)encodeSamplesFromReaderOutput:(id)arg1 toWriterInput:(id)arg2;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSDictionary *extraVideoInfo; // @synthesize extraVideoInfo=_extraVideoInfo;
- (void)failWithError:(id)arg1;
- (void)failWithErrorText:(id)arg1;
- (void)finish;
@property(nonatomic) float frameRate; // @synthesize frameRate=_frameRate;
- (id)initWithAsset:(id)arg1;
@property(retain, nonatomic) NSDictionary *inputVideoSettings; // @synthesize inputVideoSettings=_inputVideoSettings;
@property(nonatomic) CDStruct_1b6d18a9 lastTimeStamp; // @synthesize lastTimeStamp=_lastTimeStamp;
@property(retain, nonatomic) NSString *outputFileType; // @synthesize outputFileType=_outputFileType;
@property(retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) AVAssetReader *reader; // @synthesize reader=_reader;
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) CDStruct_1b6d18a9 startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) AVAssetWriterInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVAssetReaderVideoCompositionOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *videoPixelBufferAdaptor; // @synthesize videoPixelBufferAdaptor=_videoPixelBufferAdaptor;
@property(retain, nonatomic) NSDictionary *videoSettings; // @synthesize videoSettings=_videoSettings;
@property(retain, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
- (void)stopExport;
- (struct CGAffineTransform)transform;

@end

