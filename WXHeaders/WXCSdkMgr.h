//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMServiceCenter, WXCSdkMultiTalkProxy, WXCSdkNetworkProxy;

@interface WXCSdkMgr : NSObject
{
    id <WXCMultiTalkApiDelegate> _mMultiTalkApiDelegate;
    id <WXCAssistHelperDelegate> _mWxAssistHelperDelegate;
    WXCSdkMultiTalkProxy *_mMultiTalkProxy;
    WXCSdkNetworkProxy *_mNetworkProxy;
    MMServiceCenter *_mServiceCenter;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getMultiTalkApiProxy;
- (id)getNetworkProxy;
- (id)getSdkDelegate;
- (id)getWXCAssistHelperDelegate;
- (id)init;
- (_Bool)initSdk:(id)arg1 wxDelegate:(id)arg2;
@property(nonatomic) __weak id <WXCMultiTalkApiDelegate> mMultiTalkApiDelegate; // @synthesize mMultiTalkApiDelegate=_mMultiTalkApiDelegate;
@property(retain, nonatomic) WXCSdkMultiTalkProxy *mMultiTalkProxy; // @synthesize mMultiTalkProxy=_mMultiTalkProxy;
@property(retain, nonatomic) WXCSdkNetworkProxy *mNetworkProxy; // @synthesize mNetworkProxy=_mNetworkProxy;
@property(retain, nonatomic) MMServiceCenter *mServiceCenter; // @synthesize mServiceCenter=_mServiceCenter;
@property(nonatomic) __weak id <WXCAssistHelperDelegate> mWxAssistHelperDelegate; // @synthesize mWxAssistHelperDelegate=_mWxAssistHelperDelegate;
- (void)uninitSdk;

@end

