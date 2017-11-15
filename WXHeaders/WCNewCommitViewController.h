//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseEmoticonViewDelegate.h"
#import "ContactsSelectorControllerDelegate.h"
#import "FacebookViewControllerDelegate.h"
#import "IFacebookAuthExt.h"
#import "IMMAssetICloudExt.h"
#import "IMMFacebookMgrExt.h"
#import "IMMGrowTextViewExt.h"
#import "IMsgExt.h"
#import "InputControllerDelegate.h"
#import "MMTableViewInfoDelegate.h"
#import "MMTwitterAuthExt.h"
#import "SelectorControllerDelegate.h"
#import "SightViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextViewDelegate.h"
#import "WCDragableSelectorViewDelegate.h"
#import "WCFacadeExt.h"
#import "WCGroupTagViewControllerDelegate.h"
#import "WCTimelinePOIPickerViewControllerDelegate.h"
#import "scrollViewDelegate.h"

@class CLLocation, ContactsSelectorController, EmoticonBoardView, ImageSelectorController, MMAsset, MMGrowTextView, MMLoadingView, MMTableViewInfo, MMTimer, NSArray, NSMutableArray, NSString, SightDraft, SightIconView, SightView, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UIView, WCDataItem, WCDragDeleteBarView, WCDragTipView, WCHeadViewCellInfo, WCInputController, WCLocationInfo, WCMusicInfo, WCPOIStarView, WCSelectorView, WCTimelinePOIPickerViewController;

@interface WCNewCommitViewController : MMUIViewController <InputControllerDelegate, BaseEmoticonViewDelegate, IMMAssetICloudExt, WCGroupTagViewControllerDelegate, SightViewDelegate, FacebookViewControllerDelegate, WCDragableSelectorViewDelegate, UIScrollViewDelegate, scrollViewDelegate, UITextViewDelegate, SelectorControllerDelegate, MMTableViewInfoDelegate, ContactsSelectorControllerDelegate, UIAlertViewDelegate, IMsgExt, WCFacadeExt, MMTwitterAuthExt, IMMFacebookMgrExt, IFacebookAuthExt, IMMGrowTextViewExt, WCTimelinePOIPickerViewControllerDelegate>
{
    MMTableViewInfo *_tableViewInfo;
    MMGrowTextView *_textView;
    UIView *_headView;
    WCSelectorView *_withImageView;
    WCSelectorView *_withContactView;
    UIButton *_qzoneButton;
    UIButton *_facebookButton;
    UIButton *_twitterButton;
    UIImage *_sightThumbImage;
    UIImageView *_sightThumbImageView;
    UIActivityIndicatorView *_sightLoadingView;
    SightIconView *_progressView;
    ImageSelectorController *_imageSelectorController;
    ContactsSelectorController *_contactsSelectorController;
    WCInputController *_inputController;
    _Bool _bHasInput;
    UIImageView *_inputView;
    UIButton *_expressionButton;
    unsigned int _iInputSection;
    id <WCCommitViewAnimationDelegate> _delegate;
    WCDataItem *_cacheDateItem;
    MMLoadingView *_loadingView;
    MMTimer *_fireTimer;
    WCLocationInfo *_poiInfo;
    WCMusicInfo *_musicInfo;
    _Bool _bNeedRefresh;
    _Bool _bNeedAnimation;
    _Bool _bShowLocation;
    _Bool _bHideAddView;
    unsigned long long _singlePasteTextMaxLength;
    WCTimelinePOIPickerViewController *_poiPickerViewController;
    NSString *_loadingOKStr;
    _Bool m_hasClickDone;
    WCDragTipView *_dragTipView;
    WCHeadViewCellInfo *_headCell;
    _Bool m_isUseMMAsset;
    _Bool m_hasConfirmReturn;
    _Bool m_hasICloudImage;
    _Bool m_bFromWCList;
    _Bool _hasShowDragTip;
    EmoticonBoardView *m_emoticonBoardView;
    CLLocation *m_imageLocation;
    unsigned long long _type;
    SightDraft *_sightDraft;
    MMAsset *_sightAsset;
    NSArray *_tempSelectContacts;
    NSMutableArray *_m_imageLocationAry;
    SightView *_m_sightFullScreenPreviewView;
    WCDragDeleteBarView *_deleteBarView;
    WCPOIStarView *_poiStarView;
}

