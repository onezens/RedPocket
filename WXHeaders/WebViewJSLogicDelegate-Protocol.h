//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSFunctionDef, MMUIViewController<WXCustomWebViewControllerProtocol>, NSArray, NSDictionary, NSString;

@protocol WebViewJSLogicDelegate <NSObject>
- (NSArray *)getAuthorizedMonitorEvents:(NSString *)arg1;
- (MMUIViewController<WXCustomWebViewControllerProtocol> *)getCurrentWebviewViewController;
- (unsigned char)getJSApiPermission:(JSFunctionDef *)arg1;
- (_Bool)isGetingA8Key;
- (void)kvReportJSCall:(NSString *)arg1 withParam:(NSDictionary *)arg2;
- (void)onCopy:(NSString *)arg1;
- (void)onDomReady;
- (void)onFinishedHandleJSApi;
- (void)onPageStateChange:(NSString *)arg1;
- (void)processJSAPICall:(NSDictionary *)arg1 funcDef:(JSFunctionDef *)arg2 funcBlock:(void (^)(void))arg3 failHandleBlock:(void (^)(NSDictionary *))arg4 apiPermission:(unsigned char)arg5;

@optional
- (void)handleFromWeixinNotify:(NSString *)arg1;
- (void)handleMonitorMessage:(NSString *)arg1 params:(NSDictionary *)arg2;
- (_Bool)isTempAccessOfJSApiPermitted:(NSString *)arg1;
@end

