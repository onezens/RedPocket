//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WWKBaseResp.h"

#import "WWKApiSerializable.h"

@class NSArray, NSString;

@interface WWKPickContactResp : WWKBaseResp <WWKApiSerializable>
{
    NSArray *_contacts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (_Bool)deserializeWithDictionary:(id)arg1;
- (id)serializedDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

