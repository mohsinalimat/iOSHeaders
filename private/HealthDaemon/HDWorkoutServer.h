//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDActiveWorkoutServerDelegate-Protocol.h>
#import <HealthDaemon/HDWorkoutServerInterface-Protocol.h>

@class NSMutableDictionary, NSString;

@interface HDWorkoutServer : HDSubserver <HDActiveWorkoutServerDelegate, HDWorkoutServerInterface>
{
    NSMutableDictionary *_activeWorkoutServersByUUID;
}

- (void).cxx_destruct;
- (void)workoutServerDidDeactivate:(id)arg1;
- (void)remote_startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_resumeWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_pauseWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_stopWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_startWorkoutSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_generateWorkoutMarkerWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_getFirstPartyWorkoutSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_activeWorkoutApplicationIdentifier:(CDUnknownBlockType)arg1;
- (void)remote_hasAnyActiveWorkouts:(CDUnknownBlockType)arg1;
- (void)remote_associateSamplesWithUUIDs:(id)arg1 withWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_freezeLocationSeriesWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_pauseAllActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_attachWorkoutServerWithClient:(id)arg1 serverConfiguration:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_completionHandlerForReplaceWithOriginalWorkout:(id)arg1 newWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_addSamples:(id)arg1 toWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_releaseWorkoutServerWithUUID:(id)arg1;
- (void)pauseActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (id)firstPartyWorkoutSnapshot;
@property(readonly, nonatomic) long long activeWorkoutServerCount;
- (id)allActiveWorkoutServers;
- (void)invalidate;
- (id)initWithParentServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

