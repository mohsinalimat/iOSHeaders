//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@class NSString, _HKAchievementPredicateActivityDataEnvironment, _HKAchievementPredicateDatesEnvironment, _HKAchievementPredicateWorkoutsEnvironment;

@interface _HKAchievementPredicateEnvironment : _HKBaseAchievementPredicateEnvironment
{
    NSString *_currentCountryCode;
    NSString *_currentDefinitionIdentifier;
    _HKAchievementPredicateActivityDataEnvironment *_activityData;
    _HKAchievementPredicateDatesEnvironment *_dates;
    _HKAchievementPredicateWorkoutsEnvironment *_workouts;
}

+ (id)pairedWatchCountryCode;
+ (id)expressionForWorkoutsCompletedInMonthOffset:(long long)arg1;
+ (id)expressionForDailyAverageActiveCaloriesBurnedInMonthOffset:(long long)arg1;
+ (id)expressionForDistanceTraveledInMonthOffset:(long long)arg1;
+ (id)expressionForExerciseMinutesInMonthOffset:(long long)arg1;
+ (id)expressionForDailyAverageExerciseMinutesPerDayInMonthOffset:(long long)arg1;
+ (id)expressionForActiveCaloriesBurnedInMonthOffset:(long long)arg1;
+ (id)expressionForDaysMeetingStandGoalInMonthOffset:(long long)arg1;
+ (id)expressionForDaysMeetingExerciseGoalInMonthOffset:(long long)arg1;
+ (id)expressionForDaysMeetingMoveGoalByFactorOfTwoInMonthOffset:(long long)arg1;
+ (id)expressionForDaysMeetingMoveGoalInMonthOffset:(long long)arg1;
+ (id)expressionForDaysMeetingAllGoalsInMonthOffset:(long long)arg1;
+ (id)_expressionForAggregateValue:(id)arg1 inMonthOffset:(long long)arg2;
@property(readonly, nonatomic) _HKAchievementPredicateWorkoutsEnvironment *workouts; // @synthesize workouts=_workouts;
@property(readonly, nonatomic) _HKAchievementPredicateDatesEnvironment *dates; // @synthesize dates=_dates;
@property(readonly, nonatomic) _HKAchievementPredicateActivityDataEnvironment *activityData; // @synthesize activityData=_activityData;
- (void).cxx_destruct;
- (id)consecutiveAllGoalsStartingDaysAgo:(id)arg1;
- (id)consecutiveStandGoalsStartingDaysAgo:(id)arg1;
- (id)consecutiveExerciseGoalsStartingDaysAgo:(id)arg1;
- (id)consecutiveMoveGoalsStartingDaysAgo:(id)arg1;
@property(readonly, nonatomic) NSString *currentDefinitionIdentifier;
- (void)setCurrentDefinitionIdentifier:(id)arg1;
- (id)currentCountryCode;
- (void)setCurrentLocale:(id)arg1;
- (id)maxNumber:(id)arg1 otherNumber:(id)arg2;
- (id)initWithActivityDataEnvironment:(id)arg1 datesEnvironment:(id)arg2 workoutsEnvironment:(id)arg3;

@end

