//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOComposedRouteTransitTripSection.h>

@interface GEOComposedRouteTransitTripSection (RenderRegion)
- (id)unsnappedPathsInOverlay:(id)arg1;
- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(_Bool)arg3 verifySnapping:(_Bool)arg4;
- (_Bool)_getEndPoints:(id)arg1 gmRect:(const CDStruct_90e2a262 *)arg2 result:(vector_e20517dc *)arg3;
- (_Bool)_getEndPoints:(id)arg1 rect:(const Box_3d7e3c2c *)arg2 result:(vector_e20517dc *)arg3;
- (void)_getPointOnPath:(id)arg1 index:(int)arg2 bounds:(const Box_3d7e3c2c *)arg3 result:(Matrix_2bdd42a3 *)arg4;
@end

