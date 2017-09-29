//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRecursiveLock;

@interface SimpleAudioState : NSObject
{
    _Bool _m_isPlaying;
    _Bool _m_running;
    unsigned int _m_bufferByteSize;
    unsigned int _m_numPacketsToRead;
    struct AudioQueueBuffer **m_buffers;
    struct AudioStreamBasicDescription *m_dataFormat;
    struct OpaqueAudioQueue *_m_queue;
    id <SimpleAudioBufferDelegate> _m_delegate;
    NSRecursiveLock *_m_dataLock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
@property(nonatomic) unsigned int m_bufferByteSize; // @synthesize m_bufferByteSize=_m_bufferByteSize;
@property(nonatomic) struct AudioQueueBuffer **m_buffers; // @synthesize m_buffers;
@property(nonatomic) struct AudioStreamBasicDescription *m_dataFormat; // @synthesize m_dataFormat;
@property(retain, nonatomic) NSRecursiveLock *m_dataLock; // @synthesize m_dataLock=_m_dataLock;
@property(nonatomic) __weak id <SimpleAudioBufferDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_isPlaying; // @synthesize m_isPlaying=_m_isPlaying;
@property(nonatomic) unsigned int m_numPacketsToRead; // @synthesize m_numPacketsToRead=_m_numPacketsToRead;
@property(nonatomic) struct OpaqueAudioQueue *m_queue; // @synthesize m_queue=_m_queue;
@property(nonatomic) _Bool m_running; // @synthesize m_running=_m_running;

@end

