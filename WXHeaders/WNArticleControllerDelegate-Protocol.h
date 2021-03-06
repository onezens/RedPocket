//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMUIViewController, NSArray;

@protocol WNArticleControllerDelegate <NSObject>

@optional
- (void)deleteRowAtIndex:(long long)arg1;
- (MMUIViewController *)getViewController;
- (void)hideLoadingView;
- (void)hideToolbarView;
- (void)insertNewRowAtIndex:(long long)arg1;
- (void)insertNewRowAtIndex:(long long)arg1 withCount:(long long)arg2;
- (_Bool)isCellVisible:(int)arg1;
- (void)onDownloadHtmlExpire;
- (void)onDownloadHtmlFail;
- (void)onEdited;
- (void)onNoneTxtInfoNumExceed;
- (void)onSelectAllViewToShow;
- (void)onSelectParaTextForEditing:(struct _NSRange)arg1;
- (void)onShowFullToolbar;
- (void)onShowRecordingAlert;
- (void)onTxtInfoTextLengthExceed;
- (void)reloadAll;
- (void)reloadRowAtIndex:(long long)arg1;
- (void)reloadRowsAtIndexArray:(NSArray *)arg1;
- (void)scrollToIndex:(long long)arg1;
- (void)showLoadingView;
@end

