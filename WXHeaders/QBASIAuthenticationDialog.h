//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QBASIAutorotatingViewController.h"

#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, QBASIHTTPRequest, UITableView, UIViewController;

@interface QBASIAuthenticationDialog : QBASIAutorotatingViewController <UIActionSheetDelegate, UITableViewDelegate, UITableViewDataSource>
{
    QBASIHTTPRequest *request;
    int type;
    UITableView *tableView;
    UIViewController *presentingController;
    _Bool didEnableRotationNotifications;
}

+ (void)dismiss;
+ (void)initialize;
+ (void)presentAuthenticationDialogForRequest:(id)arg1;
- (void)cancelAuthenticationFromDialog:(id)arg1;
- (void)dealloc;
@property _Bool didEnableRotationNotifications; // @synthesize didEnableRotationNotifications;
- (void)dismiss;
- (id)domainField;
- (id)init;
- (void)keyboardWillShow:(id)arg1;
- (void)loginWithCredentialsFromDialog:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)orientationChanged:(id)arg1;
- (id)passwordField;
- (void)presentNextDialog;
@property(retain, nonatomic) UIViewController *presentingController; // @synthesize presentingController;
@property(retain) QBASIHTTPRequest *request; // @synthesize request;
- (id)requestsRequiringTheseCredentials;
@property(retain) UITableView *tableView; // @synthesize tableView;
@property int type; // @synthesize type;
- (void)show;
- (void)showTitle;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)textFieldInRow:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (id)usernameField;
- (void)viewDidDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

