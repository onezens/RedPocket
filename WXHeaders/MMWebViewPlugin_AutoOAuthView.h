//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWebViewPluginBase.h"

@class IndicatorAnimationBallBeatView, MMWebImageView, UIButton, UILabel, UIView;

@interface MMWebViewPlugin_AutoOAuthView : MMWebViewPluginBase
{
    UIView *_bgView;
    MMWebImageView *_headImageView;
    UILabel *_titleLabel;
    IndicatorAnimationBallBeatView *_indicatorView;
    UILabel *_descLabel;
    UIButton *_backAppBtn;
    _Bool _bIsSuccessView;
}

- (void).cxx_destruct;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)hideAutoOAuthLoadingView;
- (void)initViewWithWording:(id)arg1 HeadImgUrl:(id)arg2;
- (void)layoutAutoOAuthView;
- (void)onBackToApp;
- (void)showAutoOAuthLoadingViewWithSchemeUrl:(id)arg1 Success:(_Bool)arg2 Wording:(id)arg3 HeadImgUrl:(id)arg4;

@end

