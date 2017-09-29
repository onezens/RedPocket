//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface WXVideoMetadata : NSObject
{
    NSMutableDictionary *_extraInfo;
}

+ (id)getExtraInfoFromAsset:(id)arg1;
+ (id)metadataFromAsset:(id)arg1;
+ (id)metadataWithWXTag;
- (void).cxx_destruct;
- (_Bool)addExtraInfo:(id)arg1 forKey:(id)arg2;
- (_Bool)addExtraInfos:(id)arg1;
- (_Bool)addToExportSession:(id)arg1;
- (_Bool)addToWriter:(id)arg1;
- (_Bool)containsExtraInfo;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
- (id)extraInfoForKey:(id)arg1;
- (id)generateMetadataFromExtraInfo;
- (unsigned int)getCreatedWXVersion;

@end

