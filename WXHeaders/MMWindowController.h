//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMUIWindow, UIImageView, UIViewController;

@interface MMWindowController : NSObject
{
    int _transitionAnimationOptions;
    UIImageView *_blurBgImageView;
    int _animType;
    _Bool _bIsAnimationAlpha;
    MMUIWindow *_window;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsAnimationAlpha; // @synthesize bIsAnimationAlpha=_bIsAnimationAlpha;
- (void)closeWindowAnimated:(_Bool)arg1;
- (void)closeWindowAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)doWindowCloseAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (id)getMainWindow;
- (id)initWithViewController:(id)arg1 windowLevel:(int)arg2;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) MMUIWindow *window; // @synthesize window=_window;
- (void)setupWindowWithLevel:(int)arg1;
- (void)showWindowAnimateType:(int)arg1 withTransitionAnimation:(int)arg2;
- (void)showWindowAnimated:(_Bool)arg1;
- (void)showWindowAnimated:(_Bool)arg1 withTransitionAnimation:(int)arg2;

@end

