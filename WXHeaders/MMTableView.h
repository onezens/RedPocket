//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "MMDelegateCenterExt.h"

@class MMDelegateProxy<UITableViewDataSource>, MMDelegateProxy<UITableViewDelegate>, MMTableViewIndexView, NSString, UIColor, UIView;

@interface MMTableView : UITableView <MMDelegateCenterExt>
{
    MMDelegateProxy<UITableViewDataSource> *dataSourceProxy;
    MMDelegateProxy<UITableViewDelegate> *delegateProxy;
    id <tableViewDelegate> m_delegateProxy;
    _Bool cancelButtonTouchsTrack;
    Class cancelTouchsTrackClass;
    UIView *_footerView;
    UIView *_footerViewBackground;
    UIColor *_tailColor;
    _Bool m_dontDrawFooterLine;
    MMTableViewIndexView *_indexView;
    _Bool _isMainView;
    _Bool _bForceContentInsetAdjustAutomatic;
    id <tableViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)addSubview:(id)arg1;
@property(nonatomic) _Bool bForceContentInsetAdjustAutomatic; // @synthesize bForceContentInsetAdjustAutomatic=_bForceContentInsetAdjustAutomatic;
@property(nonatomic) _Bool cancelButtonTouchsTrack; // @synthesize cancelButtonTouchsTrack;
@property(nonatomic) Class cancelTouchsTrackClass; // @synthesize cancelTouchsTrackClass;
- (struct UIEdgeInsets)contentInset;
- (void)dealloc;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)drawFooterLine:(_Bool)arg1;
- (long long)firstSectionIndex;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
@property(nonatomic) _Bool isMainView; // @synthesize isMainView=_isMainView;
- (void)layoutSubviews;
@property(nonatomic) __weak id <tableViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onClearMyDelegate:(id)arg1 forProtocols:(id)arg2;
- (void)reloadData;
- (void)reloadDataAnimated;
- (void)reloadHeaderView;
- (void)reloadIndexView;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (struct UIEdgeInsets)scrollIndicatorInsets;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentInsetTop:(double)arg1 andBottom:(double)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets)arg1;
- (void)setTableFooterView:(id)arg1;
- (void)setTableHeaderView:(id)arg1;
@property(retain, nonatomic) UIColor *tailColor; // @synthesize tailColor=_tailColor;
- (void)setWidth:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)useMMTableViewIndexViewWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

