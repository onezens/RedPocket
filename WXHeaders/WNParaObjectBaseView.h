//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NSArray, UIImageView, UILabel, WNParagraphInfo;

@interface WNParaObjectBaseView : UIView
{
    NSArray *m_arrMenuItems;
    UIView *borderView;
    CAShapeLayer *borderLayer;
    UIImageView *_thumbImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    WNParagraphInfo *paraInfo;
    id <WNParaObjectViewDelegate> objectViewDelegate;
}

- (void).cxx_destruct;
- (_Bool)canAlwaysClick;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)getDescription;
- (id)getImage;
- (struct CGRect)getImageViewFrame;
- (id)getTitle;
- (_Bool)ifLayoutViewByBase;
- (void)layoutDescLabel;
- (void)layoutThumbImageView;
- (void)layoutTitleLabel;
- (void)layoutView;
- (void)layoutViewBorder;
@property(nonatomic) __weak id <WNParaObjectViewDelegate> objectViewDelegate; // @synthesize objectViewDelegate;
- (void)onClickObject;
- (void)onDebug:(id)arg1;
- (void)onLongPressObject;
- (void)onTouchBegin;
- (void)onTouchEnd;
@property(retain, nonatomic) WNParagraphInfo *paraInfo; // @synthesize paraInfo;
- (void)setSelected;
- (void)setUnSelected;

@end

