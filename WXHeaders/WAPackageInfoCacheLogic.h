//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface WAPackageInfoCacheLogic : NSObject
{
    NSMutableDictionary *_dicCacheFileInfo;
    NSMutableArray *_arrUnpackedPkgInfo;
    struct WXAPkg _unpackLib;
    id <WAPackageInfoCacheLogicDelegate> m_delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearAllPkgInfo;
- (void)clearPkgInfoWithPath:(id)arg1 appid:(id)arg2 version:(unsigned long long)arg3 isDebugMode:(unsigned long long)arg4;
- (void)dealloc;
- (id)getCacheFileInfoKeyWithSubPath:(id)arg1 appid:(id)arg2 version:(unsigned long long)arg3 isDebugMode:(unsigned long long)arg4;
- (id)getCacheFileInfoWithFullUrl:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <WAPackageInfoCacheLogicDelegate> m_delegate; // @synthesize m_delegate;
- (_Bool)unpackPkgFromPath:(id)arg1 appid:(id)arg2 version:(unsigned long long)arg3 checksum:(id)arg4 isDebugMode:(unsigned long long)arg5;
- (_Bool)unpackPkgWithFilePath:(id)arg1;
- (_Bool)unpackPublicResPkgFromPath:(id)arg1 isDebugMode:(unsigned long long)arg2;

@end
