//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSFunctionDef, NSDictionary, NSString;

@protocol MMJSApiVerifyMgrDelegate <NSObject>

@optional
- (JSFunctionDef *)getJSFunctionDef:(NSString *)arg1;
- (void)kvReportJSCall:(NSString *)arg1 withParam:(NSDictionary *)arg2;
- (void)onCheckJSAPIInvalid;
- (void)onPreverifyFinished;
@end

