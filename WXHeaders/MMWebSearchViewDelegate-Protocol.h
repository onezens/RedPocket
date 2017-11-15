//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIButton, UISearchDisplayController, UIView<YYWebViewInterface>;

@protocol MMWebSearchViewDelegate <NSObject>

@optional
- (void)didBeginSearch:(UISearchDisplayController *)arg1;
- (void)didEndSearch:(UISearchDisplayController *)arg1;
- (void)didFinishLoadWebView:(UIView<YYWebViewInterface> *)arg1;
- (NSString *)getInputHeight;
- (NSString *)getInputMarginLeftRight;
- (NSString *)getInputMarginTop;
- (NSString *)getNativeHeight;
- (void)onFinalBackButtonClick:(UIButton *)arg1;
- (void)onPreSearch:(NSString *)arg1 bizType:(unsigned long long)arg2;
- (void)onSearchBackToPreviousView;
- (void)onSearchHotWord:(NSDictionary *)arg1;
- (void)onSearchInputSetPlaceHolder:(NSDictionary *)arg1;
- (void)onSearchInputSetText:(NSString *)arg1 tagInfo:(NSDictionary *)arg2;
- (void)onSearchLaunchNextViewWithBizType:(unsigned long long)arg1;
- (void)onSearchReset;
- (void)onStartVerticalSearch:(unsigned long long)arg1;
- (void)onTapBlurEffectView;
- (void)onUpdateNativeSuggestion;
- (void)onUpdateTitleViewWithTitle:(NSString *)arg1;
- (void)onViewTypeChanged;
- (double)webSearchViewPosY;
- (void)willBeginSearch:(UISearchDisplayController *)arg1;
- (void)willEndSearch:(UISearchDisplayController *)arg1;
@end

