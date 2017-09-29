//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel, NSString, UIButton, UIImageView, UIScrollView, WCPayControlData, WCPayWebImageView;

@interface WCPayNewPaidOrderDetailView : MMUIView
{
    id <WCPayNewPaidOrderDetailViewDelegate> _delegate;
    WCPayControlData *_data;
    NSString *_selectedBrandUsername;
    NSString *_outerBtnTitle;
    UIScrollView *_contentView;
    UIButton *_activityBtn;
    WCPayWebImageView *_activityLogoImgView;
    MMUILabel *_sloganLabel;
    MMUILabel *_titleLabel;
    UIButton *_doneBtn;
    UIImageView *_selectedImageView;
    WCPayWebImageView *_tinyAppActivityLogoImgView;
    UIButton *_tinyAppActivtyBtn;
    MMUILabel *_tinyAppActivityTitleLabel;
    MMUILabel *_tinyAppActivityDescLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *activityBtn; // @synthesize activityBtn=_activityBtn;
- (void)activityBtnClick;
@property(retain, nonatomic) WCPayWebImageView *activityLogoImgView; // @synthesize activityLogoImgView=_activityLogoImgView;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) WCPayControlData *data; // @synthesize data=_data;
@property(nonatomic) __weak id <WCPayNewPaidOrderDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
- (void)doneBtnClick;
- (id)genGreenButton;
- (id)getActivityInfoData;
- (id)getActivityInfoView;
- (id)getActivityInfoViewInCenter;
- (id)getBrandSubscribeView;
- (id)getDiscountView;
- (id)getOrderDetail;
- (id)getTinyAppActivityInfoView;
- (id)getTinyAppInfoView;
- (id)initNewOrderDetailViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2 controlData:(id)arg3;
@property(retain, nonatomic) NSString *outerBtnTitle; // @synthesize outerBtnTitle=_outerBtnTitle;
- (void)refreshH5ActivityContentWithActivityUrl:(id)arg1 logoUrl:(id)arg2 mainTitle:(id)arg3 subTitle:(id)arg4 btnText:(id)arg5;
- (void)refreshNativeActivityBtnTitle:(id)arg1;
- (void)refreshTinyAppActivityContentWithAppName:(id)arg1 logoUrl:(id)arg2 appDesc:(id)arg3 btnText:(id)arg4;
- (void)selectBtnClick:(id)arg1;
@property(retain, nonatomic) NSString *selectedBrandUsername; // @synthesize selectedBrandUsername=_selectedBrandUsername;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
- (void)setDoneButtonTitle:(id)arg1;
@property(retain, nonatomic) MMUILabel *sloganLabel; // @synthesize sloganLabel=_sloganLabel;
@property(retain, nonatomic) MMUILabel *tinyAppActivityDescLabel; // @synthesize tinyAppActivityDescLabel=_tinyAppActivityDescLabel;
@property(retain, nonatomic) WCPayWebImageView *tinyAppActivityLogoImgView; // @synthesize tinyAppActivityLogoImgView=_tinyAppActivityLogoImgView;
@property(retain, nonatomic) MMUILabel *tinyAppActivityTitleLabel; // @synthesize tinyAppActivityTitleLabel=_tinyAppActivityTitleLabel;
@property(retain, nonatomic) UIButton *tinyAppActivtyBtn; // @synthesize tinyAppActivtyBtn=_tinyAppActivtyBtn;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setupBottomContentViewWithContentBottom:(double)arg1;
- (double)setupCenterContentViewWithContentBottom:(double)arg1;
- (void)setupContentView;
- (double)setupHeaderContentView;
- (void)tinyAppActivityBtnClick;
- (void)tinyAppBtnClick;

@end

