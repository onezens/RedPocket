//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSString;

@interface WePkgRegularConfig : MMObject
{
    unsigned int _uiPkgType;
    unsigned int _uiLastUnusedSeconds;
    unsigned int _uiCheckIntervalSeconds;
    unsigned int _uiLastUsedTimestamp;
    unsigned int _uiCheckUpdateSuccessTime;
    unsigned int _uiBigPackageDownloadNetworkType;
    unsigned int _uiBigPackageSizeInBytes;
    NSString *_nsPkgId;
    NSString *_nsAppId;
    NSString *_nsEnteranceDomain;
    NSString *_nsCurrentEnabledVersion;
    NSString *_nsCheckResponseMd5;
    NSString *_nsCharSet;
    NSString *_nsBigPackageMd5;
    NSString *_nsBigPackageDownloadUrl;
    NSMutableArray *_atomicSingleFileList;
    NSMutableArray *_nonAtomicSingleFileList;
}

+ (id)regularConfigFromTableItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *atomicSingleFileList; // @synthesize atomicSingleFileList=_atomicSingleFileList;
- (id)debugDescription;
- (id)generateTableItem;
- (_Bool)hasBigPackage;
- (_Bool)hasValidContent;
@property(retain, nonatomic) NSMutableArray *nonAtomicSingleFileList; // @synthesize nonAtomicSingleFileList=_nonAtomicSingleFileList;
@property(retain, nonatomic) NSString *nsAppId; // @synthesize nsAppId=_nsAppId;
@property(retain, nonatomic) NSString *nsBigPackageDownloadUrl; // @synthesize nsBigPackageDownloadUrl=_nsBigPackageDownloadUrl;
@property(retain, nonatomic) NSString *nsBigPackageMd5; // @synthesize nsBigPackageMd5=_nsBigPackageMd5;
@property(retain, nonatomic) NSString *nsCharSet; // @synthesize nsCharSet=_nsCharSet;
@property(retain, nonatomic) NSString *nsCheckResponseMd5; // @synthesize nsCheckResponseMd5=_nsCheckResponseMd5;
@property(retain, nonatomic) NSString *nsCurrentEnabledVersion; // @synthesize nsCurrentEnabledVersion=_nsCurrentEnabledVersion;
@property(retain, nonatomic) NSString *nsEnteranceDomain; // @synthesize nsEnteranceDomain=_nsEnteranceDomain;
@property(retain, nonatomic) NSString *nsPkgId; // @synthesize nsPkgId=_nsPkgId;
@property(nonatomic) unsigned int uiBigPackageDownloadNetworkType; // @synthesize uiBigPackageDownloadNetworkType=_uiBigPackageDownloadNetworkType;
@property(nonatomic) unsigned int uiBigPackageSizeInBytes; // @synthesize uiBigPackageSizeInBytes=_uiBigPackageSizeInBytes;
@property(nonatomic) unsigned int uiCheckIntervalSeconds; // @synthesize uiCheckIntervalSeconds=_uiCheckIntervalSeconds;
@property(nonatomic) unsigned int uiCheckUpdateSuccessTime; // @synthesize uiCheckUpdateSuccessTime=_uiCheckUpdateSuccessTime;
@property(nonatomic) unsigned int uiLastUnusedSeconds; // @synthesize uiLastUnusedSeconds=_uiLastUnusedSeconds;
@property(nonatomic) unsigned int uiLastUsedTimestamp; // @synthesize uiLastUsedTimestamp=_uiLastUsedTimestamp;
@property(nonatomic) unsigned int uiPkgType; // @synthesize uiPkgType=_uiPkgType;

@end

