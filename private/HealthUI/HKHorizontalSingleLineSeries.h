//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

#import <HealthUI/HKAxisLabelDataSource-Protocol.h>

@class NSString, UIColor, UIImage;

@interface HKHorizontalSingleLineSeries : HKGraphSeries <HKAxisLabelDataSource>
{
    _Bool _shouldConnectPoints;
    double _topInsetPercentage;
    UIColor *_baseColor;
    double _lineWidth;
    double _selectedLineWidth;
    double _markRadius;
    UIImage *_selectedPointMarkerImage;
}

@property(retain, nonatomic) UIImage *selectedPointMarkerImage; // @synthesize selectedPointMarkerImage=_selectedPointMarkerImage;
@property(nonatomic) double markRadius; // @synthesize markRadius=_markRadius;
@property(nonatomic) double selectedLineWidth; // @synthesize selectedLineWidth=_selectedLineWidth;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *baseColor; // @synthesize baseColor=_baseColor;
@property(nonatomic) _Bool shouldConnectPoints; // @synthesize shouldConnectPoints=_shouldConnectPoints;
@property(nonatomic) double topInsetPercentage; // @synthesize topInsetPercentage=_topInsetPercentage;
- (void).cxx_destruct;
- (struct CGPoint)renderPositionForLabel:(id)arg1 rect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(_Bool)arg6 optionalOffset:(struct CGPoint)arg7;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (_Bool)supportsMultiTouchSelection;
- (double)yCoordinateForLevel:(long long)arg1 chartRect:(struct CGRect)arg2;
- (void)setYAxis:(id)arg1;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

