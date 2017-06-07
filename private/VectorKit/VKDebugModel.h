//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKModelObject.h>

#import <VectorKit/VKMapLayer-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKDebugModel : VKModelObject <VKMapLayer>
{
    _Bool _geocentric;
    float _fontSize;
    struct shared_ptr<ggl::Debug::BasePipelineState> _debugPipelineState;
    struct shared_ptr<ggl::DebugPoints::BasePipelineState> _debugPointsPipelineState;
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::BasePipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::BasePipelineSetup>>> _debugPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::DebugPoints::BasePipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::DebugPoints::BasePipelineSetup>>> _debugPointsPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem>>> _debugRenderItemPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _debugLinesRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _debugPointsRenderState;
    shared_ptr_a5e35864 _unitRectMesh;
    _Bool _needsReset;
}

@property(nonatomic) _Bool geocentric; // @synthesize geocentric=_geocentric;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendDebugTileCommandsToBuffer:(struct CommandBuffer *)arg1 forMapTile:(id)arg2 fromLayer:(unsigned long long)arg3 withContext:(struct LayoutContext *)arg4 withConsole:(struct DebugConsole *)arg5;
- (void)resetPools:(struct LayoutContext *)arg1;
- (void)flushPools;
- (void)reset;
- (void)didReceiveMemoryWarning:(_Bool)arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (shared_ptr_a5e35864)unitRectMesh;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;
- (_Bool)shouldLayoutWithoutStyleManager;
- (unsigned long long)mapLayerPosition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

