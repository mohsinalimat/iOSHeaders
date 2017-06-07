//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

@class HKStrokeStyle, UIImage;

@interface HKMinMaxSeries : HKGraphSeries
{
    HKStrokeStyle *_unselectedStrokeStyle;
    HKStrokeStyle *_selectedStrokeStyle;
    UIImage *_unselectedPointMarkerImage;
    UIImage *_selectedPointMarkerImage;
}

@property(retain, nonatomic) UIImage *selectedPointMarkerImage; // @synthesize selectedPointMarkerImage=_selectedPointMarkerImage;
@property(retain, nonatomic) UIImage *unselectedPointMarkerImage; // @synthesize unselectedPointMarkerImage=_unselectedPointMarkerImage;
@property(retain, nonatomic) HKStrokeStyle *selectedStrokeStyle; // @synthesize selectedStrokeStyle=_selectedStrokeStyle;
@property(retain, nonatomic) HKStrokeStyle *unselectedStrokeStyle; // @synthesize unselectedStrokeStyle=_unselectedStrokeStyle;
- (void).cxx_destruct;
- (_Bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)_drawPointMarkersWithBlockCoordinates:(id)arg1 pointTransform:(struct CGAffineTransform)arg2 context:(struct CGContext *)arg3;
- (void)_drawStrokeWithBlockCoordinates:(id)arg1 pointTransform:(struct CGAffineTransform)arg2 context:(struct CGContext *)arg3 axisRect:(struct CGRect)arg4;
- (void)_updateSecondaryRenderContextWithBlockCoordinates:(id)arg1 pointTransform:(struct CGAffineTransform)arg2 axisRect:(struct CGRect)arg3 secondaryRenderContext:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;

@end
