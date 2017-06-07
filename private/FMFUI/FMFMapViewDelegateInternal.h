//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMFUI/MKMapViewDelegate-Protocol.h>
#import <FMFUI/UIGestureRecognizerDelegate-Protocol.h>

@class FMAnnotationView, FMFWildcardGestureRecognizer, MKMapView, NSString;
@protocol FMFMapViewDelegateInternalDelegate;

__attribute__((visibility("hidden")))
@interface FMFMapViewDelegateInternal : NSObject <UIGestureRecognizerDelegate, MKMapViewDelegate>
{
    _Bool _isMapCenteringDisabled;
    _Bool _respondingToUserTouch;
    id <FMFMapViewDelegateInternalDelegate> _delegate;
    FMFWildcardGestureRecognizer *_gr;
    FMAnnotationView *_selectedAnnotationView;
    MKMapView *_mapView;
    struct CLLocationCoordinate2D _lastUserLocationCoordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D lastUserLocationCoordinate; // @synthesize lastUserLocationCoordinate=_lastUserLocationCoordinate;
@property(nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) FMAnnotationView *selectedAnnotationView; // @synthesize selectedAnnotationView=_selectedAnnotationView;
@property(retain, nonatomic) FMFWildcardGestureRecognizer *gr; // @synthesize gr=_gr;
@property(nonatomic) _Bool respondingToUserTouch; // @synthesize respondingToUserTouch=_respondingToUserTouch;
@property(nonatomic) __weak id <FMFMapViewDelegateInternalDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isMapCenteringDisabled; // @synthesize isMapCenteringDisabled=_isMapCenteringDisabled;
- (void).cxx_destruct;
- (_Bool)regionIsValid:(CDStruct_26e8d939)arg1;
- (struct UIEdgeInsets)edgeInsetsWithMinApplied:(struct UIEdgeInsets)arg1;
- (CDStruct_90e2a262)mapRectMakeWithRadialDistanceForCoordinate:(struct CLLocationCoordinate2D)arg1 andRadius:(double)arg2;
- (void)zoomToFitAnnotationsForMapView:(id)arg1 includeMe:(_Bool)arg2 disallowAnimation:(_Bool)arg3;
- (void)zoomToFitLocation:(id)arg1 forMapView:(id)arg2;
- (void)_moveCenterByOffset:(struct CGPoint)arg1 from:(struct CLLocationCoordinate2D)arg2 mapView:(id)arg3;
- (void)slideAnnotation:(id)arg1 intoViewIfNeededForMapView:(id)arg2;
- (void)updateOverlaysForAnnotationMove:(id)arg1 mapView:(id)arg2;
- (id)accuracyCircleForLocation:(id)arg1;
- (id)fmfOverlayColorSatellite;
- (id)fmfOverlayColor;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)selectAnnotation:(id)arg1;
- (_Bool)canSelectAnnotation:(id)arg1;
- (void)endTouches;
- (id)initWithDelegate:(id)arg1 mapView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

