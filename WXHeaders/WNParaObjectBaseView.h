//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, WNParagraphInfo;

@interface WNParaObjectBaseView : UIView
{
    NSArray *m_arrMenuItems;
    WNParagraphInfo *paraInfo;
    id <WNParaObjectViewDelegate> objectViewDelegate;
}

- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)layoutView;
@property(nonatomic) __weak id <WNParaObjectViewDelegate> objectViewDelegate; // @synthesize objectViewDelegate;
- (void)onClickObject;
- (void)onDebug:(id)arg1;
- (void)onLongPressObject;
- (void)onTouchBegin;
- (void)onTouchEnd;
@property(retain, nonatomic) WNParagraphInfo *paraInfo; // @synthesize paraInfo;

@end
