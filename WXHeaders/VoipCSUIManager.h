//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IVOIPExt.h"
#import "MMConfigMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "MMVoipCSMainWindowDelegate.h"
#import "VideoVoipCSViewDelegate.h"

@class MMVoipCSMainWindow, MMVoipToastWindow, NSString, VideoVoipCSCallerView;

@interface VoipCSUIManager : MMService <MMKernelExt, MMVoipCSMainWindowDelegate, VideoVoipCSViewDelegate, MMService, IVOIPExt, MMConfigMgrExt>
{
    MMVoipCSMainWindow *m_mainWindow;
    MMVoipToastWindow *m_voipCSToastWindow;
    VideoVoipCSCallerView *m_videoVoipCSViewController;
}

+ (_Bool)canForceStartVoiceWithContact:(id)arg1;
+ (_Bool)canStartVideoWithContact:(id)arg1;
+ (_Bool)canStartVoiceWithContact:(id)arg1;
- (void).cxx_destruct;
- (void)Cancel;
- (void)OnTellMeViewIsExist:(_Bool *)arg1;
- (void)SendInvite:(int)arg1;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (_Bool)canOpenVoipByTimeLogic:(id)arg1;
- (_Bool)canStartVoip;
- (void)changeToMinimizeToast;
- (void)changeToVideoToast;
- (void)clearCurrentString;
- (_Bool)closeViewWith:(id)arg1;
- (void)dealloc;
- (id)getConflictWording;
- (void)hangupForNotSupportVoiceVoip;
- (id)init;
- (_Bool)isMinimizeMode;
- (_Bool)isTheSameContactWithCurrentVoip:(id)arg1;
- (_Bool)isUsingEarDevice;
- (_Bool)isVideoVoipWorking;
- (_Bool)isViewEnding;
- (_Bool)isVoipSpeakerMode;
- (_Bool)isVoipWorking;
@property(retain, nonatomic) MMVoipCSMainWindow *m_mainWindow; // @synthesize m_mainWindow;
@property(retain, nonatomic) VideoVoipCSCallerView *m_videoVoipCSViewController; // @synthesize m_videoVoipCSViewController;
@property(retain, nonatomic) MMVoipToastWindow *m_voipCSToastWindow; // @synthesize m_voipCSToastWindow;
- (void)onMMDynamicConfigUpdated;
- (void)onMMVoipCSMainWindowCollapseAnimationDidEnd;
- (void)onMMVoipCSMainWindowCollapseAnimationWillStart;
- (void)onMMVoipCSMainWindowExtendAnimationDidEnd;
- (void)onMMVoipCSMainWindowExtendFromCollapseAnimationDidEnd;
- (void)onMMVoipCSMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMMVoipCSMainWindowQuitAnimationDidEnd;
- (void)onMMVoipCSMainWindowQuitAnimationWillStart;
- (struct CGRect)onMMVoipCSMainWindowRequestMinimizeFrame;
- (void)onPreQuit;
- (void)onServiceReloadData;
- (void)onVideoVoipCSViewChangeToMinimizeMode;
- (void)onVideoVoipCSViewClose;
- (_Bool)onVideoVoipCSViewRequestMinimizeStatus;
- (void)onVoipMinimizeWindowClicked;
- (void)openVideoVoipCSViewWithBizUserName:(id)arg1 andMsgWrap:(id)arg2 isEarMode:(_Bool)arg3 appid:(id)arg4 headUrl:(id)arg5 isAllowBackCamera:(_Bool)arg6 isShowCSVideo:(_Bool)arg7 context:(id)arg8;
- (void)recoverVoipAudioMode;
- (void)showCannotStartVoipTwice;
- (void)showConflictWording;
- (_Bool)showVideoEntranceInMainFrame;
- (void)switchToSpeakPhoneMode:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

