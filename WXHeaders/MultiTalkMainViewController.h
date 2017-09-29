//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IRecordPermissionCheckExt.h"
#import "MMNewMultiSelectContactsViewControllerDelegate.h"
#import "MultiTalkBeforeTalkingOperateViewDelegate.h"
#import "MultiTalkContactsCollectionViewDelegate.h"
#import "MultiTalkMainWindowDelegate.h"
#import "MultiTalkMgrExt.h"
#import "MultiTalkTalkingOperateViewDelegate.h"
#import "MultiTalkTalkingOperateViewLayoutDelegate.h"
#import "MultitalkSecondOperateViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class CContact, MMTimer, MultiTalkBeforeTalkingOperateView, MultiTalkContactsCollectionView, MultiTalkTalkingOperateView, MultitalkSecondOperateView, NSArray, NSDictionary, NSString, UIImageView, WCUIAlertView, WXCGroupMember, WXCMultiTalkGroup;

@interface MultiTalkMainViewController : MMUIViewController <MultiTalkMgrExt, MMNewMultiSelectContactsViewControllerDelegate, MultiTalkContactsCollectionViewDelegate, UIViewControllerTransitioningDelegate, MultiTalkBeforeTalkingOperateViewDelegate, MultiTalkTalkingOperateViewDelegate, MultiTalkTalkingOperateViewLayoutDelegate, MultitalkSecondOperateViewDelegate, IRecordPermissionCheckExt, MultiTalkMainWindowDelegate>
{
    _Bool _m_isCaller;
    _Bool _m_hasClickAcceptButton;
    _Bool _m_hasClickHangupButton;
    _Bool _m_hasStartTimerView;
    _Bool _m_talkReady;
    _Bool _m_deviceLaunchSuccess;
    _Bool _m_hasBlurBackground;
    _Bool _m_isMinimizeMode;
    _Bool _m_hasCreateOk;
    _Bool _m_connect_onePersonLeft;
    _Bool _m_connect_timeOut;
    _Bool _m_connect_netWorkError;
    _Bool _m_connect_hangup;
    _Bool _m_connect_beCanceled;
    _Bool _m_connect_interruptByCall;
    int _m_layoutType;
    unsigned int _m_messageId;
    int _m_networkStatus;
    unsigned int _m_audio_duration;
    unsigned int _m_video_start_time;
    unsigned int _m_minimizeClickCount;
    unsigned int _m_muteClickCount;
    unsigned int _m_speakerClickCount;
    unsigned int _m_videoClickCount;
    unsigned int _m_addMemberClickCount;
    id <MultiTalkMainViewControllerDelegate> _m_mainWindowDelegate;
    MultiTalkContactsCollectionView *_m_contactView;
    MultiTalkBeforeTalkingOperateView *_m_beforeTalkingView;
    MultiTalkTalkingOperateView *_m_talkingView;
    MultitalkSecondOperateView *_m_secondTalkingView;
    UIImageView *_m_backgroundView;
    MMTimer *_m_checkTalkingTimer;
    MMTimer *_m_updateMessageTimer;
    MMTimer *_m_checkQualityTimer;
    WXCMultiTalkGroup *_m_group;
    CContact *_m_contactInviteMe;
    NSDictionary *_m_videoMemberInfo;
    NSArray *_m_memberTalkArray;
    NSDictionary *_m_memberTalkingDic;
    NSArray *_m_memberWaitList;
    NSArray *_m_memberDisplayBigHeadList;
    NSArray *_m_contactWaitList;
    NSArray *_m_contactArrayOther;
    MMTimer *_m_timeOutTimer;
    MMTimer *_m_onePersonCheckFroMinimizeTimer;
    WXCGroupMember *_m_selfMember;
    WCUIAlertView *_currentAlertView;
    unsigned long long _m_connect_startTime;
}

