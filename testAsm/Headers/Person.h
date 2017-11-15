//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface Person : NSObject
{
    NSString *_name;
    long long _age;
    CDUnknownBlockType _completedBlock;
    CDUnknownBlockType _voidBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(nonatomic) long long age; // @synthesize age=_age;
@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
- (id)initWithName:(id)arg1 age:(long long)arg2;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) CDUnknownBlockType voidBlock; // @synthesize voidBlock=_voidBlock;

@end

