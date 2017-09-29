//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPaySecurityBaseControlLogic.h"

#import "MMPatternLockLogicDelegate.h"
#import "WCPayTouchLockVerifyLogicDelegate.h"

@class NSString;

@interface WCPayWalletLockVerifyLogic : WCPaySecurityBaseControlLogic <MMPatternLockLogicDelegate, WCPayTouchLockVerifyLogicDelegate>
{
    unsigned int _patternLockLogicTag;
    id <WCPayWalletLockVerifyLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayWalletLockVerifyLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getEnteranceViewContoller;
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (_Bool)isInValidDuration;
- (_Bool)needBlockLeftBarbuttonItemInEnteranceScene;
- (_Bool)needBlockUntilVerified:(id)arg1;
- (void)onPatternLockErrorOutOfLimit;
- (void)onPatternLockLogicNeedDismiss;
- (void)onPatternLockLogicOperateCancel;
- (void)onPatternLockLogicOperateSuccess;
@property(nonatomic) unsigned int patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
- (void)startLogic;
- (void)touchLockVerifySuccess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

