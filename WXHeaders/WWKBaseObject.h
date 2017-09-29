//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableDictionary, NSString;

@interface WWKBaseObject : NSObject
{
    NSString *_bundleID;
    NSString *_bundleName;
    unsigned long long _sequence;
}

+ (id)deserializeWithData:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
- (_Bool)deserializeWithDictionary:(id)arg1;
- (id)init;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(readonly, nonatomic) NSData *serializedData;
@property(readonly, nonatomic) NSMutableDictionary *serializedDict;

@end

