//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@interface GameCenterDetailLogicController : MMObject <PBMessageObserverDelegate>
{
    id <GameCenterDetailLogicControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (void)getNewGameDetailInfo:(id)arg1;
- (void)getUpListWithAppID:(id)arg1;
- (void)handleGetUpListResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleNewGameDetailResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleUpFriendResp:(id)arg1 Event:(unsigned int)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)upFriend:(id)arg1 appID:(id)arg2;

@end

