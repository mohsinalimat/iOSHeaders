//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedTransitTripRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_LineProgression : _GEORouteMatchUpdater
{
    GEOComposedTransitTripRouteStep *_boardStep;
    GEOComposedTransitTripRouteStep *_alightStep;
    struct PolylineCoordinate _startRouteCoordinate;
}

- (id).cxx_construct;
- (unsigned long long)priority;
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (void)dealloc;
- (id)initWithTransitRouteMatcher:(id)arg1 tripLeg:(id)arg2;

@end

