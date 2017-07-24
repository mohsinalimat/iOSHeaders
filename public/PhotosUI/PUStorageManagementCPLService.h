//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PXCPLServiceStatus, PXUICPLService;

@interface PUStorageManagementCPLService : NSObject
{
    PXUICPLService *_cplUIService;
    PXCPLServiceStatus *_lastServiceStatusUpdated;
    CDUnknownBlockType _uploadCallbackHandler;
}

+ (id)sharedCPLService;
@property(copy, nonatomic) CDUnknownBlockType uploadCallbackHandler; // @synthesize uploadCallbackHandler=_uploadCallbackHandler;
- (void).cxx_destruct;
- (void)_updateUploadCallbackHandler:(id)arg1;
@property(readonly, nonatomic) _Bool hasCompletedInitialUpload;
- (void)_initCPLService;
- (id)init;

@end

