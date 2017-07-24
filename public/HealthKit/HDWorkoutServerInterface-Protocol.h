//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKWorkout, HKWorkoutConfiguration, NSArray, NSData, NSUUID, _HKActiveWorkoutServerConfiguration, _HKFitnessMachineSessionConfiguration, _HKWorkoutSession;
@protocol HKFitnessMachineConnectionClientInterface, HKFitnessMachineConnectionInitiatorClientInterface;

@protocol HDWorkoutServerInterface <NSObject>
- (void)remote_setActivityType:(unsigned long long)arg1;
- (void)remote_forbidConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)remote_permitConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)remote_registerConnectionInitiatorClient:(id <HKFitnessMachineConnectionInitiatorClientInterface>)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)remote_simulateDisconnect;
- (void)remote_simulateAccept;
- (void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)remote_markClientReadyWithConnectionUUID:(NSUUID *)arg1;
- (void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)remote_endFitnessMachineConnectionWithUUID:(NSUUID *)arg1;
- (void)remote_registerClient:(id <HKFitnessMachineConnectionClientInterface>)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)remote_startWatchAppWithWorkoutConfiguration:(HKWorkoutConfiguration *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_resumeWorkoutSessionWithUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_pauseWorkoutSessionWithUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_stopWorkoutSessionWithUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_startWorkoutSession:(_HKWorkoutSession *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_generatePauseOrResumeRequestWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_associateSamplesWithUUIDs:(NSData *)arg1 withWorkout:(HKWorkout *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_pauseAllActiveWorkoutsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_attachWorkoutServerWithClient:(id)arg1 serverConfiguration:(_HKActiveWorkoutServerConfiguration *)arg2 fitnessMachineConnectionClient:(id <HKFitnessMachineConnectionClientInterface>)arg3 fitnessMachineSessionConfiguration:(_HKFitnessMachineSessionConfiguration *)arg4 willReactivate:(_Bool)arg5 handler:(void (^)(HDActiveWorkoutServer *, _Bool, NSError *))arg6;
- (void)remote_replaceWorkout:(HKWorkout *)arg1 withWorkout:(HKWorkout *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_addSamples:(NSArray *)arg1 toWorkout:(HKWorkout *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_getFirstPartyWorkoutSnapshotWithCompletion:(void (^)(_HKFirstPartyWorkoutSnapshot *, NSError *))arg1;
- (void)remote_activeWorkoutApplicationIdentifier:(void (^)(NSString *, NSError *))arg1;
@end

