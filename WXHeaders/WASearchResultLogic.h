//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WALocationGetterDelegate.h"
#import "WASearchJSEventHandlerDelegate.h"
#import "WAWebSearchMgrDelegate.h"
#import "WSActionSheetDelegate.h"

@class NSString, UIView<YYWebViewInterface>, WALocationGetter, WAWebSearchJSLogicImpl, WAWebSearchMgr, WSActionSheet;

@interface WASearchResultLogic : MMObject <WAWebSearchMgrDelegate, WASearchJSEventHandlerDelegate, WALocationGetterDelegate, WSActionSheetDelegate>
{
    id <WASearchActionDelegate> _actionDelegate;
    UIView<YYWebViewInterface> *_resultView;
    WAWebSearchMgr *_webSearchMgr;
    NSString *_lastInputText;
    WAWebSearchJSLogicImpl *_jsLogic;
    NSString *_sessionId;
    NSString *_keywordId;
    WALocationGetter *_locationGetter;
    double _locationX;
    double _locationY;
    WSActionSheet *_actionSheet;
    struct timeval _lastInputTime;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WASearchActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) WSActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clearResultPage;
- (void)didBeginSearch;
- (void)didEndSearch;
- (void)genStatKeywordId:(id)arg1;
- (void)genStatSessionId;
- (id)getLocalSearchGuideData;
- (id)init;
@property(retain, nonatomic) WAWebSearchJSLogicImpl *jsLogic; // @synthesize jsLogic=_jsLogic;
@property(retain, nonatomic) NSString *keywordId; // @synthesize keywordId=_keywordId;
@property(retain, nonatomic) NSString *lastInputText; // @synthesize lastInputText=_lastInputText;
@property(nonatomic) struct timeval lastInputTime; // @synthesize lastInputTime=_lastInputTime;
- (void)loadPage;
@property(retain, nonatomic) WALocationGetter *locationGetter; // @synthesize locationGetter=_locationGetter;
@property(nonatomic) double locationX; // @synthesize locationX=_locationX;
@property(nonatomic) double locationY; // @synthesize locationY=_locationY;
- (void)logForBeginSearch:(long long)arg1;
- (void)logForExitSearch:(long long)arg1;
- (void)notifyChanged:(id)arg1;
- (void)notifyPageOfQueryChanged:(id)arg1;
- (void)notifyPageOfSearchClick:(id)arg1;
- (void)notifyPageOffsetChanged:(double)arg1;
- (_Bool)notifyPreCheckQuery:(id)arg1;
- (void)onCancelSearchActionSheet:(id)arg1;
- (void)onDoSearchOpLog:(id)arg1;
- (void)onGetAvatar:(id)arg1;
- (void)onGetImageList:(id)arg1;
- (void)onGetLocationSuccess:(id)arg1;
- (void)onGetSearchData:(id)arg1;
- (void)onGetSearchGuideData:(id)arg1;
- (void)onGetSuggestionData:(id)arg1;
- (id)onInsertWAWidgetWithParams:(id)arg1;
- (void)onLaunchBrandProfile:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onLaunchWebView:(id)arg1;
- (void)onOpenWeAppPage:(id)arg1;
- (void)onPageDoLog:(id)arg1;
- (void)onReceiveSuggestionJSON:(id)arg1 query:(id)arg2;
- (void)onRegisterWebViewDidScroll:(id)arg1;
- (void)onRemoveWAWidgetWithParams:(id)arg1;
- (void)onReportFTSRealTime:(id)arg1;
- (void)onReportWeAppSearchRealTime:(id)arg1;
- (void)onSearchGuideDataUpdated:(id)arg1 withInterval:(unsigned int)arg2;
- (void)onSearchInputChanged:(id)arg1;
- (id)onShowSearchActionSheet:(id)arg1;
- (void)onTapWAWidgetWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onUpdateCommonImg:(id)arg1;
- (void)onUpdateHeadImg:(id)arg1;
- (void)onUpdateWAWidgetWithParams:(id)arg1;
- (void)onWebSearchDataChanged:(_Bool)arg1 isFromFuncQuery:(_Bool)arg2;
- (void)onWebSearchDataFail:(_Bool)arg1;
- (void)onWebSearchWithQuery:(id)arg1;
@property(retain, nonatomic) UIView<YYWebViewInterface> *resultView; // @synthesize resultView=_resultView;
- (void)sendSearchWAWidgetAttrChanged:(id)arg1;
- (void)sendSearchWAWidgetOpenApp:(id)arg1;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) WAWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
- (void)textChanged:(id)arg1;
- (void)trySearch:(id)arg1;
- (void)trySearchWithParams:(id)arg1;
- (id)urlForDetailPage:(id)arg1;
- (id)urlForResultPage;
- (void)willBeginDetailSearchWithParams:(id)arg1;
- (void)willBeginSearch;
- (void)willEndSearch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

