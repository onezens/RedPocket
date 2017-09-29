//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIScrollView, UIView;

@interface WXFullScreenGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    struct CGPoint _panGestureBeginPoint;
    _Bool _shouldCloseWhenGestureEnd;
    unsigned long long _panGestureLastTimeStamp;
    struct CGPoint _panGestureLastPosition;
    double _panGestureAnimationDuration;
    _Bool _hasBeginDrag;
    _Bool _shouldIgnoreDrag;
    struct CGPoint _originPagingContentOffset;
    struct CGPoint _originInnerContentOffset;
    UIScrollView *_pagingScrollView;
    UIScrollView *_innerScrollView;
    UIView *_parentView;
    _Bool _isLongPressHandled;
    _Bool _enableDragDownToClose;
    id <FullScreenGestureDelegate> _m_delegate;
    struct CGRect _containerFrame;
}

- (void).cxx_destruct;
- (void)LongPressBegin;
- (void)LongPressEvents;
- (void)cancelPressEvents;
@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
- (double)distanceBetweenPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2;
- (double)durationFromCurPositionToTargetPointWithSpeed:(double)arg1;
@property(nonatomic) _Bool enableDragDownToClose; // @synthesize enableDragDownToClose=_enableDragDownToClose;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)initGestures;
- (id)initWithView:(id)arg1;
@property(nonatomic) __weak id <FullScreenGestureDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onDragging:(id)arg1;
- (void)pressedEvents;
- (void)reset;
- (_Bool)shouldCloseWhenGestureEndWithTranslation:(struct CGPoint)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

