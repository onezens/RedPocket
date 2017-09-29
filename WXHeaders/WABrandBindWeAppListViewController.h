//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UILabel, UITableView, UIView;

@interface WABrandBindWeAppListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_contentHeaderView;
    UILabel *_contentLabel;
    UITableView *_listTableView;
    NSArray *_arrBindWeAppInfo;
    NSString *_fromBrandUserName;
    NSString *_fromBrandAppid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrBindWeAppInfo; // @synthesize arrBindWeAppInfo=_arrBindWeAppInfo;
@property(copy, nonatomic) NSString *fromBrandAppid; // @synthesize fromBrandAppid=_fromBrandAppid;
@property(retain, nonatomic) NSString *fromBrandUserName; // @synthesize fromBrandUserName=_fromBrandUserName;
- (void)initContentLabel;
- (void)initTableView;
- (void)initView;
- (void)layoutMySubViews;
- (void)onBackButtonClicked:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

