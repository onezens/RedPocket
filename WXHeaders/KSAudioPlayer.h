//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KSAudioPlayerProtocol.h"

@class KSAudioStreamPlayBackItem, KSNewAudioPlayerManager, KSSongInfo, NSObject<OS_dispatch_queue>, NSString;

@interface KSAudioPlayer : NSObject <KSAudioPlayerProtocol>
{
    id <KSAudioPlayerUserDefineProtocol> _userProtocol;
    NSObject<OS_dispatch_queue> *_queue;
    KSSongInfo *_curSong;
    id <KSAudioPlayerDelegate> _delegate;
    _Bool _manualProcessInterrup;
    _Bool _pauseOnHeadPhoneOut;
    _Bool _seekToPlayAuto;
    KSNewAudioPlayerManager *_audioManager;
    KSAudioStreamPlayBackItem *_playerItem;
}

- (void).cxx_destruct;
@property(nonatomic) KSNewAudioPlayerManager *audioManager; // @synthesize audioManager=_audioManager;
- (void)audioPlayer:(id)arg1 dataBuffering:(double)arg2;
- (void)audioPlayer:(id)arg1 status:(unsigned long long)arg2 params:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_queue;
- (_Bool)bAudioSessionActive;
@property(readonly, nonatomic) double cacheProgress;
- (id)createDataProvider:(id)arg1;
@property(readonly, nonatomic) KSSongInfo *curSong;
@property(readonly, nonatomic) double curTime;
- (id)dataProviderDetail;
- (void)dealloc;
@property(nonatomic) __weak id <KSAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double duration;
- (id)errDetail;
- (unsigned long long)errType;
- (double)firstBufTime;
- (id)getAudioProcessor:(id)arg1;
- (id)init;
- (id)initWithUserProtocol:(id)arg1 queue:(id)arg2;
@property(nonatomic) _Bool manualProcessInterrup; // @synthesize manualProcessInterrup=_manualProcessInterrup;
- (void)pause;
- (_Bool)pauseInner:(_Bool)arg1;
@property(nonatomic) _Bool pauseOnHeadPhoneOut; // @synthesize pauseOnHeadPhoneOut=_pauseOnHeadPhoneOut;
- (void)pausePlayAndDownloadData;
- (_Bool)pauseSync;
- (_Bool)play:(id)arg1;
- (_Bool)play:(id)arg1 seekTime:(double)arg2;
@property(readonly, nonatomic) double playTimeWithNoPause;
@property(retain) KSAudioStreamPlayBackItem *playerItem; // @synthesize playerItem=_playerItem;
- (void)resume;
- (_Bool)resumeInner:(_Bool)arg1;
- (_Bool)resumeSync;
@property(readonly, nonatomic) unsigned int secondCacheCnt;
- (void)seek:(double)arg1;
- (_Bool)seekSync:(double)arg1;
@property(nonatomic) _Bool seekToPlayAuto; // @synthesize seekToPlayAuto=_seekToPlayAuto;
@property(readonly, nonatomic) unsigned long long status;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

