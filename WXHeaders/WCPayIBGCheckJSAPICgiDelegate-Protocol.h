//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgiDelegate.h"

@class PayIBGCheckJsapiSignResp, WCPayBaseNetworkingError, WCPayIBGCheckJSAPICgi;

@protocol WCPayIBGCheckJSAPICgiDelegate <WCPayBaseCgiDelegate>
- (void)ibgCheckJSAPICgi:(WCPayIBGCheckJSAPICgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)ibgCheckJSAPICgi:(WCPayIBGCheckJSAPICgi *)arg1 didGetResponse:(PayIBGCheckJsapiSignResp *)arg2;
@end