- (void).cxx_destruct;
- (void)GroupTagViewSelectTempContacts:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)OnDone;
- (void)OnFacebookBinded;
- (void)OnPostTimeline;
- (void)OnReturn;
- (void)addPoiInfoForTask:(id)arg1;
- (void)adjustSubviewRects;
- (void)afterProcessSingleImage;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
@property(nonatomic) _Bool bHideAddView; // @synthesize bHideAddView=_bHideAddView;
@property(nonatomic) _Bool bNeedAnimation; // @synthesize bNeedAnimation=_bNeedAnimation;
@property(nonatomic) _Bool bShowLocation; // @synthesize bShowLocation=_bShowLocation;
- (void)becomeInput;
- (void)beginAnimationStepOne;
- (void)beginAnimationStepTwo;
- (void)beginAnimationStepTwoWithCustomView:(id)arg1;
- (void)bindFacebook;
- (void)bindQQ;
- (void)cancelIcloudActivity;
- (_Bool)checkImageState;
- (void)commonInit;
- (_Bool)couldSelectContacts;
- (void)createSubviews;
- (void)dealloc;
@property(nonatomic) __weak id <WCCommitViewAnimationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCDragDeleteBarView *deleteBarView; // @synthesize deleteBarView=_deleteBarView;
- (void)didCommitText:(id)arg1;
- (void)doExit;
- (void)facebookCheckAccessTokenValidFinished:(_Bool)arg1;
- (void)fbDidLogin;
- (void)fbDidNotLogin;
- (id)getShowAddress;
- (id)getViewController;
@property(nonatomic) _Bool hasShowDragTip; // @synthesize hasShowDragTip=_hasShowDragTip;
- (void)hideInputController;
- (void)imagesUpdated;
- (id)init;
- (void)initEmoticonView;
- (void)initInputController;
- (void)initInputToolView;
- (void)initView;
- (id)initWithImages:(id)arg1 contacts:(id)arg2;
- (id)initWithSightDraft:(id)arg1;
- (void)keyboardDidHide;
- (void)keyboardWillShow;
@property(retain, nonatomic) NSString *loadingOKStr; // @synthesize loadingOKStr=_loadingOKStr;
@property(nonatomic) _Bool m_bFromWCList; // @synthesize m_bFromWCList;
@property(retain, nonatomic) EmoticonBoardView *m_emoticonBoardView; // @synthesize m_emoticonBoardView;
@property(nonatomic) _Bool m_hasConfirmReturn; // @synthesize m_hasConfirmReturn;
@property(nonatomic) _Bool m_hasICloudImage; // @synthesize m_hasICloudImage;
@property(retain, nonatomic) CLLocation *m_imageLocation; // @synthesize m_imageLocation;
@property(retain, nonatomic) NSMutableArray *m_imageLocationAry; // @synthesize m_imageLocationAry=_m_imageLocationAry;
@property(nonatomic) _Bool m_isUseMMAsset; // @synthesize m_isUseMMAsset;
@property(retain, nonatomic) SightView *m_sightFullScreenPreviewView; // @synthesize m_sightFullScreenPreviewView=_m_sightFullScreenPreviewView;
- (void)makeEvaluatePOICell:(id)arg1 CellInfo:(id)arg2;
@property(retain, nonatomic) WCMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)onCollectionViewCellMoved:(struct CGPoint)arg1;
- (void)onDragableSelectorViewHeightChanged;
- (_Bool)onEndCollectionViewCellMovement:(long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onFacebookClicked:(id)arg1;
- (void)onLoadingShowOK:(id)arg1;
- (void)onLocationCellClicked;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onPrivacyCellClicked;
- (void)onQZoneClicked:(id)arg1;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)onTwitterClicked:(id)arg1;
- (void)onWCPostPrivacyChanged;
- (void)onWithContactCellClicked;
- (id)openOldText;
@property(retain, nonatomic) WCLocationInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(retain, nonatomic) WCPOIStarView *poiStarView; // @synthesize poiStarView=_poiStarView;
- (void)postNewItemForSight;
- (_Bool)processImage;
- (void)processUploadTask:(id)arg1;
- (void)reloadData;
- (void)reloadExpressionButtonImage:(int)arg1;
- (void)reloadType;
- (void)removeOldText;
- (void)resignInput;
- (void)restoreLastShareOptions;
- (void)saveShareOptions;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDeleteBarHidden:(_Bool)arg1;
@property(retain, nonatomic) MMAsset *sightAsset; // @synthesize sightAsset=_sightAsset;
@property(retain, nonatomic) SightDraft *sightDraft; // @synthesize sightDraft=_sightDraft;
@property(retain, nonatomic) NSArray *tempSelectContacts; // @synthesize tempSelectContacts=_tempSelectContacts;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)shareOptionsCheck;
- (_Bool)shouldJustReturnMMAsset;
- (_Bool)shouldShowEvaluatePOI;
- (_Bool)showAddView;
- (void)showLoadingView;
- (void)showPrivacyAlertView;
- (void)textViewTextDidChange;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)twitterAuthFinished:(int)arg1;
- (void)twitterCheckAccessTokenValidFinished:(int)arg1;
- (void)twitterWillStartOpenSafari;
- (void)updateContentOffset;
- (void)updateImageLocation:(unsigned int *)arg1;
- (void)updateSelectorView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)writeOldText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

