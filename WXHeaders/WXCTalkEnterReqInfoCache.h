//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface WXCTalkEnterReqInfoCache : NSObject
{
    _Bool _isFrequentEnter;
    unsigned int _roomId;
    int _enterType;
    NSString *_svrGroupId;
    unsigned long long _roomKey;
    NSData *_reqData;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) _Bool isFrequentEnter; // @synthesize isFrequentEnter=_isFrequentEnter;
@property(retain, nonatomic) NSData *reqData; // @synthesize reqData=_reqData;
@property(nonatomic) unsigned int roomId; // @synthesize roomId=_roomId;
@property(nonatomic) unsigned long long roomKey; // @synthesize roomKey=_roomKey;
@property(copy, nonatomic) NSString *svrGroupId; // @synthesize svrGroupId=_svrGroupId;

@end

