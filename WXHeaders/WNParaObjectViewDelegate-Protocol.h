//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesItem, MMUIViewController, NSMutableArray, NSString;

@protocol WNParaObjectViewDelegate <NSObject>

@optional
- (NSMutableArray *)getDataArray;
- (FavoritesItem *)getFavItem;
- (MMUIViewController *)getViewController;
- (void)onObjectHeightChanged;
- (void)onSendLocationToFriend:(NSString *)arg1 ViewController:(MMUIViewController *)arg2;
@end

