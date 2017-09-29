//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "GPUImageInput.h"

@class GPUImageFramebuffer, NSMutableArray, NSString;

@interface WCCameraWriterLogic : MMObject <GPUImageInput>
{
    NSMutableArray *m_movieWriters;
    GPUImageFramebuffer *inputFramebufferForDisplay;
    GPUImageFramebuffer *lastFrameBuffer;
    unsigned long long inputRotation;
}

- (void).cxx_destruct;
- (void)addMovieWriter:(id)arg1;
- (void)dealloc;
- (_Bool)enabled;
- (void)endProcessing;
- (struct CGImage *)getLastFrameImage;
- (id)init;
- (struct CGSize)maximumOutputSize;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)removeMovieWriter:(id)arg1;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (_Bool)wantsMonochromeInput;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

