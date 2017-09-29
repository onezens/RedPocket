//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSMutableArray, NSString;

@interface MailContactFilterView : MMUIView <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView *m_tableView;
    NSMutableArray *m_filterArray;
    id <MailContactFilterViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)initData;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <MailContactFilterViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSMutableArray *m_filterArray; // @synthesize m_filterArray;
- (void)reloadTableView;
- (void)resetOffset;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

