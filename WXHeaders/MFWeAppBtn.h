//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "MFBanner.h"

@class MMUILabel, MMWebImageView;

@interface MFWeAppBtn : UIButton <MFBanner>
{
    MMUILabel *_textLabel;
    MMWebImageView *_iView;
}

- (void).cxx_destruct;
- (id)getDisplayTitle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setupFlowTextView;
- (void)udpateBannerText;
- (void)updateBannerContent;

@end

