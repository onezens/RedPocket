//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCanvasComponent.h"

@class MMWebImageView;

@interface WCCanvasFullScreenImageComponent : WCCanvasComponent
{
    MMWebImageView *_webImageView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;

@end
