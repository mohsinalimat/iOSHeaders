//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOMapEdgeFinder.h>

__attribute__((visibility("hidden")))
@interface GEOMapEdgeTransitFinder : GEOMapEdgeFinder
{
    struct unordered_set<geo::TransitEdgePiece, std::__1::hash<geo::TransitEdgePiece>, std::__1::equal_to<geo::TransitEdgePiece>, std::__1::allocator<geo::TransitEdgePiece>> _piecesConsidered;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_checkEdgeForDuplicates:(const shared_ptr_035a2da2 *)arg1;
- (void)_buildersInTile:(id)arg1 localPoint:(const Matrix_8746f91e *)arg2 localRadiusSqr:(float)arg3 localSearch:(const Box_3fb92e00 *)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;

@end
