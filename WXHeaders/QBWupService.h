//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QBWupTransfer;

@interface QBWupService : NSObject
{
    QBWupTransfer *_transfer;
    NSString *_servantName;
}

+ (id)service;
- (void).cxx_destruct;
- (id)encodePackageWithFuncName:(id)arg1 parameter:(id)arg2;
- (id)init;
- (id)initWithServant:(id)arg1;
- (id)invocation:(id)arg1 parameter:(id)arg2 completeHandle:(CDUnknownBlockType)arg3;

@end

