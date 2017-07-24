//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MPStoreSocialServiceController : NSObject
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_transientStates;
}

+ (id)_internalErrorForHTTPResponseCode:(long long)arg1;
- (void).cxx_destruct;
- (void)_queue_transientStatesDidChange;
- (void)_transientStatesDidChange;
- (void)_notifyTransientStatesDidChangeWithSnapshot:(id)arg1;
- (void)_populateTransientStatesSnapshot:(id)arg1;
- (id)_transientStateForPerson:(id)arg1 shouldCreate:(_Bool)arg2;
- (void)_performTransientFollowPendingRequestState:(long long)arg1 onPerson:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performTransientFollowState:(long long)arg1 onPerson:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleTransientStateForPersonDidChangeNotification:(id)arg1;
- (long long)transientFollowPendingRequestStateForPerson:(id)arg1;
- (void)declineFollowRequestFromPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acceptFollowRequestFromPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acceptAllFollowRequestsWithCompletion:(CDUnknownBlockType)arg1;
- (long long)transientFollowStateForPerson:(id)arg1;
- (void)unblockPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)blockPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelFollowRequestOnPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestFollowPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unfollowPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)followPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

