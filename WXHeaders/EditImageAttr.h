//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, UIImage;

@interface EditImageAttr : NSObject
{
    _Bool _isEdited;
    NSString *_url;
    UIImage *_editedImage;
    NSMutableArray *_drawViewArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *drawViewArray; // @synthesize drawViewArray=_drawViewArray;
@property(retain, nonatomic) UIImage *editedImage; // @synthesize editedImage=_editedImage;
- (id)initWithAssetUrl:(id)arg1 withImage:(id)arg2 withDrawLayer:(id)arg3 withEdited:(_Bool)arg4;
@property(nonatomic) _Bool isEdited; // @synthesize isEdited=_isEdited;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end

