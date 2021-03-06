//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIView<YYWebViewInterface>;

@protocol WSJSEventHandleDelegate <NSObject>

@optional
- (_Bool)checkBrowsingSnsItem:(NSString *)arg1;
- (void)currentFriendScene:(unsigned int *)arg1 withParams:(NSDictionary *)arg2;
- (void)didFinishLoadWebView:(UIView<YYWebViewInterface> *)arg1;
- (void)enableSearchBar;
- (void)hideSearchKeyboard;
- (void)onActionSheet:(NSString *)arg1 clickButtonAtIndex:(long long)arg2;
- (void)onBrowsingSnsItem:(NSString *)arg1;
- (void)onClearHistoryOperation:(NSDictionary *)arg1;
- (void)onClickRecmdWord:(NSDictionary *)arg1;
- (void)onDeleteBrowsingSnsItemOnH5;
- (void)onInsertHistoryOperation:(NSDictionary *)arg1;
- (NSString *)onInsertWAWidgetWithParams:(NSDictionary *)arg1;
- (void)onLaunchDetailPage:(NSDictionary *)arg1;
- (void)onLaunchDetailPageForWeApp:(NSDictionary *)arg1;
- (void)onOpenWAWidgetLogViewWithParams:(NSDictionary *)arg1;
- (void)onPreSearch:(NSString *)arg1 bizType:(unsigned long long)arg2;
- (void)onRemoveWAWidgetWithParams:(NSDictionary *)arg1;
- (void)onRequestLocalSuggestion:(NSDictionary *)arg1;
- (void)onSearchHotWord:(NSDictionary *)arg1;
- (void)onSearchInputChanged:(NSDictionary *)arg1;
- (void)onSwitchSearchContext:(NSDictionary *)arg1;
- (void)onTapWAWidgetWithParams:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)onUpdateWAWidgetWithParams:(NSDictionary *)arg1;
- (void)onViewTypeChange:(NSDictionary *)arg1;
- (void)onWSMusicStatusChanged:(NSDictionary *)arg1;
- (void)onWillJumpUrl:(NSString *)arg1;
@end

