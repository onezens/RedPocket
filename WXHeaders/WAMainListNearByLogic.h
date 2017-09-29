//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"
#import "WAMainListNearByLocationLogicDelegate.h"

@class NSString, WAMainListNearByLocationLogic, WANearByInfo;

@interface WAMainListNearByLogic : MMObject <PBMessageObserverDelegate, WAMainListNearByLocationLogicDelegate>
{
    _Bool _isFirstTimeFetch;
    _Bool _isNearByDataLoaded;
    _Bool _allowNearBy;
    WANearByInfo *_nearByInfo;
    id <WAMainListNearByLogicDelegate> _delegate;
    unsigned long long _status;
    WAMainListNearByLocationLogic *_locationLogic;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(nonatomic) _Bool allowNearBy; // @synthesize allowNearBy=_allowNearBy;
- (void)dealloc;
@property(nonatomic) __weak id <WAMainListNearByLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)getAllowNearByStatus;
- (_Bool)hasNearByStore;
- (id)init;
@property(nonatomic) _Bool isFirstTimeFetch; // @synthesize isFirstTimeFetch=_isFirstTimeFetch;
@property(nonatomic) _Bool isNearByDataLoaded; // @synthesize isNearByDataLoaded=_isNearByDataLoaded;
- (_Bool)isNearByDataValid;
- (_Bool)isNearByThresholdValid;
- (_Bool)isNearByUrlExpired;
@property(retain, nonatomic) WAMainListNearByLocationLogic *locationLogic; // @synthesize locationLogic=_locationLogic;
- (unsigned long long)nearByAppNumber;
@property(retain, nonatomic) WANearByInfo *nearByInfo; // @synthesize nearByInfo=_nearByInfo;
- (id)nearByPageUrl;
- (void)onGetLocationFailedWithReason:(unsigned int)arg1;
- (void)onGetLocationSuccess:(id)arg1;
- (id)parseNearByInfoFromResponse:(id)arg1;
- (id)preViewItems;
- (void)reportWeAppLocation:(struct CLLocationCoordinate2D)arg1;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (_Bool)shouldShowNear;
- (_Bool)shouldTryToGetNear;
- (void)updateNearWeApp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

