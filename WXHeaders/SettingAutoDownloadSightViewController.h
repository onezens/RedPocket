//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMTableViewInfo;

@interface SettingAutoDownloadSightViewController : MMUIViewController
{
    MMTableViewInfo *m_tableViewInfo;
    unsigned int curImgSettingValue;
}

- (void).cxx_destruct;
- (long long)checkMarkOrNoneWithOption:(unsigned int)arg1 toMatch:(unsigned int)arg2;
- (id)init;
- (void)reloadTableData;
- (void)savePhotoToLibraryChanged:(id)arg1;
- (void)saveVideoToLibraryChanged:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

