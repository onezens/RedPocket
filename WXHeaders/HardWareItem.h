//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying.h"

@class NSString;

@interface HardWareItem : MMObject <NSCopying>
{
    unsigned int uiHardWareShowType;
    NSString *nsRankID;
    NSString *nsRankTitle;
    NSString *nsRankDisplay;
    NSString *nsScoreTitle;
    NSString *nsScoreDisplay;
    NSString *nsTipDisplay;
    NSString *nsColor;
    NSString *nsHighLightColor;
    NSString *nsLineColor;
    NSString *nsHighLightLineColor;
    NSString *nsFontColor;
    NSString *nsChampionUsername;
    NSString *nsDisplayUserName;
    NSString *nsThumbUrl;
    NSString *nsNotifyTitle;
    unsigned int uiTimeStamp;
}

- (void).cxx_destruct;
- (_Bool)IsExpired;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
@property(retain, nonatomic) NSString *nsChampionUsername; // @synthesize nsChampionUsername;
@property(retain, nonatomic) NSString *nsColor; // @synthesize nsColor;
@property(retain, nonatomic) NSString *nsDisplayUserName; // @synthesize nsDisplayUserName;
@property(retain, nonatomic) NSString *nsFontColor; // @synthesize nsFontColor;
@property(retain, nonatomic) NSString *nsHighLightColor; // @synthesize nsHighLightColor;
@property(retain, nonatomic) NSString *nsHighLightLineColor; // @synthesize nsHighLightLineColor;
@property(retain, nonatomic) NSString *nsLineColor; // @synthesize nsLineColor;
@property(retain, nonatomic) NSString *nsNotifyTitle; // @synthesize nsNotifyTitle;
@property(retain, nonatomic) NSString *nsRankDisplay; // @synthesize nsRankDisplay;
@property(retain, nonatomic) NSString *nsRankID; // @synthesize nsRankID;
@property(retain, nonatomic) NSString *nsRankTitle; // @synthesize nsRankTitle;
@property(retain, nonatomic) NSString *nsScoreDisplay; // @synthesize nsScoreDisplay;
@property(retain, nonatomic) NSString *nsScoreTitle; // @synthesize nsScoreTitle;
@property(retain, nonatomic) NSString *nsThumbUrl; // @synthesize nsThumbUrl;
@property(retain, nonatomic) NSString *nsTipDisplay; // @synthesize nsTipDisplay;
@property(nonatomic) unsigned int uiHardWareShowType; // @synthesize uiHardWareShowType;
@property(nonatomic) unsigned int uiTimeStamp; // @synthesize uiTimeStamp;

@end

