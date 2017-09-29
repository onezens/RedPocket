//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GPUImageOutput, NSMutableArray, NSString;

@interface GPUImageFilterPipeline : NSObject
{
    NSString *stringValue;
    NSMutableArray *_filters;
    GPUImageOutput *_input;
    id <GPUImageInput> _output;
}

- (void).cxx_destruct;
- (_Bool)_parseConfiguration:(id)arg1;
- (void)_refreshFilters;
- (void)addFilter:(id)arg1;
- (void)addFilter:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)currentFilteredFrame;
- (id)currentFilteredFrameWithOrientation:(long long)arg1;
@property(retain) NSMutableArray *filters; // @synthesize filters=_filters;
- (id)initWithConfiguration:(id)arg1 input:(id)arg2 output:(id)arg3;
- (id)initWithConfigurationFile:(id)arg1 input:(id)arg2 output:(id)arg3;
- (id)initWithOrderedFilters:(id)arg1 input:(id)arg2 output:(id)arg3;
@property(retain) GPUImageOutput *input; // @synthesize input=_input;
- (struct CGImage *)newCGImageFromCurrentFilteredFrame;
@property(retain) id <GPUImageInput> output; // @synthesize output=_output;
- (void)removeAllFilters;
- (void)removeFilter:(id)arg1;
- (void)removeFilterAtIndex:(unsigned long long)arg1;
- (void)replaceAllFilters:(id)arg1;
- (void)replaceFilterAtIndex:(unsigned long long)arg1 withFilter:(id)arg2;

@end

