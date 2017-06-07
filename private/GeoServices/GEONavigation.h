//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOComposedRoute, GEOLocation, GEONavigationDetails, GEONavigationGuidanceState, GEORouteMatch, NSData, NSDate, NSPointerArray, NSString, NSTimer, NSXPCConnection;
@protocol GEORoutePreloadSession;

@interface GEONavigation : NSObject
{
    NSPointerArray *_observers;
    GEONavigationDetails *_details;
    id <GEORoutePreloadSession> _preloadSession;
    GEONavigationGuidanceState *_guidanceState;
    GEOLocation *_previousLocation;
    NSDate *_arrivalDate;
    NSXPCConnection *_nanomapscdConnection;
    _Bool _hasStartedGuidance;
    NSTimer *_etaUpdateTimer;
    _Bool _forceUpdateETA;
    NSDate *_displayETA;
    double _displayRemainingTime;
    _Bool _shouldSendRouteWithStatus;
    NSData *_lastSentRouteContext;
}

+ (_Bool)canNavigateWithTransportType:(int)arg1;
+ (_Bool)canRunNavigationForRoute:(id)arg1 withCurrentLocation:(id)arg2;
+ (_Bool)_canRunNavigationBasedOnDistanceForRoute:(id)arg1 withCurrentLocation:(id)arg2;
+ (id)displayDateForDate:(id)arg1;
+ (double)displayTimeIntervalForTimeInterval:(double)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(readonly, nonatomic) _Bool hasStartedGuidance; // @synthesize hasStartedGuidance=_hasStartedGuidance;
- (void)_closeNanomapscdConnection;
- (void)_createNanomapscdConnection;
- (void)_notifyObserversOfGuidanceStateChange;
- (void)_updateETA;
- (void)_forceUpdateETA;
- (void)_clearETATimer;
- (void)updateLocation:(id)arg1 routeMatch:(id)arg2 etaRoute:(id)arg3 locationUnreliable:(_Bool)arg4;
@property(readonly, nonatomic) double timeUntilNextAnnouncement;
- (void)setNextAnnouncementStage:(unsigned long long)arg1 andTime:(double)arg2;
@property(readonly, nonatomic) unsigned long long nextAnnouncementStage;
@property(nonatomic) unsigned long long announcementStage;
@property(nonatomic) int navigationTransportType;
@property(readonly, nonatomic) int guidanceLevelIgnoringTimeCriterion;
@property(nonatomic) int guidanceLevel;
- (void)_updateNavigationGuidanceStateCellularDataAlertsAttribute:(_Bool)arg1;
@property(readonly, nonatomic) _Bool shouldSuppressCellularDataAlerts;
@property(nonatomic) int navigationState;
@property(readonly, nonatomic) _Bool locationUnreliable;
@property(readonly, nonatomic) _Bool isNavigating;
@property(readonly, nonatomic) double remainingTime;
@property(readonly, nonatomic) double distanceRemainingOnRoute;
@property(readonly, nonatomic) double distanceToRoute;
@property(readonly, nonatomic) double distanceToManeuverEnd;
@property(readonly, nonatomic) double distanceToManeuverStart;
@property(readonly, nonatomic) GEORouteMatch *routeMatch;
@property(readonly, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) NSString *destinationName;
- (void)setRoute:(id)arg1;
@property(readonly, nonatomic) GEOComposedRoute *route;
- (void)updatedETA:(id)arg1;
- (void)recalculatedToRoute:(id)arg1 location:(id)arg2 routeMatch:(id)arg3;
- (void)updateRouteGuidanceLevelForLocation:(id)arg1 shouldFilterLocationUpdatesOnDistance:(_Bool)arg2;
- (void)updatePreloaderWithGuidanceLevel:(int)arg1;
- (id)preloadSessionForRoute:(id)arg1 loggingEnabled:(_Bool)arg2 minimalDebugging:(_Bool)arg3 fullDebugging:(_Bool)arg4 delegate:(id)arg5 traits:(id)arg6 withBatteryHandler:(CDUnknownBlockType)arg7;
- (void)stopTurnByTurnNavigation;
- (void)startTurnByTurnNavigationForTransportType:(int)arg1 state:(int)arg2;
- (void)stopTracking;
- (void)startTrackingFromLocation:(id)arg1;
- (void)selectRoute:(id)arg1 currentLocation:(id)arg2;
- (void)stop;
- (void)startWithDestinationName:(id)arg1 stringFormatter:(id)arg2;
- (void)_updateNavigationRouteStatus;
- (void)sendNavigationStatus;
- (void)_updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2 routeContext:(id)arg3;
@property(nonatomic) long long displayStep;
@property(nonatomic) _Bool guidancePromptsEnabled;
- (void)_invalidateNavigationSessionWithRouteContext:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

