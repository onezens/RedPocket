//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MonoServiceLogicExt.h"

@class NSString;

@interface MMOOMCrashReport : NSObject <MonoServiceLogicExt>
{
}

+ (id)appModificationDate;
+ (void)checkAndReport;
+ (void)checkRebootType;
+ (void)enterBackground;
+ (void)enterForeground;
+ (unsigned long long)getSystemLaunchTimeStamp;
+ (void)initialize;
+ (_Bool)isAppChange;
+ (void)isForegroundMainThreadBlock:(_Bool)arg1;
+ (_Bool)isLastTimeFOOM;
+ (_Bool)isOSChange;
+ (_Bool)isOSReboot;
+ (id)lastDumpFileName;
+ (id)lastTimeFOOMScene;
+ (void)registerExtension;
+ (void)reportFoomScene;
+ (void)reportIDKEYByType:(unsigned long long)arg1;
+ (void)setDumpFileName:(id)arg1;
+ (void)setFlag:(id)arg1;
+ (void)setScene:(id)arg1;
+ (void)userHasWatch:(_Bool)arg1;
+ (void)willSuspend;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

