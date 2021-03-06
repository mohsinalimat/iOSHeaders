//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProgress.h>

@protocol NSProgressPublisher;

__attribute__((visibility("hidden")))
@interface _NSProgressProxy : NSProgress
{
    id <NSProgressPublisher> _forwarder;
    _Bool _isOld;
    CDUnknownBlockType _unpublishingHandler;
}

- (_Bool)isOld;
- (void)_acknowledgeWithSuccess:(_Bool)arg1;
- (void)acknowledgeWithSuccess:(_Bool)arg1;
- (void)resume;
- (void)prioritize;
- (void)pause;
- (void)cancel;
- (void)unpublish;
- (void)publish;
- (void)setFileCompletedCount:(id)arg1;
- (void)setFileTotalCount:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFileOperationKind:(id)arg1;
- (void)setThroughput:(id)arg1;
- (void)setEstimatedTimeRemaining:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)setPrioritizationHandler:(CDUnknownBlockType)arg1;
- (void)setPrioritizable:(_Bool)arg1;
- (void)setPausingHandler:(CDUnknownBlockType)arg1;
- (void)setCancellationHandler:(CDUnknownBlockType)arg1;
- (void)setPausable:(_Bool)arg1;
- (void)setCancellable:(_Bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)resignCurrent;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)_setRemoteValue:(id)arg1 forKey:(id)arg2 inUserInfo:(_Bool)arg3;
- (void)_invokeUnpublishingHandler;
- (void)_invokePublishingHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(_Bool)arg3;

@end

