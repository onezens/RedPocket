//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMAnimatedImagePlayConfig : NSObject
{
    _Bool _needCache;
    NSString *_cpKey;
    double _maxCacheWidth;
}

+ (id)defaultConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(nonatomic) double maxCacheWidth; // @synthesize maxCacheWidth=_maxCacheWidth;
@property(nonatomic) _Bool needCache; // @synthesize needCache=_needCache;

@end

