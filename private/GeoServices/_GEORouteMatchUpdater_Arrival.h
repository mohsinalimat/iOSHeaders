//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_Arrival : _GEORouteMatchUpdater
{
    GEOComposedRouteStep *_arrivalStep;
    GEOComposedRouteStep *_previousExitStationStep;
    struct PolylineCoordinate _arrivalRouteCoordinate;
    CDStruct_2c43369c _destinationLocationCoordinate;
}

- (id).cxx_construct;
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 arrivalStep:(id)arg2;

@end

