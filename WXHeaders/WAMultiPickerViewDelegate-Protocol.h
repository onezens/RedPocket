//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol WAMultiPickerViewDelegate <NSObject>
- (void)onCancel;
- (void)onConfirm:(NSArray *)arg1;
- (void)onSelect:(long long)arg1 row:(long long)arg2;
@end

