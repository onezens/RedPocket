//
//  YCHongBaoMgr.m
//  asmTest
//
//  Created by wz on 2017/11/16.
//  Copyright © 2017年 cc.onezen. All rights reserved.
//

#import "YCHongBaoMgr.h"


@implementation YCHongBaoMgr



+ (instancetype)hongBaoMgr {
    static YCHongBaoMgr *_instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _instance = [[self alloc] init];
    });
    return _instance;
}

- (instancetype)init{
    if (self = [super init]) {
        self.isEnableAutoOpen = true;
        [self showAlert:@"init success!"];
    }
    return self;
}

- (void)showAlert:(NSString *)msg {
	[[[UIAlertView alloc] initWithTitle:msg message:nil delegate:nil cancelButtonTitle:@"confirm" otherButtonTitles:nil, nil] show];
}

@end



