//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapTransitPoint-Protocol.h>

@class GEOMapAccess, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitNodeBase : NSObject <GEOMapTransitPoint>
{
    GEOMapAccess *_map;
    shared_ptr_52e51bdf _node;
    double _boundingRadius;
    CDStruct_02837cd9 _boundingRect;
    CDStruct_c3b9c2ee *_polygonPoints;
    long long _polygonPointsCount;
}

@property(readonly, nonatomic) long long polygonPointsCount; // @synthesize polygonPointsCount=_polygonPointsCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *polygonPoints; // @synthesize polygonPoints=_polygonPoints;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingRect; // @synthesize boundingRect=_boundingRect;
@property(readonly, nonatomic) double boundingRadius; // @synthesize boundingRadius=_boundingRadius;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)findAccessPoints:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)distanceInMetersFrom:(CDStruct_c3b9c2ee)arg1;
- (id)findGeometryWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) unsigned long long transitID;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)dealloc;
- (id)initWithMap:(id)arg1 node:(shared_ptr_52e51bdf)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

