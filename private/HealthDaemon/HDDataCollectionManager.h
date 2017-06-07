//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDHealthDataCollectionManager-Protocol.h>

@class HDDemoManager, HDPrimaryProfile, NSDate, NSMutableDictionary, NSString;
@protocol HDDataCollectionManagerDelegate, OS_dispatch_queue;

@interface HDDataCollectionManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDHealthDataCollectionManager>
{
    NSDate *_lastLaunchUpdate;
    HDPrimaryProfile *_primaryProfile;
    id <HDDataCollectionManagerDelegate> _delegate;
    NSMutableDictionary *_dataCollectorsByType;
    NSMutableDictionary *_observersByType;
    NSObject<OS_dispatch_queue> *_queue;
    HDDemoManager *_demoManager;
}

@property(retain, nonatomic) HDDemoManager *demoManager; // @synthesize demoManager=_demoManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *observersByType; // @synthesize observersByType=_observersByType;
@property(retain, nonatomic) NSMutableDictionary *dataCollectorsByType; // @synthesize dataCollectorsByType=_dataCollectorsByType;
@property(nonatomic) __weak id <HDDataCollectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak HDPrimaryProfile *primaryProfile; // @synthesize primaryProfile=_primaryProfile;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)_dataCollectorsDiagnosticDescription;
- (id)_observersDescription;
- (void)addDataCollector:(id)arg1;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopFakingData;
- (void)startFakingWithHKWorkoutActivityType:(unsigned long long)arg1;
- (void)startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2;
- (id)_queue_demoManagerCreatingIfNecessary;
- (_Bool)_queue_dataReceived:(id)arg1 provenance:(id)arg2 isDemoData:(_Bool)arg3 error:(id *)arg4;
- (void)sensorDataArrayReceived:(id)arg1 deviceEntity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sensorDataReceived:(id)arg1 deviceEntity:(id)arg2;
- (void)_updateDataCollectorsWithPrivacySettings;
- (void)_queue_setupUnprotectedDataDependantState;
- (void)daemonReady:(id)arg1;
- (void)_queue_addDataCollector:(id)arg1;
- (void)_queue_alertCollectorsOfTypesWithObservers;
- (void)stopDataCollectionForType:(id)arg1 observer:(id)arg2;
- (void)startDataCollectionForType:(id)arg1 observer:(id)arg2 collectionInterval:(double)arg3;
- (double)_queue_defaultCollectionIntervalForType:(id)arg1;
- (void)_queue_adjustDataCollectionForType:(id)arg1 block:(CDUnknownBlockType)arg2;
- (CDStruct_fd1107da)_queue_collectionStateForType:(id)arg1;
- (id)_queue_observerMapForType:(id)arg1;
- (void)immediateUpdateForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (double)defaultCollectionIntervalForType:(id)arg1;
- (void)updateCollectionInterval:(double)arg1 type:(id)arg2 observer:(id)arg3;
- (void)dataCollectionObserver:(id)arg1 didChangeState:(id)arg2;
- (void)removeDataCollectionObserver:(id)arg1;
- (void)removeDataCollectionObserver:(id)arg1 type:(id)arg2;
- (void)addDataCollectionObserver:(id)arg1 type:(id)arg2 collectionInterval:(double)arg3 state:(id)arg4;
- (void)_demoObjectsReceived:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)periodicUpdate;
- (void)dealloc;
- (id)initWithPrimaryProfile:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

