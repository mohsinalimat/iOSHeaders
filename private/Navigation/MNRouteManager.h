//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNLocationManagerObserver-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEOETARoute, GEORoutePreloader, GEORouteSet, MNActiveRouteDetails, MNRoutePlanningDetails, NSString;

__attribute__((visibility("hidden")))
@interface MNRouteManager : NSObject <MNLocationManagerObserver>
{
    GEORouteSet *_currentRouteSet;
    GEOComposedRoute *_currentRoute;
    GEOETARoute *_etaRoute;
    GEOComposedWaypoint *_originalDestination;
    GEOComposedRoute *_originalRoute;
    MNRoutePlanningDetails *_routePlanningDetails;
    MNActiveRouteDetails *_activeRouteDetails;
    int _guidanceLevel;
    GEORoutePreloader *_preloader;
    NSString *_tileLoaderClientIdentifier;
}

@property(readonly, nonatomic) MNActiveRouteDetails *activeRouteDetails; // @synthesize activeRouteDetails=_activeRouteDetails;
@property(readonly, nonatomic) MNRoutePlanningDetails *routePlanningDetails; // @synthesize routePlanningDetails=_routePlanningDetails;
@property(readonly, nonatomic) GEOComposedRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(readonly, nonatomic) GEOComposedWaypoint *originalDestination; // @synthesize originalDestination=_originalDestination;
@property(readonly, nonatomic) GEOETARoute *etaRoute; // @synthesize etaRoute=_etaRoute;
@property(readonly, nonatomic) GEOComposedRoute *currentRoute; // @synthesize currentRoute=_currentRoute;
@property(readonly, nonatomic) GEORouteSet *currentRouteSet; // @synthesize currentRouteSet=_currentRouteSet;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)_updatePreloaderForCurrentGuidanceLevel;
- (void)_updatePreloaderForNewRoute;
- (void)_clearPreloader;
- (void)clearCurrentRoute;
- (void)updateForLocation:(id)arg1;
- (void)updateForGuidanceLevel:(int)arg1;
- (void)updateForETA:(id)arg1 forRoute:(id)arg2;
- (void)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (_Bool)updateForRoutePlanningDetails:(id)arg1 outError:(out id *)arg2;
- (void)close;
- (void)open;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

