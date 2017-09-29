//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMBaseSessionInfo, NSString;

@interface MMBaseSessionCellData : NSObject
{
    MMBaseSessionInfo *m_baseSessionInfo;
    NSString *m_textForTimeLabel;
    NSString *m_textForNameLabel;
    NSString *m_textForMsgLabel;
    NSString *m_userName;
    NSString *m_headImgUrl;
    unsigned int m_unreadCount;
    unsigned int m_msgStatus;
    unsigned int m_updateTime;
    _Bool m_isMoreThanAWeek;
    _Bool m_isSentFromSelf;
    _Bool m_isHasDraft;
    _Bool m_isContentOriginal;
    _Bool _isSubscribeBrandContact;
    NSString *m_fromBusinessNameLabel;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSString *fromBusinessNameLabel; // @synthesize fromBusinessNameLabel=m_fromBusinessNameLabel;
@property(readonly, retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=m_headImgUrl;
- (id)initWithBaseSessionInfo:(id)arg1;
- (id)initWithBaseSessionInfoForBottle:(id)arg1;
- (_Bool)isChatStatusNotifyOpen:(id)arg1;
@property(readonly, nonatomic) _Bool isContentOriginal; // @synthesize isContentOriginal=m_isContentOriginal;
@property(readonly, nonatomic) _Bool isHasDraft; // @synthesize isHasDraft=m_isHasDraft;
@property(readonly, nonatomic) _Bool isSentFromSelf; // @synthesize isSentFromSelf=m_isSentFromSelf;
- (id)makeEmoticonMessageText:(id)arg1;
@property(readonly, nonatomic) unsigned int msgStatus; // @synthesize msgStatus=m_msgStatus;
@property(readonly, retain, nonatomic) MMBaseSessionInfo *sessionInfo; // @synthesize sessionInfo=m_baseSessionInfo;
@property(readonly, retain, nonatomic) NSString *textForMsgLabel; // @synthesize textForMsgLabel=m_textForMsgLabel;
- (id)textForMsgLabelWithSender:(id)arg1 messageWrap:(id)arg2;
@property(readonly, retain, nonatomic) NSString *textForNameLabel; // @synthesize textForNameLabel=m_textForNameLabel;
@property(readonly, retain, nonatomic) NSString *textForTimeLabel; // @synthesize textForTimeLabel=m_textForTimeLabel;
@property(readonly, nonatomic) unsigned int unreadCount; // @synthesize unreadCount=m_unreadCount;
- (void)updateFromBusinessNameLabel:(id)arg1;
- (void)updateMsgLabelTextForBottle:(id)arg1 bottle:(id)arg2;
- (void)updateMsgLabelTextForWeixinUsr:(id)arg1;
- (void)updateMsgOriginal:(id)arg1;
- (void)updateMsgStatus:(id)arg1;
- (void)updateNameLabelText:(id)arg1;
- (void)updateNameLabelTextForBottle:(id)arg1 bottle:(id)arg2;
- (void)updateTimeLabel;
- (void)updateUnreadCount;
- (void)updateWithBaseSessionInfo:(id)arg1;
- (void)updateWithBaseSessionInfoForBottle:(id)arg1;
@property(readonly, retain, nonatomic) NSString *userName; // @synthesize userName=m_userName;

@end

