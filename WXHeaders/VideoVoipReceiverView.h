//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VideoVoipView.h"

#import "IRecordPermissionCheckExt.h"
#import "UIAlertViewDelegate.h"

@class MMTimer, NSString, UIView, UIVisualEffectView, VoipDescriptionButton, VoipMonoMsg;

@interface VideoVoipReceiverView : VideoVoipView <UIAlertViewDelegate, IRecordPermissionCheckExt>
{
    VoipMonoMsg *m_monoMsg;
    _Bool isNeedFormSysMsg;
    _Bool hasAcceptCall;
    _Bool hasHangUp;
    _Bool _m_hasInitCameraDevice;
    unsigned int m_dotCountIncresement;
    unsigned int _m_timerCnt;
    VoipDescriptionButton *m_acceptBtn;
    VoipDescriptionButton *m_hangupBtn;
    VoipDescriptionButton *m_voiceModeButton;
    MMTimer *m_actingTimer;
    UIView *m_cameraPreviewView;
    UIVisualEffectView *m_glassView;
}

- (void).cxx_destruct;
- (void)OnAccept:(id)arg1 ErrNo:(int)arg2;
- (void)OnAutoHangUp:(id)arg1;
- (void)OnBeHanguped:(id)arg1;
- (void)OnBeginConnect:(id)arg1;
- (void)OnBeginTalk:(id)arg1;
- (void)OnCallInterrupt:(id)arg1;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnInterrupt:(id)arg1;
- (void)OnNetWorkError:(id)arg1 ErrNo:(int)arg2;
- (void)OnPreConnect:(id)arg1;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)OnRemoteEarMode;
- (void)OnRemoteEarModeFor2G;
- (void)OnSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnTimeOut:(id)arg1;
- (void)acceptByVoiceCall;
- (void)acceptCall;
- (_Bool)accessibilityPerformMagicTap;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)asyncAcceptAudio;
- (void)asyncAcceptVideo;
- (void)asyncPlaySound;
- (void)asyncStartNetDetect;
- (void)autoUpdateMainStatusString;
- (void)changeToAcceptedAnimation;
- (void)changeToRemoteEarModeBeforeAnswer;
- (void)checkAndShowAlertView;
- (void)checkLostNotifySync;
- (void)dealloc;
- (void)endCallAfterDelay:(double)arg1;
- (void)endCallByCancel;
- (void)hangup;
@property(nonatomic) _Bool hasAcceptCall; // @synthesize hasAcceptCall;
@property(nonatomic) _Bool hasHangUp; // @synthesize hasHangUp;
- (_Bool)hasVideoVoipTalkingViewClickChangeToAudioMode;
- (void)ignoreCall;
- (void)ignoreCallAction;
- (id)init;
- (void)initCameraDevice;
- (void)initCameraView;
- (id)initWithFrame:(struct CGRect)arg1 andContact:(id)arg2 isEarMode:(_Bool)arg3 andInitViewMode:(int)arg4;
- (_Bool)isCaller;
@property(nonatomic) _Bool isNeedFormSysMsg; // @synthesize isNeedFormSysMsg;
- (void)layoutAcceptButton;
- (void)layoutCameraPreview;
- (void)layoutHangupButton;
- (void)layoutVoiceModeButton;
@property(retain, nonatomic) VoipDescriptionButton *m_acceptBtn; // @synthesize m_acceptBtn;
@property(retain, nonatomic) MMTimer *m_actingTimer; // @synthesize m_actingTimer;
@property(retain, nonatomic) UIView *m_cameraPreviewView; // @synthesize m_cameraPreviewView;
@property(nonatomic) unsigned int m_dotCountIncresement; // @synthesize m_dotCountIncresement;
@property(retain, nonatomic) UIVisualEffectView *m_glassView; // @synthesize m_glassView;
@property(retain, nonatomic) VoipDescriptionButton *m_hangupBtn; // @synthesize m_hangupBtn;
@property(nonatomic) _Bool m_hasInitCameraDevice; // @synthesize m_hasInitCameraDevice=_m_hasInitCameraDevice;
@property(nonatomic) unsigned int m_timerCnt; // @synthesize m_timerCnt=_m_timerCnt;
@property(retain, nonatomic) VoipDescriptionButton *m_voiceModeButton; // @synthesize m_voiceModeButton;
- (void)markLastVoipInfo;
- (void)onFromBackgroundToForeground;
- (void)realAcceptCall;
- (void)rejectCall;
- (void)setMonoMsg:(id)arg1;
- (void)startCamera;
- (void)startShowView;
- (void)updateFooterView;
- (void)updateStatusLabel;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

