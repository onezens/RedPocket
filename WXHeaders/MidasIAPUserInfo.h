//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface MidasIAPUserInfo : NSObject <NSCopying>
{
    _Bool _isFirstCharge;
    NSString *_openId;
    NSString *_openKey;
    NSString *_sessionId;
    NSString *_sessionType;
    NSString *_payId;
    NSString *_authKey;
    NSString *_pf;
    NSString *_pfKey;
    NSString *_zoneId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *authKey; // @synthesize authKey=_authKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(nonatomic) _Bool isFirstCharge; // @synthesize isFirstCharge=_isFirstCharge;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *openKey; // @synthesize openKey=_openKey;
@property(retain, nonatomic) NSString *payId; // @synthesize payId=_payId;
@property(retain, nonatomic) NSString *pf; // @synthesize pf=_pf;
@property(retain, nonatomic) NSString *pfKey; // @synthesize pfKey=_pfKey;
- (void)reset;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSString *zoneId; // @synthesize zoneId=_zoneId;

@end

