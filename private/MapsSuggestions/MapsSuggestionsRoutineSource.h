//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class GEOLocationShifter, NSArray, NSObject, NSString, RTRoutineManager;
@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsRoutineSource : MapsSuggestionsBaseSource <MapsSuggestionsSource>
{
    RTRoutineManager *_routineManager;
    struct NSArray *_previouslyAddedEntries;
    NSArray *_homeAddresses;
    NSArray *_workAddresses;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _running;
    NSObject<OS_dispatch_source> *_updateTimer;
    double _weightDecreasePerPosition;
    GEOLocationShifter *_locationShifter;
}

+ (unsigned long long)disposition;
+ (_Bool)isEnabled;
- (void).cxx_destruct;
- (void)_requestTouristInfoFromRoutineIfNeededForLocation:(id)arg1;
- (_Bool)canProduceEntriesOfType:(unsigned long long)arg1;
- (double)updateSuggestionEntries;
- (void)stop;
- (void)start;
- (void)_startMonitoringVehicleEvents;
- (void)_updateSuggestionEntries;
- (id)_suggestionEntryForPredictedLOI:(id)arg1;
- (_Bool)_addResumeRouteFieldsToSuggestionEntry:(id)arg1 fromSource:(id)arg2;
- (_Bool)_addRecentsFieldsToSuggestionEntry:(id)arg1 fromSource:(id)arg2;
- (_Bool)_addCalendarFieldsToSuggestionEntry:(id)arg1 fromSource:(id)arg2;
- (_Bool)_addParkedCarFieldsToSuggestionsEntry:(id)arg1 vehicleEvent:(id)arg2;
- (_Bool)_addFieldsToSuggestionsEntry:(id)arg1 fromMapItem:(id)arg2;
- (void)_addLabelForEntry:(id)arg1;
- (id)_extractTitleAndSubtitleFromMapItem:(id)arg1 forType:(unsigned long long)arg2;
- (int)_convertTransportType:(long long)arg1;
- (unsigned long long)_convertType:(long long)arg1 source:(id)arg2 typeSource:(long long)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end
