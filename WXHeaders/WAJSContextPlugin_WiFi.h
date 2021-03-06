//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

@class NEHotspotHelperCommand, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface WAJSContextPlugin_WiFi : WAJSContextPluginBase
{
    _Bool m_registed;
    _Bool m_hasPreSet;
    NSMutableDictionary *m_wifiInfoMap;
    NEHotspotHelperCommand *m_retainScanListCommand;
    NEHotspotHelperCommand *m_retainEvaluateCommand;
    NEHotspotHelperCommand *m_retainMantainCommand;
    NSMutableArray *m_scanWiFiList;
    NSObject<OS_dispatch_queue> *m_timerQueue;
    NSObject<OS_dispatch_source> *m_deliverTimer;
}

+ (long long)convertStringToNEConfidence:(id)arg1;
- (void).cxx_destruct;
- (_Bool)canHandleWifiList;
- (void)cancelDeliverTimeoutTimer;
- (id)connectedWiFi;
- (void)dealloc;
- (void)deliverNetworkCommand:(id)arg1;
- (void)evalueteWiFiWithSSID:(id)arg1 BSSID:(id)arg2 confidence:(id)arg3;
- (void)handleCommandForAuthenticate:(id)arg1;
- (void)handleCommandForEvaluate:(id)arg1;
- (void)handleCommandForFilterScanList:(id)arg1;
- (void)handleCommandForLogoff:(id)arg1;
- (void)handleCommandForMaintain:(id)arg1;
- (void)handleCommandForPresentUI:(id)arg1;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)handleHotspotWiFiCommand:(id)arg1;
- (id)init;
- (_Bool)isSupportHotspotWifi;
- (void)onDeliverNetworkCommandWhenTimeout;
- (void)preSetWifiListInfo:(id)arg1;
- (void)registerWifiHandler;
- (void)setDeliverTimeoutTimer;
- (_Bool)setWifiListInfo:(id)arg1;
- (void)unregisterWifiHandler;
- (id)wifiInfoWithSSID:(id)arg1 BSSID:(id)arg2;

@end

