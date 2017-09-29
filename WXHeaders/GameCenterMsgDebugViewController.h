//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSArray, NSMutableArray, NSString;

@interface GameCenterMsgDebugViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate>
{
    int _selectedSection;
    MMTableView *_tableView;
    NSMutableArray *_notifyData;
    NSArray *_sectionTitles;
    NSArray *_rowTitles;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)initBubbleData;
- (void)initData;
- (void)initFindFriendEntryIconDownloadData;
- (void)initFindFriendNotifyData;
- (void)initFloatLayerNotifyData;
- (void)initGiftRedDotData;
- (void)initMsgCenterRedDotData;
- (void)initWeakNetStrategyData;
@property(retain, nonatomic) NSMutableArray *notifyData; // @synthesize notifyData=_notifyData;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) NSArray *rowTitles; // @synthesize rowTitles=_rowTitles;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

