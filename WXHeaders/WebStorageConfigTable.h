//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString, WebStorageConfigExt;

@interface WebStorageConfigTable : MMObject <WCTTableCoding>
{
    unsigned int _valueSize;
    unsigned int _expireTimestamp;
    unsigned int _lastModifyTime;
    NSString *_appId;
    NSString *_key;
    NSString *_weightStr;
    WebStorageConfigExt *_ext;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)appId;
+ (const struct WCTProperty *)expireTimestamp;
+ (const struct WCTProperty *)ext;
+ (const struct WCTProperty *)key;
+ (const struct WCTProperty *)lastModifyTime;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)valueSize;
+ (const struct WCTProperty *)weightStr;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int expireTimestamp; // @synthesize expireTimestamp=_expireTimestamp;
@property(retain, nonatomic) WebStorageConfigExt *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) unsigned int valueSize; // @synthesize valueSize=_valueSize;
@property(retain, nonatomic) NSString *weightStr; // @synthesize weightStr=_weightStr;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

