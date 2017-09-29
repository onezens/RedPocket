//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ContactsDataLogicDelegate.h"
#import "IFTSContactMgrExt.h"
#import "MMSearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FTSContactMgr, MMSearchBar, MMTableView, NSMutableArray, NSMutableDictionary, NSString;

@interface SessionSelectView : UIView <IFTSContactMgrExt, UITableViewDelegate, UITableViewDataSource, MMSearchBarDelegate, ContactsDataLogicDelegate>
{
    long long m_iSessionType;
    id <SessionSelectViewDelegate> m_delegate;
    MMTableView *m_tableView;
    NSMutableArray *m_arrContacts;
    NSMutableDictionary *m_dicMultiSelect;
    MMSearchBar *m_mmSearchBar;
    int m_commonSearchScene;
    FTSContactMgr *_ftsContactMgr;
    NSString *nsCurrentSearchText;
    NSMutableArray *arrSearchResultOfContacts;
    NSMutableArray *arrSearchResultOfGroup;
    NSMutableArray *arrSearchResultOfTopHit;
    NSMutableDictionary *dicSearchResult;
    NSMutableArray *arrSectionKey;
    NSMutableArray *m_specialCellList;
    unsigned int _expandBitSet;
    _Bool _chatRoomOnly;
    _Bool m_bShowEnterpriseChat;
    _Bool m_bShowNewSession;
    _Bool m_bShowSelectFromContactList;
    _Bool m_bFilterMyContact;
    _Bool m_bMultiSelect;
}

- (void).cxx_destruct;
- (void)FilterSearchResultOfNormalContacts:(id)arg1;
- (void)SearchBarBecomeActive;
- (void)addFakeViewWhenAsynSearchNotReturn;
- (void)cancelSearch;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)chatRoomEntryConvertionKVReport:(_Bool)arg1;
- (void)cleartSearchQueryTest;
- (long long)countOfRowForBizChatSession;
- (void)dealloc;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (id)getCellImage:(id)arg1;
- (id)getContactInBizChatSessionAtRow:(unsigned long long)arg1;
- (id)getGroupDispName:(id)arg1;
- (id)getMatchTipForUsername:(id)arg1;
- (id)getTitleForBizChatSession;
- (void)handleSelectEnterpriseChat:(id)arg1;
- (void)handleSelectFromContact;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (void)handleSelectNewSession;
- (_Bool)hasBizChatSession;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)idkeyWithResultClick:(_Bool)arg1 withCollapse:(_Bool)arg2;
- (void)initData;
- (void)initSearchBar;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (_Bool)isBizChatSection:(unsigned long long)arg1;
- (_Bool)isChatRoomEntryCellAtSection:(long long)arg1;
- (_Bool)isMoreCellAtIndexPath:(id)arg1;
- (_Bool)isRecentChatSection:(unsigned long long)arg1;
- (_Bool)isSelected:(id)arg1;
@property(nonatomic) _Bool m_bFilterMyContact; // @synthesize m_bFilterMyContact;
@property(nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect;
@property(nonatomic) _Bool m_bShowEnterpriseChat; // @synthesize m_bShowEnterpriseChat;
@property(nonatomic) _Bool m_bShowNewSession; // @synthesize m_bShowNewSession;
@property(nonatomic) _Bool m_bShowSelectFromContactList; // @synthesize m_bShowSelectFromContactList;
@property(nonatomic) int m_commonSearchScene; // @synthesize m_commonSearchScene;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(retain, nonatomic) MMSearchBar *m_mmSearchBar; // @synthesize m_mmSearchBar;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
- (void)makeCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 HightlightedTop:(_Bool)arg3;
- (void)makeCell:(id)arg1 contact:(id)arg2 HightlightedTop:(_Bool)arg3 showMatchTip:(_Bool)arg4;
- (void)makeChatRoomEntryCell:(id)arg1;
- (void)makeMoreCell:(id)arg1 description:(id)arg2 image:(id)arg3;
- (void)makeSpecialCell:(id)arg1 Title:(id)arg2;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (void)multiSelectWithSearchResult:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onContactsDataChange;
- (void)onFTSContactSearchResultChanged:(_Bool)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onSelect:(id)arg1;
- (id)parseSeperatedKeyword:(id)arg1;
- (void)removeFakeViewWhenAsynSearchIsReturn;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSearchBarBecomeActive;
- (_Bool)shouldCollaseOrExpandSearchResultAtIndex:(long long)arg1;
- (_Bool)shouldDisplayChatRoomEntry;
- (void)switchSelect:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (_Bool)updateMultiSelect:(id)arg1;
- (void)updateMultiSelectView;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

