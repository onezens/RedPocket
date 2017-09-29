//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebSearchMgrDelegate.h"

@class FTSWebSearchMgr, NSMutableArray, NSMutableDictionary, NSString, WSHistoryCacheLogic;

@interface WSSuggestionLogic : NSObject <WebSearchMgrDelegate>
{
    _Bool _isHomePage;
    int _scene;
    id <WSSuggestionLogicDelegate> _delegate;
    WSHistoryCacheLogic *_historyLogic;
    unsigned long long _businessType;
    NSMutableArray *_arrHistorySource;
    NSMutableArray *_arrMergeResult;
    NSMutableArray *_arrSvrSugResult;
    NSMutableArray *_arrHistoryResult;
    NSString *_newestQuery;
    NSString *_lastQueryForHistory;
    NSString *_lastQueryForSvrSug;
    NSMutableDictionary *_dicPinYin;
    NSString *_sugId;
    NSString *_expand;
    FTSWebSearchMgr *_webSearchMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrHistoryResult; // @synthesize arrHistoryResult=_arrHistoryResult;
@property(retain, nonatomic) NSMutableArray *arrHistorySource; // @synthesize arrHistorySource=_arrHistorySource;
@property(retain, nonatomic) NSMutableArray *arrMergeResult; // @synthesize arrMergeResult=_arrMergeResult;
@property(retain, nonatomic) NSMutableArray *arrSvrSugResult; // @synthesize arrSvrSugResult=_arrSvrSugResult;
- (void)asyncSearchHistory:(id)arg1;
- (void)asyncSearchSvrSuggestion:(id)arg1;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
- (void)dealloc;
- (void)delaySearch:(id)arg1;
- (void)delaySearchImp:(id)arg1;
@property(nonatomic) __weak id <WSSuggestionLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteHistorySuggestion:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *dicPinYin; // @synthesize dicPinYin=_dicPinYin;
@property(retain, nonatomic) NSString *expand; // @synthesize expand=_expand;
- (id)getHistoryResult;
- (id)getSuggestionId;
- (id)getSuggestionResult;
@property(retain, nonatomic) WSHistoryCacheLogic *historyLogic; // @synthesize historyLogic=_historyLogic;
- (id)init;
- (void)initData;
- (void)initHistoryQueryData;
- (void)initWebSearchMgr;
- (void)insertLastHistoryQuery:(id)arg1;
@property(nonatomic) _Bool isHomePage; // @synthesize isHomePage=_isHomePage;
@property(retain, nonatomic) NSString *lastQueryForHistory; // @synthesize lastQueryForHistory=_lastQueryForHistory;
@property(retain, nonatomic) NSString *lastQueryForSvrSug; // @synthesize lastQueryForSvrSug=_lastQueryForSvrSug;
- (id)makeSuggestRequestParams:(id)arg1;
- (void)mergeResult;
@property(retain, nonatomic) NSString *newestQuery; // @synthesize newestQuery=_newestQuery;
- (void)notifyNativeSugResult;
- (void)onFailReceiveSuggestionJSON;
- (void)onReceiveSuggestionJSON:(id)arg1;
- (void)parseSvrSug:(id)arg1;
- (void)queryChanged:(id)arg1;
- (void)reloadHistory;
- (void)reportSug:(id)arg1;
- (void)reportSugClick:(id)arg1 withParams:(id)arg2;
- (void)reportSugFill:(id)arg1 withParams:(id)arg2;
- (void)resetResult;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *sugId; // @synthesize sugId=_sugId;
@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

