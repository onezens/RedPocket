//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCOutFacadeExt.h"
#import "InviteFriendLogicDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, MMUILabel, NSString, UIImageView, UILabel, WCOutInviteFriendLogic;

@interface WCOutAccountViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, InviteFriendLogicDelegate, IWCOutFacadeExt>
{
    unsigned int _clickDetailCount;
    unsigned int _clickFeedbackCount;
    unsigned int _clickReadmeCount;
    UIImageView *_recordRedDot;
    UILabel *_remainingTime;
    UILabel *_invalidDate;
    MMUILabel *_discountLabel;
    UIImageView *_chargeRedDot;
    UIImageView *_msgRedDot;
    MMUILabel *_tipsPackageLabel;
    NSString *_enterTs;
    NSString *_outTs;
    MMTableView *_tableView;
    WCOutInviteFriendLogic *_inviteFriendLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *chargeRedDot; // @synthesize chargeRedDot=_chargeRedDot;
- (void)clickAgreementButton;
@property(nonatomic) unsigned int clickDetailCount; // @synthesize clickDetailCount=_clickDetailCount;
- (void)clickFAQButton;
@property(nonatomic) unsigned int clickFeedbackCount; // @synthesize clickFeedbackCount=_clickFeedbackCount;
@property(nonatomic) unsigned int clickReadmeCount; // @synthesize clickReadmeCount=_clickReadmeCount;
- (void)configFAQbutton;
- (void)configModel;
- (void)configRightBarButtonItem;
- (void)configTableView;
- (void)dealloc;
- (void)didReceiveCouponResponse;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) MMUILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) NSString *enterTs; // @synthesize enterTs=_enterTs;
- (void)finishShowAnimation;
- (double)getAccountCellHeight;
- (id)getPackageArr;
- (id)init;
- (void)initDeepLinkConfig;
@property(retain, nonatomic) UILabel *invalidDate; // @synthesize invalidDate=_invalidDate;
@property(retain, nonatomic) WCOutInviteFriendLogic *inviteFriendLogic; // @synthesize inviteFriendLogic=_inviteFriendLogic;
- (void)makeAccountCell:(id)arg1;
- (void)makeChargeCell:(id)arg1;
- (void)makeMsgCell:(id)arg1;
- (void)makePackageCell:(id)arg1;
- (void)makeRecordCell:(id)arg1;
@property(retain, nonatomic) UIImageView *msgRedDot; // @synthesize msgRedDot=_msgRedDot;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCheckFeeClicked;
- (void)onClickActionSheetShareRecord;
- (void)onClickActionSheetWebRecharge;
- (void)onClickMoreBtn;
@property(retain, nonatomic) NSString *outTs; // @synthesize outTs=_outTs;
@property(retain, nonatomic) UIImageView *recordRedDot; // @synthesize recordRedDot=_recordRedDot;
- (void)refreshDisCountLabel;
- (void)refreshTipsPackageLabel;
@property(retain, nonatomic) UILabel *remainingTime; // @synthesize remainingTime=_remainingTime;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUILabel *tipsPackageLabel; // @synthesize tipsPackageLabel=_tipsPackageLabel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)updateNewxmlInfo;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidPop:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