- (void).cxx_destruct;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (void)adjustViewAndNavBarRect;
- (void)callAcceptDelegate;
- (void)callHangupDelegate;
- (void)callReport;
- (void)changeToJoinACallLayout;
- (void)changeToReceiveACallLayout;
- (void)changeToTalkingLayout;
- (void)changeVideoModeBaseOnNetwork;
- (void)checkIfOnePerson;
- (void)checkTalkMember;
- (void)clearBlurMode;
- (void)closeVideoSendAndRecv;
- (void)connectReportFailed;
- (void)connectReportSuccess;
@property(nonatomic) __weak WCUIAlertView *currentAlertView; // @synthesize currentAlertView=_currentAlertView;
- (void)dealloc;
- (void)delayCheckUnReachable;
- (void)didReceiveMemoryWarning;
- (void)durationReport;
- (void)functionReport;
- (void)getMemberQualityInfoList;
- (id)groupInfo;
- (id)init;
- (void)initBackgroundView;
- (void)initBeforeTalkingView;
- (void)initCheckQualityTimer;
- (void)initCheckTalkingTimer;
- (void)initContactView;
- (void)initOnePersonCheckForMinimizeTimer;
- (void)initSecondTalkingView;
- (void)initTalkingView;
- (void)initTimeOutTimer;
- (void)initUpdateMessageTimer;
- (_Bool)isIgnoreSpeakerButtonDevice;
- (_Bool)isMemberReachLimit;
- (_Bool)isTheSameWithGroup:(id)arg1;
- (_Bool)isUsingEarDevice;
@property(nonatomic) unsigned int m_addMemberClickCount; // @synthesize m_addMemberClickCount=_m_addMemberClickCount;
@property(nonatomic) unsigned int m_audio_duration; // @synthesize m_audio_duration=_m_audio_duration;
@property(retain, nonatomic) UIImageView *m_backgroundView; // @synthesize m_backgroundView=_m_backgroundView;
@property(retain, nonatomic) MultiTalkBeforeTalkingOperateView *m_beforeTalkingView; // @synthesize m_beforeTalkingView=_m_beforeTalkingView;
@property(retain, nonatomic) MMTimer *m_checkQualityTimer; // @synthesize m_checkQualityTimer=_m_checkQualityTimer;
@property(retain, nonatomic) MMTimer *m_checkTalkingTimer; // @synthesize m_checkTalkingTimer=_m_checkTalkingTimer;
@property(nonatomic) _Bool m_connect_beCanceled; // @synthesize m_connect_beCanceled=_m_connect_beCanceled;
@property(nonatomic) _Bool m_connect_hangup; // @synthesize m_connect_hangup=_m_connect_hangup;
@property(nonatomic) _Bool m_connect_interruptByCall; // @synthesize m_connect_interruptByCall=_m_connect_interruptByCall;
@property(nonatomic) _Bool m_connect_netWorkError; // @synthesize m_connect_netWorkError=_m_connect_netWorkError;
@property(nonatomic) _Bool m_connect_onePersonLeft; // @synthesize m_connect_onePersonLeft=_m_connect_onePersonLeft;
@property(nonatomic) unsigned long long m_connect_startTime; // @synthesize m_connect_startTime=_m_connect_startTime;
@property(nonatomic) _Bool m_connect_timeOut; // @synthesize m_connect_timeOut=_m_connect_timeOut;
@property(retain, nonatomic) NSArray *m_contactArrayOther; // @synthesize m_contactArrayOther=_m_contactArrayOther;
@property(retain, nonatomic) CContact *m_contactInviteMe; // @synthesize m_contactInviteMe=_m_contactInviteMe;
@property(retain, nonatomic) MultiTalkContactsCollectionView *m_contactView; // @synthesize m_contactView=_m_contactView;
@property(retain, nonatomic) NSArray *m_contactWaitList; // @synthesize m_contactWaitList=_m_contactWaitList;
@property(nonatomic) _Bool m_deviceLaunchSuccess; // @synthesize m_deviceLaunchSuccess=_m_deviceLaunchSuccess;
@property(retain, nonatomic) WXCMultiTalkGroup *m_group; // @synthesize m_group=_m_group;
@property(nonatomic) _Bool m_hasBlurBackground; // @synthesize m_hasBlurBackground=_m_hasBlurBackground;
@property(nonatomic) _Bool m_hasClickAcceptButton; // @synthesize m_hasClickAcceptButton=_m_hasClickAcceptButton;
@property(nonatomic) _Bool m_hasClickHangupButton; // @synthesize m_hasClickHangupButton=_m_hasClickHangupButton;
@property(nonatomic) _Bool m_hasCreateOk; // @synthesize m_hasCreateOk=_m_hasCreateOk;
@property(nonatomic) _Bool m_hasStartTimerView; // @synthesize m_hasStartTimerView=_m_hasStartTimerView;
@property(nonatomic) _Bool m_isCaller; // @synthesize m_isCaller=_m_isCaller;
@property(nonatomic) _Bool m_isMinimizeMode; // @synthesize m_isMinimizeMode=_m_isMinimizeMode;
@property(nonatomic) int m_layoutType; // @synthesize m_layoutType=_m_layoutType;
@property(nonatomic) __weak id <MultiTalkMainViewControllerDelegate> m_mainWindowDelegate; // @synthesize m_mainWindowDelegate=_m_mainWindowDelegate;
@property(retain, nonatomic) NSArray *m_memberDisplayBigHeadList; // @synthesize m_memberDisplayBigHeadList=_m_memberDisplayBigHeadList;
@property(retain, nonatomic) NSArray *m_memberTalkArray; // @synthesize m_memberTalkArray=_m_memberTalkArray;
@property(retain, nonatomic) NSDictionary *m_memberTalkingDic; // @synthesize m_memberTalkingDic=_m_memberTalkingDic;
@property(retain, nonatomic) NSArray *m_memberWaitList; // @synthesize m_memberWaitList=_m_memberWaitList;
@property(nonatomic) unsigned int m_messageId; // @synthesize m_messageId=_m_messageId;
@property(nonatomic) unsigned int m_minimizeClickCount; // @synthesize m_minimizeClickCount=_m_minimizeClickCount;
@property(nonatomic) unsigned int m_muteClickCount; // @synthesize m_muteClickCount=_m_muteClickCount;
@property(nonatomic) int m_networkStatus; // @synthesize m_networkStatus=_m_networkStatus;
@property(retain, nonatomic) MMTimer *m_onePersonCheckFroMinimizeTimer; // @synthesize m_onePersonCheckFroMinimizeTimer=_m_onePersonCheckFroMinimizeTimer;
@property(retain, nonatomic) MultitalkSecondOperateView *m_secondTalkingView; // @synthesize m_secondTalkingView=_m_secondTalkingView;
@property(retain, nonatomic) WXCGroupMember *m_selfMember; // @synthesize m_selfMember=_m_selfMember;
@property(nonatomic) unsigned int m_speakerClickCount; // @synthesize m_speakerClickCount=_m_speakerClickCount;
@property(nonatomic) _Bool m_talkReady; // @synthesize m_talkReady=_m_talkReady;
@property(retain, nonatomic) MultiTalkTalkingOperateView *m_talkingView; // @synthesize m_talkingView=_m_talkingView;
@property(retain, nonatomic) MMTimer *m_timeOutTimer; // @synthesize m_timeOutTimer=_m_timeOutTimer;
@property(retain, nonatomic) MMTimer *m_updateMessageTimer; // @synthesize m_updateMessageTimer=_m_updateMessageTimer;
@property(nonatomic) unsigned int m_videoClickCount; // @synthesize m_videoClickCount=_m_videoClickCount;
@property(retain, nonatomic) NSDictionary *m_videoMemberInfo; // @synthesize m_videoMemberInfo=_m_videoMemberInfo;
@property(nonatomic) unsigned int m_video_start_time; // @synthesize m_video_start_time=_m_video_start_time;
- (void)onAddMultiTalkMemberResult:(_Bool)arg1 groupInfo:(id)arg2;
- (void)onAlertError;
- (void)onCancelCreateMultiTalk:(id)arg1;
- (void)onClickAddMemberButton;
- (void)onCreateMultiTalk:(id)arg1;
- (void)onEnterMultiTalk:(id)arg1;
- (void)onErr:(int)arg1;
- (void)onInviteMultiTalk:(id)arg1;
- (void)onMemberChange:(id)arg1;
- (void)onMultiSelectContactsDidDismiss;
- (void)onMultiSelectContactsDidFinishSelect:(id)arg1;
- (void)onMultiSelectContactsEndWithReportSelectedCount:(unsigned int)arg1 hasReachLimit:(_Bool)arg2 clickCount:(unsigned int)arg3;
- (void)onMultiTalkAudioDeviceUnPlugin;
- (id)onMultiTalkBeforeTalkingOperateViewContactThatInviteMe;
- (void)onMultiTalkBeforeTalkingOperateViewEnterCall;
- (void)onMultiTalkBeforeTalkingOperateViewHanup;
- (void)onMultiTalkContactsCollectionViewAnimateToOnePerson;
- (_Bool)onMultiTalkContactsCollectionViewIsVideoUserName:(id)arg1;
- (id)onMultiTalkContactsCollectionViewMemberAtIndex:(unsigned long long)arg1;
- (id)onMultiTalkContactsCollectionViewMemberBeforeTalkingAtIndex:(unsigned long long)arg1;
- (unsigned long long)onMultiTalkContactsCollectionViewMemberCountBeforeTalking;
- (id)onMultiTalkContactsCollectionViewMemberThatInviteMeBeforeTalking;
- (id)onMultiTalkContactsCollectionViewRequestRenderForUsername:(id)arg1;
- (void)onMultiTalkContactsCollectionViewTapToFlipCamera;
- (void)onMultiTalkContactsCollectionViewTapToInviteUser:(id)arg1;
- (void)onMultiTalkContactsCollectionViewTapToPreviewWithUserName:(id)arg1;
- (unsigned long long)onMultiTalkContactsCollectionViewTotalMemberCount;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMultiTalkMainWindowCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowExtendAnimationDidEnd;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowQuitAnimationDidEnd;
- (void)onMultiTalkMainWindowQuitAnimationWillStart;
- (struct CGRect)onMultiTalkMainWindowRequestMinimizeFrame;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onMultiTalkMgrChangeToHighWWan;
- (void)onMultiTalkMgrChangeToLowNetwork;
- (void)onMultiTalkMgrChangeToUnReachable;
- (void)onMultiTalkMgrChangeToWiFi;
- (void)onMultiTalkMgrChangeVideoFailed;
- (void)onMultiTalkMgrLowformanceDevice;
- (void)onMultiTalkMgrNetworkChange;
- (void)onMultiTalkMgrVideoDeviceAuthFailed;
- (void)onMultiTalkMgrVideoSessionStartComplete;
- (void)onMultiTalkMgrVideoSessionStopComplete;
- (void)onMultiTalkReady;
- (void)onMultiTalkRedirectOk;
- (void)onMultiTalkSysInterrupt;
- (void)onMultiTalkSysInterruptEnd;
- (void)onMultiTalkTalkingOperateViewAddMember;
- (void)onMultiTalkTalkingOperateViewHangup;
- (void)onMultiTalkTalkingOperateViewMinimizeButtonClick;
- (void)onMultiTalkTalkingOperateViewMuteOff;
- (void)onMultiTalkTalkingOperateViewMuteOn;
- (void)onMultiTalkTalkingOperateViewSpeakerOff;
- (void)onMultiTalkTalkingOperateViewSpeakerOn;
- (void)onMultiTalkTalkingOperateViewVideoClose;
- (void)onMultiTalkTalkingOperateViewVideoOpen;
- (void)onMultitalkSecondOperateViewAddMember;
- (void)onMultitalkSecondOperateViewMinimizeButtonClick;
- (void)onMuteStateChange:(_Bool)arg1;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)onReceiveMissMultiTalk:(id)arg1;
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extDic:(id)arg2;
- (double)onRetriveMemberCellBottom;
- (void)onSingleSelectContactDidFinishSelect:(id)arg1;
- (void)onSpeakerStateChange:(_Bool)arg1;
- (void)onePersonCheckForMinimize;
- (void)realCallHangupDelegate;
- (void)recoverVideoOn:(_Bool)arg1;
- (void)showBlurMode;
- (void)timeOutLogic;
- (void)tryStartTimerView;
- (void)updateBackgroundViewBlur;
- (void)updateContactOtherList;
- (void)updateContactWaitList;
- (void)updateGroupInfo:(id)arg1;
- (void)updateMemberDisplayBigHeadList;
- (void)updateMemberTalkingList;
- (void)updateMemberWaitList;
- (void)updateMessageDuration;
- (void)updateMessageId:(unsigned int)arg1;
- (void)updateVideoMemberInfo;
- (_Bool)useTransparentNavibar;
- (void)videoDurationReport;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)whenGoingToResign;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

