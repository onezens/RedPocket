//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "AVVideoDataSource.h"
#import "AVVideoDeviceDelegate.h"
#import "AVVideoDeviceSessionDelegate.h"
#import "AVVideoDeviceSetupSessionDelegate.h"
#import "CNetworkStatusExt.h"
#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "IMsgExt.h"
#import "ISysCallCheckExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "MonoServiceMsgDelegate.h"
#import "MonoServiceMsgLogicDelegate.h"
#import "MultiTalkCgiDelegate.h"
#import "MultiTalkMainViewControllerDelegate.h"
#import "MultitalkMinimizeWindowDelegate.h"
#import "VoIPPushKitExt.h"
#import "WXCAssistHelperDelegate.h"
#import "WXCMultiTalkApiDelegate.h"

@class AVAudioPlayer, AVVideoDevice, MMTimer, MultiTalkWindow, MultitalkMinimizeWindow, NSMutableArray, NSMutableDictionary, NSString, SafeMutableDictionary;

@interface MultiTalkMgr : MMService <MMKernelExt, WXCMultiTalkApiDelegate, WXCAssistHelperDelegate, MultiTalkCgiDelegate, IMsgExt, MultiTalkMainViewControllerDelegate, MultitalkMinimizeWindowDelegate, AVVideoDeviceSessionDelegate, AVVideoDeviceDelegate, AVVideoDataSource, AVVideoDeviceSetupSessionDelegate, CNetworkStatusExt, ISysCallCheckExt, MonoServiceMsgLogicDelegate, MonoServiceMsgDelegate, VoIPPushKitExt, IGroupMgrExt, IContactMgrExt, MMService>
{
    _Bool _m_videoDeviceRunning;
    _Bool _m_multiTalkReady;
    _Bool _m_isCalling;
    _Bool _m_blockDisplayVideo;
    _Bool _m_useLowQualityVideo;
    unsigned int _currentMessageId;
    unsigned int _m_uploadFpsCount;
    unsigned int _m_nextCanJoinTalkTime;
    unsigned int _m_nextCanCreateTalkTime;
    NSMutableArray *m_cgiList;
    MultiTalkWindow *m_mainWindow;
    MultitalkMinimizeWindow *m_statusWindow;
    SafeMutableDictionary *_m_renderDic;
    SafeMutableDictionary *_m_videoInfoDic;
    AVVideoDevice *_m_videoDevice;
    AVAudioPlayer *_m_audioPlayer;
    MMTimer *_m_uploadFpsTimer;
    NSMutableDictionary *_m_bannerInfoList;
    NSString *_m_talkingGroupId;
    NSMutableDictionary *_m_lastBannerTsList;
    NSMutableDictionary *_m_invitedFlagList;
}

