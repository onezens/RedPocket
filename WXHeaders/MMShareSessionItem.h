//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MMShareSessionItem : NSObject <PBCoding>
{
    NSString *username;
    NSString *nickname;
    NSString *dispalyName;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dispalyName; // @synthesize dispalyName;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

