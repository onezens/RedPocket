//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString, WCDBReport;

@interface WCDBManager : MMService <MMService>
{
    NSString *_configPath;
    WCDBReport *_report;
}

+ (id)configPath;
+ (void)initialize;
- (void).cxx_destruct;
- (void)clearCorruptNum:(int)arg1;
- (id)init;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

