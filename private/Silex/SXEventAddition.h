//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXAddition.h>

@class NSDate, NSString, NSTimeZone, SXAction;

@interface SXEventAddition : SXAddition
{
    _Bool endDateIsAllDay;
    _Bool startDateIsAllDay;
    NSDate *cachedStartDate;
    NSDate *cachedEndDate;
    NSTimeZone *startTimeZone;
    NSTimeZone *endTimeZone;
    NSTimeZone *_timeZone;
    SXAction *_action;
}

+ (id)typeString;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSTimeZone *endTimeZone; // @synthesize endTimeZone;
@property(retain, nonatomic) NSTimeZone *startTimeZone; // @synthesize startTimeZone;
@property(nonatomic) _Bool startDateIsAllDay; // @synthesize startDateIsAllDay;
@property(nonatomic) _Bool endDateIsAllDay; // @synthesize endDateIsAllDay;
@property(retain, nonatomic) NSDate *cachedEndDate; // @synthesize cachedEndDate;
@property(retain, nonatomic) NSDate *cachedStartDate; // @synthesize cachedStartDate;
- (void).cxx_destruct;
- (id)action;
- (_Bool)validRange:(struct _NSRange)arg1;
- (id)dateFromString:(id)arg1 containedTime:(_Bool *)arg2 containedTimeZone:(id *)arg3;
- (id)calendarEventWithStore:(id)arg1;
@property(readonly, nonatomic) _Bool allDay;
- (id)endDateWithValue:(id)arg1 withType:(int)arg2;
- (id)startDateWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) NSDate *endDate; // @dynamic endDate;
@property(readonly, nonatomic) NSString *location; // @dynamic location;
@property(readonly, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(readonly, nonatomic) NSString *title; // @dynamic title;

@end

