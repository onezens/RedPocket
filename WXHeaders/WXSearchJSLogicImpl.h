//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LocalJSLogicBase.h"

#import "MultiSelectContactsViewControllerDelegate.h"
#import "WebSearchMgrDelegate.h"

@class FTSWebSearchMgr, NSString;

@interface WXSearchJSLogicImpl : LocalJSLogicBase <MultiSelectContactsViewControllerDelegate, WebSearchMgrDelegate>
{
    id <FTSJSEventDelegate> _delegate;
    id <FTSWebSearchDataSource> _dataSource;
    FTSWebSearchMgr *_webSearchMgr;
}

- (void).cxx_destruct;
- (void)broadCastJSEventWithSel:(SEL)arg1 params:(id)arg2;
@property(nonatomic) __weak id <FTSWebSearchDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FTSJSEventDelegate> delegate; // @synthesize delegate=_delegate;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (_Bool)functionCallForWeApp:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (id)getDisplayName:(id)arg1;
- (void)handleJSApiFuncOfCancelSearchActionSheet:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfCheckJsApi:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfClickMusicItem:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfClickReport:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetAvatar:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetDisplayNameList:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetImage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetRcmdData:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetSearchData:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetSnsImage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetSuggestion:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGotoFeedDetail:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfHandleHistoryOperation:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfHandleSelectContact:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfInsertWAWidgetView:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfLaunchDetailPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfLaunchDetailPageForWeApp:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfLaunchPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOnlineSearchContact:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenEmotionPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenMsgSession:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenProfile:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenWAWidgetLogView:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfOpenWeAppPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfRealTimeReport:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfRemoveWAWidgetView:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfReportWeAppSearchRealTime:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfResultStat:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfSearchOpLog:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfSearchOperation:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfSetSearchWord:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfSetSnsMusicList:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfShowSearchActionSheet:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfTapWAWidgetView:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfUpdateWAWidgetView:(id)arg1 callbackId:(id)arg2;
- (void)handleJsApiFuncOfHandleGetMatchContactList:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleMakePhoneCall:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleOpenSearchWebview:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJsApiFuncOfHandleViewTypeChange:(id)arg1 withCallBackID:(id)arg2;
- (void)handleRcmdDataOfGlobalTab:(id)arg1;
- (id)initWithWebView:(id)arg1;
- (id)makeEmptyJSONResultParam:(_Bool)arg1;
- (id)makeNetworkFailParam:(_Bool)arg1;
- (id)makePageClearParam;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onOpenContact:(id)arg1;
- (void)onOpenContactError:(id)arg1 withMessage:(id)arg2;
- (void)onSearchRecmdDataFail;
- (void)onSearchRecmdDataReturn:(id)arg1;
- (void)onUpdateLocalImage:(id)arg1;
- (void)onWebSearchDataChanged:(_Bool)arg1 isFromFuncQuery:(_Bool)arg2;
- (void)onWebSearchDataFail:(_Bool)arg1;
- (void)onWebSearchWithQuery:(id)arg1;
- (void)sendCallbackWithRet:(int)arg1 error:(id)arg2 data:(id)arg3 callbackId:(id)arg4;
- (void)sendMusicStatusChangedEvent:(id)arg1;
- (void)sendQueryChangedJSEvent:(id)arg1;
- (void)sendSearchJSEvent:(id)arg1;
- (void)sendWidgetTapCallback:(id)arg1 withResult:(id)arg2;
@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

