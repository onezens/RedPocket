//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MSEFavUrlTask : NSObject <PBCoding>
{
    NSString *title;
    NSString *contentUrl;
    NSString *taskID;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contentUrl; // @synthesize contentUrl;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *taskID; // @synthesize taskID;
@property(retain, nonatomic) NSString *title; // @synthesize title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

