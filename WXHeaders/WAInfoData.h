//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WAInfoData : MMObject <WCTTableCoding>
{
    unsigned int _updateTime;
    unsigned int _packageSize;
    unsigned int _versionStatus;
    unsigned int _debugModeType;
    NSString *_appID;
    NSString *_username;
    unsigned long long _version;
    NSString *_packageCheckSum;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)appID;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)packageCheckSum;
+ (const struct WCTProperty *)packageSize;
+ (const struct WCTProperty *)updateTime;
+ (const struct WCTProperty *)username;
+ (const struct WCTProperty *)version;
+ (const struct WCTProperty *)versionStatus;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) unsigned int debugModeType; // @synthesize debugModeType=_debugModeType;
@property(retain, nonatomic) NSString *packageCheckSum; // @synthesize packageCheckSum=_packageCheckSum;
@property(nonatomic) unsigned int packageSize; // @synthesize packageSize=_packageSize;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned int versionStatus; // @synthesize versionStatus=_versionStatus;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

