//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VideoStreamPlayerView.h"

@class WCMediaItem;

@interface WCVideoStreamPlayerView : VideoStreamPlayerView
{
    WCMediaItem *m_oMediaItem;
}

- (void).cxx_destruct;
- (void)OnSnsVideoChanged;
- (id)getFormalVideoPath;
- (id)initWithFrame:(struct CGRect)arg1 MediaItem:(id)arg2;
- (void)updateVideoArgs;

@end

