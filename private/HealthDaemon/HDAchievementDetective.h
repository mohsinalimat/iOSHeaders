//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAchievementEngineDataProviding-Protocol.h>
#import <HealthDaemon/HDAchievementEvaluationDelegate-Protocol.h>
#import <HealthDaemon/HDCurrentActivitySummaryHelperObserver-Protocol.h>
#import <HealthDaemon/_HKAchievementPredicateWorkoutsEnvironmentDataSource-Protocol.h>
#import <HealthDaemon/_HKActivitySummaryHistoryEnvironmentDataSource-Protocol.h>

@class HDAchievementDataStoreV2, HDAchievementEngineV2, HDProfile, HKActivitySummary, HKQuantity, NSArray, NSCalendar, NSDate, NSMutableArray, NSMutableDictionary, NSString, _HKAchievementPredicateEnvironment;
@protocol HDDailyActivityGoalDetectionDelegate, OS_dispatch_queue;

@interface HDAchievementDetective : NSObject <_HKActivitySummaryHistoryEnvironmentDataSource, _HKAchievementPredicateWorkoutsEnvironmentDataSource, HDAchievementEngineDataProviding, HDCurrentActivitySummaryHelperObserver, HDAchievementEvaluationDelegate>
{
    _Bool _shouldObserveCurrentActivitySummaries;
    _Bool _suppressAchievementAwards;
    _Bool _didDetectNewWorkouts;
    long long _lastCheckedSummaryIndexForMove;
    HKQuantity *_lastTodayMoveValue;
    HKQuantity *_previousTodayMoveValue;
    HKQuantity *_lastTodayMoveGoal;
    long long _lastCheckedSummaryIndexForExercise;
    HKQuantity *_lastTodayExerciseValue;
    HKQuantity *_previousTodayExerciseValue;
    HKQuantity *_lastTodayExerciseGoal;
    long long _lastCheckedSummaryIndexForStand;
    unsigned long long _lastTodayStandValue;
    unsigned long long _previousTodayStandValue;
    unsigned long long _lastTodayStandGoal;
    long long _lastCheckedSummaryIndexForAllGoals;
    long long _lastCheckedSummaryIndexForDistance;
    HKQuantity *_lastTodayDistanceValue;
    id <HDDailyActivityGoalDetectionDelegate> _dailyGoalDetectionDelegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _HKAchievementPredicateEnvironment *_environment;
    HDProfile *_profile;
    HDAchievementDataStoreV2 *_achievementStore;
    HDAchievementEngineV2 *_engine;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSCalendar *_calendar;
    NSCalendar *_gregorianUTCCalendar;
    long long _startingActivitySummaryIndex;
    long long _endingActivitySummaryIndex;
    HKActivitySummary *_todayActivitySummary;
    HKActivitySummary *_yesterdayActivitySummary;
    NSMutableArray *_workouts;
    NSMutableDictionary *_workoutsByType;
    HKActivitySummary *_observedTodayActivitySummary;
    HKActivitySummary *_observedYesterdayActivitySummary;
    CDUnknownBlockType _commitHandler;
    NSArray *_injectedActivitySummaries;
    NSArray *_injectedWorkouts;
    NSDate *_now;
}

