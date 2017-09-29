//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface DBContactChatRoomDetail : NSObject <PBCoding>
{
    unsigned int chatRoomInfoVersion;
    unsigned int chatRoomInfoSvrVersion;
    unsigned int chatRoomStatus;
    unsigned int chatRoomLocalInfoVersion;
    NSString *chatRoomDesc;
    NSString *chatRoomDescModer;
    unsigned long long chatRoomDescTime;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatRoomDesc; // @synthesize chatRoomDesc;
@property(retain, nonatomic) NSString *chatRoomDescModer; // @synthesize chatRoomDescModer;
@property(nonatomic) unsigned long long chatRoomDescTime; // @synthesize chatRoomDescTime;
@property(nonatomic) unsigned int chatRoomInfoSvrVersion; // @synthesize chatRoomInfoSvrVersion;
@property(nonatomic) unsigned int chatRoomInfoVersion; // @synthesize chatRoomInfoVersion;
@property(nonatomic) unsigned int chatRoomLocalInfoVersion; // @synthesize chatRoomLocalInfoVersion;
@property(nonatomic) unsigned int chatRoomStatus; // @synthesize chatRoomStatus;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

