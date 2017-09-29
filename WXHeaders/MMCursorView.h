//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface MMCursorView : UIView
{
    float m_dotRadius;
    _Bool _bDraged;
    int _cursorType;
    float _cursorHeight;
    UIColor *_cursorColor;
    struct CGPoint _originPoint;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bDraged; // @synthesize bDraged=_bDraged;
@property(retain, nonatomic) UIColor *cursorColor; // @synthesize cursorColor=_cursorColor;
@property(nonatomic) float cursorHeight; // @synthesize cursorHeight=_cursorHeight;
@property(nonatomic) int cursorType; // @synthesize cursorType=_cursorType;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCursorType:(int)arg1 andHeight:(float)arg2 andCursorColor:(id)arg3;
@property(nonatomic) struct CGPoint originPoint; // @synthesize originPoint=_originPoint;

@end

