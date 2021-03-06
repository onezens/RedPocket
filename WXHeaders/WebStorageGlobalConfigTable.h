//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WebStorageGlobalConfigTable : MMObject <WCTTableCoding>
{
    unsigned int _realWeight;
    NSString *_appId;
    NSString *_weightStr;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)appId;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)realWeight;
+ (const struct WCTProperty *)weightStr;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int realWeight; // @synthesize realWeight=_realWeight;
@property(retain, nonatomic) NSString *weightStr; // @synthesize weightStr=_weightStr;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

