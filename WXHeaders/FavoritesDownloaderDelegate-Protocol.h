//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesDownloadCDNInfo, FavoritesItem, NSString;

@protocol FavoritesDownloaderDelegate <NSObject>
- (_Bool)deleteDownloadCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (FavoritesDownloadCDNInfo *)getNextDownloadCdnInfoByLocalItemId:(unsigned int)arg1;
- (void)onDownloadFail:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)onDownloadFavItem:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onDownloadFavItemFail:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2 errCode:(int)arg3;
- (void)onDownloadFavItemSuccess:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2;
- (void)onDownloadFinished:(FavoritesItem *)arg1;
- (_Bool)updateDownloadCdnInfo:(FavoritesDownloadCDNInfo *)arg1;
@end

