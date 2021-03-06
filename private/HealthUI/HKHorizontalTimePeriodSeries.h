//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

#import <HealthUI/HKAxisLabelDataSource-Protocol.h>

@class NSArray, NSDictionary, NSString, UIColor, UIImage;

@interface HKHorizontalTimePeriodSeries : HKGraphSeries <HKAxisLabelDataSource>
{
    NSArray *_cachedAxisLabels;
    UIImage *_selectedPointMarkerImage;
    UIColor *_fillColor;
    double _lineWidth;
    double _topInsetPercentage;
    double _lineSpacingPercentage;
    NSArray *_enumerationValueOrdering;
    NSDictionary *_valueLabels;
}

@property(retain, nonatomic) NSDictionary *valueLabels; // @synthesize valueLabels=_valueLabels;
@property(retain, nonatomic) NSArray *enumerationValueOrdering; // @synthesize enumerationValueOrdering=_enumerationValueOrdering;
@property(nonatomic) double lineSpacingPercentage; // @synthesize lineSpacingPercentage=_lineSpacingPercentage;
@property(nonatomic) double topInsetPercentage; // @synthesize topInsetPercentage=_topInsetPercentage;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIImage *selectedPointMarkerImage; // @synthesize selectedPointMarkerImage=_selectedPointMarkerImage;
- (void).cxx_destruct;
- (struct CGPoint)renderPositionForLabel:(id)arg1 rect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(_Bool)arg6 optionalOffset:(struct CGPoint)arg7;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)_generateAxisLabels;
- (void)setYAxis:(id)arg1;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (_Bool)supportsMultiTouchSelection;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)yCoordinateForLevel:(id)arg1 axisRect:(struct CGRect)arg2;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

