//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, CUploadImgWrap, NSString;

@interface DownloadImageInfo : NSObject
{
    CMessageWrap *m_wrapMsg;
    unsigned int m_uiTotalLen;
    unsigned int m_uiStartPos;
    _Bool m_bDownloadHD;
    NSString *m_nsChatName;
    CUploadImgWrap *m_wrapDownload;
    unsigned int m_uiNotifyPartLen;
    unsigned int m_uiNotifyTotalLen;
    unsigned long long m_ui64StartTime;
    int m_nRetCode;
}

- (void).cxx_destruct;
- (id)GenDownloadInfo;
- (id)GetStatInfo;
- (_Bool)IsSameInfo:(id)arg1;
- (void)NotifyOffset;
- (void)NotifyPartLen:(unsigned int)arg1 TotalLen:(unsigned int)arg2;
- (void)SetTotalLen:(unsigned int)arg1;
- (void)UpdateInfo;
- (id)init;
@property(nonatomic) _Bool m_bDownloadHD; // @synthesize m_bDownloadHD;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime;
@property(nonatomic) unsigned int m_uiNotifyPartLen; // @synthesize m_uiNotifyPartLen;
@property(nonatomic) unsigned int m_uiNotifyTotalLen; // @synthesize m_uiNotifyTotalLen;
@property(nonatomic) unsigned int m_uiStartPos; // @synthesize m_uiStartPos;
@property(nonatomic) unsigned int m_uiTotalLen; // @synthesize m_uiTotalLen;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;

@end
