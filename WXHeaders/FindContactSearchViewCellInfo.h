//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCellInfo.h"

#import "FTSWebSearchViewDelegate.h"
#import "IBrandServiceSearchExt.h"
#import "MMSearchBarDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "SearchContactDataProviderDelegate.h"
#import "UIAlertViewDelegate.h"
#import "contactInfoDelegate.h"

@class CContact, FTSWebSearchController, MMLoadingView, MMSearchBar, MMUILabel, MMUIViewController, NSString, SearchContactDataProvider, UITextField, UIView;

@interface FindContactSearchViewCellInfo : MMTableViewCellInfo <SearchContactDataProviderDelegate, FTSWebSearchViewDelegate, IBrandServiceSearchExt, PBMessageObserverDelegate, contactInfoDelegate, UIAlertViewDelegate, MMSearchBarDelegate>
{
    UITextField *m_userNameTextField;
    MMLoadingView *m_loadingView;
    NSString *m_nsUserNameToFind;
    MMUIViewController *m_containViewController;
    MMSearchBar *m_searchBar;
    UIView *m_backGroundView;
    UIView *m_backGroundBlurView;
    unsigned int _requestEventID;
    _Bool _didSearchContactDone;
    _Bool _isSearching;
    _Bool _bShowNoResult;
    _Bool _bHasShownWebSearchCell;
    _Bool _bHasOperateOnlineResult;
    CContact *_foundContact;
    unsigned long long _searchContactState;
    SearchContactDataProvider *_searchContactDataProvider;
    MMUILabel *_nonResultLabel;
    FTSWebSearchController *_webSearchLogicController;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)SearchBarBecomeActive;
- (void)SearchBarBecomeUnActive;
- (void)addFriendScene:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (_Bool)allTextIsBlank;
@property(nonatomic) _Bool bHasOperateOnlineResult; // @synthesize bHasOperateOnlineResult=_bHasOperateOnlineResult;
@property(nonatomic) _Bool bHasShownWebSearchCell; // @synthesize bHasShownWebSearchCell=_bHasShownWebSearchCell;
@property(nonatomic) _Bool bShowNoResult; // @synthesize bShowNoResult=_bShowNoResult;
- (_Bool)becomeFirstResponder;
- (void)cancelSearch;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (void)dealloc;
@property(nonatomic) _Bool didSearchContactDone; // @synthesize didSearchContactDone=_didSearchContactDone;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)doSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)do_LogExt:(int)arg1;
- (void)endSearch;
- (id)filterUserName:(id)arg1;
- (void)foo;
- (void)fooo:(char *)arg1;
@property(retain, nonatomic) CContact *foundContact; // @synthesize foundContact=_foundContact;
- (id)getAddressBookPersonImage:(id)arg1;
- (id)getSearchBarText;
- (void)handleRotate;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)hideDimmingView;
- (id)initWithContentController:(id)arg1 backGroundView:(id)arg2;
- (_Bool)isBestGuessPhoneNumber:(id)arg1;
- (_Bool)isObj:(id)arg1 match:(id)arg2;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
- (_Bool)isValidLocalQuery:(id)arg1;
- (void)layoutViews;
- (void)logWebSearchClickByKeyword:(id)arg1 clickType:(unsigned int)arg2;
@property(retain, nonatomic) NSString *m_nsUserNameToFind; // @synthesize m_nsUserNameToFind;
@property(retain, nonatomic) UITextField *m_userNameTextField; // @synthesize m_userNameTextField;
- (void)makeCell:(id)arg1;
- (id)makeEntryCell:(id)arg1;
- (void)mmSearchDisplayControllerDidBeginSearch;
- (void)mmSearchDisplayControllerDidHideSearchResultsTableView:(id)arg1;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)mmSearchDisplayControllerWillShowSearchResultsTableView:(id)arg1;
- (void)mmsearchBarCancelButtonClicked:(id)arg1;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
@property(retain, nonatomic) MMUILabel *nonResultLabel; // @synthesize nonResultLabel=_nonResultLabel;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (void)onGetNonResult;
- (void)onGetSearchContactRet:(id)arg1 req:(id)arg2;
- (void)onGetSearchDetailPageResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onSearch:(id)arg1;
- (void)onSearchResultViewNeedPushViewController:(id)arg1;
- (void)onSearchResultViewNeedReload;
- (void)onSearchResultViewNeedStartWebSearch;
- (void)onTestCrash;
- (void)onTestCrash1;
- (void)onTestCrash2;
- (void)onWebSearchViewDidPop;
- (void)onWebSearchViewDidShow;
- (void)onWebSearchViewReturn:(_Bool)arg1;
- (void)onWebSearchViewWillPop;
- (void)openContactInfoViewForPhone:(id)arg1;
- (void)removeNoResultLabelWhenSearching;
- (void)removeWebSearchView;
- (_Bool)resignFirstResponder;
@property(retain, nonatomic) SearchContactDataProvider *searchContactDataProvider; // @synthesize searchContactDataProvider=_searchContactDataProvider;
@property(nonatomic) unsigned long long searchContactState; // @synthesize searchContactState=_searchContactState;
- (_Bool)searchKeyMatchesCommand:(id)arg1;
- (void)sendBrandContactListRequest;
- (void)setSearchDisplayControllerContainerViewIn:(id)arg1 hidden:(_Bool)arg2;
@property(retain, nonatomic) FTSWebSearchController *webSearchLogicController; // @synthesize webSearchLogicController=_webSearchLogicController;
- (void)showContactInfoView:(id)arg1;
- (void)showContactListInfoView:(id)arg1;
- (void)showWebSearchEntryWithSrvErrMsg:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

