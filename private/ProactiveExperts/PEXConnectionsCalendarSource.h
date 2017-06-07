//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveExperts/PEXConnectionsSource.h>

#import <ProactiveExperts/PEXConnectionsLocationSource-Protocol.h>

@class EKEventStore, NSArray, NSCache, NSObject, NSString, PEXEventCache;
@protocol OS_dispatch_queue;

@interface PEXConnectionsCalendarSource : PEXConnectionsSource <PEXConnectionsLocationSource>
{
    NSCache *_ekEventsCache;
    EKEventStore *_eventStore;
    NSArray *_calendars;
    _Bool _eventStoreAccessGranted;
    PEXEventCache *_eventCache;
    NSObject<OS_dispatch_queue> *_eventLoadingQueue;
}

+ (id)locationValueFromEKEvent:(id)arg1;
+ (id)locationLabelFromEKEvent:(id)arg1;
+ (id)locationNameFromEKEvent:(id)arg1;
+ (id)identifier;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)preloadEKEvents;
- (void)clearEKEventCaches;
- (void)registerForCalendarNotifications;
- (void)setEventStoreAccessGranted:(_Bool)arg1;
- (void)requestAccessToEventStore;
- (id)ekEventWithExternalID:(id)arg1;
- (id)_loadCalendars;
- (_Bool)isCalendarEventEligibleForLocationPrediction:(id)arg1;
- (id)_filterOutAllDayAndMultiDayEvents:(id)arg1;
- (id)_predicateForRange:(struct _NSRange)arg1;
- (id)upcomingCalendarEventsOfInterestFrom:(id)arg1 lookaheadTime:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
