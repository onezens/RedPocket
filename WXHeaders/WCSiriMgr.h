//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt.h"
#import "INetworkStatusMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class MemoryMappedKV, NSCharacterSet, NSObject<OS_dispatch_queue>, NSString;

@interface WCSiriMgr : MMService <MMService, MMKernelExt, PBMessageObserverDelegate, IContactMgrExt, INetworkStatusMgrExt>
{
    NSObject<OS_dispatch_queue> *m_updateContactQueue;
    _Bool _needRefreshSessionKey;
    _Bool _isRefreshingSessionKey;
    _Bool _isSirikitAvaiable;
    MemoryMappedKV *_mappedKV;
    NSCharacterSet *_symbolCharacterSet;
}

+ (id)getSiriDeviceId;
- (void).cxx_destruct;
- (_Bool)IsEnChar:(unsigned short)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)addVocabularyFor:(id)arg1 toVocabularys:(id)arg2;
- (void)checkAndRefreshSessionKeyIfNeed;
- (id)contactWithINPerson:(id)arg1;
- (id)convertContactToSiriIfNeed:(id)arg1;
- (void)dealloc;
- (void)getExtensionKeyForceRefresh;
- (id)getQueue;
- (id)getSiriContactBy:(id)arg1 inDict:(id)arg2;
- (void)handleGetIosExtensionKeyResp:(id)arg1 Event:(unsigned int)arg2;
@property(nonatomic) _Bool isRefreshingSessionKey; // @synthesize isRefreshingSessionKey=_isRefreshingSessionKey;
- (_Bool)isSessionKeyCached;
- (_Bool)isSiriKitAvailable;
- (_Bool)isSiriRestricted;
@property(nonatomic) _Bool isSirikitAvaiable; // @synthesize isSirikitAvaiable=_isSirikitAvaiable;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(nonatomic) _Bool needRefreshSessionKey; // @synthesize needRefreshSessionKey=_needRefreshSessionKey;
- (void)onAuthOK;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onNewContact:(id)arg1;
- (void)onPreQuit;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)portContactsDataToContainerFolderWithSession:(id)arg1;
@property(retain, nonatomic) NSCharacterSet *symbolCharacterSet; // @synthesize symbolCharacterSet=_symbolCharacterSet;
- (void)updateApplicationContextIfCould;
- (void)updateVocabulary:(id)arg1;
- (id)vocabularyFromContactName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

