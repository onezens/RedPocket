//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POPAnimatableProperty.h"

@class NSString;

@interface POPPlaceholderAnimatableProperty : POPAnimatableProperty
{
    NSString *name;
    CDUnknownBlockType readBlock;
    CDUnknownBlockType writeBlock;
    double threshold;
}

- (void).cxx_destruct;
- (id)name;
- (CDUnknownBlockType)readBlock;
- (double)threshold;
- (CDUnknownBlockType)writeBlock;

@end

