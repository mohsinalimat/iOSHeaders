//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CalDateLocalization : NSObject
{
}

+ (id)intervalStringFromDate:(id)arg1 toDate:(id)arg2 withFormat:(id)arg3 options:(int)arg4;
+ (struct __CFDateFormatter *)dateFormatterForKey:(id)arg1;
+ (id)ICUFormatForKey:(id)arg1;
+ (id)dateFormatters;
+ (id)ICUFormats;
+ (id)sizeOrderedAllDateFormatsWithoutYear;
+ (id)sizeOrderedDateFormatsWithoutYear;
+ (id)sizeOrderedDateFormatsWithYear;
+ (id)sizeOrderedDateFormats;
+ (void)generatePreferedOrders;
+ (void)generateLocalizedDateTimeFormats;
+ (void)generateDerivedTimeFormats:(id)arg1;
+ (id)_hourSymbolInFormat:(id)arg1;
+ (void)generateAdditionalPrecodedFormatters:(id)arg1;
+ (void)generateStandardFormatters:(id)arg1;
+ (void)setupFormatTemplate:(id)arg1 forKey:(id)arg2 locale:(id)arg3;
+ (void)setupFormat:(id)arg1 forKey:(id)arg2 locale:(id)arg3;
+ (void)setupFormatter:(struct __CFDateFormatter *)arg1 forKey:(id)arg2;
+ (id)formatKeyForHourString;
+ (_Bool)shouldUseHourMinutesWithoutAMPMForHours;
+ (_Bool)uses24HourTime;
+ (_Bool)hasAMPM;
+ (_Bool)weekdayIsWeekend:(long long)arg1;
+ (_Bool)dateIsWeekend:(id)arg1;
+ (id)weekendDays;
+ (id)dateFormatterForKey:(id)arg1 formatString:(id)arg2;
+ (id)calendarDayFormatter;
+ (id)sharedDateFormatter;
+ (void)rebuildWeekendDays;
+ (void)rebuildFormatters;
+ (void)initializeFormatters;

@end

