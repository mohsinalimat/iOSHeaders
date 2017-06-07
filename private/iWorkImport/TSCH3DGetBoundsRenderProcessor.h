//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DTransformGeometryRenderProcessor.h>

__attribute__((visibility("hidden")))
@interface TSCH3DGetBoundsRenderProcessor : TSCH3DTransformGeometryRenderProcessor
{
    int mMode;
    struct ObjectBounds mBounds;
}

@property(nonatomic) int mode; // @synthesize mode=mMode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)submit:(const struct PrimitiveInfo *)arg1;
- (void)extend2DProjectedBounds:(const box_a3bd9649 *)arg1;
- (void)resetBounds;
@property(readonly, nonatomic) const struct ObjectBounds *bounds;
- (id)init;

@end

