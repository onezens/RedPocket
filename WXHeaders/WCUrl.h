//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCUrl : NSObject <NSCoding>
{
    NSString *url;
    int type;
    NSString *md5;
    unsigned long long enckey;
    int encIdx;
    NSString *token;
    NSString *videomd5;
}

+ (id)UrlWithUrl:(id)arg1 type:(int)arg2;
- (void).cxx_destruct;
- (id)description;
@property(nonatomic) int encIdx; // @synthesize encIdx;
@property(nonatomic) unsigned long long enckey; // @synthesize enckey;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(retain, nonatomic) NSString *token; // @synthesize token;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(retain, nonatomic) NSString *videomd5; // @synthesize videomd5;

@end

