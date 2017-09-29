//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMDBRReportInfo : NSObject
{
    unsigned int m_dbID;
    unsigned int m_uiOperationCode;
    unsigned int m_resultCode;
    unsigned int m_timeLength;
    unsigned int m_startTime;
    unsigned int m_tableNum;
    unsigned int m_type;
    unsigned long long m_dbSizeBefore;
    unsigned long long m_dbSizeAfter;
    unsigned long long m_diskRestSpaceBefore;
}

- (id)description;
@property(nonatomic) unsigned int m_dbID; // @synthesize m_dbID;
@property(nonatomic) unsigned long long m_dbSizeAfter; // @synthesize m_dbSizeAfter;
@property(nonatomic) unsigned long long m_dbSizeBefore; // @synthesize m_dbSizeBefore;
@property(nonatomic) unsigned long long m_diskRestSpaceBefore; // @synthesize m_diskRestSpaceBefore;
@property(nonatomic) unsigned int m_resultCode; // @synthesize m_resultCode;
@property(nonatomic) unsigned int m_startTime; // @synthesize m_startTime;
@property(nonatomic) unsigned int m_tableNum; // @synthesize m_tableNum;
@property(nonatomic) unsigned int m_timeLength; // @synthesize m_timeLength;
@property(nonatomic) unsigned int m_type; // @synthesize m_type;
@property(nonatomic) unsigned int m_uiOperationCode; // @synthesize m_uiOperationCode;
- (id)statString;

@end

