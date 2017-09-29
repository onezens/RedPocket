//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QuartzObject.h"

@class NSArray;

@interface QuartzDrawPath : QuartzObject
{
    _Bool _fill;
    _Bool _clip;
    NSArray *_path;
}

- (void).cxx_destruct;
- (void)Execute:(struct CGContext *)arg1;
- (void)arc:(struct CGPath *)arg1 data:(id)arg2;
- (void)arcTo:(struct CGPath *)arg1 data:(id)arg2;
- (void)bezierCurveTo:(struct CGPath *)arg1 data:(id)arg2;
- (void)closePath:(struct CGPath *)arg1 data:(id)arg2;
- (struct CGPath *)createPath;
- (id)initWithPath:(id)arg1 clip:(_Bool)arg2;
- (id)initWithPath:(id)arg1 fill:(_Bool)arg2;
- (void)lineTo:(struct CGPath *)arg1 data:(id)arg2;
- (void)moveTo:(struct CGPath *)arg1 data:(id)arg2;
@property(retain, nonatomic) NSArray *path; // @synthesize path=_path;
- (void)quadraticCurveTo:(struct CGPath *)arg1 data:(id)arg2;
- (void)rect:(struct CGPath *)arg1 data:(id)arg2;
- (void)setLinearGradient:(id)arg1 context:(struct CGContext *)arg2;
- (void)setRadialGradient:(id)arg1 context:(struct CGContext *)arg2;

@end

