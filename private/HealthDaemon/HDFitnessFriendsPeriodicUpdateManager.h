//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDFitnessFriendsManagerReadyObserver-Protocol.h>

@class HDFitnessFriendsActivityDataManager, HDFitnessFriendsCloudKitManager, HDFitnessFriendsFriendListManager, HDFitnessFriendsRelationshipManager, NSString;
@protocol OS_dispatch_queue;

@interface HDFitnessFriendsPeriodicUpdateManager : NSObject <HDFitnessFriendsManagerReadyObserver>
{
    HDFitnessFriendsActivityDataManager *_activityDataManager;
    HDFitnessFriendsCloudKitManager *_cloudKitManager;
    HDFitnessFriendsFriendListManager *_friendListManager;
    HDFitnessFriendsRelationshipManager *_relationshipManager;
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _isWatch;
    _Bool _hasRegisteredForUpdates;
}

@property(readonly, nonatomic) _Bool hasRegisteredForUpdates; // @synthesize hasRegisteredForUpdates=_hasRegisteredForUpdates;
- (void).cxx_destruct;
- (void)_queue_performUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestImmediateUpdate;
- (void)endPeriodicUpdates;
- (void)beginPeriodicUpdates;
- (void)fitnessFriendsManagerReady:(id)arg1;
- (id)initWithIsWatch:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

