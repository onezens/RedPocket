//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MainWindow.h"

#import "IClearDataMgrExt.h"

@class NSString;

@interface iConsoleWindow : MainWindow <IClearDataMgrExt>
{
}

+ (void)initialize;
- (void)becomeKeyWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)registerExtension;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)setRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

