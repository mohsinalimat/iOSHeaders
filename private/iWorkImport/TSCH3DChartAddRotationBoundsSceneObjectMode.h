//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartAddBoundsSceneObjectMode.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartAddRotationBoundsSceneObjectMode : TSCH3DChartAddBoundsSceneObjectMode
{
    int mRotationType;
}

@property(nonatomic) int rotationType; // @synthesize rotationType=mRotationType;
- (void)getBounds:(id)arg1;
- (void)p_submitGeometryForChartBounds:(const box_a3bd9649 *)arg1 pivot:(const tvec3_17f03ce0 *)arg2 thicknessIndex:(unsigned long long)arg3 pipeline:(id)arg4;
- (double)p_radiusFromBounds:(const box_a3bd9649 *)arg1 pivot:(const tvec3_17f03ce0 *)arg2;

@end

