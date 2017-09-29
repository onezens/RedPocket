//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@protocol WAWebSearchMgrDelegate <NSObject>
- (void)onWebSearchDataChanged:(_Bool)arg1 isFromFuncQuery:(_Bool)arg2;
- (void)onWebSearchDataFail:(_Bool)arg1;

@optional
- (void)onFailReceiveSuggestionJSON;
- (void)onReceiveSuggestionJSON:(NSString *)arg1;
- (void)onReceiveSuggestionJSON:(NSString *)arg1 query:(NSString *)arg2;
- (void)onSearchGuideDataUpdated:(NSString *)arg1 withInterval:(unsigned int)arg2;
- (void)onUpdateCommonImg:(NSDictionary *)arg1;
- (void)onUpdateHeadImg:(NSDictionary *)arg1;
- (void)onWebSearchWithQuery:(NSMutableDictionary *)arg1;
@end

