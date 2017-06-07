//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/VKImageCanvasDelegate-Protocol.h>

@class GEOResourceManifestConfiguration, GGLImageCanvas, NSLocale, VKGlobeImageCanvas, VKMapImageCanvas, VKMemoryObserver;

@interface VKMapSnapshotCreator : NSObject <VKImageCanvasDelegate>
{
    VKMapImageCanvas *_mapCanvas;
    VKGlobeImageCanvas *_globeCanvas;
    long long _mapType;
    CDStruct_80aa614a _mapDisplayStyle;
    _Bool _didBecomeFullyDrawn;
    _Bool _hasFailedTiles;
    CDUnknownBlockType _completion;
    struct Renderer *_renderer;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    GGLImageCanvas *_displayTarget;
    VKMemoryObserver *_memoryObserver;
}

+ (_Bool)supportsSharingThumbnails;
+ (_Bool)supportsHighResolutionSnapshots;
@property(nonatomic) CDStruct_80aa614a mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)imageCanvasDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(_Bool)arg2;
- (void)imageCanvasWillBecomeFullyDrawn:(id)arg1;
- (void)cancelFlushingTileDecodes:(_Bool)arg1;
- (void)cancel;
- (void)renderRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderSnapshot:(CDUnknownBlockType)arg1;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)lookAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 z:(unsigned long long)arg3;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (_Bool)isRoadClassDisabled:(int)arg1;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)addCustomFeatureDataSource:(id)arg1;
@property(nonatomic) long long labelScaleFactor;
@property(nonatomic) _Bool showsBuildings;
@property(nonatomic) _Bool showsPointsOfInterest;
@property(nonatomic) _Bool localizeLabels;
- (void)_transferSettingsFrom:(id)arg1 to:(id)arg2;
@property(nonatomic) long long mapType;
@property(readonly) struct CGSize size;
- (id)activeCanvas;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 homeQueue:(id)arg3;

@end

