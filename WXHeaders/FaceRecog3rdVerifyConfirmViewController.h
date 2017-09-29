//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FaceRecog3rdVerifyConfirmLogicDelegate.h"
#import "FaceRecog3rdVerifyHandlerDelegate.h"
#import "ILinkEventExt.h"
#import "UIAlertViewDelegate.h"

@class FaceRecog3rdVerifyConfirmLogic, FaceRecog3rdVerifyHandler, MMTableViewInfo, MMUILabel, NSString, UIButton, UIImageView;

@interface FaceRecog3rdVerifyConfirmViewController : MMUIViewController <FaceRecog3rdVerifyConfirmLogicDelegate, FaceRecog3rdVerifyHandlerDelegate, ILinkEventExt, UIAlertViewDelegate>
{
    _Bool _needVideo;
    unsigned int _scene;
    id <FaceRecog3rdVerifyConfirmViewControllerDelegate> _delegate;
    FaceRecog3rdVerifyHandler *_verifyHandler;
    MMTableViewInfo *_tableViewInfo;
    UIImageView *_iconView;
    MMUILabel *_sloganLabel;
    UIButton *_confirmInvokeBtn;
    UIButton *_rulesBtn;
    FaceRecog3rdVerifyConfirmLogic *_confirmLogic;
    NSString *_appId;
    NSString *_verifyInfo;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) UIButton *confirmInvokeBtn; // @synthesize confirmInvokeBtn=_confirmInvokeBtn;
@property(retain, nonatomic) FaceRecog3rdVerifyConfirmLogic *confirmLogic; // @synthesize confirmLogic=_confirmLogic;
@property(nonatomic) __weak id <FaceRecog3rdVerifyConfirmViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
- (void)doStartFaceReco;
- (void)faceRecogDidCancel:(id)arg1;
- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3;
- (void)faceRecogDidResultWithTryCount:(unsigned int)arg1;
- (int)getReportScene;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)initBottomRulesView:(id)arg1;
- (void)initConfirmButton:(id)arg1;
- (void)initData;
- (void)initFooterView;
- (void)initHeaderView;
- (void)initInfoView;
- (void)initTableView;
- (void)initView;
- (id)initWithAppId:(id)arg1 verifyInfo:(id)arg2 needVideo:(_Bool)arg3 scene:(unsigned int)arg4;
- (id)initWithAppId:(id)arg1 verifyInfo:(id)arg2 scene:(unsigned int)arg3;
- (id)initWithUnionVideoAppId:(id)arg1 verifyInfo:(id)arg2 scene:(unsigned int)arg3;
- (void)makeInfoCell:(id)arg1 CellInfo:(id)arg2;
@property(nonatomic) _Bool needVideo; // @synthesize needVideo=_needVideo;
- (void)onCancel;
- (void)onGetConfirmInfo:(id)arg1 failedCauseOf:(unsigned int)arg2 msg:(id)arg3;
- (void)onGetConfirmInfoSucceed:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onStartFaceReco;
@property(retain, nonatomic) UIButton *rulesBtn; // @synthesize rulesBtn=_rulesBtn;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMUILabel *sloganLabel; // @synthesize sloganLabel=_sloganLabel;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) FaceRecog3rdVerifyHandler *verifyHandler; // @synthesize verifyHandler=_verifyHandler;
@property(copy, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

