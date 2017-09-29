//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString;

@interface ReaderItemView : UIButton
{
    int type;
    unsigned int m_uiReaderIndex;
    _Bool m_bHasBottomBtn;
    NSString *m_nsTitle;
    NSString *m_nsCover;
    NSString *m_nsDigest;
    unsigned int m_uiDelFlag;
    id <ReaderItemViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)NotifyItemClicked;
- (double)appendNodeViewHeightIfIndex;
- (void)dealloc;
- (id)getAsyncImageWithFrame:(struct CGRect)arg1;
- (id)getHighlightedImage;
- (id)getItemTitle:(double)arg1;
- (void)handleLongPressEx:(id)arg1;
@property(nonatomic) _Bool m_bHasBottomBtn; // @synthesize m_bHasBottomBtn;
@property(nonatomic) __weak id <ReaderItemViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsCover; // @synthesize m_nsCover;
@property(retain, nonatomic) NSString *m_nsDigest; // @synthesize m_nsDigest;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(nonatomic) unsigned int m_uiDelFlag; // @synthesize m_uiDelFlag;
@property(nonatomic) unsigned int m_uiReaderIndex; // @synthesize m_uiReaderIndex;
- (void)normalView;
- (void)onBeginTouch;
- (void)onClicked;
- (void)onTouchRepeat;
@property(nonatomic) int type; // @synthesize type;
- (void)startInitView;
- (void)topView;
- (void)updateBkgImage:(_Bool)arg1;

@end

