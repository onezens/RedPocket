//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, CdnUploadTaskInfo, CheckBigFileDownloadResponse, CheckBigFileUploadResponse, NSString;

@protocol MMAppAttachFileMgrExt <NSObject>

@optional
- (void)onCheckAppAttachRet:(NSString *)arg1 isExistInSvr:(_Bool)arg2 taskInfo:(CdnUploadTaskInfo *)arg3;
- (void)onCheckBigFileDownloadResult:(_Bool)arg1 resp:(CheckBigFileDownloadResponse *)arg2 wrapMsg:(CMessageWrap *)arg3 errMsg:(NSString *)arg4;
- (void)onCheckBigFileUploadResult:(_Bool)arg1 resp:(CheckBigFileUploadResponse *)arg2 wrapMsg:(CMessageWrap *)arg3 errMsg:(NSString *)arg4;
@end

