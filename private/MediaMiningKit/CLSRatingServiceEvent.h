//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSRatingService.h>

@class CLSSocialServiceCalendar;

@interface CLSRatingServiceEvent : CLSRatingService
{
    CLSSocialServiceCalendar *_socialService;
    float _calendarCountWeight;
    float _eventFrequencyWeight;
    float _organizerFrequencyWeight;
    float _locationFrequencyWeight;
    float _eventsWeight;
    float _organizerWeight;
    float _titleWeight;
    float _locationWeight;
    float _attendeesWeight;
    float _recurrenceWeight;
    float _allDayWeight;
    float _attendeeCountWeight;
    float _attendeeNameWeight;
    float _attendeeEmailWeight;
    float _attendeePersonWeight;
    float _calendarCountLimit;
    float _eventFrequencyLimit;
    float _organizerFrequencyLimit;
    float _locationFrequencyLimit;
    float _attendeeCountLimit;
    float _eventsFrequencyThreshold;
    float _locationFrequencyThreshold;
    double _timeSpan;
}

@property(nonatomic) double timeSpan; // @synthesize timeSpan=_timeSpan;
- (void).cxx_destruct;
- (id)_rateForEvent:(id)arg1 forProperties:(id)arg2 withWeight:(float)arg3;
- (id)usageRateWithWeight:(float)arg1 andOperation:(id)arg2;
- (id)localRateWithWeight:(float)arg1 andOperation:(id)arg2;
- (id)absoluteRateWithWeight:(float)arg1 andOperation:(id)arg2;
- (id)rateForProperties:(id)arg1 withWeight:(float)arg2 andOperation:(id)arg3;
- (id)checklistsWithOperation:(id)arg1;
- (void)setWeightsAndLimits:(id)arg1;
- (id)initWithWeightsAndLimits:(id)arg1 andTimeSpan:(double)arg2;
- (id)initWithPlist:(id)arg1;
- (id)init;

@end

