//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WAPageFlowAppInfo : MMObject
{
    _Bool _isSubApp;
    NSString *_username;
    NSString *_appid;
    unsigned long long _appState;
    unsigned long long _useState;
    WAPageFlowAppInfo *_hostAppInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long appState; // @synthesize appState=_appState;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) WAPageFlowAppInfo *hostAppInfo; // @synthesize hostAppInfo=_hostAppInfo;
- (id)initWithUserName:(id)arg1 appid:(id)arg2 type:(unsigned int)arg3 useState:(unsigned long long)arg4;
@property(nonatomic) _Bool isSubApp; // @synthesize isSubApp=_isSubApp;
@property(nonatomic) unsigned long long useState; // @synthesize useState=_useState;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

