//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FMFUI/NSObject-Protocol.h>

@class FMFHandle, FMFLocation, MKUserLocation, UIColor, UIImage;
@protocol MKAnnotation;

@protocol FMFMapViewDelegateInternalDelegate <NSObject>
- (UIColor *)_internalAnnotationTintColor;
- (UIImage *)annotationImageForAnnotation:(FMFLocation *)arg1 andHandle:(FMFHandle *)arg2;
- (struct UIEdgeInsets)edgeInsets;
- (_Bool)alwaysShowAccuracy;
- (_Bool)canSelectAnnotation:(id <MKAnnotation>)arg1;
- (_Bool)viewWillAppearCalled;
- (void)mapViewDidFinishRenderingMap;
- (_Bool)shouldZoomToFitMeAndLocations;
- (void)setShouldZoomToFitNewLocations:(_Bool)arg1;
- (void)didUpdateUserLocation:(MKUserLocation *)arg1;
- (void)reZoomToFit;
- (void)regionDidChangeAnimated:(_Bool)arg1;
- (void)regionWillChangeAnimated:(_Bool)arg1;
- (void)didDeselectLocation:(FMFLocation *)arg1;
- (void)didSelectLocation:(FMFLocation *)arg1;
@end

