//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "IUiUtilExt.h"
#import "ImageScrollViewDelegate.h"
#import "LongPressViewDelegate.h"
#import "MessageObserverDelegate.h"
#import "WCActionSheetDelegate.h"

@class CBaseContact, ImageScrollView, MMAnimationTipView, MMUILongPressView, NSString, UIActivityIndicatorView, UIImageView, UIView;

@interface MMHDHeadImageView : MMUIView <MessageObserverDelegate, LongPressViewDelegate, WCActionSheetDelegate, ImageScrollViewDelegate, IUiUtilExt>
{
    UIImageView *m_backgroundView;
    MMUILongPressView *m_LongPressView;
    UIActivityIndicatorView *m_activityIndicatorView;
    ImageScrollView *m_imgView;
    UIView *m_imgMask;
    _Bool m_bLoading;
    MMAnimationTipView *m_tipView;
    CBaseContact *m_contact;
    struct CGRect m_rcImgBegin;
    unsigned int m_uiDownloadEventID;
    id <HDHeadImageViewDelegate> m_delegate;
    _Bool m_fullScreen;
    double m_cornerRadius;
    _Bool m_needShowLoading;
    unsigned char headCategory;
    _Bool _m_bShowInViewController;
}

- (void).cxx_destruct;
- (void)BeforeInit;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)OnLongPress:(id)arg1;
- (void)OnPress:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)downloadHDImg;
- (id)getRealUserName:(id)arg1;
@property(nonatomic) unsigned char headCategory; // @synthesize headCategory;
- (void)hide;
- (void)hideOver;
- (id)initWithContact:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIActivityIndicatorView *m_activityIndicatorView; // @synthesize m_activityIndicatorView;
@property(readonly, nonatomic) _Bool m_bLoading; // @synthesize m_bLoading;
@property(nonatomic) _Bool m_bShowInViewController; // @synthesize m_bShowInViewController=_m_bShowInViewController;
@property(retain, nonatomic) UIImageView *m_backgroundView; // @synthesize m_backgroundView;
@property(retain, nonatomic) CBaseContact *m_contact; // @synthesize m_contact;
@property(nonatomic) __weak id <HDHeadImageViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_needShowLoading; // @synthesize m_needShowLoading;
- (void)onMainWindowFrameChanged;
- (void)onSingleTap:(id)arg1;
- (void)promptSaveToPhotoLibrary:(id)arg1;
- (void)reset;
- (void)saveImage;
- (void)setCornerRadius:(double)arg1;
- (void)setImgBeginRect:(struct CGRect)arg1;
- (void)show;
- (void)showInOriginPlace:(_Bool)arg1;
- (void)startLoading;
- (void)startShowImg:(_Bool)arg1;
- (void)stopLoading;
- (void)stopLoadingInternal;
- (void)updateHDHead;
- (void)updateHead;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

