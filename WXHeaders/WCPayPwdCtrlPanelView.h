//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ILinkEventExt.h"

@class NSString, RichTextView, UIImageView, UILabel, WCPayTenpayPasswordCtrlItem;

@interface WCPayPwdCtrlPanelView : UIView <ILinkEventExt>
{
    UIImageView *m_footerTipImageView;
    UILabel *m_footerTip;
    UIView *m_footerView;
    WCPayTenpayPasswordCtrlItem *m_textField;
    RichTextView *tip;
    double _contentViewY;
}

- (void).cxx_destruct;
@property(nonatomic) double contentViewY; // @synthesize contentViewY=_contentViewY;
- (void)dealloc;
- (id)initWithTip:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) WCPayTenpayPasswordCtrlItem *m_textField; // @synthesize m_textField;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setError:(id)arg1;
- (void)setFooterView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

