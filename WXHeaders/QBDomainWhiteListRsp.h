//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QBJceObjectV2.h"

@class NSDictionary, NSString;

@interface QBDomainWhiteListRsp : QBJceObjectV2
{
    int jcev2_p_0_r_iDomainTime;
    NSDictionary *jcev2_p_1_o_mTypeDomain__b0x9i_M09ONSNumberVONSString;
    NSString *jcev2_p_2_o_sContentMd5;
}

+ (void)initialize;
+ (id)jceType;
- (void).cxx_destruct;
@property(nonatomic, getter=iDomainTime, setter=setIDomainTime:) int jcev2_p_0_r_iDomainTime; // @synthesize jcev2_p_0_r_iDomainTime;
- (id)init;
@property(retain, nonatomic, getter=mTypeDomain, setter=setMTypeDomain:) NSDictionary *jcev2_p_1_o_mTypeDomain__b0x9i_M09ONSNumberVONSString; // @synthesize jcev2_p_1_o_mTypeDomain__b0x9i_M09ONSNumberVONSString;
@property(retain, nonatomic, getter=sContentMd5, setter=setSContentMd5:) NSString *jcev2_p_2_o_sContentMd5; // @synthesize jcev2_p_2_o_sContentMd5;

@end

