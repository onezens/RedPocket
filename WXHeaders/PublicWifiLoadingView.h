//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@interface PublicWifiLoadingView : MMUIView
{
    float _angle;
    int _timeout;
    id <PublicWifiLoadingViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PublicWifiLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)refresh;
- (void)startLoading:(float)arg1;
- (void)stopLoading;

@end

