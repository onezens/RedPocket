//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, WAJSCoreService;

@interface WAJSContextPluginScheduler : NSObject
{
    WAJSCoreService *_ownerContext;
    NSMutableDictionary *_pluginName2InstanceDic;
}

- (void).cxx_destruct;
- (id)GetPluginInstanceByName:(id)arg1;
- (void)dealloc;
- (void)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)initWithOwnerJSContext:(id)arg1;
- (void)loadingInitPluginArray;
@property(readonly, nonatomic) __weak WAJSCoreService *ownerContext; // @synthesize ownerContext=_ownerContext;
@property(readonly, nonatomic) NSMutableDictionary *pluginName2InstanceDic; // @synthesize pluginName2InstanceDic=_pluginName2InstanceDic;
- (void)setWAAppTaskRunningState:(unsigned long long)arg1;
- (void)setWAAppTaskState:(unsigned long long)arg1;

@end

