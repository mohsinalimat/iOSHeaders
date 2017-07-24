//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDCloudSyncFetchOperationResult, HDCloudSyncOperationConfiguration;
@protocol OS_dispatch_queue;

@interface HDCloudSyncDisableOperation : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    HDCloudSyncOperationConfiguration *_configuration;
    HDCloudSyncFetchOperationResult *_fetchResult;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1 fetchResult:(id)arg2;

@end
