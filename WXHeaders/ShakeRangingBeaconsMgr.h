//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CBCentralManagerDelegate.h"
#import "CLLocationManagerDelegate.h"
#import "MMConfigMgrExt.h"
#import "MMService.h"

@class CBCentralManager, CLLocationManager, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface ShakeRangingBeaconsMgr : MMService <CLLocationManagerDelegate, CBCentralManagerDelegate, MMConfigMgrExt, MMService>
{
    _Bool _isHaveShowed;
    CLLocationManager *_locationManager;
    CBCentralManager *_manager;
    NSMutableDictionary *_beaconsDict;
    NSArray *_uuidsArr;
    double _startRangingTime;
}

- (void).cxx_destruct;
@property(readonly) NSMutableArray *beacons;
@property(retain) NSMutableDictionary *beaconsDict; // @synthesize beaconsDict=_beaconsDict;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)dealloc;
- (void)detectBluetoothAvailable;
- (id)gatedLaunchOptionFilePath;
- (_Bool)haveStartRangingRegion:(id)arg1;
- (id)init;
- (_Bool)isDeviceBLEPowerOn;
@property _Bool isHaveShowed; // @synthesize isHaveShowed=_isHaveShowed;
- (id)keyForBeacon:(id)arg1;
- (id)loadGatedLaunchOptionsFromFile;
@property(retain) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
@property(retain, nonatomic) CBCentralManager *manager; // @synthesize manager=_manager;
- (void)onMMConfigUpdated;
- (void)registerRangingRegions;
- (_Bool)saveGatedLaunchOptions:(id)arg1;
@property(nonatomic) double startRangingTime; // @synthesize startRangingTime=_startRangingTime;
@property(retain, nonatomic) NSArray *uuidsArr; // @synthesize uuidsArr=_uuidsArr;
- (void)setupUUIDs;
- (void)startRanging;
- (void)stopRanging;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

