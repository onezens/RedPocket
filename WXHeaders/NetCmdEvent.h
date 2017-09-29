//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseEvent.h"

@class PrtlBase;

@interface NetCmdEvent : CBaseEvent
{
    PrtlBase *m_prtl;
    struct INetCmdBase *m_netcmd;
    int m_cmdstatus;
    _Bool m_bJustForShort;
}

- (void).cxx_destruct;
- (void)OnCmdRecv;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (void)Stop;
- (void)dealloc;
- (id)init;
@property(readonly) struct INetCmdBase *m_netcmd; // @synthesize m_netcmd;
@property(readonly) PrtlBase *m_prtl; // @synthesize m_prtl;

@end

