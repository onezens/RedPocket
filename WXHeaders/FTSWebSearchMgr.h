//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IHeadImageExt.h"
#import "IMMLanguageMgrExt.h"
#import "IStoreEmotionSingleDownloadMgrExt.h"
#import "LocationRetrieveDelegate.h"
#import "MMResourceMgrExt.h"
#import "PBMessageObserverDelegate.h"
#import "WCFacadeExt.h"
#import "WebSearchImageTaskDelegate.h"

@class CLLocation, LocationRetriever, NSMutableArray, NSMutableDictionary, NSString, WebSearchActionResultItem, WebSearchBoxCtrlInfo;

@interface FTSWebSearchMgr : MMObject <WebSearchImageTaskDelegate, IStoreEmotionSingleDownloadMgrExt, WCFacadeExt, IHeadImageExt, PBMessageObserverDelegate, LocationRetrieveDelegate, MMResourceMgrExt, IMMLanguageMgrExt>
{
    _Bool _isActive;
    _Bool _isWorking;
    _Bool _isWorkingForSearchGuide;
    _Bool _isWorkingForSuggestion;
    unsigned int _lastEventID;
    unsigned int _lastEventIDForSearchGuide;
    unsigned int _lastEventIDForSuggestion;
    unsigned long long _businessType;
    LocationRetriever *_locationRetriver;
    CLLocation *_location;
    _Bool _bWaitingLocationForRecmdRequest;
    NSMutableDictionary *_dicSearchData;
    NSMutableArray *_searchDataFIFO;
    NSMutableDictionary *_retryParamsForWebSearch;
    NSMutableDictionary *_retryParamsForSuggestion;
    double _totalStayTimeSec;
    double _totalWebViewTimeSec;
    int _bAction;
    struct timeval _tvStart;
    struct timeval _tvWebViewStart;
    unsigned long long _eStatus;
    _Bool _hasLoadDownloadH5;
    _Bool _isDetailSearch;
    _Bool _bForbidReportTime;
    _Bool _bForbidReportAction;
    int _scene;
    id <WebSearchMgrDelegate> _delegate;
    NSString *_newestQueryText;
    NSString *_newestSearchText;
    NSString *_respJson;
    WebSearchActionResultItem *_logItem;
    NSMutableDictionary *_dicMatchUserList;
    WebSearchBoxCtrlInfo *_boxCtrlInfo;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)addWebSearchLog:(id)arg1 forLogID:(unsigned int)arg2;
