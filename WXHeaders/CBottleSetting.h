//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface CBottleSetting : NSObject <NSCoding>
{
    unsigned int m_uiSex;
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsSignature;
    NSString *m_nsHeadImageMD5;
    NSString *m_nsHDImgStatus;
    NSString *m_nsImgStatus;
    _Bool m_bFirstIn;
    unsigned int m_uiLastMsgType;
    unsigned int m_uiChatStatus;
    NSString *m_nsHeadImgUrl;
    NSString *m_nsHeadHDImgUrl;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool m_bFirstIn; // @synthesize m_bFirstIn;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(retain, nonatomic) NSString *m_nsHDImgStatus; // @synthesize m_nsHDImgStatus;
@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl; // @synthesize m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImageMD5; // @synthesize m_nsHeadImageMD5;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(retain, nonatomic) NSString *m_nsImgStatus; // @synthesize m_nsImgStatus;
@property(retain, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(retain, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(nonatomic) unsigned int m_uiChatStatus; // @synthesize m_uiChatStatus;
@property(nonatomic) unsigned int m_uiLastMsgType; // @synthesize m_uiLastMsgType;
@property(nonatomic) unsigned int m_uiSex; // @synthesize m_uiSex;
- (void)preInit;

@end

