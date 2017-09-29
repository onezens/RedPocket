//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString, UIColor;

@interface QScaleUnitsView : UIView
{
    NSMutableArray *_strings;
    UIColor *_lightColor;
    UIColor *_normalColor;
    UIColor *_strokeColor;
    float _fontSize;
    _Bool _withUnits;
    _Bool _useLightText;
    NSString *_baseLegendString;
    NSString *_unitsString;
    double _segmentLengthInPixels;
    long long _segmentNumber;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *baseLegendString; // @synthesize baseLegendString=_baseLegendString;
- (void)calculateLegend;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawRectFor6;
- (void)drawRectFor7;
- (id)getFormattedString:(double)arg1;
- (void)initAttributes;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double segmentLengthInPixels; // @synthesize segmentLengthInPixels=_segmentLengthInPixels;
@property(nonatomic) long long segmentNumber; // @synthesize segmentNumber=_segmentNumber;
@property(retain, nonatomic) NSString *unitsString; // @synthesize unitsString=_unitsString;
@property(nonatomic) _Bool useLightText; // @synthesize useLightText=_useLightText;

@end

