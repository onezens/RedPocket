//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class FavLocationItem, FavProductItem, FavTVItem, FavURLItem, FavWeAppItem, NSArray, NSDate, NSMutableArray, NSString;

@interface FavoritesItem : NSObject <NSCoding>
{
    unsigned int _favId;
    int _type;
    int _status;
    unsigned int _updateSeq;
    unsigned int _localUpdateSeq;
    unsigned int _updateTime;
    int _sourceType;
    unsigned int _editTime;
    NSString *_title;
    NSString *_description;
    NSString *_link;
    unsigned int _ctrlFlag;
    NSString *_sourceId;
    NSString *_fromUsr;
    NSString *_toUsr;
    NSString *_realChatName;
    long long _n64MsgID;
    NSString *_eventId;
    NSString *_appId;
    unsigned int _srcCreateTime;
    NSString *_brandId;
    NSMutableArray *_dataList;
    unsigned int _totalDataSize;
    FavLocationItem *_locItem;
    FavURLItem *_urlItem;
    FavProductItem *_productItem;
    FavTVItem *_tvItem;
    NSString *_remark;
    unsigned int _remarkTime;
    FavWeAppItem *_weAppItem;
    NSMutableArray *_tagList;
    NSMutableArray *_recommendTagList;
    unsigned int m_uiFromScene;
    NSString *m_nsFavUsername;
    unsigned int m_preMsgIndex;
    int _localStatus;
    unsigned int _localId;
    int _countMd5Status;
    int _retryTimes;
    NSDate *_startUploadTime;
    double _cellHeight;
    unsigned long long _sightLegalityType;
    _Bool _isFromFavToChat;
    unsigned int _version;
    NSString *_deviceid;
}

+ (id)FavritesItemToXML:(id)arg1;
+ (_Bool)ParseItemXML:(id)arg1 ToItem:(id)arg2;
+ (void)parseStreamVideoNode:(struct XmlReaderNode_t *)arg1 dataField:(id)arg2;
+ (id)parseTagXml:(struct XmlReaderNode_t *)arg1;
+ (id)replacePathPrefix:(id)arg1;
+ (id)xmlOfStreamVideo:(id)arg1;
- (void).cxx_destruct;
- (void)addData:(id)arg1 Index:(int)arg2;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
- (_Bool)canAutoDownload;
- (_Bool)canAutoUpload;
- (_Bool)canBeForward;
- (id)canBeForwardWithMsg;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
- (void)changeToFavSearchItem:(id)arg1;
- (id)changeToFavSearchString;
- (_Bool)checkSightLegality;
- (_Bool)containsIllegalData;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int countMd5Status; // @synthesize countMd5Status=_countMd5Status;
@property(nonatomic) unsigned int ctrlFlag; // @synthesize ctrlFlag=_ctrlFlag;
- (_Bool)dataHasBeenCopyedToTarget;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
@property(retain, nonatomic) NSString *deviceid; // @synthesize deviceid=_deviceid;
@property(nonatomic) unsigned int editTime; // @synthesize editTime=_editTime;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
@property(retain, nonatomic) NSString *fromUsr; // @synthesize fromUsr=_fromUsr;
- (id)getDataWraps;
- (id)getFavDataWrapByLocalDataID:(id)arg1;
- (id)getFirstMediaData;
- (_Bool)hasCDNData;
- (id)init;
- (id)initWithAddFavItem:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool isFromFavToChat; // @synthesize isFromFavToChat=_isFromFavToChat;
- (_Bool)isRecordItem;
- (unsigned int)itemServerSize;
- (unsigned int)itemTotalSize;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) FavLocationItem *locItem; // @synthesize locItem=_locItem;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) int localStatus; // @synthesize localStatus=_localStatus;
@property(nonatomic) unsigned int localUpdateSeq; // @synthesize localUpdateSeq=_localUpdateSeq;
@property(retain, nonatomic) NSString *m_nsFavUsername; // @synthesize m_nsFavUsername;
@property(nonatomic) unsigned int m_preMsgIndex; // @synthesize m_preMsgIndex;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene;
@property(nonatomic) long long n64MsgID; // @synthesize n64MsgID=_n64MsgID;
- (_Bool)needBatchGet;
@property(retain, nonatomic) FavProductItem *productItem; // @synthesize productItem=_productItem;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName=_realChatName;
@property(retain, nonatomic) NSArray *recommendTagList; // @synthesize recommendTagList=_recommendTagList;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) unsigned int remarkTime; // @synthesize remarkTime=_remarkTime;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) unsigned int srcCreateTime; // @synthesize srcCreateTime=_srcCreateTime;
@property(retain, nonatomic) NSDate *startUploadTime; // @synthesize startUploadTime=_startUploadTime;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *toUsr; // @synthesize toUsr=_toUsr;
@property(nonatomic) unsigned int totalDataSize; // @synthesize totalDataSize=_totalDataSize;
@property(retain, nonatomic) FavTVItem *tvItem; // @synthesize tvItem=_tvItem;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned int updateSeq; // @synthesize updateSeq=_updateSeq;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) FavURLItem *urlItem; // @synthesize urlItem=_urlItem;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) FavWeAppItem *weAppItem; // @synthesize weAppItem=_weAppItem;

@end

