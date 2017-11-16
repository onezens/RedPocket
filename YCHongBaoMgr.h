//
//  YCHongBaoMgr.h
//  asmTest
//
//  Created by wz on 2017/11/16.
//  Copyright © 2017年 cc.onezen. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface YCHongBaoMgr : NSObject

/**
 is enable auto open red envelope
 */
@property (nonatomic, assign) BOOL isEnableAutoOpen;

+ (instancetype)hongBaoMgr;

- (void)showAlert:(NSString *)msg;

@end
