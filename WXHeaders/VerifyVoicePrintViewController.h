//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseVoicePrintViewController.h"

@class UIButton, UIImageView;

@interface VerifyVoicePrintViewController : BaseVoicePrintViewController
{
    UIButton *_canNotUnLockBtn;
    UIButton *_done_button;
    UIImageView *_doneImageView;
    _Bool isFirstDoGuideTextAnimation;
}

- (void).cxx_destruct;
- (void)OnTalkButtonPress:(id)arg1;
- (void)backButtonDone:(id)arg1;
- (void)dealloc;
- (void)dismissMyViewController;
- (id)init;
- (void)initBaseView;
- (void)onCanNotUnLockBtn:(id)arg1;
- (void)onTalkButtonCancel:(id)arg1;
- (void)setM_delegate:(id)arg1;
- (void)showCanNotUnLockBtn;
- (void)showUnLockDoneBtn;
- (void)startDoGuideTextAnimation;
- (void)startGetResource;
- (void)stopGetResource;
- (void)viewDidLoad;

@end

