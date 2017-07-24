//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKSkewingVectorTile.h>

#import <VectorKit/VKPolygonTile-Protocol.h>

@class VKAnimation;

__attribute__((visibility("hidden")))
@interface VKPolygonTile : VKSkewingVectorTile <VKPolygonTile>
{
    vector_2e22b445 _polygonGroups;
    vector_0661f58a _coastlineGroups;
    float _alpha;
    float _scale;
    float _minLayeringHeight;
    float _maxLayeringHeight;
    VKAnimation *_animation;
    VKAnimation *_animationForPitch;
    struct unordered_map<unsigned long long, VKPolygonGroup *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, VKPolygonGroup *>>> _transitPolygonGroupMap;
    unordered_map_5292d3da _transitNodesRouteAttributesMap;
}

@property(retain, nonatomic) VKAnimation *animationForPitch; // @synthesize animationForPitch=_animationForPitch;
@property(retain, nonatomic) VKAnimation *animation; // @synthesize animation=_animation;
@property(readonly, nonatomic) float maxLayeringHeight; // @synthesize maxLayeringHeight=_maxLayeringHeight;
@property(readonly, nonatomic) float minLayeringHeight; // @synthesize minLayeringHeight=_minLayeringHeight;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) vector_0661f58a *coastlineGroups; // @synthesize coastlineGroups=_coastlineGroups;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setTransitNodesRouteAttributes:(const unordered_map_5292d3da *)arg1;
- (void)buildCoastlinesWithStyleManager:(shared_ptr_a3c46825 *)arg1;
- (void)buildMeshesWithDevice:(Device_9226c869 *)arg1 triangulator:(id)arg2 prepareExtrusion:(_Bool)arg3;
@property(readonly, nonatomic) const vector_2e22b445 *polygonGroups;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 prepareExtrusion:(_Bool)arg3 styleManager:(shared_ptr_a3c46825)arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(Device_9226c869 *)arg7;

@end

