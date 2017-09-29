//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "AUAudioDataSource.h"
#import "IAUAudioDeviceExt.h"
#import "INetworkStatusMgrExt.h"
#import "IPSTNSyncExt.h"
#import "ISysCallCheckExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class AUAudioDevice, MMTimer, NSRecursiveLock, NSString, PSTNComponent, PSTNDialData, VOIPKernelLog;

@interface PSTNMgr : MMService <AUAudioDataSource, IAUAudioDeviceExt, PBMessageObserverDelegate, ISysCallCheckExt, IPSTNSyncExt, INetworkStatusMgrExt, MMService>
{
    int mStatus;
    _Bool mIsInterrupted;
    _Bool mIsCanConnect;
    _Bool mIsConnected;
    _Bool mIsCanTalk;
    _Bool mIsTalked;
    _Bool mIsEngineStarted;
    _Bool mIsCanSendData;
    _Bool mIsAudioStarted;
    _Bool mIsRecordStarted;
    _Bool mIsPreConnectFail;
    _Bool mIsPSTNAnswer;
    _Bool mIsPSTNAccepted;
    unsigned int mLastNetworkStatus;
    int mAudioCodecType;
    int mShutDownStatus;
    _Bool mIsSpeaker;
    VOIPKernelLog *mPstnKernelLog;
    int mErrCode;
    int mCntTryStartAudioDev;
    unsigned int mInviteId;
    PSTNDialData *mDialData;
    PSTNComponent *mComponent;
    AUAudioDevice *mAudioDevice;
    NSRecursiveLock *mAudioEncLock;
    NSRecursiveLock *mAudioDecLock;
    NSRecursiveLock *mStartAudioLock;
    NSRecursiveLock *mStartRecordLock;
    NSRecursiveLock *inputVideoRenderLock;
    MMTimer *mPSTNHeartbeatTimer;
    MMTimer *mPSTNDialStatusTimer;
    unsigned long long mLastDisconnectSysCallTime;
}

