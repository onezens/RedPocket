//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface UploadVoiceWrap : NSObject <PBCoding>
{
    unsigned int m_uiLocalID;
    unsigned int m_uiCreateTime;
    unsigned int m_uiOffset;
    unsigned int m_uiLen;
    unsigned int m_uiVoiceTime;
    unsigned int m_uiEndFlag;
    unsigned int m_uiRetryCount;
    unsigned int m_uiCancelFlag;
    unsigned int m_uiVoiceFormat;
    unsigned int m_uiInsertQueueTime;
    unsigned int _m_uiVoiceLen;
    unsigned int _m_uiVoiceForwardFlag;
    unsigned int _m_uiCgi;
    long long m_n64SvrID;
    NSString *m_nsToUsrName;
    NSString *m_nsExtend;
    NSString *_m_nsFromUsrName;
    NSData *_m_dtVoice;
    NSString *_m_nsMsgSource;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(retain, nonatomic) NSData *m_dtVoice; // @synthesize m_dtVoice=_m_dtVoice;
@property(nonatomic) long long m_n64SvrID; // @synthesize m_n64SvrID;
@property(retain, nonatomic) NSString *m_nsExtend; // @synthesize m_nsExtend;
@property(retain, nonatomic) NSString *m_nsFromUsrName; // @synthesize m_nsFromUsrName=_m_nsFromUsrName;
@property(retain, nonatomic) NSString *m_nsMsgSource; // @synthesize m_nsMsgSource=_m_nsMsgSource;
@property(retain, nonatomic) NSString *m_nsToUsrName; // @synthesize m_nsToUsrName;
@property(nonatomic) unsigned int m_uiCancelFlag; // @synthesize m_uiCancelFlag;
@property(nonatomic) unsigned int m_uiCgi; // @synthesize m_uiCgi=_m_uiCgi;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned int m_uiEndFlag; // @synthesize m_uiEndFlag;
@property(nonatomic) unsigned int m_uiInsertQueueTime; // @synthesize m_uiInsertQueueTime;
@property(nonatomic) unsigned int m_uiLen; // @synthesize m_uiLen;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
@property(nonatomic) unsigned int m_uiOffset; // @synthesize m_uiOffset;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount;
@property(nonatomic) unsigned int m_uiVoiceFormat; // @synthesize m_uiVoiceFormat;
@property(nonatomic) unsigned int m_uiVoiceForwardFlag; // @synthesize m_uiVoiceForwardFlag=_m_uiVoiceForwardFlag;
@property(nonatomic) unsigned int m_uiVoiceLen; // @synthesize m_uiVoiceLen=_m_uiVoiceLen;
@property(nonatomic) unsigned int m_uiVoiceTime; // @synthesize m_uiVoiceTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

