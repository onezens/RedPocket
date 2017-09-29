//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@interface WCDurationLogItem : MMObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int localId;
    unsigned int activeStartTime;
    unsigned int activeEndTime;
    long long lastInsertedRowID;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)activeEndTime;
+ (const struct WCTProperty *)activeStartTime;
+ (const struct WCTProperty *)localId;
+ (id)logItem;
+ (id)logItemFromDescription:(id)arg1;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (id)stringFromItems:(id)arg1;
@property(nonatomic) unsigned int activeEndTime; // @synthesize activeEndTime;
@property(nonatomic) unsigned int activeStartTime; // @synthesize activeStartTime;
- (id)description;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) unsigned int localId; // @synthesize localId;
- (void)reset;

@end

