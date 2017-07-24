//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKVectorTile.h>

@class VKAnimation;

__attribute__((visibility("hidden")))
@interface VKGGLTransitTile : VKVectorTile
{
    vector_8a951411 _lines;
    vector_1e20c8c3 _links;
    list_cc555e0e _displayConnections;
    struct unique_ptr<md::TransitJunctionManager, std::__1::default_delete<md::TransitJunctionManager>> _junctionManager;
    vector_3c601afa _nodes;
    struct vector<std::__1::shared_ptr<md::TransitConnectedNode>, std::__1::allocator<std::__1::shared_ptr<md::TransitConnectedNode>>> _nodesWithConnectivity;
    struct vector<std::__1::shared_ptr<md::TransitConnectedNode>, std::__1::allocator<std::__1::shared_ptr<md::TransitConnectedNode>>> _connectedNodes;
    struct vector<std::__1::shared_ptr<md::TransitParentNode>, std::__1::allocator<std::__1::shared_ptr<md::TransitParentNode>>> _parentNodes;
    struct vector<std::__1::shared_ptr<md::TransitOrphanNode>, std::__1::allocator<std::__1::shared_ptr<md::TransitOrphanNode>>> _orphanNodes;
    struct unique_ptr<md::Ribbons::RibbonLayer<md::Ribbons::TransitRibbonDescriptor>, std::__1::default_delete<md::Ribbons::RibbonLayer<md::Ribbons::TransitRibbonDescriptor>>> _lineLayer;
    struct map<unsigned int, md::Ribbons::RibbonBatch<md::Ribbons::TransitRibbonDescriptor>*, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, md::Ribbons::RibbonBatch<md::Ribbons::TransitRibbonDescriptor>*>>> _lineBatches;
    struct unique_ptr<ggl::TransitLineRibbon::BasePipelineSetup, std::__1::default_delete<ggl::TransitLineRibbon::BasePipelineSetup>> _lineStrokePipelineSetup;
    struct unique_ptr<ggl::TransitLineRibbon::BasePipelineSetup, std::__1::default_delete<ggl::TransitLineRibbon::BasePipelineSetup>> _lineFillPipelineSetup;
    struct unique_ptr<md::StyleTexture<md::TransitLineSegment::StylePixel>, std::__1::default_delete<md::StyleTexture<md::TransitLineSegment::StylePixel>>> _lineFillStyleTexture;
    struct unique_ptr<md::StyleTexture<md::TransitLineSegment::StylePixel>, std::__1::default_delete<md::StyleTexture<md::TransitLineSegment::StylePixel>>> _lineStrokeStyleTexture;
    struct map<PatternedLineKey, PatternedLineSetup, std::__1::less<PatternedLineKey>, std::__1::allocator<std::__1::pair<const PatternedLineKey, PatternedLineSetup>>> _patternedLineSetups;
    struct unique_ptr<md::Ribbons::RibbonLayer<md::TransitDisplayConnectionRibbonDescriptor>, std::__1::default_delete<md::Ribbons::RibbonLayer<md::TransitDisplayConnectionRibbonDescriptor>>> _displayConnectionLayer;
    struct LabelExternalObjectsModerator *_labelExternalObjectsModerator;
    shared_ptr_887a193f _dataOverrideManager;
    struct TransitNodeFeaturePool *_nodeFeaturePool;
    shared_ptr_10302801 _interTileMediator;
    _Bool _areNormalsSynchedForTileEdge[4];
    _Bool _isNeighboringTilePresent[4];
    struct unordered_map<unsigned long long, std::__1::unordered_set<md::TransitNode *, std::__1::hash<md::TransitNode *>, std::__1::equal_to<md::TransitNode *>, std::__1::allocator<md::TransitNode *>>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unordered_set<md::TransitNode *, std::__1::hash<md::TransitNode *>, std::__1::equal_to<md::TransitNode *>, std::__1::allocator<md::TransitNode *>>>>> _lineIDToAssociatedNodesMap;
    double _worldUnitsPerMeter;
    float _lineInflation;
    float _displayConnectionInflation;
    float _alphaScale;
    unsigned int _easingPointCount;
    _Bool _didLineDataChange;
    _Bool _didNeighboringTilesChange;
    _Bool _shouldUpdateMergedLinesForNodes;
    const struct TransitLineSharedResources *_transitSharedResources;
    VKAnimation *_animation;
}

