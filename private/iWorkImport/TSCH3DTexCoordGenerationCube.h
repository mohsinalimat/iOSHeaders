//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DTexCoordGeneration.h>

__attribute__((visibility("hidden")))
@interface TSCH3DTexCoordGenerationCube : TSCH3DTexCoordGeneration
{
    box_a3bd9649 mBbox;
}

+ (id)generatorWithBBox:(const box_a3bd9649 *)arg1 transform:(const tmat4x4_3074befe *)arg2;
+ (id)generatorWithBBox:(const box_a3bd9649 *)arg1;
- (id).cxx_construct;
- (void)generateFromVertexArray:(const tvec3_17f03ce0 *)arg1 normalArray:(const tvec3_17f03ce0 *)arg2 numVertices:(long long)arg3 destination4D:(tvec4_ac57c72d *)arg4;
- (id)initWithBBox:(const box_a3bd9649 *)arg1;
- (id)initWithBBox:(const box_a3bd9649 *)arg1 transform:(const tmat4x4_3074befe *)arg2;

@end

