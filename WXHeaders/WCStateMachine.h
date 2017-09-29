//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableSet, NSRecursiveLock, WCState;

@interface WCStateMachine : MMObject
{
    NSRecursiveLock *_lock;
    _Bool _active;
    id <WCStateMachineDelegate> _delegate;
    WCState *_initialState;
    WCState *_currentState;
    NSMutableSet *_states;
    NSMutableSet *_events;
}

- (void).cxx_destruct;
- (int)activate;
@property(readonly, nonatomic) _Bool active; // @synthesize active=_active;
- (int)addEvent:(id)arg1;
- (int)addState:(id)arg1;
@property(retain, nonatomic) WCState *currentState; // @synthesize currentState=_currentState;
@property(nonatomic) __weak id <WCStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
- (id)eventNamed:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *events; // @synthesize events=_events;
- (int)fireEvent:(id)arg1 userInfo:(id)arg2;
- (id)init;
@property(retain, nonatomic) WCState *initialState; // @synthesize initialState=_initialState;
- (id)stateNamed:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *states; // @synthesize states=_states;

@end

