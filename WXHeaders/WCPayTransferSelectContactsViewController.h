//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ContactsDataLogicDelegate.h"
#import "MMSearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ContactsDataLogic, MMSearchBar, MMTableView, NSString, UIView;

@interface WCPayTransferSelectContactsViewController : WCPayBaseViewController <UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource, MMSearchBarDelegate, ContactsDataLogicDelegate>
{
    id <WCPayTransferSelectContactsViewControllerDelegate> m_delegate;
    MMTableView *m_tableView;
    UIView *m_titleView;
    ContactsDataLogic *m_contactsDataLogic;
    MMSearchBar *m_mmSearchBar;
    unsigned int m_uiScene;
    _Bool m_bSupportSectionIndex;
}

- (void).cxx_destruct;
- (void)cancelSearch;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)dealloc;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (id)init;
- (void)initData;
- (void)initSearchBar;
- (void)initTableView;
- (void)initTitleArea;
- (void)initView;
@property(nonatomic) _Bool m_bSupportSectionIndex; // @synthesize m_bSupportSectionIndex;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCancelBack:(id)arg1;
- (void)onContactsDataChange;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtraCellLineHidden:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

