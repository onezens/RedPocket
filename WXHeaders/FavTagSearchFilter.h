//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "FavTagEditViewDelegate.h"
#import "FavTypeItemsViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class FavBarButton, FavTagListView, FavTypeItemsView, MMScrollView, NSMutableArray, NSString, UILabel, UIView;

@interface FavTagSearchFilter : MMUIView <FavTagEditViewDelegate, UIScrollViewDelegate, FavTypeItemsViewDelegate>
{
    UIView *m_backgroundView;
    MMScrollView *m_scrollView;
    UILabel *m_label;
    FavTagListView *m_tagListView;
    FavTypeItemsView *m_typeItemsView;
    FavBarButton *m_favBarBtn;
    NSMutableArray *currentTags;
    id <FavTagSearchFilterDelegate> m_delegate;
    int m_currentType;
}

- (void).cxx_destruct;
- (void)addBlurEffectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)getCapcityString;
- (id)getCurrentTypeName;
- (id)getTagList;
- (void)goToCapacityViewController;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) int m_currentType; // @synthesize m_currentType;
@property(nonatomic) __weak id <FavTagSearchFilterDelegate> m_delegate; // @synthesize m_delegate;
- (void)onAddButton:(id)arg1;
- (void)onDeleteButton:(id)arg1;
- (void)onSelectFavItemsByType:(int)arg1;
- (void)ontap;
- (void)removeAllTags;
- (void)removeLastTag;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateTagList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

