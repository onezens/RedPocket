//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNNPipeLine, NSString;

@protocol CNNPipeLineDelegate <NSObject>
- (CNNPipeLine *)pipelineWithFuncName:(NSString *)arg1 device:(id <MTLDevice>)arg2 library:(id <MTLLibrary>)arg3 error:(id *)arg4;
@end
