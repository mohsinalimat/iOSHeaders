//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/VKTrackableAnnotationPresentation-Protocol.h>

@class GEORouteMatch;
@protocol VKRouteMatchedAnnotationPresentationObserver;

@protocol VKRouteMatchedAnnotationPresentation <VKTrackableAnnotationPresentation>
@property(retain, nonatomic) GEORouteMatch *routeMatch;
- (void)removePresentationCoordinateChangedObserver:(id <VKRouteMatchedAnnotationPresentationObserver>)arg1;
- (void)addPresentationCoordinateChangedObserver:(id <VKRouteMatchedAnnotationPresentationObserver>)arg1;
@end
