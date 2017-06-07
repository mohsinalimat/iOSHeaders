//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOMapLine-Protocol.h>

@class GEOMapAccess, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessLine : NSObject <GEOMapLine>
{
    GEOMapAccess *_map;
    shared_ptr_035a2da2 _edge;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D>> _coordinates;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)distanceFromCoordinate:(CDStruct_c3b9c2ee)arg1 outSegmentCoordinate:(struct PolylineCoordinate *)arg2;
@property(readonly, nonatomic) double length;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *coordinates;
@property(readonly, nonatomic) unsigned long long coordinateCount;
- (void)dealloc;
- (id)initWithMap:(id)arg1 edge:(shared_ptr_035a2da2)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

