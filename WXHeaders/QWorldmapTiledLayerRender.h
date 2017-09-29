//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface QWorldmapTiledLayerRender : UIView
{
    _Bool _useSnapshotRenderer;
    _Bool _snapshotRenderering;
    id <QDataSourceProtocol> _dataSource;
    struct CGContext *_snapshotContext;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) id <QDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property struct CGContext *snapshotContext; // @synthesize snapshotContext=_snapshotContext;
@property _Bool snapshotRenderering; // @synthesize snapshotRenderering=_snapshotRenderering;
@property _Bool useSnapshotRenderer; // @synthesize useSnapshotRenderer=_useSnapshotRenderer;
- (void)setupSelf;
- (void)switchDataSourceByNotification:(id)arg1;
- (id)tiledLayer;

@end

