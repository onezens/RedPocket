//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSObject.h"

@class FileFragment, NSString, UploadElement;

@interface UploadObject : NSObject <NSObject>
{
    FileFragment *_m_filefragment;
    UploadElement *_m_uploadElement;
}

- (void).cxx_destruct;
- (id)initWithUploadElement:(id)arg1 fileFragment:(id)arg2;
@property(retain, nonatomic) FileFragment *m_filefragment; // @synthesize m_filefragment=_m_filefragment;
@property(retain, nonatomic) UploadElement *m_uploadElement; // @synthesize m_uploadElement=_m_uploadElement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

