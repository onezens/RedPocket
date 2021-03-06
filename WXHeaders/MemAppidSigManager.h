//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableDictionary;

@interface MemAppidSigManager : NSObject <NSCoding>
{
    NSMutableDictionary *appidSigDic;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)expireTimeByAppid:(unsigned int)arg1 andAppExpTime:(unsigned int)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)memSigByAppid:(unsigned int)arg1 andName:(id)arg2;
- (void)printAppidSigAll;
- (void)removeMemSigByAppid:(unsigned int)arg1;
- (void)setMemPriority:(unsigned int)arg1 andTime:(unsigned int)arg2 byAppid:(unsigned int)arg3;
- (void)setMemSig:(id)arg1;
- (unsigned int)sigTimeByAppid:(unsigned int)arg1;
- (unsigned int)topPriorityAppid;

@end

