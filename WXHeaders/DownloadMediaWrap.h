//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage, WCMediaItem;

@interface DownloadMediaWrap : NSObject
{
    WCMediaItem *mediaItem;
    int downloadType;
    NSString *downloadID;
    NSString *downloadMd5;
    _Bool isDownloading;
    UIImage *resultImage;
    int requestType;
}

+ (id)getDownloadID:(id)arg1 downloadType:(int)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *downloadID;
@property(readonly, nonatomic) NSString *downloadMd5;
@property(nonatomic) int downloadType; // @synthesize downloadType;
- (id)initWithMediaItem:(id)arg1 downloadType:(int)arg2;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem;
@property(nonatomic) int requestType; // @synthesize requestType;
@property(retain, nonatomic) UIImage *resultImage; // @synthesize resultImage;

@end

