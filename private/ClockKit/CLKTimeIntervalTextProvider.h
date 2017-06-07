//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKTextProvider.h>

@class NSArray, NSDate, NSDateFormatter, NSTimeZone;

@interface CLKTimeIntervalTextProvider : CLKTextProvider
{
    NSDateFormatter *_dateFormatter;
    NSArray *_fallbackSequence;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
}

+ (_Bool)supportsSecureCoding;
+ (id)finalizedTextProviderWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3;
+ (id)finalizedTextProviderWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)textProviderWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3;
+ (id)textProviderWithStartDate:(id)arg1 endDate:(id)arg2;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)_dateIntervalAttributedTextWithStyle:(id)arg1 narrow:(_Bool)arg2;
- (id)_timeIntervalAttributedTextWithStyle:(id)arg1 dropMinutes:(_Bool)arg2 onlyStartDate:(_Bool)arg3;
- (id)_dateIntervalNarrowAttributedTextWithStyle:(id)arg1;
- (id)_dateIntervalWideAttributedTextWithStyle:(id)arg1;
- (id)_startTimeDropMinutesAttributedTextWithStyle:(id)arg1;
- (id)_startTimeFullAttributedTextWithStyle:(id)arg1;
- (id)_timeIntervalDropMinutesAttributedTextWithStyle:(id)arg1;
- (id)_timeIntervalFullAttributedTextWithStyle:(id)arg1;
- (id)_attributedTextForSequenceItem:(long long)arg1 style:(id)arg2;
- (id)_fallbackSequence;
- (id)_stringByRemovingDesignatorRange:(struct _NSRange)arg1 fromString:(id)arg2;
- (struct _NSRange)_rangeOfAnnontatedTime:(id)arg1 matchingPattern:(CDUnknownBlockType)arg2;
- (struct _NSRange)_rangeOfHoursInAnnotatedTime:(id)arg1;
- (struct _NSRange)_rangeOfDesignatorInAnnotatedTime:(id)arg1;
- (void)_validate;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;

@end

