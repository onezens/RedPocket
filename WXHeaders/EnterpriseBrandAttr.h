//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface EnterpriseBrandAttr : MMObject <WCTTableCoding>
{
    unsigned int _qyUin;
    unsigned int _userUin;
    unsigned int _userFlag;
    unsigned int _wwExposeTimes;
    unsigned int _wwMaxExposeTimes;
    NSString *_userName;
    unsigned long long _wwCorpId;
    unsigned long long _wwUserVid;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)qyUin;
+ (const struct WCTProperty *)userFlag;
+ (const struct WCTProperty *)userName;
+ (const struct WCTProperty *)userUin;
+ (const struct WCTProperty *)wwCorpId;
+ (const struct WCTProperty *)wwExposeTimes;
+ (const struct WCTProperty *)wwMaxExposeTimes;
+ (const struct WCTProperty *)wwUserVid;
- (void).cxx_destruct;
@property(nonatomic) unsigned int qyUin; // @synthesize qyUin=_qyUin;
@property(nonatomic) unsigned int userFlag; // @synthesize userFlag=_userFlag;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned int userUin; // @synthesize userUin=_userUin;
@property(nonatomic) unsigned long long wwCorpId; // @synthesize wwCorpId=_wwCorpId;
@property(nonatomic) unsigned int wwExposeTimes; // @synthesize wwExposeTimes=_wwExposeTimes;
@property(nonatomic) unsigned int wwMaxExposeTimes; // @synthesize wwMaxExposeTimes=_wwMaxExposeTimes;
@property(nonatomic) unsigned long long wwUserVid; // @synthesize wwUserVid=_wwUserVid;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

