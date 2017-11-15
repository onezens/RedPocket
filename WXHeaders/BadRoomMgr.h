//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMMNewSessionMgrExt.h"
#import "INewSyncExt.h"
#import "MMService.h"
#import "MessageDBExt.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString;

@interface BadRoomMgr : MMService <MessageDBExt, IMMNewSessionMgrExt, INewSyncExt, MMService>
{
    NSMutableArray *m_arrSyncDatas;
    NSObject<OS_dispatch_queue> *m_updateDigestQueue;
    NSRecursiveLock *_m_oLock;
}

- (void).cxx_destruct;
- (void)AddDeletedMsg:(long long)arg1 createTime:(unsigned int)arg2;
- (id)HandleSysMsg:(id)arg1 revokeMsgId:(long long *)arg2;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)batchHandleDigestDatas:(id)arg1;
- (id)convertDataToDigest:(id)arg1;
- (void)dealloc;
- (_Bool)existsInDeletedMsg:(long long)arg1;
- (id)genSessionByDigest:(id)arg1;
- (id)getPBPath;
- (id)loadDeleteMsg;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
- (void)notifyWithData:(id)arg1;
- (void)onDeleteAllMsgs:(id)arg1;
- (void)onDeleteBadRoomMsg:(long long)arg1 createTime:(unsigned int)arg2 chatName:(id)arg3;
- (void)onDeleteBrokenMsg:(unsigned int)arg1 chatName:(id)arg2;
- (void)onNewSyncBadRoomAddDigest:(id)arg1;
- (void)onNewSyncBadRoomBatchHandleDigest;
- (void)onNewSyncBadRoomClearUnread:(id)arg1;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)onWillDeleteSession:(id)arg1;
- (void)saveDeleteMsg:(id)arg1;
- (void)updateSessionInfos:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

