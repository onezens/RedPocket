//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSString, QTiledLayerRender, QWorldmapTiledLayerRender, UIView;

@interface QMapAnimationContainer : UIScrollView <UIScrollViewDelegate>
{
    _Bool _pinchEnabled;
    UIView *_content;
    QTiledLayerRender *_tiledLayerRender;
    QWorldmapTiledLayerRender *_worldmapTiledLayerRender;
    unsigned long long _mapType;
    unsigned long long _mapSourceType;
    id <QMapAnimationContainerDelegate> _containerDelegate;
}

- (void).cxx_destruct;
- (void)beginSnapshotWithContext:(struct CGContext *)arg1;
@property(nonatomic) __weak id <QMapAnimationContainerDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(retain, nonatomic) UIView *content; // @synthesize content=_content;
- (void)endSnapShot;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) unsigned long long mapSourceType; // @synthesize mapSourceType=_mapSourceType;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) _Bool pinchEnabled; // @synthesize pinchEnabled=_pinchEnabled;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
@property(retain, nonatomic) QTiledLayerRender *tiledLayerRender; // @synthesize tiledLayerRender=_tiledLayerRender;
@property(retain, nonatomic) QWorldmapTiledLayerRender *worldmapTiledLayerRender; // @synthesize worldmapTiledLayerRender=_worldmapTiledLayerRender;
- (void)setupContent;
- (void)setupSelf;
- (void)setupTiledLayerRender;
- (void)setupWorldmapTiledLayerRender;
- (id)viewForZoomingInScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

