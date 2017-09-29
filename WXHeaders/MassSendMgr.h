//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class CMMDB, CMessageWrap, MassSendInfo, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MassSendMgr : MMService <PBMessageObserverDelegate, MMService, IMsgExt>
{
    MassSendInfo *m_info;
    unsigned int m_uiEventID;
    unsigned int m_uiMaxSupport;
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
    NSMutableDictionary *m_dicContacts;
    _Bool m_bDataNeedReload;
    _Bool m_bCancel;
    CMessageWrap *m_msgWrap;
    _Bool m_bFreqLimit;
}

- (void).cxx_destruct;
- (void)CancelMassSend;
- (void)CreateMassSendEvent;
- (void)DelMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)DeleteMassSendContact:(id)arg1;
- (id)GetAllMassSendContact;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2;
- (_Bool)GetStartAndEndDateFromXmlContent:(id)arg1 arrStart:(id)arg2 arrEnd:(id)arg3;
- (_Bool)HandleMassSendTopMsg:(id)arg1 MsgWrap:(id)arg2;
- (unsigned int)InsertMassSendContact:(id)arg1;
- (void)MassSend:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)SaveMesImg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)SaveMesThumb:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)WriteAudioFile:(id)arg1 LocalID:(unsigned int)arg2 Offset:(unsigned int)arg3 Len:(unsigned int)arg4 Data:(id)arg5;
- (void)addContact:(id)arg1;
- (_Bool)addContactInDB:(id)arg1;
- (void)addLocalMessage;
- (_Bool)autoReload;
- (void)cancelFreqLimit;
- (void)dealloc;
- (void)deleteContact:(id)arg1;
- (_Bool)deleteContactInDB:(id)arg1;
- (void)genImgMsgWrap:(id)arg1;
- (id)genMainFrameSessionInfo:(id)arg1;
- (void)getAllContactsFromDB;
- (id)getContactByName:(id)arg1;
- (id)getRealChatUsrByMD5:(id)arg1;
- (id)getToList:(id)arg1;
- (id)getToListMD5:(id)arg1;
- (void)hanldeMassSendUploadOK:(id)arg1;
- (id)init;
- (void)initDB:(id)arg1 withLock:(id)arg2;
- (_Bool)isNeedBeTop:(id)arg1;
- (_Bool)isNeedShowInMainFrame;
@property(retain, nonatomic) MassSendInfo *m_info; // @synthesize m_info;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
- (void)onServiceInit;
- (void)safeCallFailExtension:(unsigned int)arg1;
- (void)safeCallFailExtension:(unsigned int)arg1 WithErrorMsg:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

