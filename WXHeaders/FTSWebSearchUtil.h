//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface FTSWebSearchUtil : MMObject
{
}

+ (id)GenerateSearchSessionUniqeID:(unsigned int)arg1;
+ (_Bool)applyToDevelopH5:(id)arg1;
+ (_Bool)cacheGuideData:(id)arg1 forScene:(unsigned int)arg2 andVersion:(unsigned int)arg3;
+ (_Bool)cacheGuideData:(id)arg1 forScene:(unsigned int)arg2 andVersion:(unsigned int)arg3 andBusinessType:(unsigned long long)arg4;
+ (int)convertViewTypeWithViewTypeStr:(id)arg1;
+ (void)deleteDevelopH5;
+ (id)formatMultiStageInputText:(id)arg1;
+ (id)getHightlightString:(id)arg1 searchText:(id)arg2 matchWordTip:(id)arg3;
+ (id)getSearchGuideDataForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2 andBysinessType:(unsigned long long)arg3;
+ (unsigned int)getVersion;
+ (unsigned int)getVersionForDefaultH5;
+ (unsigned int)getVersionForDevelopH5;
+ (unsigned int)getVersionForUpdateH5;
+ (id)getWebViewPresetUI:(id)arg1;
+ (_Bool)isUpdatedGuidePageExist;
+ (_Bool)isUpdatedH5Exist;
+ (_Bool)isUseDevelopH5;
+ (id)makeDictionaryFromPath:(id)arg1;
+ (id)makeEmptyJSONResultParam;
+ (id)makeGeneralFailParam;
+ (id)makeJSONResultParamWithQuery:(id)arg1 allContacts:(id)arg2 sortedArray:(id)arg3 offset:(long long)arg4 count:(long long)arg5;
+ (id)pathForDefaultH5;
+ (id)pathForDefaultH5Dir;
+ (id)pathForDevelopH5;
+ (id)pathForDevelopH5Dir;
+ (id)pathForGuideCache;
+ (id)pathForGuideCacheDir;
+ (id)pathForGuideCacheForScene:(unsigned int)arg1;
+ (id)pathForGuideCacheForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2;
+ (id)pathForGuideCacheForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2 andBusinessType:(unsigned long long)arg3;
+ (id)pathForH5Root;
+ (id)pathForIOS8WKH5;
+ (id)pathForMainH5;
+ (id)pathForMainH5Dir;
+ (id)pathForUpdatedGuidePage;
+ (id)pathForUpdatedH5;
+ (id)pathForUpdatedH5Dir;
+ (void)reloadDefaultConfig;
+ (void)reloadDownloadConfig;
+ (void)removeAllGuideData;
+ (void)removeGuideDataForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2;
+ (void)removeUpdatedH5;
+ (id)searchTextField:(id)arg1 shouldChangeRange:(struct _NSRange)arg2 replaceText:(id)arg3 shouldNotify:(_Bool *)arg4;
+ (_Bool)shouldUpdateGuideDataForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2;
+ (id)tryAppendNewKeyForUrlStr:(id)arg1 andKey:(id)arg2 andUrlParams:(id)arg3;
+ (void)tryCloseWslocalWebview;
+ (id)tryGetNavTitleWithParams:(id)arg1;
+ (_Bool)verifyDevelopH5;
+ (int)verifyModuleContent:(id)arg1;

@end

