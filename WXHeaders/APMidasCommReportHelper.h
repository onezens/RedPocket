//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MidasTimer, NSMutableDictionary;

@interface APMidasCommReportHelper : NSObject
{
    NSMutableDictionary *_dictQueue;
    MidasTimer *_timer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dequeueRequestName:(id)arg1 reqTag:(unsigned long long)arg2 success:(_Bool)arg3 httpRespCode:(long long)arg4 errorMsg:(id)arg5 action:(id)arg6 resultInfoDict:(id)arg7 orderInfo:(id)arg8 userInfo:(id)arg9;
- (void)enqueueRequestName:(id)arg1 reqTag:(unsigned long long)arg2;
- (id)init;

@end

