//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCShareCardPkgExt.h"
#import "MMWebImageViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCardMsgViewDelegate.h"
#import "WCNewShareCardConsumedViewDelegate.h"
#import "tableViewDelegate.h"

@class MMTableView, MMUIButton, MMUILabel, NSMutableArray, NSMutableDictionary, NSString, UIActivityIndicatorView, UIScrollView, UIView, WCNewShareCardConsumedView;

@interface WCCardMsgCenterViewController : MMUIViewController <IWCShareCardPkgExt, WCNewShareCardConsumedViewDelegate, UITableViewDataSource, UITableViewDelegate, tableViewDelegate, WCActionSheetDelegate, MMWebImageViewDelegate, WCCardMsgViewDelegate>
{
    NSMutableArray *_msgList;
    NSMutableDictionary *_cellHeightDic;
    UIScrollView *_emptyView;
    UIView *_navHeaderView;
    MMTableView *_tableView;
    MMUIButton *_footerView;
    UIActivityIndicatorView *_activityView;
    MMUILabel *_loadLabel;
    unsigned int _curMinUpdateTime;
    NSString *_lastShareCardConsumedMsgCardID;
    WCNewShareCardConsumedView *_newConsumendView;
    _Bool _bForNewMsg;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) _Bool bForNewMsg; // @synthesize bForNewMsg=_bForNewMsg;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)genNormalCell:(id)arg1 IndexPath:(id)arg2;
- (void)hideEmptyView;
- (id)init;
- (void)initData;
- (void)initEmptyView;
- (void)initNavigationBar;
- (void)initTableView;
- (_Bool)isAddedMsg:(id)arg1;
@property(retain, nonatomic) NSMutableArray *msgList; // @synthesize msgList=_msgList;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAcceptCard:(id)arg1;
- (void)onAction:(id)arg1;
- (void)onClearAllMsg;
- (void)onFooterClicked;
- (void)onJumpUrl:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadMore;
- (void)onMsgNotifyShareCardConsumed:(id)arg1 sharedCardId:(id)arg2 consumedBoxId:(id)arg3 subscribeAppUserName:(id)arg4 subscribeWording:(id)arg5 retMsg:(id)arg6;
- (void)onOperate;
- (void)onShareCardAfterConsumed:(_Bool)arg1;
- (void)reloadTableView;
- (void)safeAddMsgList:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)sortMsgList;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)updateTableFooterHasMore:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

