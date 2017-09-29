//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCBizUtil : NSObject
{
}

+ (void)ClearWCBizMainWindow;
+ (id)GetWCBizMainWindow;
+ (unsigned char)GetWCPayVersion;
+ (_Bool)IsWCGroupPayAppServiceInPlane:(id)arg1;
+ (_Bool)IsWCPayTransferAppServiceInPlane:(id)arg1;
+ (_Bool)IsWCRedEnvelopesAppServiceInPlane:(id)arg1;
+ (void)SetWCBizMainWindow:(id)arg1;
+ (void)bizReportBannerUserAction:(int)arg1 bannType:(int)arg2;
+ (id)convertCGIEnumToString:(unsigned int)arg1;
+ (unsigned int)convertTenpayCmdIdToNewCGI:(unsigned int)arg1 payScene:(unsigned int)arg2;
+ (id)dictionaryWithDecodedComponets:(id)arg1 separator:(id)arg2;
+ (unsigned int)differntCharactorCountCompareString:(id)arg1 WithOriginalString:(id)arg2;
+ (id)feeSymbolFromType:(id)arg1;
+ (id)feeTextFromType:(id)arg1 fee:(long long)arg2;
+ (id)getActionLocation;
+ (id)getAddressBookTelphoneNumberDictionary;
+ (id)getBankResource:(id)arg1;
+ (id)getBindQueryNewApplyNewCardInfoWithScene:(int)arg1;
+ (id)getBindQueryNewPayMenuArrayInfoPathWithScene:(int)arg1;
+ (id)getCardTypeName:(id)arg1;
+ (id)getContactDisplayName:(id)arg1;
+ (unsigned long long)getCorrectUIntValueFromDouble:(double)arg1;
+ (id)getCreditCardHadViewFilePath;
+ (id)getFiltedTruthName:(id)arg1;
+ (id)getFooterErrorTipView:(id)arg1;
+ (id)getFooterTipView:(id)arg1;
+ (double)getFooterTipViewHeight:(id)arg1;
+ (id)getFullPathOfYearHBImageWithFileId:(id)arg1 userName:(id)arg2;
+ (id)getHeaderErrorTipView:(id)arg1;
+ (id)getHeaderTipView:(id)arg1;
+ (id)getSaveStyleBarItemTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
+ (id)getStringFromBindCardInfo:(id)arg1;
+ (id)getTempFullPathOfYearHBImageForSender:(id)arg1;
+ (id)getTitleViewWithTitle:(id)arg1 LandscapeMode:(_Bool)arg2 MaxWidth:(double)arg3;
+ (id)getTitleViewWithTitle:(id)arg1 SubTitle:(id)arg2 LandscapeMode:(_Bool)arg3 MaxWidth:(double)arg4;
+ (id)getWCAddressFilePath;
+ (id)getWCAddressStageDataFilePath;
+ (id)getWCAddressYiXunFilePath;
+ (id)getWCBizAuthTitle:(id)arg1 LandscapeMode:(_Bool)arg2 MaxWidth:(double)arg3;
+ (id)getWCBizAuthTitle:(id)arg1 MaxWidth:(double)arg2;
+ (id)getWCBizImgCachedPath:(id)arg1;
+ (id)getWCBizLoginTitle:(id)arg1 LandscapeMode:(_Bool)arg2 MaxWidth:(double)arg3;
+ (id)getWCBizLoginTitle:(id)arg1 MaxWidth:(double)arg2;
+ (id)getWCMallFunctionListPath;
+ (id)getWCMallLatestActivityTipsPath;
+ (id)getWCMallShowedBannerId;
+ (id)getWCMallShowedInActivityCellProductId;
+ (id)getWCMallShowedNewPath;
+ (id)getWCMallShowedProductId;
+ (id)getWCMallShowedRedCodePath;
+ (id)getWCMallTelephoneDictionaryPath;
+ (id)getWCMallTelephoneListPath;
+ (id)getWCMallTicketsListPath;
+ (id)getWCPayAllScenePayCardListPath;
+ (id)getWCPayAvalibleCardBinInfoPath;
+ (id)getWCPayBalancePath;
+ (id)getWCPayBankIconCacheFolderPath;
+ (id)getWCPayBankImageResourceFolder;
+ (id)getWCPayBankResourcePath;
+ (id)getWCPayCgiResponseCachePathWith:(id)arg1;
+ (id)getWCPayCreditCardShowedNewInfoPath;
+ (id)getWCPayDigitalCrtPath;
+ (id)getWCPayFunctionActivityFolderPath;
+ (id)getWCPayLQTEnteranceInfoPath;
+ (id)getWCPayLQTInfoPath;
+ (id)getWCPayLoanEntryInfoPath;
+ (id)getWCPayMessageResourceFolder;
+ (id)getWCPayNoticeInfoPath;
+ (id)getWCPayOfflinePayCardListDataPath;
+ (id)getWCPayOfflinePayCrtPath;
+ (id)getWCPayOfflinePayDeviceIDPath;
+ (id)getWCPayOfflinePayFreezeInfoPath;
+ (id)getWCPayOfflinePayOfflineGetMsgConfigPath;
+ (id)getWCPayOfflinePayOrderIdStatePath;
+ (id)getWCPayOfflinePayQueryInfoPath;
+ (id)getWCPayOfflinePayQueryUsrerInfoPath;
+ (id)getWCPayOfflinePayShowedNewInfoPath;
+ (id)getWCPayOfflinePayUserUinPath;
+ (id)getWCPayPayCardListPath;
+ (id)getWCPayPayManagePath;
+ (id)getWCPayRealnameWordingPath;
+ (id)getWCPayServerDynamicWordingPath;
+ (id)getWCPaySettingPath;
+ (id)getWCPaySwitchInfoPath;
+ (id)getWCPayTransferedUserListPath;
+ (id)getWCPayUserInfoPath;
+ (id)getWCPayWebImageDefaultCacheFolderPath;
+ (id)getWCRedEnvelopesLastRadomHBSelctedCountPath;
+ (id)getWCRedEnvelopesUserInfoPath;
+ (id)imageWithColor:(id)arg1;
+ (_Bool)isBindCardInfoFull:(id)arg1;
+ (_Bool)isDomesticCardWithCardBankTag:(unsigned int)arg1;
+ (_Bool)isDomesticOrderWithMulitOrderDetail:(id)arg1;
+ (_Bool)isDomesticUserWithCardUserFlag:(unsigned int)arg1;
+ (_Bool)isEmptyKey:(id)arg1 inDictionary:(id)arg2;
+ (_Bool)isNetworkConnected;
+ (_Bool)isOverseasCardWithCardBankTag:(unsigned int)arg1;
+ (_Bool)isOverseasUserWithCardUserFlag:(unsigned int)arg1;
+ (_Bool)isShouldShowSetPasswordTipsView:(id)arg1;
+ (_Bool)isSystemPushSoundOpen;
+ (void)logBannerUserAction:(int)arg1 bannerType:(int)arg2;
+ (void)logLoanMoneyAction:(int)arg1;
+ (void)logOfflinePayGetToken:(int)arg1;
+ (void)logRealnameAction:(int)arg1;
+ (void)logTransferAction:(int)arg1;
+ (void)logUserAction:(int)arg1;
+ (id)parseRealnameGuideInfo:(id)arg1 alertViewScene:(int)arg2;
+ (void)playCoinSound;
+ (void)reportLocationAlert:(int)arg1 type:(int)arg2;
+ (id)stringWithFormEncodedComponentsAscending:(id)arg1 ascending:(_Bool)arg2 skipempty:(_Bool)arg3 separator:(id)arg4;
+ (id)validWCMallPhoneNumber:(id)arg1;
+ (_Bool)validateUrl:(id)arg1;

@end

