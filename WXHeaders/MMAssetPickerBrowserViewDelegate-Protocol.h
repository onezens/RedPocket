//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView<MMAssetPickerBrowserViewProtocol>;

@protocol MMAssetPickerBrowserViewDelegate <NSObject>

@optional
- (void)onAssetBrowserViewLoadFinished:(UIView<MMAssetPickerBrowserViewProtocol> *)arg1;
- (void)onAssetBrowserViewPlayingStateChanged:(UIView<MMAssetPickerBrowserViewProtocol> *)arg1 isPlaying:(_Bool)arg2;
- (void)onAssetBrowserViewSingleTap:(UIView<MMAssetPickerBrowserViewProtocol> *)arg1;
@end

