//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMWebImageView, NSString, UIButton, UILabel, UIView;

@interface WASessionNotifyTableViewCell : MMTableViewCell
{
    NSString *_userName;
    NSString *_nickName;
    NSString *_headImageURL;
    MMWebImageView *_headImageView;
    UILabel *_titleLabel;
    UIButton *_openButton;
    UIView *_sepreateLine;
    id <WASessionNotifyTableViewCellDelegate> _cellViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WASessionNotifyTableViewCellDelegate> cellViewDelegate; // @synthesize cellViewDelegate=_cellViewDelegate;
- (id)getNickName;
- (id)getUserName;
- (void)initHeadImgeView;
- (void)initOpenButton;
- (void)initSeperateLine;
- (void)initTitleLabel;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)onClickOpenButton:(id)arg1;
- (void)updateData;
- (void)updateDataWithDelegate:(id)arg1 userName:(id)arg2 nickName:(id)arg3 headImageURL:(id)arg4 isShowSeperateLine:(_Bool)arg5;

@end