@property(retain, nonatomic) VKAnimation *animation; // @synthesize animation=_animation;
@property(readonly, nonatomic) list_cc555e0e *displayConnections; // @synthesize displayConnections=_displayConnections;
@property(readonly, nonatomic) vector_1e20c8c3 *links; // @synthesize links=_links;
@property(readonly, nonatomic) vector_3c601afa *nodes; // @synthesize nodes=_nodes;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)debugDrawWithConsole:(struct DebugConsole *)arg1 context:(struct HighlightHelper *)arg2;
- (id)debugString;
- (const vector_8a951411 *)lines;
- (shared_ptr_64d557d2)closestItemAtPixel:(Matrix_8746f91e)arg1 maxDistance:(float)arg2 itemDistanceSqrd:(float *)arg3 screenProjectionMatrix:(const Matrix_08d701e4 *)arg4;
- (void)addTransitLinesAtGroundPoint:(const Matrix_6e1d3589 *)arg1 toArray:(vector_1e3b8d07 *)arg2;
- (void)addTransitLinesInRect:(const Box_3d7e3c2c *)arg1 toSet:(unordered_set_e7be2da0 *)arg2;
- (void)willDisappear;
- (void)willAppear;
- (void)neighborTileDidChange;
@property(readonly, nonatomic) RibbonLayer_99607768 *displayConnectionLayer;
@property(readonly, nonatomic) RibbonLayer_abf9b3d8 *lineLayer;
@property(readonly, nonatomic) struct BasePipelineSetup *lineFillPipelineSetup;
@property(readonly, nonatomic) struct BasePipelineSetup *lineStrokePipelineSetup;
- (void)populateSelectedLineBounds:(id)arg1;
- (void)setSelectedNodes:(const unordered_set_65896b03 *)arg1;
- (void)setSelectedLines:(const unordered_set_65896b03 *)arg1;
- (void)appendNodesAttachedToLines:(const unordered_set_65896b03 *)arg1 toNodes:(unordered_set_65896b03 *)arg2;
- (void)setAlphaScale:(float)arg1;
- (void)updateNodeStylesInContext:(struct LayoutContext *)arg1;
- (void)updateDisplayConnectionStylesInContext:(struct LayoutContext *)arg1;
- (void)updateLineStylesInContext:(struct LayoutContext *)arg1 lineMergingDisabled:(unsigned char)arg2 forceMeshCreation:(_Bool)arg3 dashCache:(struct DashTextureCache *)arg4;
- (float)_tilePerPoint:(struct LayoutContext *)arg1;
- (_Bool)updateLinesAtZoom:(float)arg1;
- (void)_createNodes;
- (void)_createDisplayConnectionsWithLoader:(struct Loader *)arg1 sharedResources:(const struct TransitLineSharedResources *)arg2;
- (void)_setupPatternedLineSetup:(struct PatternedLineSetup *)arg1 sharedResources:(const struct TransitLineSharedResources *)arg2;
- (void)_createLinesWithLoader:(struct Loader *)arg1;
- (void)_prepareLinesWithSharedResources:(const struct TransitLineSharedResources *)arg1;
- (void)createGroupsWithDevice:(Device_9226c869 *)arg1 sharedResources:(const struct TransitLineSharedResources *)arg2;
- (float)minLineZoomForIDs:(const unordered_set_65896b03 *)arg1;
- (_Bool)containsLinesInSet:(const unordered_set_65896b03 *)arg1;
- (void)setNodeFeaturePool:(struct TransitNodeFeaturePool *)arg1;
- (void)setInterTileMediator:(const shared_ptr_10302801 *)arg1;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 styleManager:(shared_ptr_a3c46825)arg3 dataOverrideManager:(shared_ptr_887a193f)arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(Device_9226c869 *)arg7 labelExternalObjectsModerator:(struct LabelExternalObjectsModerator *)arg8;

@end

