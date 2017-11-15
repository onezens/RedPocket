//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavForwardLogicDelegate.h"
#import "FavTagViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WNArticleControllerDelegate.h"
#import "WNSelectAllViewDelegate.h"

@class FavForwardLogicController, MMTableView, MMTimer, NSString, WNArticleDataController, WNArticleFooterView, WNArticleHeaderView, WNParagraphStyleToolView, WNSelectAllView;

@interface WNArticleViewController : MMUIViewController <WCActionSheetDelegate, FavForwardLogicDelegate, FavTagViewDelegate, UIAlertViewDelegate, WNSelectAllViewDelegate, WNArticleControllerDelegate>
{
    WNParagraphStyleToolView *m_toolView;
    WNArticleHeaderView *_headerView;
    WNArticleFooterView *_footerView;
    WNArticleDataController *m_dataController;
    FavForwardLogicController *_favForwardLogicController;
    MMTableView *m_tableView;
    MMTimer *_saveTimer;
    WNSelectAllView *_selectAllView;
    _Bool bDeletePopView;
    _Bool bEditable;
    id <FavNotePostDelegate> favNotePostDelegate;
}

- (void).cxx_destruct;
- (_Bool)BeEditable;
- (struct CGRect)CGRectConvertWindowRectToCurOri:(struct CGRect)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable;
- (void)backupNote;
- (void)configNavbar;
- (void)configWithFavItem:(id)arg1;
- (void)configWithMsg:(id)arg1;
- (void)configWithWCDataItem:(id)arg1;
- (void)dealloc;
- (void)deleteRowAtIndex:(long long)arg1;
- (void)disMissSelf;
@property(nonatomic) __weak id <FavNotePostDelegate> favNotePostDelegate; // @synthesize favNotePostDelegate;
- (void)forwardNote;
- (id)getFavForawrdViewController;
- (id)getFooterViewImage;
- (id)getNoteImage;
- (double)getTableViewContentHeight;
- (id)getTableViewimage;
- (id)getViewController;
- (void)hideLoadingView;
- (void)hideToolbarView;
- (id)init;
- (void)initData;
- (void)initHeaderView;
- (void)initTableView;
- (void)initToolView;
- (void)initUI;
- (void)insertNewRowAtIndex:(long long)arg1;
- (void)insertNewRowAtIndex:(long long)arg1 withCount:(long long)arg2;
- (_Bool)isCellVisible:(int)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onDownloadHtmlExpire;
- (void)onDownloadHtmlFail;
- (void)onEdited;
- (void)onFavTagEditBegin:(int)arg1;
- (void)onFavTagEditOK;
- (void)onForwardNote2WC;
- (void)onHideSelectAllView;
- (void)onMenuAction:(id)arg1;
- (void)onNoneTxtInfoNumExceed;
- (void)onSelectAllActionCopy;
- (void)onSelectAllActionCut;
- (void)onSelectAllActionDelete;
- (void)onSelectAllActionPaste;
- (void)onSelectAllViewToShow;
- (void)onSelectParaTextForEditing:(struct _NSRange)arg1;
- (void)onShowFullToolbar;
- (void)onShowRecordingAlert;
- (void)onTimeSave;
- (void)onTxtInfoTextLengthExceed;
- (void)reloadAll;
- (void)reloadRowAtIndex:(long long)arg1;
- (void)reloadRowsAtIndexArray:(id)arg1;
- (void)saveNote;
- (void)saveNoteAsImage;
- (void)scrollToIndex:(long long)arg1;
- (void)setConversionOntop:(_Bool)arg1;
- (_Bool)shouldInteractivePop;
- (_Bool)shouldShowAddTimeHeader;
- (void)showLoadingView;
- (void)showRecordingAlert:(int)arg1;
- (void)startAutoSaveTimer;
- (void)stopAutoSaveTimer;
- (void)updateToolBarHeight:(int)arg1 KeyboardHeight:(double)arg2;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

