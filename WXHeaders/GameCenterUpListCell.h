//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class GameCenterUpItem, MMHeadImageView, UILabel;

@interface GameCenterUpListCell : MMTableViewCell
{
    MMHeadImageView *_headImgView;
    UILabel *_displayNameLabel;
    UILabel *_timeLabel;
    GameCenterUpItem *_upItem;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initializeSubview;
- (void)layoutContent;
- (void)layoutSubviews;
- (void)reloadData;
@property(retain, nonatomic) GameCenterUpItem *upItem; // @synthesize upItem=_upItem;

@end

