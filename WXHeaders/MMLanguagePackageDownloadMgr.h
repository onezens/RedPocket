//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMPackageDownloadMgrExt.h"
#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface MMLanguagePackageDownloadMgr : MMService <MMService, MMPackageDownloadMgrExt>
{
    NSString *m_sLangRootPath;
    NSMutableDictionary *m_dicUpdatingPackage;
    NSMutableDictionary *m_dicCurLangVersions;
    NSMutableDictionary *m_dicHasUpdate;
    _Bool isCheckingPackageList;
    unsigned int uiInterval;
    NSMutableDictionary *m_dicLanguageDownloadTimeCost;
}

- (void).cxx_destruct;
- (void)asyncValidateLanguageFile:(id)arg1 fileMd5:(id)arg2;
- (void)availableUpdatedForLang:(id)arg1;
- (void)checkIfUpdatedForLang:(id)arg1 andRefreshOn:(unsigned int)arg2;
- (_Bool)checkInterval:(_Bool)arg1;
- (void)dealloc;
- (void)doCheckUpdate;
- (void)doCheckUpdateDelay;
- (void)doCheckUpdateOnMainThread:(_Bool)arg1;
- (void)downloadForLang:(id)arg1 pack:(id)arg2 localVersion:(id)arg3;
- (id)genPackageNameWithLang:(id)arg1;
- (unsigned int)getLangVersion:(id)arg1;
- (id)getLangVersionFileForLang:(id)arg1;
- (id)getLanguagePackageWithPID:(id)arg1;
- (id)getPackItemFromPackageListWithLang:(id)arg1;
- (id)init;
- (_Bool)isUpdating:(id)arg1;
- (void)onPackageCancelFinish:(id)arg1;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageListUpdated:(id)arg1;
- (id)popLanguagePackageWithPID:(id)arg1;
- (void)updateVersion:(id)arg1 ForLang:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

