//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPaySetWCPayPasswordStruct : NSObject
{
    NSString *m_nsWCPayPassword;
    NSString *m_nsRequestKey;
    unsigned int m_uiPayScene;
    unsigned int m_uiPayChannel;
    NSString *m_nsToken;
    NSString *m_nsVerifyCode;
    NSString *m_nsUUID;
    NSString *m_nsAppID;
    NSString *m_nsAppName;
    NSString *m_nsAppSource;
    unsigned int m_cardBankTag;
    _Bool m_bIsAutoDeduct;
    NSString *_autoDeductBankType;
    NSString *_autoDeductBankSerial;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *autoDeductBankSerial; // @synthesize autoDeductBankSerial=_autoDeductBankSerial;
@property(copy, nonatomic) NSString *autoDeductBankType; // @synthesize autoDeductBankType=_autoDeductBankType;
- (void)dealloc;
@property(nonatomic) _Bool m_bIsAutoDeduct; // @synthesize m_bIsAutoDeduct;
@property(nonatomic) unsigned int m_cardBankTag; // @synthesize m_cardBankTag;
@property(retain, nonatomic) NSString *m_nsAppID; // @synthesize m_nsAppID;
@property(retain, nonatomic) NSString *m_nsAppName; // @synthesize m_nsAppName;
@property(retain, nonatomic) NSString *m_nsAppSource; // @synthesize m_nsAppSource;
@property(retain, nonatomic) NSString *m_nsRequestKey; // @synthesize m_nsRequestKey;
@property(retain, nonatomic) NSString *m_nsToken; // @synthesize m_nsToken;
@property(retain, nonatomic) NSString *m_nsUUID; // @synthesize m_nsUUID;
@property(retain, nonatomic) NSString *m_nsVerifyCode; // @synthesize m_nsVerifyCode;
@property(retain, nonatomic) NSString *m_nsWCPayPassword; // @synthesize m_nsWCPayPassword;
@property(nonatomic) unsigned int m_uiPayChannel; // @synthesize m_uiPayChannel;
@property(nonatomic) unsigned int m_uiPayScene; // @synthesize m_uiPayScene;

@end

