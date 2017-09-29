//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableView.h"

#import "UITableViewDelegate.h"

@class NSMutableDictionary, NSString, YYMultiTargetDelegate;

@interface YYTableView : MMTableView <UITableViewDelegate>
{
    NSMutableDictionary *m_keyedReusedCells;
    YYMultiTargetDelegate *m_delegate;
    YYMultiTargetDelegate *m_dataSource;
}

- (void).cxx_destruct;
- (id)dequeueReusableCellWithCellClass:(Class)arg1 identifier:(id)arg2 cellKey:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (_Bool)isCellDisplayed:(id)arg1;
- (void)setCell:(id)arg1 displayed:(_Bool)arg2;
@property(nonatomic) id <YYTableViewDataSource> dataSource; // @dynamic dataSource;
- (void)setDelegate:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

