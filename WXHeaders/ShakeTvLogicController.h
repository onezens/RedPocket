//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ITvSearchExt.h"
#import "LocationRetrieveDelegate.h"

@class LocationRetriever, NSString;

@interface ShakeTvLogicController : MMObject <LocationRetrieveDelegate, ITvSearchExt>
{
    id <ShakeLogicProxyDelegate> m_delegate;
    unsigned int m_sessionId;
    LocationRetriever *m_locationRetrieve;
}

- (void).cxx_destruct;
- (void)OnEndRecord;
- (void)OnGetTvItem:(id)arg1 andSessionId:(unsigned int)arg2;
- (void)OnStartRecord;
- (void)OnTvError:(int)arg1 andSessionId:(unsigned int)arg2;
- (void)dealloc;
- (id)getMsgForState:(unsigned int)arg1;
- (unsigned int)getSessionId;
- (id)initWithDelegate:(id)arg1;
- (_Bool)isShowBannerView;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)shakeReport;
- (void)shakeReset;
- (void)shakeStop;
- (void)shakeTerminate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

