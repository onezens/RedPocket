//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface OpenECardAuthReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *ecardType; // @dynamic ecardType;
@property(nonatomic) unsigned int openScene; // @dynamic openScene;
@property(retain, nonatomic) NSString *wxpPasswdEnc; // @dynamic wxpPasswdEnc;

@end

