//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseTenPayCgi.h"

@class WCPaySetUserExInfoCgiRequest;

@interface WCPaySetUserExInfoCgi : WCPayBaseTenPayCgi
{
    WCPaySetUserExInfoCgiRequest *_cgiRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPaySetUserExInfoCgiRequest *cgiRequest; // @synthesize cgiRequest=_cgiRequest;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (id)init;
- (void)startRequest;

// Remaining properties
@property(nonatomic) __weak id <WCPaySetUserExInfoCgiDelegate> delegate; // @dynamic delegate;

@end

