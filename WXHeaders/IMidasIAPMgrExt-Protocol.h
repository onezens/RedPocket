//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MidasIAPErrInfo, MidasIAPPayRequest, NSArray;

@protocol IMidasIAPMgrExt <NSObject>

@optional
- (void)onPayFail:(MidasIAPPayRequest *)arg1 errInfo:(MidasIAPErrInfo *)arg2;
- (void)onPaySuccess:(MidasIAPPayRequest *)arg1;
- (void)onReissueFail:(NSArray *)arg1 errInfo:(MidasIAPErrInfo *)arg2;
- (void)onReissueSuccess:(NSArray *)arg1;
@end