- (void).cxx_destruct;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (void)BeRejected;
- (void)BeginInterruption;
- (void)CancelCall;
- (void)ConnectFail:(id)arg1;
- (void)DataNotify:(char *)arg1 len:(int)arg2;
- (void)DataNotify_Arq:(char *)arg1 len:(int)arg2 type:(unsigned char)arg3;
- (void)DataNotify_pp:(char *)arg1 len:(int)arg2 param:(short)arg3;
- (void)DialStatusTimerCheck;
- (void)EndInterruption;
- (void)EventNotify:(long long)arg1 param:(int)arg2 type:(int)arg3;
- (int)GetCPUCapacity;
- (unsigned int)GetNetType;
- (void)HandlePSTNCancelInviteResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNCheckNumberResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNHeartbeatResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNInviteResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNRedirectResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNShutdownResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNStatReportResp:(id)arg1 Event:(unsigned int)arg2;
- (void)Hangup;
- (void)HeartbeatTimerCheck;
- (void)InitAll;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)NetworkErr:(id)arg1;
- (void)OnGotDTMFPayloadType:(unsigned int)arg1;
- (void)OnGotRemoteStatus:(unsigned int)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(id)arg4 ErrTitle:(id)arg5 DataFlag:(unsigned int)arg6;
- (void)OnSyncError:(int)arg1;
- (void)OnSysCallState:(int)arg1;
- (int)OnTransportChannelCmd:(void *)arg1 len:(int)arg2;
- (int)OnTransportChannelData:(int)arg1 pData:(void *)arg2 len:(int)arg3;
- (int)OnTransportChannelEvent:(unsigned short)arg1 ErrNo:(int)arg2;
- (int)OnTransportChannelRttAndLR:(unsigned int)arg1 lostRate:(unsigned int)arg2 type:(unsigned int)arg3;
- (void)PSTNCall:(id)arg1 phoneNum:(id)arg2 withCallType:(int)arg3 DialScene:(unsigned int)arg4 CountryCodeFrom:(unsigned int)arg5;
- (void)PressButton:(int)arg1;
- (void)PstnCheckCountryCode:(id)arg1;
- (void)SendCancelInviteRequest;
- (void)SendCheckNumberRequest:(id)arg1;
- (void)SendHeartbeatRequest;
- (void)SendInviteRequestBy:(id)arg1 phoneNum:(id)arg2 withCallType:(int)arg3 DialScene:(unsigned int)arg4 CountryCodeFrom:(unsigned int)arg5;
- (void)SendRedirectRequest;
- (void)SendShutdownRequest;
- (void)SendStatReportRequest;
- (void)SetAudioCodecType:(int)arg1;
- (void)SetCountryCode:(id)arg1;
- (void)SetIsCanConnect:(_Bool)arg1;
- (void)SetMVEInfo:(CDStruct_33d8b17a *)arg1;
- (void)SetMicroPhoneMute:(_Bool)arg1;
- (void)SetReportData:(id *)arg1 channelReport:(id *)arg2 engineReport:(id *)arg3;
- (int)SetServerAddr;
- (void)SetSpeakerPhone:(_Bool)arg1;
- (void)StartAudioData;
- (void)StartAudioDataInNewThread;
- (void)StartConnect;
- (void)StartRecordAndPlayAudioForVoip;
- (void)StartSession;
- (void)StartTalk;
- (void)StopConnect;
- (void)StopSession;
- (void)StopSessionWithProtocolErr:(int)arg1;
- (void)StopTalk;
- (void)TalkBroken:(id)arg1;
- (void)UnInitAll;
- (void)audioDeviceFarawayEar:(id)arg1;
- (void)audioDeviceNearEar:(id)arg1;
- (void)audioDevicePluginHeadset:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceUnPluginHeadset:(id)arg1;
- (void)dealloc;
- (unsigned int)getIsConnected;
- (_Bool)getIsTalked;
- (int)getNetSpeed;
- (int)getRoomId;
- (long long)getRoomKey;
- (void)handleEnterBackground;
- (void)handleEnterForeground;
- (id)init;
@property(retain, nonatomic) NSRecursiveLock *inputVideoRenderLock; // @synthesize inputVideoRenderLock;
- (void)interruptWcoCall;
@property(retain, nonatomic) NSRecursiveLock *mAudioDecLock; // @synthesize mAudioDecLock;
@property(retain, nonatomic) AUAudioDevice *mAudioDevice; // @synthesize mAudioDevice;
@property(retain, nonatomic) NSRecursiveLock *mAudioEncLock; // @synthesize mAudioEncLock;
@property(nonatomic) int mCntTryStartAudioDev; // @synthesize mCntTryStartAudioDev;
@property(retain, nonatomic) PSTNComponent *mComponent; // @synthesize mComponent;
@property(retain, nonatomic) PSTNDialData *mDialData; // @synthesize mDialData;
@property(nonatomic) int mErrCode; // @synthesize mErrCode;
@property(nonatomic) unsigned int mInviteId; // @synthesize mInviteId;
@property(nonatomic) unsigned long long mLastDisconnectSysCallTime; // @synthesize mLastDisconnectSysCallTime;
@property(retain, nonatomic) MMTimer *mPSTNDialStatusTimer; // @synthesize mPSTNDialStatusTimer;
@property(retain, nonatomic) MMTimer *mPSTNHeartbeatTimer; // @synthesize mPSTNHeartbeatTimer;
@property(retain, nonatomic) NSRecursiveLock *mStartAudioLock; // @synthesize mStartAudioLock;
@property(retain, nonatomic) NSRecursiveLock *mStartRecordLock; // @synthesize mStartRecordLock;
@property(nonatomic) int mStatus; // @synthesize mStatus;
- (void)onAcceptBydata;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)restartAudioDevicePSTN;
- (void)tryStartConnect;
- (void)tryStartTalk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

