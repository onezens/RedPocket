//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CanvasManagerDelegate.h"
#import "IBottleMgrExt.h"
#import "IBottleSessionExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "scrollViewDelegate.h"

@class BottleAnimation, BottleButton, BottleTipView, FishBottleLogicView, MMScrollView, NSString, ThrowBottleLogicView, UIImageView, UIView;

@interface SandyBeachViewController : MMUIViewController <CanvasManagerDelegate, scrollViewDelegate, IBottleSessionExt, IBottleMgrExt, MMTipsViewControllerDelegate>
{
    _Bool mIsFirstAppear;
    unsigned int mTimeOfDayType;
    _Bool mIsTouchEnabeld;
    unsigned int mThrowCount;
    unsigned int mFishCount;
    unsigned int mNewBottleCount;
    _Bool mIsSandyAnimation;
    _Bool mIsShouldDoSandyAnimation;
    MMScrollView *mScrollView;
    UIImageView *mBGImageView;
    UIImageView *mMaskImageView;
    UIImageView *mSpotLightView;
    BottleTipView *mBottleTipView;
    BottleAnimation *mBottleAnimation;
    UIView *mBeachFlatView;
    BottleButton *mThrowBtnView;
    BottleButton *mFishBtnView;
    BottleButton *mBottleBtnView;
    ThrowBottleLogicView *mThrowLogicView;
    FishBottleLogicView *mFishLogicView;
}

- (void).cxx_destruct;
- (void)BottleTotalUnreadCountChanged;
- (id)NavigationController;
- (void)OnBeginLoadBottleContact;
- (void)OnBottleBan:(unsigned int)arg1 FishNetNum:(unsigned int)arg2;
- (void)OnEndLoadBottleContact;
- (void)OnFishNumChanged:(unsigned int)arg1;
- (void)OnGetCountFail;
- (void)OnGetCountOK:(unsigned int)arg1 FishNetNum:(unsigned int)arg2;
- (void)OnThrowNumChanged:(unsigned int)arg1;
- (void)StartShowSyncAllContactLoadingView;
- (void)addViewSlipToLeft:(_Bool)arg1;
- (unsigned int)canvasHeightForDraw;
- (id)cropImage:(id)arg1 toFitSize:(struct CGSize)arg2;
- (void)darkenCanvasAnimated:(_Bool)arg1;
- (void)dealloc;
- (void)disableTouch;
- (void)doSandyAnimation;
- (void)enableTouch;
- (void)hideCanvasBottomBarAnimated:(_Bool)arg1;
- (void)hideCanvasTopBarAnimated:(_Bool)arg1;
- (void)hideTopBar;
- (id)init;
- (void)initBgView;
- (void)initButtonView;
- (void)initData;
@property(retain, nonatomic) UIImageView *mBGImageView; // @synthesize mBGImageView;
@property(retain, nonatomic) UIView *mBeachFlatView; // @synthesize mBeachFlatView;
@property(retain, nonatomic) BottleAnimation *mBottleAnimation; // @synthesize mBottleAnimation;
@property(retain, nonatomic) BottleButton *mBottleBtnView; // @synthesize mBottleBtnView;
@property(retain, nonatomic) BottleTipView *mBottleTipView; // @synthesize mBottleTipView;
@property(retain, nonatomic) BottleButton *mFishBtnView; // @synthesize mFishBtnView;
@property(retain, nonatomic) FishBottleLogicView *mFishLogicView; // @synthesize mFishLogicView;
@property(retain, nonatomic) UIImageView *mMaskImageView; // @synthesize mMaskImageView;
@property(retain, nonatomic) MMScrollView *mScrollView; // @synthesize mScrollView;
@property(retain, nonatomic) UIImageView *mSpotLightView; // @synthesize mSpotLightView;
@property(retain, nonatomic) BottleButton *mThrowBtnView; // @synthesize mThrowBtnView;
@property(retain, nonatomic) ThrowBottleLogicView *mThrowLogicView; // @synthesize mThrowLogicView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)removeViewSlipToLeft:(_Bool)arg1;
- (void)showCanvasBottomBarAnimated:(_Bool)arg1;
- (void)showCanvasTopBarAnimated:(_Bool)arg1;
- (void)showGuideToNearbyTipView:(id)arg1;
- (void)showWarningTipView:(id)arg1;
- (void)showWarningTipViewNoConfirm:(id)arg1;
- (void)spotLightCanvasAnimated:(_Bool)arg1;
- (void)toggleBottle;
- (void)toggleFish;
- (void)toggleSetting:(id)arg1;
- (void)toggleThrow;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)unDarkenCanvasAnimated:(_Bool)arg1;
- (void)unSpotLightCanvasAnimated:(_Bool)arg1;
- (void)undoSandyAnimation:(_Bool)arg1;
- (void)updateBottleCountLabel;
- (void)updateFishCountLabel;
- (void)updateThrowCountLabel;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)willAppear;
- (void)willShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