- (void)asyncDownloadH5;
- (void)asyncSearch:(id)arg1;
- (void)asyncSearchSuggest:(id)arg1;
@property(nonatomic) _Bool bForbidReportAction; // @synthesize bForbidReportAction=_bForbidReportAction;
@property(nonatomic) _Bool bForbidReportTime; // @synthesize bForbidReportTime=_bForbidReportTime;
@property(retain, nonatomic) WebSearchBoxCtrlInfo *boxCtrlInfo; // @synthesize boxCtrlInfo=_boxCtrlInfo;
- (void)cacheHomaPageResp:(id)arg1 forKey:(id)arg2;
- (void)cacheRecmdData:(id)arg1 withExpired:(unsigned long long)arg2 andSearchID:(id)arg3 andScene:(unsigned int)arg4 andVersion:(unsigned int)arg5 andBusinessType:(unsigned long long)arg6;
- (void)cancelSearch;
- (void)cleanLocalResource;
- (void)cleanWKTmpResourceIfNeeded;
- (void)clearResourceExtension;
- (void)dealloc;
- (void)delayRequestForRecmdData;
@property(nonatomic) __weak id <WebSearchMgrDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *dicCommonImgInfo; // @dynamic dicCommonImgInfo;
@property(retain, nonatomic) NSMutableDictionary *dicEmotInfo; // @dynamic dicEmotInfo;
@property(retain, nonatomic) NSMutableDictionary *dicHeadImgInfo; // @dynamic dicHeadImgInfo;
@property(retain, nonatomic) NSMutableDictionary *dicMatchUserList; // @synthesize dicMatchUserList=_dicMatchUserList;
@property(retain, nonatomic) NSMutableDictionary *dicSnsImgInfo; // @dynamic dicSnsImgInfo;
- (void)doSearchLocalPageRequest:(id)arg1 andScene:(int)arg2;
- (void)downloadHeadImg:(id)arg1 withCategory:(unsigned char)arg2 withInfo:(id)arg3;
- (unsigned int)forceGetVersion;
- (void)forceUpdateH5;
- (id)getDetailSearchTips:(unsigned long long)arg1;
- (unsigned long long)getGuideParamFromConfig;
- (id)getUpdatedLocation;
- (unsigned int)getVersion;
- (id)getWKResourceTmpDir;
- (void)handleGuideCgi:(id)arg1;
- (void)handleReportCgi:(id)arg1;
- (void)handleSearchLocalPageCgi:(id)arg1;
- (void)handleSuggestionCgi:(id)arg1;
- (void)handleWebSearchCgi:(id)arg1;
- (id)homepageCacheForKey:(id)arg1;
- (id)init;
- (void)invalidateSuggestion;
@property(nonatomic) _Bool isDetailSearch; // @synthesize isDetailSearch=_isDetailSearch;
- (_Bool)isFromFuncQueryWithScene:(unsigned int)arg1 sceneActionType:(unsigned int)arg2;
- (_Bool)isNeedWaitLocationForScene:(unsigned int)arg1 andType:(unsigned long long)arg2;
- (_Bool)isValidWebSearchLog:(id)arg1;
@property(retain, nonatomic) WebSearchActionResultItem *logItem; // @synthesize logItem=_logItem;
- (id)makeWKCopyForRes:(id)arg1 fromFile:(id)arg2;
- (void)markItemClicked;
- (void)markResultValid:(_Bool)arg1 andQuery:(id)arg2 andType:(unsigned int)arg3;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(retain, nonatomic) NSString *newestSearchText; // @synthesize newestSearchText=_newestSearchText;
- (void)onCancel;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onEnterBackGround;
- (void)onEnterForeGround;
- (void)onHeadImageChange:(id)arg1;
- (void)onImageFailForUrl:(id)arg1;
- (void)onImageReady:(id)arg1 forUrl:(id)arg2;
- (void)onLanguageChange;
- (void)onPauseWebSearch;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onResetResource:(_Bool)arg1;
- (void)onResumeWebSearch;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onServiceReloadData;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onStartWebSearch;
- (void)onStartWebSearchForDetail:(unsigned long long)arg1;
- (void)pageRequestAvatar:(id)arg1;
- (void)pageRequestAvatarList:(id)arg1;
- (void)pageRequestCommonImage:(id)arg1;
- (void)pageRequestCommonImageList:(id)arg1;
- (void)pageRequestEmot:(id)arg1;
- (void)pageRequestSnsImage:(id)arg1;
- (void)pageRequestSnsImageList:(id)arg1;
- (_Bool)parseFunctionalCmd:(id)arg1;
- (void)reportAction;
- (void)reportStayTime;
- (void)reportVisit;
@property(retain, nonatomic) NSString *respJson; // @synthesize respJson=_respJson;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)sendRequestForRemcdData;
- (void)sendWebSearchRTReport:(id)arg1;
- (void)setImageResource:(id)arg1 toParams:(id)arg2 withSrcPath:(id)arg3 andBackUpUrl:(id)arg4;
- (_Bool)shouldCarryUserList:(id)arg1 andScene:(unsigned int)arg2 andBizType:(unsigned int)arg3 isHomePage:(_Bool)arg4;
- (void)startRetrievingLocation;
- (void)stopRetrievingLocation;
- (void)tryGetRecmdData:(id)arg1;
- (void)tryUpdateH5;
- (void)tryUpdatedLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

