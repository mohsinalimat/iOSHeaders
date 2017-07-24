//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDActiveWorkoutServerDelegate-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDForegroundClientProcessObserver-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDWorkoutEventCollectorDelegate-Protocol.h>

@class BBQuietModeOverrideAssertion, CLLocationManager, CMWorkoutManager, CSLSSession, HDAlertSuppressor, HDPowerSavingModeManager, HDProfile, HDWatchAppStateMonitor, HDWorkoutLocationSmoother, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, _HDWorkoutData;
@protocol OS_dispatch_queue;

@interface HDWorkoutManager : NSObject <HDActiveWorkoutServerDelegate, HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDForegroundClientProcessObserver, HDHealthDaemonReadyObserver, HDWorkoutEventCollectorDelegate>
{
    _HDWorkoutData *_currentWorkout;
    _HDWorkoutData *_nextWorkout;
    NSMutableDictionary *_activeWorkoutServers;
    HDAlertSuppressor *_alertSuppressor;
    HDPowerSavingModeManager *_powerSavingModeManager;
    NSMutableSet *_currentObservedTypes;
    NSHashTable *_observerTable;
    NSMutableSet *_eventCollectors;
    NSMutableSet *_startedEventCollectors;
    _Bool _waitingForStopEvent;
    _Bool _stopEventAfterPause;
    _Bool _needToCheckForLocationSeriesOnUnlock;
    _Bool _isFirstLaunchAndNotYetSmoothed;
    CMWorkoutManager *_cmWorkoutManager;
    CLLocationManager *_locationManager;
    HDWorkoutLocationSmoother *_locationSmoother;
    CSLSSession *_carouselSession;
    _Bool _enableDNDDuringWorkout;
    BBQuietModeOverrideAssertion *_quietModeOverrideAssertion;
    HDWatchAppStateMonitor *_appStateMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
}

+ (id)observedTypesForActivityType:(unsigned long long)arg1 isIndoor:(_Bool)arg2 connectedToFitnessMachine:(_Bool)arg3;
+ (id)_distanceTypeForActivityType:(unsigned long long)arg1 isIndoor:(_Bool)arg2;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (_Bool)isPowerSavingEnabledForCurrentActivity;
- (id)_coreMotionWorkoutManager;
- (void)_queue_logWorkoutStateToPowerLog;
- (_Bool)_shouldWaitForCMStopEventForActivity:(unsigned long long)arg1;
- (void)_queue_updateFakingDataInSimulator;
- (void)_postWorkoutUpdatedNotification;
- (id)_workoutSessionNotCurrentError:(id)arg1;
- (id)_queue_eventCollectors;
- (void)_queue_stopBackgroundExecution;
- (void)_queue_startBackgroundExecutionForWorkout:(id)arg1;
- (void)_queue_didUpdateCurrentWorkoutSession;
- (void)_queue_immediateUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_stopDataCollectionForTypes:(id)arg1;
- (void)_queue_startDataCollectionForTypes:(id)arg1;
- (void)_queue_stopDataAndEventCollection;
- (void)_queue_startDataAndEventCollection;
- (void)_queue_setActivityType:(unsigned long long)arg1 forSessionUUID:(id)arg2 isIndoor:(_Bool)arg3;
- (void)_queue_resetActivityTypeForWorkoutSession:(id)arg1;
- (void)_queue_setActivityTypeForWorkoutSession:(id)arg1;
- (void)_queue_setCurrentSessionState:(long long)arg1;
- (void)_queue_sessionEnded;
- (void)_queue_stopCurrentSessionWaitingForStopEvent:(_Bool)arg1;
- (void)_queue_startWorkout:(id)arg1;
- (void)_queue_resumeCurrentSession;
- (void)_queue_pauseCurrentSession;
@property(nonatomic) _Bool enableDNDDuringWorkout;
@property(retain, nonatomic) BBQuietModeOverrideAssertion *quietModeOverrideAssertion;
@property(retain, nonatomic) CSLSSession *carouselSession;
- (void)hk_fakeStopEventWithDate:(id)arg1;
- (void)hk_fakeLapEventWithDate:(id)arg1 strokeStyle:(long long)arg2;
- (void)removeWorkoutEventObserver:(id)arg1;
- (void)addWorkoutEventObserver:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)receivedWorkoutEvent:(id)arg1;
- (id)diagnosticDescription;
- (void)_queue_activeWorkoutServerDidDeactivate:(id)arg1;
- (void)workoutServerDidDeactivate:(id)arg1;
- (_Bool)hasActiveWorkoutServerForClient:(id)arg1;
- (void)pauseActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getFirstPartyWorkoutSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)createActiveWorkoutServerWithConfiguration:(id)arg1 clientProxy:(id)arg2 server:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_stringRepresentationForMetrics:(id)arg1;
- (void)receiveMetrics:(id)arg1;
- (id)_mainQueue_locationManager;
- (_Bool)pluginHasBackgroundRunMode:(id)arg1 errorOut:(id *)arg2;
- (void)generatePauseOrResumeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentWorkoutClient;
- (long long)currentWorkoutLocationType;
- (unsigned long long)currentWorkoutActivityType;
@property(readonly, nonatomic) _Bool hasAnyActiveConnectedGymWorkouts;
- (_Bool)hasAnyActiveWorkouts;
- (void)clientInvalidated:(id)arg1;
- (void)_sendStartWorkoutAppResponse:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)receivedStartWorkoutAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resumeCurrentWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)pauseCurrentWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)resumeWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pauseWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startWorkoutSession:(id)arg1 client:(id)arg2 server:(id)arg3 isFirstParty:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_smoothAllUnsmoothedLocationSeries;
- (id)_queue_locationSmoother;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)foregroundClientProcessesDidChange:(id)arg1;
- (void)_associationsSyncedForWorkout:(id)arg1;
- (void)_setupLocationObserversIfNeeded;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)_queue_releaseQuietModeAssertion;
- (void)_queue_takeQuietModeAssertion;
- (void)_unobserveDNDWorkoutDefault;
- (void)_loadWorkoutDNDDefault;
- (void)_observeDNDWorkoutDefault;
- (void)_queue_endCarouselSession;
- (void)_queue_startCarouselSessionForBundleID:(id)arg1;
- (void)_queue_disableViewOnWakeForWorkout:(id)arg1;
- (void)_queue_enableViewOnWakeForWorkout:(id)arg1;
- (void)_queue_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_pluginHasBackgroundRunMode:(id)arg1 errorOut:(id *)arg2;
- (void)_receivedStartWorkoutAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

