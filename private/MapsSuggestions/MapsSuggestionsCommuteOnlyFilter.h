//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseFilter.h>

#import <MapsSuggestions/MapsSuggestionsFilter-Protocol.h>

@class NSDateInterval, NSObject, NSString, RTRoutineManager;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsCommuteOnlyFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter>
{
    NSDateInterval *_commuteWindow;
    NSObject<OS_dispatch_queue> *_queue;
    RTRoutineManager *_routineManager;
}

+ (_Bool)isEnabled;
- (void).cxx_destruct;
- (_Bool)shouldKeepEntry:(id)arg1;
- (void)setEstimatedExitTime:(id)arg1;
- (void)_setEstimatedExitTime:(id)arg1;
- (void)updateExitTimeEstimationForLocation:(id)arg1;
@property(readonly, nonatomic) NSDateInterval *commuteWindow;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end
