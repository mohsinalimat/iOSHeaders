//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/VKOverlay-Protocol.h>

@class GEOMapRegion, NSMutableSet, NSSet, NSString, VKPolylineOverlay;

@interface VKPolylineGroupOverlay : NSObject <VKOverlay>
{
    NSMutableSet *_polylines;
    GEOMapRegion *_boundingMapRegion;
    struct __CFSet *_observers;
    VKPolylineOverlay *_selectedPolyline;
    _Bool _containsTransit;
}

@property(readonly, nonatomic) _Bool containsTransit; // @synthesize containsTransit=_containsTransit;
@property(retain, nonatomic) VKPolylineOverlay *selectedPolyline; // @synthesize selectedPolyline=_selectedPolyline;
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(readonly, nonatomic) NSSet *polylines; // @synthesize polylines=_polylines;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)_updateContainsTransit;
- (void)_updateBoundingMapRegion;
- (void)removePolyline:(id)arg1;
- (void)addPolyline:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
