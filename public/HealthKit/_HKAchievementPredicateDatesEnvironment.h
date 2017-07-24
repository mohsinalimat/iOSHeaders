//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@class NSCalendar, NSDate, NSNumber;

@interface _HKAchievementPredicateDatesEnvironment : _HKBaseAchievementPredicateEnvironment
{
    NSCalendar *_calendar;
    NSDate *_now;
    NSDate *_startOfToday;
    NSDate *_endOfToday;
    NSDate *_startOfYesterday;
    long long _firstDayOfFitnessWeek;
    NSDate *_firstWristOnDateToday;
    double _currentTimeZoneOffset;
    long long _dayOfWeekToday;
    long long _dayOfFitnessWeekToday;
    long long _dayOfMonthToday;
    long long _numberOfDaysInCurrentMonth;
    NSDate *_startOfCurrentFitnessWeek;
    NSDate *_endOfCurrentFitnessWeek;
    NSDate *_startOfCurrentMonth;
    NSDate *_endOfCurrentMonth;
}

- (void).cxx_destruct;
- (id)endOfCurrentMonth;
- (id)startOfCurrentMonth;
- (void)_updateCurrentMonthStartEnd;
@property(readonly, nonatomic) NSNumber *endOfCurrentFitnessWeek;
- (id)_endOfCurrentFitnessWeek;
@property(readonly, nonatomic) NSNumber *startOfCurrentFitnessWeek;
- (id)_startOfCurrentFitnessWeek;
@property(readonly, nonatomic) long long numberOfDaysInCurrentMonth;
@property(readonly, nonatomic) long long dayOfMonthToday;
@property(readonly, nonatomic) long long dayOfFitnessWeekToday;
@property(readonly, nonatomic) long long dayOfWeekToday;
@property(readonly, nonatomic) double currentTimeZoneOffset;
@property(readonly, nonatomic) NSNumber *firstWristOnDateToday;
@property(readonly, nonatomic) long long lastDayOfFitnessWeek;
@property(readonly, nonatomic) long long firstDayOfFitnessWeek;
@property(readonly, nonatomic) NSNumber *startOfYesterday;
- (id)_startOfYesterday;
@property(readonly, nonatomic) NSNumber *endOfToday;
- (id)_endOfToday;
@property(readonly, nonatomic) NSNumber *startOfToday;
- (id)_startOfToday;
@property(readonly, nonatomic) NSNumber *now;
- (void)setCalendar:(id)arg1;
- (void)setCurrentDate:(id)arg1;
- (void)_clearDateCaches;
- (id)init;

@end

