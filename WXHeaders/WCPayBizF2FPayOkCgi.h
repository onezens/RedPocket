//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@interface WCPayBizF2FPayOkCgi : WCPayBaseCgi
{
    id <WCPayBizF2FPayOkCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayBizF2FPayOkCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (id)initF2FPayOkCgiWithDelegate:(id)arg1 request:(id)arg2;
- (void)startSendRequest;

@end

