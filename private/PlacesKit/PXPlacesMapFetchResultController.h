//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PXPlacesMapController, PXPlacesMapPipeline, PXPlacesMapView, PXPlacesPhotoAssetsStore;
@protocol OS_dispatch_queue, PXPlacesMapControllerAccess, PXPlacesMapGeotaggableInfoDelegate;

@interface PXPlacesMapFetchResultController : NSObject
{
    id <PXPlacesMapControllerAccess> _mapViewController;
    unsigned long long _contentMode;
    id <PXPlacesMapGeotaggableInfoDelegate> _geotaggableInfoDelegate;
    PXPlacesPhotoAssetsStore *_providedAssetStore;
    PXPlacesMapPipeline *_providedPipeline;
    PXPlacesPhotoAssetsStore *_albumAssetStore;
    PXPlacesMapPipeline *_albumPipeline;
    PXPlacesMapPipeline *_currentPipeline;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) PXPlacesMapPipeline *currentPipeline; // @synthesize currentPipeline=_currentPipeline;
@property(retain, nonatomic) PXPlacesMapPipeline *albumPipeline; // @synthesize albumPipeline=_albumPipeline;
@property(retain, nonatomic) PXPlacesPhotoAssetsStore *albumAssetStore; // @synthesize albumAssetStore=_albumAssetStore;
@property(retain) PXPlacesMapPipeline *providedPipeline; // @synthesize providedPipeline=_providedPipeline;
@property(retain) PXPlacesPhotoAssetsStore *providedAssetStore; // @synthesize providedAssetStore=_providedAssetStore;
@property(nonatomic) __weak id <PXPlacesMapGeotaggableInfoDelegate> geotaggableInfoDelegate; // @synthesize geotaggableInfoDelegate=_geotaggableInfoDelegate;
@property(nonatomic) unsigned long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) id <PXPlacesMapControllerAccess> mapViewController; // @synthesize mapViewController=_mapViewController;
- (void).cxx_destruct;
- (void)focusOnGeotaggablesAnimated:(_Bool)arg1;
- (void)focusOnProvidedAssetsImmediately;
- (void)focusOnProvidedAssetsAnimated:(_Bool)arg1;
- (void)resumeWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadProvidedAssetStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadFetchResult:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadFetchResults:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)reloadContentModeWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentAssetStore;
- (id)visibleGeotaggables;
@property(readonly, nonatomic) PXPlacesMapController *mapController;
@property(readonly, nonatomic) PXPlacesMapView *mapView;
- (id)initWithGeotaggableInfoDelegate:(id)arg1 andMapViewController:(id)arg2;

@end

