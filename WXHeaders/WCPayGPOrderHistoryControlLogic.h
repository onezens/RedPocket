//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "PBMessageObserverDelegate.h"
#import "WCPayGPOrderHistoryControllerDelegate.h"
#import "WCPayGPOrderStatusControlLogicDelegate.h"

@class AAQueryListRes, NSString;

@interface WCPayGPOrderHistoryControlLogic : WCPayControlLogic <PBMessageObserverDelegate, WCPayGPOrderHistoryControllerDelegate, WCPayGPOrderStatusControlLogicDelegate>
{
    _Bool _bIsFromTop;
    unsigned long long _curHistoryScene;
    unsigned long long _reqestingHistoryScene;
    AAQueryListRes *_lastQueryListResp;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(nonatomic) _Bool bIsFromTop; // @synthesize bIsFromTop=_bIsFromTop;
@property(nonatomic) unsigned long long curHistoryScene; // @synthesize curHistoryScene=_curHistoryScene;
- (void)dealloc;
- (id)initWithData:(id)arg1;
@property(retain, nonatomic) AAQueryListRes *lastQueryListResp; // @synthesize lastQueryListResp=_lastQueryListResp;
- (void)loadMoreOrderHistoryWithOffset:(unsigned int)arg1;
- (void)onGetGroupPayOrderHistory:(id)arg1;
- (void)onGetGroupPayOrderHistoryRespBack;
- (void)onOrderHistoryViewControllerCancel;
- (void)onOrderHistoryViewControllerChangeScene:(unsigned long long)arg1;
- (void)onOrderHistoryViewControllerUserSelectRecord:(id)arg1;
- (void)orderHasBeenClose:(id)arg1;
- (void)queryLaunchOrderHistoryWithOffset:(unsigned int)arg1;
@property(nonatomic) unsigned long long reqestingHistoryScene; // @synthesize reqestingHistoryScene=_reqestingHistoryScene;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

