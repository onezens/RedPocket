//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSData, NSString;

@interface CgiMDRcvVoiceReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amount; // @dynamic amount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *outtradeno; // @dynamic outtradeno;
@property(retain, nonatomic) NSData *prefix; // @dynamic prefix;
@property(retain, nonatomic) NSData *suffix; // @dynamic suffix;
@property(nonatomic) unsigned int voiceType; // @dynamic voiceType;

@end

