//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "MMWebImageViewDelegate.h"

@class MMWebImageView, NSString;

@interface MMDeviceHeadImageView : UIButton <MMWebImageViewDelegate>
{
    MMWebImageView *m_headView;
    _Bool m_borderRadius;
    _Bool _isRound;
    struct CGSize m_headSize;
}

- (void).cxx_destruct;
- (void)SetHeadImage:(id)arg1;
- (void)TrySetDefaultHeadImage;
- (void)TrySetDefaultHeadImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isRound; // @synthesize isRound=_isRound;
- (void)layoutSubviews;
@property(nonatomic) struct CGSize m_headSize; // @synthesize m_headSize;
- (void)onLoadImageOK:(id)arg1;
- (void)reset;
- (void)setDeviceIconUrl:(id)arg1;
- (void)setUpdateUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

