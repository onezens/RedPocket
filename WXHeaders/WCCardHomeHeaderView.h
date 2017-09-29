//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface WCCardHomeHeaderView : UICollectionReusableView
{
    _Bool _bShowArrowIcon;
    NSString *_leftWording;
    NSString *_rightWording;
    id <WCCardHomeHeaderViewDelegate> _delegate;
    UILabel *_leftLabel;
    UIButton *_rightButton;
    UIImageView *_arrowIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(nonatomic) _Bool bShowArrowIcon; // @synthesize bShowArrowIcon=_bShowArrowIcon;
@property(nonatomic) __weak id <WCCardHomeHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) NSString *leftWording; // @synthesize leftWording=_leftWording;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
- (void)rightButtonDidSelected;
@property(retain, nonatomic) NSString *rightWording; // @synthesize rightWording=_rightWording;

@end

