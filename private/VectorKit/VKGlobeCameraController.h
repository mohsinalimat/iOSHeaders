//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKScreenCameraController.h>

#import <VectorKit/VKGesturingCameraController-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKGlobeCameraController : VKScreenCameraController <VKGesturingCameraController>
{
    // Error parsing type: ^{GlobeView=^^?^{GeoServicesLoader}^{ManifestManager}^{TriggerManager}{shared_ptr<altitude::AnchorManager>=^{AnchorManager}^{__shared_weak_count}}^{DtmCacheNode}^{DtmRequestManager}^{FreezeViewNode}{Projection={Perspective=dddd}{Ortho=dddddd}BB}{CameraFrame<geo::Radians, double>={Coordinate3D<Radians, double>={Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<MeterUnitDescription, double>=d}}{Unit<MeterUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}}B{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{vector<altitude::SimpleTileKey, std::__1::allocator<altitude::SimpleTileKey> >=^{SimpleTileKey}^{SimpleTileKey}{__compressed_pair<altitude::SimpleTileKey *, std::__1::allocator<altitude::SimpleTileKey> >=^{SimpleTileKey}}}BII^{VKClassicGlobeCanvas}BB{AnimationManager={AnimationReferenceTimer=ddd}{unique_ptr<altitude::AnimationTimer, std::__1::default_delete<altitude::AnimationTimer> >={__compressed_pair<altitude::AnimationTimer *, std::__1::default_delete<altitude::AnimationTimer> >=^{AnimationTimer}}}d{vector<altitude::AnimationObjectHolder, std::__1::allocator<altitude::AnimationObjectHolder> >=^{AnimationObjectHolder}^{AnimationObjectHolder}{__compressed_pair<altitude::AnimationObjectHolder *, std::__1::allocator<altitude::AnimationObjectHolder> >=^{AnimationObjectHolder}}}}{Timer=d}dBddd{CameraFrame<geo::Radians, double>={Coordinate3D<Radians, double>={Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<MeterUnitDescription, double>=d}}{Unit<MeterUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}}^{C3mmRequestManager}^{RenderableGroup}IdBB^{LabelDataManagerPrivate}BBBB^{RouteLineManager}^{GlobeCleanupLoader}^{CompleteGlobeTileSetCullingGraph}^{CompleteGlobeTileSetLoader}^{TileSetNode}^{GlobeTileRenderManager}^{CullingNode}^{EarthAdjustedViewNode}^{UserViewNode}^{View}^{BasicViewNode}^{GlobeMainViewNode}^{C3bRequestManager}fB{shared_ptr<bool>=^B^{__shared_weak_count}}^{HeightRequestManager}{map<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> >, altitude::GlobeView::LessVector2i, std::__1::allocator<std::__1::pair<const gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > > > >={__tree<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, altitude::GlobeView::LessVector2i, true>, std::__1::allocator<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, altitude::GlobeView::LessVector2i, true> >=Q}}}{Mutex=^v}{shared_ptr<altitude::Stylesheet>=^{Stylesheet}^{__shared_weak_count}}^{FlyoverTour}B{Viewport=iiii}B{set<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> >={__tree<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<altitude::ManifestListener *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<altitude::ManifestListener *> >=Q}}}^{TileManager}^{ObjectTreeLoader}^{QuickSurfaceManager}^{IntersectorHeight}{shared_ptr<karo::SharedItemManager<altitude::Map, altitude::MapRequestId> >=^{SharedItemManager<altitude::Map, altitude::MapRequestId>}^{__shared_weak_count}}^{BundleLoader}^{ProtocolLoader}^{GeoResourceManager}^{GeoResourceLoader}^{ViewNode}^{ViewportNode}^{View}^{Viewport}{shared_ptr<ggl::RenderState>=^{RenderState}^{__shared_weak_count}}I^{Statistics}{atomic<bool>=AB}^{TexturePager}^{IOSurfacePool}^{RealisticRenderer}{DclpUnique<ggl::Texture2D, altitude::util::DclpDefaultDelete<ggl::Texture2D> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<ggl::Texture2D *>=A^{Texture2D}}{function<ggl::Texture2D *()>={type=[32C]}^{__base<ggl::Texture2D *()>}}}{DclpUnique<altitude::TextureMap, altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[32C]}^{__base<altitude::TextureMap *()>}}}{DclpUnique<altitude::TextureMap, altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[32C]}^{__base<altitude::TextureMap *()>}}}}, name: _globeView
    struct CameraManager _cameraManager;
    double _currentDoublePanPitch;
    _Bool _isPitching;
    _Bool _isRotating;
    _Bool _wasPitched;
    _Bool _couldEnter3DMode;
    double _currentZoomLevel;
    double _maxZoomLevel;
    double _lastRotation;
    struct CGPoint _panStartScreenPoint;
    struct CGPoint _panLastScreenPoint;
    double _beganDoublePanPitch;
    shared_ptr_e963992e _taskContext;
    _Bool _tourShouldResumeWhenDoneGesturing;
}

