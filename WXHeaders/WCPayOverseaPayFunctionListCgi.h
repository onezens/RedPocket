//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessageObserverDelegate.h"

@interface WCPayOverseaPayFunctionListCgi : NSObject <PBMessageObserverDelegate>
{
    _Bool _m_isCgiEnd;
    unsigned int _m_tpaCountry;
    id <WCPayOverseaPayFunctionListCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callErrorDelegateWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)callOkDelegateWithRespObject:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 TpaCountry:(unsigned int)arg2;
- (_Bool)isCgiEnd;
@property(nonatomic) __weak id <WCPayOverseaPayFunctionListCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_isCgiEnd; // @synthesize m_isCgiEnd=_m_isCgiEnd;
@property(nonatomic) unsigned int m_tpaCountry; // @synthesize m_tpaCountry=_m_tpaCountry;
- (void)startRequest;

@end