@property(nonatomic) _Bool didDetectNewWorkouts; // @synthesize didDetectNewWorkouts=_didDetectNewWorkouts;
@property(retain, nonatomic) NSDate *now; // @synthesize now=_now;
@property(copy, nonatomic) NSArray *injectedWorkouts; // @synthesize injectedWorkouts=_injectedWorkouts;
@property(copy, nonatomic) NSArray *injectedActivitySummaries; // @synthesize injectedActivitySummaries=_injectedActivitySummaries;
@property(copy, nonatomic) CDUnknownBlockType commitHandler; // @synthesize commitHandler=_commitHandler;
@property(retain, nonatomic) HKActivitySummary *observedYesterdayActivitySummary; // @synthesize observedYesterdayActivitySummary=_observedYesterdayActivitySummary;
@property(retain, nonatomic) HKActivitySummary *observedTodayActivitySummary; // @synthesize observedTodayActivitySummary=_observedTodayActivitySummary;
@property(retain, nonatomic) NSMutableDictionary *workoutsByType; // @synthesize workoutsByType=_workoutsByType;
@property(retain, nonatomic) NSMutableArray *workouts; // @synthesize workouts=_workouts;
@property(retain, nonatomic) HKActivitySummary *yesterdayActivitySummary; // @synthesize yesterdayActivitySummary=_yesterdayActivitySummary;
@property(retain, nonatomic) HKActivitySummary *todayActivitySummary; // @synthesize todayActivitySummary=_todayActivitySummary;
@property(nonatomic) long long endingActivitySummaryIndex; // @synthesize endingActivitySummaryIndex=_endingActivitySummaryIndex;
@property(nonatomic) long long startingActivitySummaryIndex; // @synthesize startingActivitySummaryIndex=_startingActivitySummaryIndex;
@property(retain, nonatomic) NSCalendar *gregorianUTCCalendar; // @synthesize gregorianUTCCalendar=_gregorianUTCCalendar;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *runQueue; // @synthesize runQueue=_runQueue;
@property(retain, nonatomic) HDAchievementEngineV2 *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) HDAchievementDataStoreV2 *achievementStore; // @synthesize achievementStore=_achievementStore;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) _HKAchievementPredicateEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic, getter=isSuppressingAchievementAwards) _Bool suppressAchievementAwards; // @synthesize suppressAchievementAwards=_suppressAchievementAwards;
@property(nonatomic) _Bool shouldObserveCurrentActivitySummaries; // @synthesize shouldObserveCurrentActivitySummaries=_shouldObserveCurrentActivitySummaries;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) __weak id <HDDailyActivityGoalDetectionDelegate> dailyGoalDetectionDelegate; // @synthesize dailyGoalDetectionDelegate=_dailyGoalDetectionDelegate;
@property(retain, nonatomic) HKQuantity *lastTodayDistanceValue; // @synthesize lastTodayDistanceValue=_lastTodayDistanceValue;
@property(nonatomic) long long lastCheckedSummaryIndexForDistance; // @synthesize lastCheckedSummaryIndexForDistance=_lastCheckedSummaryIndexForDistance;
@property(nonatomic) long long lastCheckedSummaryIndexForAllGoals; // @synthesize lastCheckedSummaryIndexForAllGoals=_lastCheckedSummaryIndexForAllGoals;
@property(nonatomic) unsigned long long lastTodayStandGoal; // @synthesize lastTodayStandGoal=_lastTodayStandGoal;
@property(nonatomic) unsigned long long previousTodayStandValue; // @synthesize previousTodayStandValue=_previousTodayStandValue;
@property(nonatomic) unsigned long long lastTodayStandValue; // @synthesize lastTodayStandValue=_lastTodayStandValue;
@property(nonatomic) long long lastCheckedSummaryIndexForStand; // @synthesize lastCheckedSummaryIndexForStand=_lastCheckedSummaryIndexForStand;
@property(retain, nonatomic) HKQuantity *lastTodayExerciseGoal; // @synthesize lastTodayExerciseGoal=_lastTodayExerciseGoal;
@property(retain, nonatomic) HKQuantity *previousTodayExerciseValue; // @synthesize previousTodayExerciseValue=_previousTodayExerciseValue;
@property(retain, nonatomic) HKQuantity *lastTodayExerciseValue; // @synthesize lastTodayExerciseValue=_lastTodayExerciseValue;
@property(nonatomic) long long lastCheckedSummaryIndexForExercise; // @synthesize lastCheckedSummaryIndexForExercise=_lastCheckedSummaryIndexForExercise;
@property(retain, nonatomic) HKQuantity *lastTodayMoveGoal; // @synthesize lastTodayMoveGoal=_lastTodayMoveGoal;
@property(retain, nonatomic) HKQuantity *previousTodayMoveValue; // @synthesize previousTodayMoveValue=_previousTodayMoveValue;
@property(retain, nonatomic) HKQuantity *lastTodayMoveValue; // @synthesize lastTodayMoveValue=_lastTodayMoveValue;
@property(nonatomic) long long lastCheckedSummaryIndexForMove; // @synthesize lastCheckedSummaryIndexForMove=_lastCheckedSummaryIndexForMove;
- (void).cxx_destruct;
- (id)createEvaluatedAchievementWithDefinition:(id)arg1;
- (id)evaluateAchievementExpression:(id)arg1;
- (_Bool)updateEnvironmentForProgress;
- (void)currentDynamicAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_injectNow:(id)arg1;
- (void)_clearInjectedUnitTestingDependencies;
- (void)_injectWorkouts:(id)arg1;
- (void)_injectActivitySummaries:(id)arg1;
- (void)_injectDatabaseCommitHandler:(CDUnknownBlockType)arg1;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (id)_summariesByAddingEmptySummariesIntoGaps:(id)arg1;
- (id)_newEmptyActivitySummaryWithStartDate:(id)arg1 startDateComponents:(id)arg2 calorieGoal:(id)arg3;
- (_Bool)_isActivitySummary:(id)arg1 oneDayAfterActivitySummary:(id)arg2;
- (id)_runQueue_fetchAchievementsWithError:(id *)arg1;
- (id)_runQueue_fetchWorkoutsSortedByEndDateFromStartDate:(id)arg1 toEndDate:(id)arg2 error:(id *)arg3;
- (id)_fetchActivitySummariesOrderedByCacheIndexFromIndex:(long long)arg1 toIndex:(long long)arg2 error:(id *)arg3;
- (id)dayEnvironmentsInDateInterval:(id)arg1;
- (id)aggregateEnvironmentForMonthOffsetFromNow:(long long)arg1;
- (id)_gizmo_workoutsInDateRangeStart:(id)arg1 end:(id)arg2;
- (id)_gizmo_workoutsOfType:(id)arg1;
- (id)_companion_workoutsInDateRangeStart:(id)arg1 end:(id)arg2;
- (id)_companion_workoutsOfType:(id)arg1;
- (id)workoutsInDateRangeStart:(id)arg1 end:(id)arg2;
- (id)workoutsOfType:(id)arg1;
- (id)_gizmo_workoutsForEngine:(id)arg1 endingAfterAnchor:(long long)arg2 newAnchor:(long long *)arg3;
- (id)_companion_workoutsForEngine:(id)arg1 endingAfterAnchor:(long long)arg2 newAnchor:(long long *)arg3;
- (id)workoutsForEngine:(id)arg1 endingAfterAnchor:(long long)arg2 newAnchor:(long long *)arg3;
- (id)todayDistanceForEngine:(id)arg1;
- (unsigned long long)yesterdayStandHoursForEngine:(id)arg1;
- (unsigned long long)todayStandHoursForEngine:(id)arg1;
- (unsigned long long)yesterdayStandGoalForEngine:(id)arg1;
- (unsigned long long)todayStandGoalForEngine:(id)arg1;
- (id)yesterdayExerciseTimeForEngine:(id)arg1;
- (id)todayExerciseTimeForEngine:(id)arg1;
- (id)yesterdayExerciseGoalForEngine:(id)arg1;
- (id)todayExerciseGoalForEngine:(id)arg1;
- (id)yesterdayActiveEnergyBurnedForEngine:(id)arg1;
- (id)todayActiveEnergyBurnedForEngine:(id)arg1;
- (id)yesterdayMoveGoalForEngine:(id)arg1;
- (id)todayMoveGoalForEngine:(id)arg1;
- (long long)todayActivitySummaryIndexForEngine:(id)arg1;
- (id)currentDateForEngine:(id)arg1;
- (void)_clearCommonValues;
- (void)clearValuesForGizmoRun;
- (void)clearValuesForCompanionRun;
- (id)_predicateForWorkoutsInDefaultSourcesOfActivityType:(unsigned long long)arg1;
- (id)_predicateForDataFromDefaultSourcesEndingAfterDate:(id)arg1 untilDate:(id)arg2;
- (id)_predicateForWatchSources;
- (void)_clearAnchorBasedProperties;
- (_Bool)runDatabaseIdentifierCheckWithCurrentDatabaseIdentifier:(id)arg1 identifierChanged:(_Bool *)arg2 error:(id *)arg3;
- (void)_addWorkout:(id)arg1;
- (void)_companion_runForWorkouts:(id)arg1 engine:(id)arg2 environment:(id)arg3;
- (void)_gizmo_runForWorkoutsWithEngine:(id)arg1 environment:(id)arg2;
- (void)_detectAchievementsWithEngine:(id)arg1 triggers:(unsigned long long)arg2 environment:(id)arg3;
- (id)_runAchievementEngine:(id)arg1 withPredicateEnvironment:(id)arg2 dataStore:(id)arg3 todayActivitySummary:(id)arg4 yesterdayActivitySummary:(id)arg5 currentDate:(id)arg6 addedWorkouts:(id)arg7;
- (id)_runQueue_detectAchievementsForActivitySummaries:(id)arg1 workouts:(id)arg2;
- (id)_runQueue_detectAchievementsForTodayOnlyWithActivitySummaries:(id)arg1 workouts:(id)arg2;
- (void)_runQueue_performRunWithInitialIndex:(long long)arg1 finalIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)runAchievementDetectionFromActivitySummaryIndex:(long long)arg1 toActivitySummaryIndex:(long long)arg2;
- (_Bool)runAchievementDetectionFromActivitySummaryIndex:(long long)arg1 toActivitySummaryIndex:(long long)arg2 didDetectNewWorkouts:(_Bool)arg3;
- (void)_systemTimeZoneDidChange:(id)arg1;
- (CDUnknownBlockType)_defaultCommitHandler;
- (void)dealloc;
- (id)init;
- (id)initWithProfile:(id)arg1 store:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

