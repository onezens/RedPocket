//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIButton.h"

@class NSMutableSet, UIColor;

@interface FixTitleColorButton : MMUIButton
{
    NSMutableSet *m_titleColorStateSet;
    NSMutableSet *m_backgroundImageStateSet;
    double m_fixHeight;
    double m_fixLeftRightMargin;
    UIColor *m_fixBackgroundColor;
    _Bool _m_dynamicSize;
    UIColor *_m_highlighBorderColor;
    UIColor *_m_disabledBorderColor;
    UIColor *_m_normalBorderColor;
}

- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic) NSMutableSet *m_backgroundImageStateSet; // @synthesize m_backgroundImageStateSet;
@property(retain, nonatomic) UIColor *m_disabledBorderColor; // @synthesize m_disabledBorderColor=_m_disabledBorderColor;
@property(nonatomic) _Bool m_dynamicSize; // @synthesize m_dynamicSize=_m_dynamicSize;
@property(retain, nonatomic) UIColor *m_highlighBorderColor; // @synthesize m_highlighBorderColor=_m_highlighBorderColor;
@property(retain, nonatomic) UIColor *m_normalBorderColor; // @synthesize m_normalBorderColor=_m_normalBorderColor;
@property(retain, nonatomic) NSMutableSet *m_titleColorStateSet; // @synthesize m_titleColorStateSet;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)setFixHeight:(double)arg1;
- (void)setFixLeftRightMargin:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;

@end

