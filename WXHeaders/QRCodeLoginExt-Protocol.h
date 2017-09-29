//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol QRCodeLoginExt <NSObject>

@optional
- (void)OnQRCodeLoginBTConfirmedWithUserName:(NSString *)arg1 pwd:(NSString *)arg2;
- (void)OnQRCodeLoginBTLoginFailed;
- (void)OnQRCodeLoginBTLoginWithUserName:(NSString *)arg1 pwd:(NSString *)arg2;
- (void)OnQRCodeLoginBTScaned;
- (void)OnQRCodeLoginCancel;
- (void)OnQRCodeLoginConfirmedWithUserName:(NSString *)arg1 pwd:(NSString *)arg2 nickName:(NSString *)arg3 headImgURL:(NSString *)arg4;
- (void)OnQRCodeLoginExpired;
- (void)OnQRCodeLoginFail;
- (void)OnQRCodeLoginReciveImage:(NSData *)arg1 expiredTime:(unsigned int)arg2;
- (void)OnQRCodeLoginScaned:(NSString *)arg1 nickName:(NSString *)arg2;
- (void)OnQRCodeLoginUUIDExipred;
@end

