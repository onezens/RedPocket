//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMComponent.h"

@class MMUIImageView, MMUILabel;

@interface MMFavTagComponent : MMComponent
{
    MMUIImageView *_tagImg;
    MMUILabel *_tagLabel;
}

+ (double)calHeightWithComData:(id)arg1;
- (void).cxx_destruct;
- (void)configContentLayout;
- (void)configTagView;
- (void)dealloc;
- (void)shiftWithOffset:(double)arg1;

@end

