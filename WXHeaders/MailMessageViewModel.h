//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageViewModel.h"

@class NSString;

@interface MailMessageViewModel : BaseMessageViewModel
{
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)additionalAccessibilityDescription;
- (id)cellViewClassName;
@property(readonly, nonatomic) _Bool hasAttachment;
@property(readonly, nonatomic) NSString *mailTitle;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;

@end

