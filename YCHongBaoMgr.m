//
//  YCHongBaoMgr.m
//  asmTest
//
//  Created by wz on 2017/11/16.
//  Copyright © 2017年 cc.onezen. All rights reserved.
//

#import "YCHongBaoMgr.h"


@implementation YCHongBaoMgr

static YCHongBaoMgr *_instance = nil;

+ (instancetype)hongBaoMgr {
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _instance = [[self alloc] init];
    });
    return _instance;
}

- (instancetype)init{
    if (self = [super init]) {
        self.isEnableAutoOpen = true;
    }
    return self;
}

@end



