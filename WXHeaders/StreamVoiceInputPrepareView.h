//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSArray, NSMutableArray;

@interface StreamVoiceInputPrepareView : MMUIView
{
    NSMutableArray *_dots;
    NSArray *_animationKeyTimes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *animationKeyTimes; // @synthesize animationKeyTimes=_animationKeyTimes;
@property(retain, nonatomic) NSMutableArray *dots; // @synthesize dots=_dots;
- (id)init;
- (void)startPlayAnimation;
- (void)stopPlayAnimation;

@end