@property(nonatomic) _Bool tourShouldResumeWhenDoneGesturing; // @synthesize tourShouldResumeWhenDoneGesturing=_tourShouldResumeWhenDoneGesturing;
// Error parsing type for property globeView:
// Property attributes: T^{GlobeView=^^?^{GeoServicesLoader}^{ManifestManager}^{TriggerManager}{shared_ptr<altitude::AnchorManager>=^{AnchorManager}^{__shared_weak_count}}^{DtmCacheNode}^{DtmRequestManager}^{FreezeViewNode}{Projection={Perspective=dddd}{Ortho=dddddd}BB}{CameraFrame<geo::Radians, double>={Coordinate3D<Radians, double>={Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<MeterUnitDescription, double>=d}}{Unit<MeterUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}}B{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{vector<altitude::SimpleTileKey, std::__1::allocator<altitude::SimpleTileKey> >=^{SimpleTileKey}^{SimpleTileKey}{__compressed_pair<altitude::SimpleTileKey *, std::__1::allocator<altitude::SimpleTileKey> >=^{SimpleTileKey}}}BII^{VKClassicGlobeCanvas}BB{AnimationManager={AnimationReferenceTimer=ddd}{unique_ptr<altitude::AnimationTimer, std::__1::default_delete<altitude::AnimationTimer> >={__compressed_pair<altitude::AnimationTimer *, std::__1::default_delete<altitude::AnimationTimer> >=^{AnimationTimer}}}d{vector<altitude::AnimationObjectHolder, std::__1::allocator<altitude::AnimationObjectHolder> >=^{AnimationObjectHolder}^{AnimationObjectHolder}{__compressed_pair<altitude::AnimationObjectHolder *, std::__1::allocator<altitude::AnimationObjectHolder> >=^{AnimationObjectHolder}}}}{Timer=d}dBddd{CameraFrame<geo::Radians, double>={Coordinate3D<Radians, double>={Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<MeterUnitDescription, double>=d}}{Unit<MeterUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}}^{C3mmRequestManager}^{RenderableGroup}IdBB^{LabelDataManagerPrivate}BBBB^{RouteLineManager}^{GlobeCleanupLoader}^{CompleteGlobeTileSetCullingGraph}^{CompleteGlobeTileSetLoader}^{TileSetNode}^{GlobeTileRenderManager}^{CullingNode}^{EarthAdjustedViewNode}^{UserViewNode}^{View}^{BasicViewNode}^{GlobeMainViewNode}^{C3bRequestManager}fB{shared_ptr<bool>=^B^{__shared_weak_count}}^{HeightRequestManager}{map<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> >, altitude::GlobeView::LessVector2i, std::__1::allocator<std::__1::pair<const gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > > > >={__tree<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, altitude::GlobeView::LessVector2i, true>, std::__1::allocator<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, altitude::GlobeView::LessVector2i, true> >=Q}}}{Mutex=^v}{shared_ptr<altitude::Stylesheet>=^{Stylesheet}^{__shared_weak_count}}^{FlyoverTour}B{Viewport=iiii}B{set<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> >={__tree<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<altitude::ManifestListener *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<altitude::ManifestListener *> >=Q}}}^{TileManager}^{ObjectTreeLoader}^{QuickSurfaceManager}^{IntersectorHeight}{shared_ptr<karo::SharedItemManager<altitude::Map, altitude::MapRequestId> >=^{SharedItemManager<altitude::Map, altitude::MapRequestId>}^{__shared_weak_count}}^{BundleLoader}^{ProtocolLoader}^{GeoResourceManager}^{GeoResourceLoader}^{ViewNode}^{ViewportNode}^{View}^{Viewport}{shared_ptr<ggl::RenderState>=^{RenderState}^{__shared_weak_count}}I^{Statistics}{atomic<bool>=AB}^{TexturePager}^{IOSurfacePool}^{RealisticRenderer}{DclpUnique<ggl::Texture2D, altitude::util::DclpDefaultDelete<ggl::Texture2D> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<ggl::Texture2D *>=A^{Texture2D}}{function<ggl::Texture2D *()>={type=[32C]}^{__base<ggl::Texture2D *()>}}}{DclpUnique<altitude::TextureMap, altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[32C]}^{__base<altitude::TextureMap *()>}}}{DclpUnique<altitude::TextureMap, altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[32C]}^{__base<altitude::TextureMap *()>}}}},N,V_globeView

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setMaxZoomLevel:(double)arg1;
- (void)setCurrentZoomLevel:(double)arg1;
- (double)topDownMinimumZoomLevel;
- (double)currentZoomLevel;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (double)_fovAdjustment;
- (double)pitch;
- (double)heading;
- (double)altitude;
- (double)distanceFromCenterCoordinate;
- (CDStruct_c3b9c2ee)centerCoordinate;
- (CDStruct_c3b9c2ee)_centerCoordinateForMapRegion:(id)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (double)zoomForMapRegion:(id)arg1;
- (double)widestLatitudeForMapRegion:(id)arg1;
- (double)greatCircleMidPointLatitude:(double)arg1 fromLongitude:(double)arg2 toLongitude:(double)arg3;
- (double)earthRadiusAt:(double)arg1;
- (double)geocAngleBetween:(CDStruct_c3b9c2ee)arg1 andCoordinate:(CDStruct_c3b9c2ee)arg2;
- (id)mapRegion;
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;
- (double)presentationYaw;
- (void)updateCameraManager;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setGesturing:(_Bool)arg1;
- (void)updateState;
- (void)_updateCanEnter3DMode;
- (void)_updateIsPitched;
- (_Bool)isFullyPitched;
- (_Bool)isPitched;
- (_Bool)canEnter3DMode;
- (void)exit3DMode;
- (void)enter3DMode;
- (void)stopGlobeAnimations;
- (Geocentric_d8fde6f2)cameraPosition;
- (void)adjustLoadingForAnimation:(float)arg1 progressFactor:(float)arg2;
- (float)slowDownFactorFromLoadProgress;
- (_Bool)isFlyoverTourStarted;
- (void)interruptFlyoverTourAnimation;
- (void)stopFlyoverTourAnimation;
- (void)resumeFlyoverTourAnimation;
- (void)pauseFlyoverTourAnimation;
- (void)flyoverTourAnimation:(id)arg1 animateToStart:(_Bool)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;
- (void)moveToZoomOutZoomInTransition:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (CDUnknownBlockType)createMoveToZoomOutZoomInFrameFunction:(CameraFrame_406dbd31)arg1 toLatLon:(CameraFrame_406dbd31)arg2;
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3;
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)tiltTo:(double)arg1 animated:(_Bool)arg2 exaggerate:(_Bool)arg3;
- (void)rotateTo:(double)arg1 animated:(_Bool)arg2;
- (_Bool)snapMapIfNecessary:(_Bool)arg1;
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)_updateGlobeFromCamera;
- (long long)tileSize;
- (_Bool)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
- (void)dealloc;
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

