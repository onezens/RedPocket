//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, NSArray, NSDictionary, NSString, UINavigationController, WAAppTaskExtInfo, WAAppTaskLoadingViewInfo, WACacheVersionChecker, WALoadingViewController, WAPermissionHandler, WAWebViewController;

@interface WAAppTaskLoaderContext : NSObject
{
    _Bool _isPopParent;
    _Bool _isPopAllParent;
    _Bool _isUseJumpWeAppAnimatedTransition;
    _Bool _bReloadFirstPage;
    _Bool _bNeedShowReloadLoading;
    _Bool _isPagePushTimeout;
    _Bool _isPagePushed;
    _Bool _isEnterAnimationDone;
    _Bool _isEnterAnimationTimeout;
    CContact *_contact;
    UINavigationController *_weakNavigationController;
    WALoadingViewController *_weakLoadingViewController;
    WAPermissionHandler *_permissionHandler;
    NSString *_relativeURL;
    NSDictionary *_dicFirstExtraInfo;
    NSDictionary *_dicChildExtraInfo;
    WAWebViewController *_parentWebView;
    WAAppTaskLoadingViewInfo *_taskLoadingViewInfo;
    NSDictionary *_dicContextData;
    WAAppTaskExtInfo *_taskExtInfo;
    NSString *_appID;
    WACacheVersionChecker *_cacheVersionChecker;
    id <WAAppTaskLoaderContextDelegate> _contextDelegate;
    WAWebViewController *_webView;
    CDUnknownBlockType _enterAnimationCallback;
    NSArray *_arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSArray *arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage; // @synthesize arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage=_arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage;
@property(nonatomic) _Bool bNeedShowReloadLoading; // @synthesize bNeedShowReloadLoading=_bNeedShowReloadLoading;
@property(nonatomic) _Bool bReloadFirstPage; // @synthesize bReloadFirstPage=_bReloadFirstPage;
@property(retain, nonatomic) WACacheVersionChecker *cacheVersionChecker; // @synthesize cacheVersionChecker=_cacheVersionChecker;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <WAAppTaskLoaderContextDelegate> contextDelegate; // @synthesize contextDelegate=_contextDelegate;
- (void)dealloc;
@property(retain, nonatomic) NSDictionary *dicChildExtraInfo; // @synthesize dicChildExtraInfo=_dicChildExtraInfo;
@property(retain, nonatomic) NSDictionary *dicContextData; // @synthesize dicContextData=_dicContextData;
@property(retain, nonatomic) NSDictionary *dicFirstExtraInfo; // @synthesize dicFirstExtraInfo=_dicFirstExtraInfo;
@property(copy, nonatomic) CDUnknownBlockType enterAnimationCallback; // @synthesize enterAnimationCallback=_enterAnimationCallback;
@property(nonatomic) _Bool isEnterAnimationDone; // @synthesize isEnterAnimationDone=_isEnterAnimationDone;
@property(nonatomic) _Bool isEnterAnimationTimeout; // @synthesize isEnterAnimationTimeout=_isEnterAnimationTimeout;
@property(nonatomic) _Bool isPagePushTimeout; // @synthesize isPagePushTimeout=_isPagePushTimeout;
@property(nonatomic) _Bool isPagePushed; // @synthesize isPagePushed=_isPagePushed;
@property(nonatomic) _Bool isPopAllParent; // @synthesize isPopAllParent=_isPopAllParent;
@property(nonatomic) _Bool isPopParent; // @synthesize isPopParent=_isPopParent;
@property(nonatomic) _Bool isUseJumpWeAppAnimatedTransition; // @synthesize isUseJumpWeAppAnimatedTransition=_isUseJumpWeAppAnimatedTransition;
@property(retain, nonatomic) WAWebViewController *parentWebView; // @synthesize parentWebView=_parentWebView;
@property(retain, nonatomic) WAPermissionHandler *permissionHandler; // @synthesize permissionHandler=_permissionHandler;
@property(retain, nonatomic) NSString *relativeURL; // @synthesize relativeURL=_relativeURL;
@property(retain, nonatomic) WAAppTaskExtInfo *taskExtInfo; // @synthesize taskExtInfo=_taskExtInfo;
@property(retain, nonatomic) WAAppTaskLoadingViewInfo *taskLoadingViewInfo; // @synthesize taskLoadingViewInfo=_taskLoadingViewInfo;
@property(nonatomic) __weak WALoadingViewController *weakLoadingViewController; // @synthesize weakLoadingViewController=_weakLoadingViewController;
@property(nonatomic) __weak UINavigationController *weakNavigationController; // @synthesize weakNavigationController=_weakNavigationController;
@property(retain, nonatomic) WAWebViewController *webView; // @synthesize webView=_webView;

@end

