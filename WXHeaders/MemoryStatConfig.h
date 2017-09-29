//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface MemoryStatConfig : NSObject <PBCoding>
{
    _Bool memoryStatEnabled;
    _Bool isABTestUser;
    int skipMaxStackDepth;
    int skipMinMallocSize;
    double expiredTime;
    double disableTime;
    double lastRecordTime;
    NSMutableArray *recordInfos;
    NSString *systemVersion;
    NSString *appUUID;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appUUID; // @synthesize appUUID;
@property(nonatomic) double disableTime; // @synthesize disableTime;
@property(nonatomic) double expiredTime; // @synthesize expiredTime;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) _Bool isABTestUser; // @synthesize isABTestUser;
- (id)lastRecordInfo;
@property(nonatomic) double lastRecordTime; // @synthesize lastRecordTime;
@property(nonatomic) _Bool memoryStatEnabled; // @synthesize memoryStatEnabled;
@property(retain, nonatomic) NSMutableArray *recordInfos; // @synthesize recordInfos;
@property(nonatomic) int skipMaxStackDepth; // @synthesize skipMaxStackDepth;
@property(nonatomic) int skipMinMallocSize; // @synthesize skipMinMallocSize;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

