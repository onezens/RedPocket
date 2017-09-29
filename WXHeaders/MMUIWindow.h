//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

#import "IVOIPWindowExt.h"

@class NSString;

@interface MMUIWindow : UIWindow <IVOIPWindowExt>
{
    int _mmWindowLevel;
    double m_lastWindowLevel;
}

- (void)SetWindowLevel:(int)arg1;
- (void)animateFadeoutWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)becomeKeyWindow;
- (void)dealloc;
- (void)hideWindowTo:(int)arg1 withTopOffset:(double)arg2;
- (void)hideWindowTo:(int)arg1 withTopOffset:(double)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double m_lastWindowLevel; // @synthesize m_lastWindowLevel;
@property(nonatomic) int mmWindowLevel; // @synthesize mmWindowLevel=_mmWindowLevel;
- (void)onVoipWindowDidAppear;
- (void)onVoipWindowDisappear;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHideFrame:(int)arg1 withTopOffset:(double)arg2;
- (void)setShowFrameWithTopOffset:(double)arg1;
- (void)setWindowLevel:(double)arg1;
- (void)showWindowFrom:(int)arg1 withTopOffset:(double)arg2;
- (void)showWindowFrom:(int)arg1 withTopOffset:(double)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

