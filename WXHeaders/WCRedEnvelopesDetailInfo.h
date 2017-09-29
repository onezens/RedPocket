//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, NSString;

@interface WCRedEnvelopesDetailInfo : NSObject
{
    int m_enWCRedEnvelopesType;
    int m_enWCRedEnvelopesKind;
    int m_enWCRedEnvelopesStatus;
    int m_enWCRedEnvelopesUserReceiveStatus;
    _Bool m_bIsSender;
    _Bool m_bHasMoreReceiver;
    _Bool m_bCanShareHB;
    NSString *m_nsStatusMessage;
    NSString *m_nsGameMessage;
    NSString *m_nsWishing;
    NSString *m_nsSendUserName;
    NSString *m_nsSendNickName;
    NSString *m_nsSendHeadImg;
    NSString *m_nsSendId;
    NSString *m_nsAdMessage;
    NSString *m_nsAdUrl;
    NSString *m_nsHeadTitle;
    long long m_lAmount;
    long long m_lRecNum;
    long long m_lRecAmount;
    long long m_lTotalNum;
    long long m_lTotalAmount;
    NSString *m_nsReceiveId;
    _Bool m_bHasWriteThanks;
    _Bool m_bAllowJumpToBalance;
    NSString *m_nsJumpBalanceDesc;
    NSMutableArray *m_arrReceiveList;
    NSString *m_nsOpenTicket;
    _Bool m_bReceived;
    NSString *m_nsWaterMarkUrl;
    NSMutableArray *m_arrOperationInfoList;
    _Bool m_bCanAtomic;
    NSData *m_sendKeyData;
    _Bool m_bShownOpHeadInfo;
    NSString *m_nsHeaderMaskImageUrl;
    _Bool m_bHasFocused;
    _Bool m_bCheckFlag;
    NSString *m_nsFocusedMsg;
    NSString *m_nsAppUsrName;
    NSString *m_shareHintMess;
    unsigned int m_localResId;
    NSString *m_nsContextUrl;
    NSString *m_nsProcessContent;
    NSString *m_nsChangeUrl;
    NSString *m_nsAdSightPath;
    NSString *m_nsAdImagePath;
    unsigned int m_uiAdUrlFlag;
    unsigned int m_uiAdH5ResId;
    _Bool m_bShouldShowCheckBox;
    _Bool m_bShouldHideWordingForVip;
    _Bool _m_bShouldShowCheckBox;
    _Bool _m_bShouldHideWordingForVip;
    _Bool _m_bPicSwitch;
    unsigned int _m_uiAdUrlFlag;
    unsigned int _m_uiAdH5ResId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_arrOperationInfoList; // @synthesize m_arrOperationInfoList;
@property(retain, nonatomic) NSMutableArray *m_arrReceiveList; // @synthesize m_arrReceiveList;
@property(nonatomic) _Bool m_bAllowJumpToBalance; // @synthesize m_bAllowJumpToBalance;
@property(nonatomic) _Bool m_bCanAtomic; // @synthesize m_bCanAtomic;
@property(nonatomic) _Bool m_bCanShareHB; // @synthesize m_bCanShareHB;
@property(nonatomic) _Bool m_bCheckFlag; // @synthesize m_bCheckFlag;
@property(nonatomic) _Bool m_bHasFocused; // @synthesize m_bHasFocused;
@property(nonatomic) _Bool m_bHasMoreReceiver; // @synthesize m_bHasMoreReceiver;
@property(nonatomic) _Bool m_bHasWriteThanks; // @synthesize m_bHasWriteThanks;
@property(nonatomic) _Bool m_bIsSender; // @synthesize m_bIsSender;
@property(nonatomic) _Bool m_bPicSwitch; // @synthesize m_bPicSwitch=_m_bPicSwitch;
@property(nonatomic) _Bool m_bReceived; // @synthesize m_bReceived;
@property(nonatomic) _Bool m_bShouldHideWordingForVip; // @synthesize m_bShouldHideWordingForVip=_m_bShouldHideWordingForVip;
@property(nonatomic) _Bool m_bShouldShowCheckBox; // @synthesize m_bShouldShowCheckBox=_m_bShouldShowCheckBox;
@property(nonatomic) _Bool m_bShownOpHeadInfo; // @synthesize m_bShownOpHeadInfo;
@property(nonatomic) int m_enWCRedEnvelopesKind; // @synthesize m_enWCRedEnvelopesKind;
@property(nonatomic) int m_enWCRedEnvelopesStatus; // @synthesize m_enWCRedEnvelopesStatus;
@property(nonatomic) int m_enWCRedEnvelopesType; // @synthesize m_enWCRedEnvelopesType;
@property(nonatomic) int m_enWCRedEnvelopesUserReceiveStatus; // @synthesize m_enWCRedEnvelopesUserReceiveStatus;
@property(nonatomic) long long m_lAmount; // @synthesize m_lAmount;
@property(nonatomic) long long m_lRecAmount; // @synthesize m_lRecAmount;
@property(nonatomic) long long m_lRecNum; // @synthesize m_lRecNum;
@property(nonatomic) long long m_lTotalAmount; // @synthesize m_lTotalAmount;
@property(nonatomic) long long m_lTotalNum; // @synthesize m_lTotalNum;
@property(nonatomic) unsigned int m_localResId; // @synthesize m_localResId;
@property(retain, nonatomic) NSString *m_nsAdImagePath; // @synthesize m_nsAdImagePath;
@property(retain, nonatomic) NSString *m_nsAdMessage; // @synthesize m_nsAdMessage;
@property(retain, nonatomic) NSString *m_nsAdSightPath; // @synthesize m_nsAdSightPath;
@property(retain, nonatomic) NSString *m_nsAdUrl; // @synthesize m_nsAdUrl;
@property(retain, nonatomic) NSString *m_nsAppUsrName; // @synthesize m_nsAppUsrName;
@property(retain, nonatomic) NSString *m_nsChangeUrl; // @synthesize m_nsChangeUrl;
@property(retain, nonatomic) NSString *m_nsContextUrl; // @synthesize m_nsContextUrl;
@property(retain, nonatomic) NSString *m_nsFocusedMsg; // @synthesize m_nsFocusedMsg;
@property(retain, nonatomic) NSString *m_nsGameMessage; // @synthesize m_nsGameMessage;
@property(retain, nonatomic) NSString *m_nsHeadTitle; // @synthesize m_nsHeadTitle;
@property(retain, nonatomic) NSString *m_nsHeaderMaskImageUrl; // @synthesize m_nsHeaderMaskImageUrl;
@property(retain, nonatomic) NSString *m_nsJumpBalanceDesc; // @synthesize m_nsJumpBalanceDesc;
@property(retain, nonatomic) NSString *m_nsOpenTicket; // @synthesize m_nsOpenTicket;
@property(retain, nonatomic) NSString *m_nsProcessContent; // @synthesize m_nsProcessContent;
@property(retain, nonatomic) NSString *m_nsReceiveId; // @synthesize m_nsReceiveId;
@property(retain, nonatomic) NSString *m_nsSendHeadImg; // @synthesize m_nsSendHeadImg;
@property(retain, nonatomic) NSString *m_nsSendId; // @synthesize m_nsSendId;
@property(retain, nonatomic) NSString *m_nsSendNickName; // @synthesize m_nsSendNickName;
@property(retain, nonatomic) NSString *m_nsSendUserName; // @synthesize m_nsSendUserName;
@property(retain, nonatomic) NSString *m_nsStatusMessage; // @synthesize m_nsStatusMessage;
@property(retain, nonatomic) NSString *m_nsWaterMarkUrl; // @synthesize m_nsWaterMarkUrl;
@property(retain, nonatomic) NSString *m_nsWishing; // @synthesize m_nsWishing;
@property(retain, nonatomic) NSData *m_sendKeyData; // @synthesize m_sendKeyData;
@property(retain, nonatomic) NSString *m_shareHintMess; // @synthesize m_shareHintMess;
@property(nonatomic) unsigned int m_uiAdH5ResId; // @synthesize m_uiAdH5ResId=_m_uiAdH5ResId;
@property(nonatomic) unsigned int m_uiAdUrlFlag; // @synthesize m_uiAdUrlFlag=_m_uiAdUrlFlag;

@end

