//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSDictionary, NSString, WCDeviceExtData;

@interface WCDevice : NSObject <WCTTableCoding>
{
    NSString *m_deviceType;
    NSString *m_deviceID;
    NSString *m_usrname;
    NSString *m_deviceName;
    long long m_DID;
    NSString *m_mac;
    NSString *m_md5Str;
    NSString *m_connProto;
    unsigned int m_connStrategy;
    unsigned int m_closeStrategy;
    int m_manuDataMacOffset;
    int m_serNumMacOffset;
    WCDeviceExtData *m_extData;
    NSDictionary *m_externalInfoJSONCache;
    unsigned int IntRes1;
    unsigned int IntRes2;
    NSString *StrRes1;
    NSString *StrRes2;
    NSString *_PLACE_HOLDER;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)IntRes1;
+ (const struct WCTProperty *)IntRes2;
+ (const struct WCTProperty *)StrRes1;
+ (const struct WCTProperty *)StrRes2;
+ (_Bool)hasBoundAbilityDevices;
+ (_Bool)hasBoundValidDevices;
+ (const struct WCTProperty *)m_DID;
+ (const struct WCTProperty *)m_closeStrategy;
+ (const struct WCTProperty *)m_connProto;
+ (const struct WCTProperty *)m_connStrategy;
+ (const struct WCTProperty *)m_deviceID;
+ (const struct WCTProperty *)m_deviceName;
+ (const struct WCTProperty *)m_deviceType;
+ (const struct WCTProperty *)m_mac;
+ (const struct WCTProperty *)m_manuDataMacOffset;
+ (const struct WCTProperty *)m_md5Str;
+ (const struct WCTProperty *)m_serNumMacOffset;
+ (const struct WCTProperty *)m_usrname;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(retain, nonatomic) NSString *PLACE_HOLDER; // @synthesize PLACE_HOLDER=_PLACE_HOLDER;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
- (_Bool)canApplyURL:(id)arg1;
- (id)deviceDisplayIconUrl;
- (id)deviceDisplayTitle;
- (id)deviceMacNumber;
- (id)getDeviceSupportUrls;
- (id)getExternalInfoDictionary;
- (_Bool)hasAbility:(id)arg1;
- (id)init;
- (_Bool)isAlwaysConnectInChatView;
- (_Bool)isBLEDevice;
- (_Bool)isBleSimpleDev;
- (_Bool)isBluetoohDevice;
- (_Bool)isConnectOnceInChatView;
- (_Bool)isContinueConnectWhenExit;
- (_Bool)isEADevice;
- (_Bool)isIgnoreInChatView;
- (_Bool)isM7Device;
- (_Bool)isPedometerDev;
- (_Bool)isSubLanDevice;
- (_Bool)isValidDevice;
- (_Bool)isWeightScaleDev;
- (_Bool)isWifiDevice;
@property(nonatomic) long long m_DID; // @synthesize m_DID;
@property(nonatomic) unsigned int m_closeStrategy; // @synthesize m_closeStrategy;
@property(retain, nonatomic) NSString *m_connProto; // @synthesize m_connProto;
@property(nonatomic) unsigned int m_connStrategy; // @synthesize m_connStrategy;
@property(retain, nonatomic) NSString *m_deviceID; // @synthesize m_deviceID;
@property(retain, nonatomic) NSString *m_deviceName; // @synthesize m_deviceName;
@property(retain, nonatomic) NSString *m_deviceType; // @synthesize m_deviceType;
@property(retain, nonatomic) WCDeviceExtData *m_extData; // @synthesize m_extData;
@property(retain, nonatomic) NSDictionary *m_externalInfoJSONCache; // @synthesize m_externalInfoJSONCache;
@property(retain, nonatomic) NSString *m_mac; // @synthesize m_mac;
@property(nonatomic) int m_manuDataMacOffset; // @synthesize m_manuDataMacOffset;
@property(retain, nonatomic) NSString *m_md5Str; // @synthesize m_md5Str;
@property(nonatomic) int m_serNumMacOffset; // @synthesize m_serNumMacOffset;
@property(retain, nonatomic) NSString *m_usrname; // @synthesize m_usrname;
- (id)ownerDevice;
- (void)setupDataBeforeWriteDB;
- (void)setupDataFromDB;
- (id)subDeviceMd5;
- (id)subDevices;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

