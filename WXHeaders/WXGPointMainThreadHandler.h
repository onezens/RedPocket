//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WXGPointMainThreadHandler : NSObject
{
}

+ (unsigned int)p_findRepeatCountInStack:(unsigned long long *)arg1 withAddr:(unsigned long long)arg2;
- (void)addThreadStack:(unsigned long long *)arg1 andStackCount:(unsigned long long)arg2;
- (void)dealloc;
- (void)freeMainThreadCycleArray;
- (unsigned long long *)getLastMainThreadStack;
- (unsigned long long)getLastMainThreadStackCount;
- (unsigned int)getPerStackInterval;
- (struct KSStackCursor *)getPointStackCursor;
- (unsigned long long)getStackMaxCount;
- (id)init;
- (unsigned int)p_findRepeatCountInArrayWithAddr:(unsigned long long)arg1;

@end

