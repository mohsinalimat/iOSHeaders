//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartShadowsSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartOrthographicShadowsSceneObject : TSCH3DChartShadowsSceneObject
{
}

+ (id)blurParametersArray;
- (id)createShadowsRenderer;
- (void)updateShadowPlane:(id)arg1 texcoords:(id)arg2 scene:(id)arg3 blurslack:(float)arg4 angle:(float)arg5 quality:(float)arg6 planePadding:(box_a3bd9649)arg7;
- (void)updateCoordsAndTexcoords:(const box_a3bd9649 *)arg1 zOffset:(float)arg2 cameraPosition:(const tvec3_17f03ce0 *)arg3 quad:(id)arg4 texcoords:(id)arg5;
- (id)createCamera;

@end

