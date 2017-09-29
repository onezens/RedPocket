//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface HealthKitSampleSource : MMObject <PBCoding>
{
    _Bool bIsAppleWatch;
    _Bool bIsLocalDevice;
    _Bool bIsInWhiteList;
    unsigned int uiStepCount;
    NSString *nsBundleId;
    NSString *nsAppName;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool bIsAppleWatch; // @synthesize bIsAppleWatch;
@property(nonatomic) _Bool bIsInWhiteList; // @synthesize bIsInWhiteList;
@property(nonatomic) _Bool bIsLocalDevice; // @synthesize bIsLocalDevice;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *nsAppName; // @synthesize nsAppName;
@property(retain, nonatomic) NSString *nsBundleId; // @synthesize nsBundleId;
@property(nonatomic) unsigned int uiStepCount; // @synthesize uiStepCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

