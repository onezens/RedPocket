//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt.h"
#import "MMRichTextCopyEventDelegate.h"
#import "TransitioningAnimationDelegate.h"
#import "scrollViewDelegate.h"

@class CTRichTextView, CrossfadeAnimationController, MMRichTextCoverView, MMScrollView, NSString, UIButton, UIFont, UIImageView, UIView;

@interface TextFloatViewController : MMUIViewController <TransitioningAnimationDelegate, ILinkEventExt, scrollViewDelegate, MMRichTextCopyEventDelegate>
{
    UIView *m_oBackView;
    UIButton *m_view;
    UIImageView *m_headerMask;
    MMScrollView *m_oScrollView;
    CTRichTextView *m_oRichTextView;
    id <ILinkEventExt> m_linkDelegate;
    struct CGPoint m_origin;
    id <TextFloatPreviewDelegate> m_delegate;
    _Bool _bNeedRebuildTextView;
    _Bool m_bHidden;
    MMRichTextCoverView *m_oRichTextCoverView;
    CrossfadeAnimationController *m_transitionInstance;
    _Bool m_allowAutorotate;
    struct CGRect m_originFrame;
    NSString *_nsContent;
    UIFont *_oFont;
    unsigned long long _parserType;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)getScrollView;
- (void)hideWithAnimate:(_Bool)arg1;
- (id)init;
- (void)layoutSubviews;
@property(nonatomic) __weak id <TextFloatPreviewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *nsContent; // @synthesize nsContent=_nsContent;
@property(retain, nonatomic) UIFont *oFont; // @synthesize oFont=_oFont;
- (void)onRichTextViewExit;
- (void)onSingleTap;
- (void)onSingleTapWithPoint:(struct CGPoint)arg1;
@property(nonatomic) unsigned long long parserType; // @synthesize parserType=_parserType;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)setContent:(id)arg1;
- (void)setLinkDelegate:(id)arg1;
- (void)setOriginFrame:(struct CGRect)arg1;
- (_Bool)shouldAutorotate;
- (void)showTransitioningAnimationCompleted;
- (unsigned long long)supportedInterfaceOrientations;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)updateTextView;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillDismiss:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

