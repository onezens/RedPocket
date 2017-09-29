//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "VoipOpenglesContextDelegate.h"

@class NSString, VoipOpenglesContext;

@interface EAGLView_v2 : UIView <VoipOpenglesContextDelegate>
{
    _Bool m_acceptNV12;
    _Bool m_mirrored;
    UIView *m_defaultView;
    VoipOpenglesContext *m_openglesContext;
    id <NSObject> targetor;
    SEL selector;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)addSingleTapTarget:(id)arg1 action:(SEL)arg2;
- (void)applyRotation:(float)arg1;
- (void)changeFrame:(struct CGRect)arg1;
- (_Bool)checkTouchPoint:(struct CGPoint)arg1 IfInView:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 AcceptNV12:(_Bool)arg2;
- (id)initWithView:(id)arg1 AcceptNV12:(_Bool)arg2 IsMirrored:(_Bool)arg3;
@property(nonatomic) _Bool m_acceptNV12; // @synthesize m_acceptNV12;
@property(retain, nonatomic) UIView *m_defaultView; // @synthesize m_defaultView;
@property(nonatomic) _Bool m_mirrored; // @synthesize m_mirrored;
@property(retain, nonatomic) VoipOpenglesContext *m_openglesContext; // @synthesize m_openglesContext;
- (void)randerDefaultView:(id)arg1;
- (void)renderImage2:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage3:(char **)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (id)renderView;
- (void)resetMirror:(_Bool)arg1;
- (void)restartRender;
@property(nonatomic) SEL selector; // @synthesize selector;
- (void)setDegrees:(float)arg1;
@property(retain, nonatomic) id <NSObject> targetor; // @synthesize targetor;
- (void)setupELGS;
- (void)setupELGS:(_Bool)arg1 IsMirrored:(_Bool)arg2;
- (void)stopRender;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)whenDidActive;
- (void)whenEnterBackground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

