//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseFilter.h>

#import <MapsSuggestions/MapsSuggestionsFilter-Protocol.h>

@class NSDate, NSString, RTRoutineManager;

@interface MapsSuggestionsCommuteOnlyFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter>
{
    RTRoutineManager *_routineManager;
    NSDate *_exitDate;
    NSDate *_overriddenCurrentTime;
}

+ (_Bool)isEnabled;
- (void).cxx_destruct;
- (_Bool)shouldKeepEntry:(id)arg1;
- (id)_bestAvailableDateForEntry:(id)arg1 now:(id)arg2;
- (id)_exitDateDepartureWindow;
- (id)_lastVisitDateArrivalWindowForEntry:(id)arg1 now:(id)arg2;
- (id)_lastVisitDateMovedToTodayForEntry:(id)arg1 now:(id)arg2;
- (id)_entryDateArrivalWindowForEntry:(id)arg1;
- (void)_setEstimatedExitTime:(id)arg1;
- (id)_currentTime;
- (void)_overrideCurrentTime:(id)arg1;
- (void)updateExitTimeEstimationForLocation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

