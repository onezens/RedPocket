//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@interface EGORefreshTableHeaderView : MMUIView
{
    int m_pulldownHeight;
    int _state;
    id <EGORefreshTableHeaderDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EGORefreshTableHeaderDelegate> delegate; // @synthesize delegate;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)onStateOfPulling;
@property(nonatomic) int state; // @synthesize state=_state;

@end

