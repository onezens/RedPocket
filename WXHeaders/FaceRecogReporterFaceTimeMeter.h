//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface FaceRecogReporterFaceTimeMeter : MMObject
{
    unsigned int _totalFrameCount;
    unsigned long long _verifyStartTime;
    unsigned long long _verifyEndTime;
    unsigned long long _detectFaceStartTime;
    unsigned long long _detectFaceEndTime;
    unsigned long long _readNumberStartTime;
    unsigned long long _readNumberEndTime;
}

@property(nonatomic) unsigned long long detectFaceEndTime; // @synthesize detectFaceEndTime=_detectFaceEndTime;
@property(nonatomic) unsigned long long detectFaceStartTime; // @synthesize detectFaceStartTime=_detectFaceStartTime;
- (unsigned int)getAvgProcessTimePerFrame;
- (unsigned int)getDetectFaceTime;
- (unsigned int)getReadNumberTime;
- (unsigned int)getVerifyTime;
@property(nonatomic) unsigned long long readNumberEndTime; // @synthesize readNumberEndTime=_readNumberEndTime;
@property(nonatomic) unsigned long long readNumberStartTime; // @synthesize readNumberStartTime=_readNumberStartTime;
@property(nonatomic) unsigned int totalFrameCount; // @synthesize totalFrameCount=_totalFrameCount;
@property(nonatomic) unsigned long long verifyEndTime; // @synthesize verifyEndTime=_verifyEndTime;
@property(nonatomic) unsigned long long verifyStartTime; // @synthesize verifyStartTime=_verifyStartTime;

@end
