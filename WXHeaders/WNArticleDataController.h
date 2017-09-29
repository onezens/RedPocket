//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "FavForwardLogicDelegate.h"
#import "IFavoritesExt.h"
#import "IRecordDownloadExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WNArticleToolViewDelegate.h"
#import "WNParaCellViewDelegate.h"

@class CMessageWrap, FavForwardLogicController, FavoritesItem, NSMutableArray, NSString, WNAudioMgr, WNParagraphCellView, WNParagraphMgr;

@interface WNArticleDataController : MMObject <FavForwardLogicDelegate, UITableViewDataSource, UITableViewDelegate, WNParaCellViewDelegate, WNArticleToolViewDelegate, IFavoritesExt, IRecordDownloadExt>
{
    unsigned int _editTime;
    FavoritesItem *m_favItem;
    CMessageWrap *m_recordMsg;
    long long nowEditingIndex;
    WNParagraphCellView *m_EditingCellView;
    WNParagraphMgr *m_wnParaMgr;
    WNAudioMgr *m_audioMgr;
    unsigned int maxObjectId;
    NSMutableArray *m_allParaInfoArray;
    int curUIStatus;
    FavForwardLogicController *m_favForwardLogicController;
    _Bool bEditable;
    _Bool bEdited;
    int WeNoteStatus;
    id <WNArticleControllerDelegate> m_delegate;
    NSMutableArray *m_paraArray;
}

- (void).cxx_destruct;
- (void)OnDownloadFavoritesItemFail:(id)arg1 LocalDataId:(id)arg2;
- (void)OnDownloadFavoritesItemOK:(id)arg1 LocalDataId:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(_Bool)arg3;
- (void)OnObjectCellAddTextLeft:(id)arg1 inCellView:(id)arg2 newText:(id)arg3;
- (void)OnObjectCellAddTextRight:(id)arg1 inCellView:(id)arg2 newText:(id)arg3;
- (void)OnObjectCellDelTextLeft:(id)arg1 inCellView:(id)arg2;
- (void)OnObjectCellDelTextRight:(id)arg1 inCellView:(id)arg2;
- (void)OnUpdateItems:(id)arg1;
@property(nonatomic) int WeNoteStatus; // @synthesize WeNoteStatus;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable;
@property(nonatomic) _Bool bEdited; // @synthesize bEdited;
- (_Bool)backupArticle;
- (_Bool)canEdit;
- (void)configFavItem:(id)arg1;
- (void)configMsg:(id)arg1;
- (void)configParaInfoObjectId:(id)arg1;
- (void)dealloc;
- (void)geWNNotetNextPage;
- (int)getCurrentHtmlIdIndex;
- (id)getDataArray;
- (id)getEditingCellView;
- (id)getFavForawrdViewController;
- (id)getFavItem;
- (int)getIndexOf:(id)arg1;
- (void)getNextPage:(double)arg1;
- (id)getParaInfo:(long long)arg1;
- (id)getPlayingObjectId;
- (int)getTextLength:(id)arg1;
- (id)getViewController;
- (void)getWNNoteFirstPage;
- (_Bool)hasEditingCellView;
- (_Bool)hasHtmlChanged;
- (_Bool)hasOriginHtml;
- (void)hideKeyboard;
- (_Bool)ifCanInsertItems:(id)arg1;
- (_Bool)ifHasReachedSizeLimit;
- (_Bool)ifNonTextParaInfoNumExceedLimit:(long long)arg1;
- (_Bool)ifTextLengthExceedLimit:(long long)arg1;
- (id)init;
- (void)initArrayData;
- (void)insertItem:(id)arg1 AtIndex:(unsigned long long)arg2;
- (void)insertItems:(id)arg1;
- (_Bool)isEditing;
- (_Bool)isEmpty;
- (_Bool)isPlayingAudio;
- (_Bool)isRecording;
@property(nonatomic) __weak id <WNArticleControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSMutableArray *m_paraArray; // @synthesize m_paraArray;
- (void)notifyEdited;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCellViewResighFirstResponser;
- (void)onCheckPlayVoice:(id)arg1;
- (void)onMainTextKeyboardBack:(id)arg1 inCellView:(id)arg2;
- (void)onSelectAll;
- (void)onSelectionChanged:(struct _NSRange)arg1;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (void)onStopRecordVoice:(id)arg1;
- (void)onTextChanged:(id)arg1 newText:(id)arg2;
- (void)onTextSetBold;
- (void)onTextTooLongNeedCut:(id)arg1 inRange:(struct _NSRange)arg2 withText:(id)arg3;
- (void)onTextViewPaste;
- (void)onToolViewStartVoiceRecording:(id)arg1;
- (void)onToolViewStopVoiceRecording:(id)arg1;
- (void)realScrollToEditingCell;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)replaceItemAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)resetEditingKeyboard;
- (_Bool)saveWNArticle;
- (void)scrollToEditingCell;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)selectAllCopy;
- (void)selectAllCut;
- (void)selectAllDelete;
- (void)selectAllPaste;
- (void)setEditingCellView:(id)arg1;
- (void)setPreviousSelectedToDelete;
- (void)stopPlayAudio;
- (void)stopRecord;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textCellDidBeginEditing:(id)arg1;
- (void)textCellShouldBeginEditing:(id)arg1;
- (void)textCellShouldEndEditing:(id)arg1;
- (void)updateEditingCellInfo:(id)arg1;
- (void)updateSelectAllView:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

