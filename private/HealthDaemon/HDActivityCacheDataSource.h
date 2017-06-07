//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDActivityCacheStatisticsBuilderSourceOrderDelegate-Protocol.h>
#import <HealthDaemon/HDDataObserver-Protocol.h>

@class HDActivityCacheStatisticsBuilder, HDProfile, HKCategoryType, HKWorkoutType, NSSet, NSString, _HKDelayedOperation, _HKTimePeriod;
@protocol OS_dispatch_queue;

@interface HDActivityCacheDataSource : NSObject <HDActivityCacheStatisticsBuilderSourceOrderDelegate, HDDataObserver>
{
    vector_e4bf223f _previousWatchActivationLogEntryVector;
    _Bool _previousWatchActivationLogEntryIsSet;
    long long _quantitySampleAnchor;
    long long _nonQuantitySampleAnchor;
    NSString *_nonQuantitySamplesQueryString;
    NSString *_quantitySamplesQueryString;
    HKCategoryType *_standHoursType;
    HKCategoryType *_deepBreathingSessionType;
    HKWorkoutType *_workoutType;
    HKCategoryType *_watchActivationType;
    NSSet *_allObservedTypes;
    NSSet *_observedQuantityTypes;
    _HKDelayedOperation *_updateOperation;
    _HKDelayedOperation *_rebuildOperation;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
    HDActivityCacheStatisticsBuilder *_targetDayStatisticsBuilder;
    HDActivityCacheStatisticsBuilder *_previousDayStatisticsBuilder;
    _HKTimePeriod *_targetDayDateRange;
    _HKTimePeriod *_previousDayDateRange;
    NSString *_targetDayStatisticsBuilderTag;
    NSString *_previousDayStatisticsBuilderTag;
}

@property(retain, nonatomic) NSString *previousDayStatisticsBuilderTag; // @synthesize previousDayStatisticsBuilderTag=_previousDayStatisticsBuilderTag;
@property(retain, nonatomic) NSString *targetDayStatisticsBuilderTag; // @synthesize targetDayStatisticsBuilderTag=_targetDayStatisticsBuilderTag;
@property(retain, nonatomic) _HKTimePeriod *previousDayDateRange; // @synthesize previousDayDateRange=_previousDayDateRange;
@property(retain, nonatomic) _HKTimePeriod *targetDayDateRange; // @synthesize targetDayDateRange=_targetDayDateRange;
@property(readonly, nonatomic) NSSet *observedQuantityTypes; // @synthesize observedQuantityTypes=_observedQuantityTypes;
@property(readonly, nonatomic) HDActivityCacheStatisticsBuilder *previousDayStatisticsBuilder; // @synthesize previousDayStatisticsBuilder=_previousDayStatisticsBuilder;
@property(readonly, nonatomic) HDActivityCacheStatisticsBuilder *targetDayStatisticsBuilder; // @synthesize targetDayStatisticsBuilder=_targetDayStatisticsBuilder;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_samplesAddedToWorkoutNotification:(id)arg1;
- (id)activityCacheStatisticsBuilder:(id)arg1 sourceOrderForObjectType:(id)arg2;
- (_Bool)_primeQuantitySamplesWithError:(id *)arg1;
- (id)_quantitySamplesQueryStringWithQuatityTypes:(id)arg1;
- (id)_parameterStringWithCount:(long long)arg1;
- (_Bool)_primeNonQuantitySamplesWithError:(id *)arg1;
- (id)_nonQuantitySamplesQueryStringWithSampleTypes:(id)arg1;
- (_Bool)_quantitySampleIsValidWithTypeCode:(long long)arg1 workoutSourceIdentifier:(long long)arg2 isWatchSource:(_Bool)arg3;
- (_Bool)_typeIsValidFromCompanionWithoutWorkout:(long long)arg1;
- (_Bool)_quantityTypeRequiresWatchSource:(long long)arg1;
- (_Bool)_nonQuantitySampleRequiresWatchSource:(long long)arg1;
- (void)_resetPreviousWatchActivationLogEntries;
- (void)_resetStatisticsBuilders;
- (void)_resetEverything;
- (void)resumeUpdates;
- (void)pauseUpdates;
- (void)_queue_deregisterForSamplesAdded;
- (void)_queue_registerForSamplesAdded;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (_Bool)_primePreviousActivationLogEntryWithError:(id *)arg1;
- (_Bool)_readyToPrimeActivationLogEntries;
- (_Bool)_updateStatisticsBuildersWithError:(id *)arg1;
- (_Bool)_readyToPrimeStatisticsBuilders;
- (id)_overallTimePeriod;
- (_Bool)_timePeriodsAreSet;
- (_Bool)updateWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 observedQuantityTypes:(id)arg2 updateOperation:(id)arg3 rebuildOperation:(id)arg4 queue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

