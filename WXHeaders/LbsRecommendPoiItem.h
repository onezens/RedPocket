//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSString;

@interface LbsRecommendPoiItem : MMObject
{
    NSString *nsTitle;
    NSString *nsSubTitle;
    NSString *nsDesc;
    NSString *nsIconUrl;
    NSString *nsJumpUrl;
    NSString *nsSignature;
    NSMutableArray *aryADIconUrlList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *aryADIconUrlList; // @synthesize aryADIconUrlList;
@property(retain, nonatomic) NSString *nsDesc; // @synthesize nsDesc;
@property(retain, nonatomic) NSString *nsIconUrl; // @synthesize nsIconUrl;
@property(retain, nonatomic) NSString *nsJumpUrl; // @synthesize nsJumpUrl;
@property(retain, nonatomic) NSString *nsSignature; // @synthesize nsSignature;
@property(retain, nonatomic) NSString *nsSubTitle; // @synthesize nsSubTitle;
@property(retain, nonatomic) NSString *nsTitle; // @synthesize nsTitle;

@end