- (void).cxx_destruct;
- (void)BeginInterruption;
- (void)DidCapturedImage:(id)arg1;
- (void)EndInterruption;
- (int)GetFrmType;
- (void)InputIsAvailableChanged:(_Bool)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnQuitGroup:(id)arg1;
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (int)VideoDevPutData:(int)arg1 frmData:(char *)arg2 imageWidth:(unsigned int)arg3 imageHeight:(unsigned int)arg4;
- (void)alertHangup;
- (_Bool)canStartANewCall;
- (_Bool)checkHighWWanWithNotify:(_Bool)arg1;
- (_Bool)checkLowNetworkWithNotify:(_Bool)arg1;
- (void)checkLowPerformanceWithNotify;
- (_Bool)checkUnReachableWithNotify:(_Bool)arg1;
- (_Bool)checkWiFiWithNotify:(_Bool)arg1;
- (void)clearMultiTalkStatus;
- (void)clearVideoDevice;
- (void)createMultiTalkWithContacts:(id)arg1 withChatroomUsername:(id)arg2;
@property(nonatomic) unsigned int currentMessageId; // @synthesize currentMessageId=_currentMessageId;
- (void)dealloc;
- (_Bool)deleteMultiTalkBannerItemWithGroupId:(id)arg1;
- (id)getCurrentTalkingGroupId;
- (id)getMemberQualityInfoList:(id)arg1;
- (id)getMultiTalkBannerItemWithGroupId:(id)arg1;
- (id)getMultiTalkUserNameListWithPrivacy:(id)arg1;
- (id)getRenderForMemberId:(unsigned int)arg1;
- (id)getRenderForUsername:(id)arg1;
- (id)getTalkIngMember:(id)arg1;
- (void)hideMinimizeWindow;
- (id)init;
- (_Bool)insertMultiTalkBannerItem:(id)arg1;
- (int)inviteUserType:(id)arg1;
- (_Bool)isLowNetwork;
- (_Bool)isLowPerformanceDevice;
- (_Bool)isMonoServiceCheckingServer;
- (_Bool)isMonoServiceUIExist;
- (_Bool)isMonoServiceUIWorking;
- (_Bool)isMultiTalkActive;
- (_Bool)isMultiTalkCalling;
- (_Bool)isMultiTalkMinimized;
- (_Bool)isMultiTalkValidWithWxGroupId:(id)arg1;
- (_Bool)isPhoneCalling;
- (void)joinMultiTalkWithGroup:(id)arg1 roomId:(unsigned int)arg2 roomKey:(unsigned long long)arg3;
- (void)joinMultiTalkWithGroupUserName:(id)arg1;
- (void)loadMultiTalkBannerInfoList;
@property(retain, nonatomic) AVAudioPlayer *m_audioPlayer; // @synthesize m_audioPlayer=_m_audioPlayer;
@property(retain, nonatomic) NSMutableDictionary *m_bannerInfoList; // @synthesize m_bannerInfoList=_m_bannerInfoList;
@property(nonatomic) _Bool m_blockDisplayVideo; // @synthesize m_blockDisplayVideo=_m_blockDisplayVideo;
@property(retain, nonatomic) NSMutableArray *m_cgiList; // @synthesize m_cgiList;
@property(retain, nonatomic) NSMutableDictionary *m_invitedFlagList; // @synthesize m_invitedFlagList=_m_invitedFlagList;
@property(nonatomic) _Bool m_isCalling; // @synthesize m_isCalling=_m_isCalling;
@property(retain, nonatomic) NSMutableDictionary *m_lastBannerTsList; // @synthesize m_lastBannerTsList=_m_lastBannerTsList;
@property(retain, nonatomic) MultiTalkWindow *m_mainWindow; // @synthesize m_mainWindow;
@property(nonatomic) _Bool m_multiTalkReady; // @synthesize m_multiTalkReady=_m_multiTalkReady;
@property(nonatomic) unsigned int m_nextCanCreateTalkTime; // @synthesize m_nextCanCreateTalkTime=_m_nextCanCreateTalkTime;
@property(nonatomic) unsigned int m_nextCanJoinTalkTime; // @synthesize m_nextCanJoinTalkTime=_m_nextCanJoinTalkTime;
@property(retain, nonatomic) SafeMutableDictionary *m_renderDic; // @synthesize m_renderDic=_m_renderDic;
@property(retain, nonatomic) MultitalkMinimizeWindow *m_statusWindow; // @synthesize m_statusWindow;
@property(retain, nonatomic) NSString *m_talkingGroupId; // @synthesize m_talkingGroupId=_m_talkingGroupId;
@property(nonatomic) unsigned int m_uploadFpsCount; // @synthesize m_uploadFpsCount=_m_uploadFpsCount;
@property(retain, nonatomic) MMTimer *m_uploadFpsTimer; // @synthesize m_uploadFpsTimer=_m_uploadFpsTimer;
@property(nonatomic) _Bool m_useLowQualityVideo; // @synthesize m_useLowQualityVideo=_m_useLowQualityVideo;
@property(retain, nonatomic) AVVideoDevice *m_videoDevice; // @synthesize m_videoDevice=_m_videoDevice;
@property(nonatomic) _Bool m_videoDeviceRunning; // @synthesize m_videoDeviceRunning=_m_videoDeviceRunning;
@property(retain, nonatomic) SafeMutableDictionary *m_videoInfoDic; // @synthesize m_videoInfoDic=_m_videoInfoDic;
- (const char *)notFriendNotify;
- (const char *)notifyBannerString;
- (const char *)notifyDataString;
- (void)onAddMultiTalkMemberResult:(_Bool)arg1 groupInfo:(id)arg2;
- (void)onAuthOK;
- (void)onCancelCreateMultiTalk:(id)arg1;
- (void)onCreateMultiTalk:(id)arg1;
- (void)onEnterMultiTalk:(id)arg1;
- (void)onErr:(int)arg1 groupUserName:(id)arg2;
- (void)onInviteMultiTalk:(id)arg1;
- (void)onMemberChange:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (_Bool)onMonoServiceMsgCancelWithMsg:(id)arg1;
- (_Bool)onMonoServiceMsgRejectWithMsg:(id)arg1;
- (void)onMonoServiceMsgStartWithMsg:(id)arg1;
- (void)onMultiTalkAudioDevicePlugin;
- (void)onMultiTalkAudioDeviceUnPlugin;
- (void)onMultiTalkBannerChange:(id)arg1 WxGroupId:(id)arg2;
- (void)onMultiTalkCreateLimit:(unsigned int)arg1;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMultiTalkJoinLimit:(unsigned int)arg1;
- (void)onMultiTalkMainViewControllerAcceptWithGroup:(id)arg1;
- (void)onMultiTalkMainViewControllerAddNewMemberArray:(id)arg1 withGroup:(id)arg2;
- (void)onMultiTalkMainViewControllerCancelJoinWithGroup:(id)arg1;
- (void)onMultiTalkMainViewControllerClickedCollapseButton;
- (void)onMultiTalkMainViewControllerCloseVideoSendAndRecv;
- (void)onMultiTalkMainViewControllerCollapseAnimationDidEnd;
- (void)onMultiTalkMainViewControllerCollapseAnimationWillStart;
- (void)onMultiTalkMainViewControllerExtendFromCollapseAnimationDidEnd;
- (void)onMultiTalkMainViewControllerExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainViewControllerFlipCamera;
- (void)onMultiTalkMainViewControllerHangupWithGroup:(id)arg1;
- (void)onMultiTalkMainViewControllerHoldMultiTalkAudio;
- (void)onMultiTalkMainViewControllerMicButtonSeclect:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerQuitAnimationDidEnd;
- (void)onMultiTalkMainViewControllerQuitAnimationWillStart;
- (void)onMultiTalkMainViewControllerReceiveCancelCall:(id)arg1;
- (void)onMultiTalkMainViewControllerReceiveTimeOutWithGroup:(id)arg1;
- (void)onMultiTalkMainViewControllerRecoverVideoOn:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerRejectWithGroup:(id)arg1;
- (_Bool)onMultiTalkMainViewControllerRequestLocalVideoDeviceStatus;
- (struct CGRect)onMultiTalkMainViewControllerRequestMinimizeFrame;
- (void)onMultiTalkMainViewControllerResumeMultiTalkAudio;
- (_Bool)onMultiTalkMainViewControllerShouldBlockReceiveVideo;
- (void)onMultiTalkMainViewControllerSpeakerButtonSeclect:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerUpdateMessageWith:(id)arg1 duration:(unsigned int)arg2 messageId:(unsigned int)arg3;
- (void)onMultiTalkMainViewControllerVideoSelected:(_Bool)arg1;
- (void)onMultiTalkReady;
- (void)onMultiTalkRedirectOk;
- (void)onMultiTalkTipsViewResumeMainWindowFromBanner;
- (void)onMultitalkMinimizeWindowClicked;
- (void)onMuteStateChange:(_Bool)arg1;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)onPreQuit;
- (void)onReawakeFriendOrSendPokerToFriendResult:(_Bool)arg1;
- (void)onReceiveMissMultiTalk:(id)arg1;
- (void)onReceiveMutilTalkPokerMsg;
- (void)onReceiveReawakeOrPokerMsg:(id)arg1 extData:(id)arg2;
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extArray:(id)arg2;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)onRespActiveGroupBriefInfoList:(id)arg1 isSuccess:(_Bool)arg2;
- (void)onRespBuffer:(id)arg1 functionId:(unsigned int)arg2 seq:(unsigned int)arg3 retCode:(int)arg4;
- (void)onServiceInit;
- (void)onSimCardNetTypeChange;
- (void)onSpeakerStateChange:(_Bool)arg1;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(_Bool)arg5;
- (void)onVideoSessionChangeCameraComplete;
- (void)onVideoSessionSetupComplete;
- (void)onVideoSessionStartComplete;
- (void)onVideoSessionStopComplete;
- (void)playRingSoundWithVibration:(_Bool)arg1 isCaller:(_Bool)arg2;
- (void)playWhenEnterForeground;
- (void)quitMultiTalkAndClearBannerInfoWithGroupName:(id)arg1;
- (void)rejectCall:(id)arg1;
- (void)resetVideoDevice;
- (void)sendMultiTalkRequset:(int)arg1 reqData:(id)arg2 cgiType:(int)arg3;
- (void)showMinimizeWindow;
- (void)showMultiTalkBanner:(_Bool)arg1 group:(id)arg2 roomId:(unsigned int)arg3 roomKey:(unsigned long long)arg4;
- (void)startCgiWithFunctionId:(unsigned int)arg1 buffer:(id)arg2 seq:(unsigned int)arg3;
- (void)startVideoDevice;
- (void)stopRingSound;
- (void)stopVideoDevice;
- (id)subTypeString;
- (void)updateNetworkTacticsWithNotify:(_Bool)arg1;
- (void)uploadFpsCountCheck;
- (void)videoDevice:(id)arg1 didFailWithError:(id)arg2;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)videoDeviceCameraFront:(id)arg1;
- (void)videoDeviceSessionBegan:(id)arg1;
- (void)videoDeviceSessionFinished:(id)arg1;
- (void)writeLog:(int)arg1 tag:(id)arg2 content:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

