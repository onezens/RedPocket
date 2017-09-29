//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSString, SKBuiltinBuffer_t;

@interface LBSLifeMgr : MMService <PBMessageObserverDelegate, MMService>
{
    SKBuiltinBuffer_t *_getBuff;
    SKBuiltinBuffer_t *_searchBuff;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (int)autoSearchLBSLife:(id)arg1 Keyword:(id)arg2 Scene:(unsigned int)arg3 EntryTime:(unsigned int)arg4 StartFromFirst:(_Bool)arg5;
- (void)dealloc;
@property(retain, nonatomic) SKBuiltinBuffer_t *getBuff; // @synthesize getBuff=_getBuff;
- (int)getLBSLife:(id)arg1 StartFromFirst:(_Bool)arg2 Scene:(unsigned int)arg3 EntryTime:(unsigned int)arg4;
- (int)getLBSLifeDetail:(id)arg1;
- (void)handleGetLifeListResponse:(id)arg1;
@property(retain, nonatomic) SKBuiltinBuffer_t *searchBuff; // @synthesize searchBuff=_searchBuff;
- (int)searchLBSLife:(id)arg1 Keyword:(id)arg2 StartFromFirst:(_Bool)arg3 Scene:(unsigned int)arg4 EntryTime:(unsigned int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

