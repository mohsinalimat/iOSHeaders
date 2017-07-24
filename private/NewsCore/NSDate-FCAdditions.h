//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (FCAdditions)
+ (id)_fr_sharedYearAndMonthDateFormatter;
+ (id)fc_laterDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (id)fc_earlierDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (id)fc_dateWithMillisecondTimeIntervalSince1970:(unsigned long long)arg1;
+ (id)dateFromStringWithHTTPHeaderFormat:(id)arg1;
+ (id)dateFromStringWithISO8601Format:(id)arg1;
+ (id)dateFromString:(id)arg1 possibleFormats:(id)arg2;
- (id)fc_stringWithYearAndMonthFormat;
- (_Bool)fc_isSameDayAs:(id)arg1;
@property(readonly, nonatomic) _Bool fc_isWeekend;
- (_Bool)isToday;
- (unsigned long long)fc_millisecondTimeIntervalSinceDate:(id)arg1;
- (unsigned long long)fc_millisecondTimeIntervalSince1970;
- (id)fc_dateBySubtractingTimeInterval:(double)arg1;
- (_Bool)fc_isWithinTimeInterval:(double)arg1 ofDate:(id)arg2;
- (_Bool)fc_isLaterThanOrEqualTo:(id)arg1;
- (_Bool)fc_isLaterThan:(id)arg1;
- (_Bool)fc_isEarlierThanOrEqualTo:(id)arg1;
- (_Bool)fc_isEarlierThan:(id)arg1;
@property(readonly) double fc_timeIntervalUntilNow;
@end

