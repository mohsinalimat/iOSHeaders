//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PlacesKit/PXPlacesMapPipelineComponent-Protocol.h>

@class NSOrderedSet, PXPlacesMapView;
@protocol PXPlacesMapRenderable;

@protocol PXPlacesMapSelectionHandler <PXPlacesMapPipelineComponent>
- (NSOrderedSet *)selectedGeotaggablesForRenderable:(id <PXPlacesMapRenderable>)arg1 mapView:(PXPlacesMapView *)arg2;
@end

