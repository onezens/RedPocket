//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMSearchBarDelegate.h"
#import "MMUIViewControllerDelegate.h"
#import "MsgImgFastBrowseViewControllerDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "RoomContactSelectDelegate.h"

@class MMLoadingView, MMSearchBar, MMUILabel, MMUIViewController, NSMutableArray, NSString, SGCustomButton, UIButton, UITextField, UIViewController;

@interface MsgSearchHelper : MMObject <RichTextLayoutDelegate, MMUIViewControllerDelegate, MsgImgFastBrowseViewControllerDelegate, RoomContactSelectDelegate, MMSearchBarDelegate>
{
    _Bool m_bStartSearch;
    _Bool m_bSearchBarBecomeFirstRespones;
    _Bool m_bSearchBarCancelBtnDown;
    NSMutableArray *m_arrSearchResult;
    MMSearchBar *m_oSearchBar;
    MMLoadingView *m_oLoadingView;
    UIButton *backGroundButton;
    UIButton *cancelButton;
    int m_eMsgSearchHelperScene;
    id <MsgSearchHelperDelegate> m_delegate;
    SGCustomButton *m_searchByName;
    SGCustomButton *m_searchByTime;
    NSMutableArray *m_buttonTitles;
    NSMutableArray *m_buttons;
    NSMutableArray *m_divLines;
    NSMutableArray *m_buttonIndexes;
    MMUILabel *m_tipLabel;
    UIViewController *m_searchParentVC;
    MMUIViewController *m_searchCurVC;
    UITextField *m_txtField;
    NSString *m_tagText;
    UIButton *m_leftBtn;
    struct CGRect m_txtFieldFrame;
    _Bool _hasMoving;
    double _moveStartOffset;
    double _moveCurOffset;
    double _moveContentOffsetY;
    double _searchTextFieldNormalWidth;
    struct CGSize _searchIconDefaultSize;
    _Bool _m_bShowSearchByName;
    _Bool _m_bShowSearchByTime;
}

- (void).cxx_destruct;
- (void)cancelBtnDown;
- (void)cancelMoveSearchVC;
- (void)cancelSearch;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)dealloc;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)fillSearcLoadMoreCell:(id)arg1;
- (void)fillSearcResultCell:(id)arg1 MessageWrap:(id)arg2;
- (void)fillSearchWordingCell:(id)arg1 withSearchText:(id)arg2;
- (void)finishSearch;
- (double)getButtonTitleFontSize;
- (id)getSearchText:(id)arg1;
- (id)getViewController;
- (void)handlePanGesture:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (void)initBackGroundView;
- (id)initWithContentsController:(id)arg1;
- (_Bool)isSearchBarActive;
- (void)logSearch;
- (void)logTapButton:(long long)arg1;
@property(nonatomic) _Bool m_bShowSearchByName; // @synthesize m_bShowSearchByName=_m_bShowSearchByName;
@property(nonatomic) _Bool m_bShowSearchByTime; // @synthesize m_bShowSearchByTime=_m_bShowSearchByTime;
@property(nonatomic) __weak id <MsgSearchHelperDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) int m_eMsgSearchHelperScene; // @synthesize m_eMsgSearchHelperScene;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (void)mmSearchDisplayControllerDidBeginSearch;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (_Bool)mmsearchBarShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (void)mmsearchBarTextDidBeginEditing:(id)arg1;
- (void)moveSearchVCToRight;
- (void)msgSearchBarSearchByFile;
- (void)msgSearchBarSearchByIndex:(long long)arg1;
- (void)msgSearchBarSearchByLink;
- (void)msgSearchBarSearchByMusic;
- (void)msgSearchBarSearchByName;
- (void)msgSearchBarSearchByPicture;
- (void)msgSearchBarSearchByTime;
- (void)msgSearchBarSearchByVideo;
- (void)onTapButton:(id)arg1;
- (void)reloadView;
- (void)removeSearchVC;
- (void)resetBackGroundView;
- (id)searchBar;
- (void)searchBarResignFirstResponder;
- (_Bool)searchBarShouldBecomeFirstResponse;
- (id)searchDisplayController;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)startSearch;
- (void)startSearch:(id)arg1;
- (void)updateSearchFieldText:(id)arg1;
- (void)updateSearchVCPosition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

