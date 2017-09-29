//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WAFileStorageInfo : NSObject
{
    _Bool _isScannedStoreFile;
    unsigned int _storeFileCount;
    NSString *_appID;
    unsigned long long _storeFileSize;
    unsigned long long _configMaxStoreFileSize;
}

- (void).cxx_destruct;
- (void)addFileWithSize:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void)checkScanStoreFile;
@property(nonatomic) unsigned long long configMaxStoreFileSize; // @synthesize configMaxStoreFileSize=_configMaxStoreFileSize;
- (id)initWithAppID:(id)arg1;
@property(nonatomic) _Bool isScannedStoreFile; // @synthesize isScannedStoreFile=_isScannedStoreFile;
- (void)removeFileWithSize:(unsigned long long)arg1;
- (void)scanStoreFile;
@property(nonatomic) unsigned int storeFileCount; // @synthesize storeFileCount=_storeFileCount;
- (void)setStoreFileCount:(unsigned int)arg1 fileSize:(unsigned long long)arg2;
@property(nonatomic) unsigned long long storeFileSize; // @synthesize storeFileSize=_storeFileSize;
- (void)updateConfigMaxStoreFileSize;

@end

