//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class MMTextRestrictRule;

@interface UITextField (MMTextRestrict)
@property(nonatomic) __weak id <UITextFieldDelegate> m_delegate;
@property(nonatomic) unsigned long long maxTextLength;
@property(nonatomic) long long restrictType;
@property(retain, nonatomic) MMTextRestrictRule *textRestrict;
@end

