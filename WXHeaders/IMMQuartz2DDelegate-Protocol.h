//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMQuartz2DView, NSArray, NSDictionary, NSString, UIImage;

@protocol IMMQuartz2DDelegate <NSObject>

@optional
- (UIImage *)getImage:(NSString *)arg1;
- (void)onLongPress:(NSDictionary *)arg1 canvas:(MMQuartz2DView *)arg2;
- (void)onTouchBegin:(NSDictionary *)arg1 canvas:(MMQuartz2DView *)arg2;
- (void)onTouchCancel:(NSArray *)arg1 canvas:(MMQuartz2DView *)arg2;
- (void)onTouchDown:(MMQuartz2DView *)arg1;
- (void)onTouchEnd:(NSDictionary *)arg1 canvas:(MMQuartz2DView *)arg2;
- (void)onTouchMove:(NSArray *)arg1 canvas:(MMQuartz2DView *)arg2;
@end

