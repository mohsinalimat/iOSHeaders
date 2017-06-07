//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKTextProvider.h>

@class NSDate, NSDateComponents, NSDateComponentsFormatter, NSString;

@interface CLKRelativeDateTextProvider : CLKTextProvider
{
    NSDateComponentsFormatter *_formatter;
    NSDateComponents *_sessionComponents;
    unsigned long long _sessionVisibleUnits;
    NSString *_sessionCacheKey;
    long long _sessionTimePeriod;
    double _elapsedTime;
    _Bool _disableSmallCapUnits;
    _Bool _twoDigitMinuteZeroPadding;
    _Bool _wantsSubseconds;
    NSDate *_date;
    long long _relativeDateStyle;
    unsigned long long _calendarUnits;
    NSDate *_overrideDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)textProviderWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3;
@property(nonatomic) _Bool wantsSubseconds; // @synthesize wantsSubseconds=_wantsSubseconds;
@property(nonatomic) _Bool twoDigitMinuteZeroPadding; // @synthesize twoDigitMinuteZeroPadding=_twoDigitMinuteZeroPadding;
@property(nonatomic) _Bool disableSmallCapUnits; // @synthesize disableSmallCapUnits=_disableSmallCapUnits;
@property(retain, nonatomic) NSDate *overrideDate; // @synthesize overrideDate=_overrideDate;
@property(nonatomic) unsigned long long calendarUnits; // @synthesize calendarUnits=_calendarUnits;
@property(nonatomic) long long relativeDateStyle; // @synthesize relativeDateStyle=_relativeDateStyle;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)_configureFormatterForTimerStyle;
- (_Bool)_configureFormatterForFallbackIndex:(unsigned long long)arg1;
- (id)_componentsForDate:(id)arg1 visibleUnits:(unsigned long long *)arg2;
- (long long)_updateFrequency;
- (void)_validate;
- (void)_endSession;
- (id)_stringWithSign:(id)arg1;
- (long long)_timePeriodForElapsedTime:(double)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)_sessionCacheKey;
- (void)_startSessionWithDate:(id)arg1;

@end

