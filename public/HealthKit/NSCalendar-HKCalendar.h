//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCalendar.h>

@interface NSCalendar (HKCalendar)
+ (id)hk_canonicalDateOfBirthDateComponentsWithDate:(id)arg1;
+ (id)hk_gregorianCalendarWithCupertinoTimeZone;
+ (id)hk_gregorianCalendarWithLocalTimeZone;
+ (id)hk_gregorianCalendarWithUTCTimeZone;
+ (id)hk_gregorianCalendar;
- (id)hk_dateWithDurationSinceReferenceDate:(double)arg1 calendarUnit:(unsigned long long)arg2;
- (double)hk_durationSinceReferenceDateForDate:(id)arg1 calendarUnit:(unsigned long long)arg2;
- (id)hk_startOfUnitForDate:(id)arg1 calendarUnit:(unsigned long long)arg2;
- (id)hk_timeZoneDependentReferenceDate;
- (double)hk_lengthOfDayForDate:(id)arg1;
- (void)hk_enumerateDateInterval:(id)arg1 byDateComponents:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)hk_dateFromComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
- (id)hk_dateFromComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5;
- (id)hk_dateFromComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4;
- (id)hk_dateByShiftingFromGregorianCalendarWithUTCTimeZone:(id)arg1;
- (id)hk_dateByShiftingToGregorianCalendarWithUTCTimeZone:(id)arg1;
- (double)hk_timeIntervalSinceStartOfDayForDate:(id)arg1;
- (id)hk_startOfBedditSleepDayForDate:(id)arg1;
- (id)hk_startOfSleepDayForDate:(id)arg1;
- (id)hk_nearestNoonBeforeDateOrEqualToDate:(id)arg1;
- (id)hk_weekendDays;
- (id)hk_firstDateWithHour:(long long)arg1 minute:(long long)arg2 afterDate:(id)arg3;
- (id)hk_dateBySubtractingDays:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)hk_nearestStartOfMonthForDate:(id)arg1;
- (id)hk_nearestStartOfWeekWithFirstWeekDay:(long long)arg1 date:(id)arg2;
- (id)hk_nearestStartOfDayForDate:(id)arg1;
- (id)hk_startOfYearForDate:(id)arg1 addingYears:(long long)arg2;
- (id)hk_startOfMonthForDate:(id)arg1 addingMonths:(long long)arg2;
- (id)hk_startOfMonthForDate:(id)arg1;
- (id)hk_startOfHourForDate:(id)arg1 addingHours:(long long)arg2;
- (id)hk_startOfMinuteForDate:(id)arg1 moduloMinutes:(long long)arg2 addingModuloCount:(long long)arg3;
- (id)hk_startOfWeekWithFirstWeekday:(long long)arg1 beforeDate:(id)arg2 addingWeeks:(long long)arg3;
- (id)hk_startOfFitnessWeekBeforeDate:(id)arg1;
- (id)hk_startOfDateByAddingDays:(long long)arg1 toDate:(id)arg2;
- (id)hk_startOfDateBySubtractingDays:(long long)arg1 fromDate:(id)arg2;
- (id)hk_dateOfBirthDateComponentsWithDate:(id)arg1;
@end

