//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController;

@protocol MainFrameHeaderDelegate <NSObject>

@optional
- (void)OpenContactInfo:(NSString *)arg1;
- (void)PopViewContoller;
- (void)PushViewController:(UIViewController *)arg1;
- (void)insertRow:(unsigned int)arg1;
- (void)reloadAll;
- (void)removeRow:(unsigned int)arg1;
@end

