//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTSWebSearchMgr;

@interface BrandArticleSearchLogic : NSObject
{
    FTSWebSearchMgr *m_searchMgr;
    _Bool m_isSearching;
    id <BrandArticleSearchLogicDelegateForController> delegateForController;
}

+ (_Bool)isOpenSearch;
- (void).cxx_destruct;
- (void)cancelSearch;
- (void)dealloc;
@property(nonatomic) __weak id <BrandArticleSearchLogicDelegateForController> delegateForController; // @synthesize delegateForController;
- (id)getWebSearchMgr;
- (id)init;
- (_Bool)isSearching;
- (void)onBeginSearch;
- (void)onEndSearch;
- (void)openBrandProfile:(id)arg1 withParams:(id)arg2;
- (void)openMoreDetailWithParams:(id)arg1;
- (void)openMsgSession:(id)arg1;
- (void)openUrlToView:(id)arg1 withParams:(id)arg2;
- (void)setSearchText:(id)arg1;
- (void)setupSearch;

@end

