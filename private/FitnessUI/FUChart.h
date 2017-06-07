//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FitnessUI/FUChartDataGroupDataSource-Protocol.h>
#import <FitnessUI/FUChartSeriesDataSource-Protocol.h>

@class FUChartBackgroundView, FUChartDataGroup, FUTimeAxisDescriptor, NSArray, NSDate, NSNumber, NSString, UIScrollView;
@protocol FUChartDataSource;

@interface FUChart : UIView <FUChartDataGroupDataSource, FUChartSeriesDataSource>
{
    FUChartDataGroup *_dataGroup;
    NSArray *_xAxisLabels;
    NSArray *_xAxisSubLabels;
    NSArray *_chartSeries;
    _Bool _needsAnimation;
    _Bool _labelsInsetChartBackground;
    id <FUChartDataSource> _dataSource;
    FUTimeAxisDescriptor *_xAxisDescriptor;
    FUChartBackgroundView *_backgroundView;
    double _yAxisEdgeInset;
    double _xAxisToLabelPadding;
    double _animationDuration;
    NSDate *_minXValue;
    NSDate *_maxXValue;
    NSNumber *_minYValue;
    NSNumber *_maxYValue;
    UIScrollView *_scrollView;
}

@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSNumber *maxYValue; // @synthesize maxYValue=_maxYValue;
@property(retain, nonatomic) NSNumber *minYValue; // @synthesize minYValue=_minYValue;
@property(retain, nonatomic) NSDate *maxXValue; // @synthesize maxXValue=_maxXValue;
@property(retain, nonatomic) NSDate *minXValue; // @synthesize minXValue=_minXValue;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) _Bool labelsInsetChartBackground; // @synthesize labelsInsetChartBackground=_labelsInsetChartBackground;
@property(nonatomic) double xAxisToLabelPadding; // @synthesize xAxisToLabelPadding=_xAxisToLabelPadding;
@property(nonatomic) double yAxisEdgeInset; // @synthesize yAxisEdgeInset=_yAxisEdgeInset;
@property(retain, nonatomic) FUChartBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) FUTimeAxisDescriptor *xAxisDescriptor; // @synthesize xAxisDescriptor=_xAxisDescriptor;
@property(nonatomic) __weak id <FUChartDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)maxYValueForChartSeries:(id)arg1;
- (id)minYValueForChartSeries:(id)arg1;
- (id)maxXValueForChartSeries:(id)arg1;
- (id)minXValueForChartSeries:(id)arg1;
- (id)dataGroup:(id)arg1 labelsForSetAtIndex:(unsigned long long)arg2;
- (id)dataGroup:(id)arg1 dataPointsForSetAtIndex:(unsigned long long)arg2;
- (id)dataGroup:(id)arg1 pointForSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;
- (unsigned long long)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDataSetsInGroup:(id)arg1;
- (id)_getLabelsForSeriesAtIndex:(unsigned long long)arg1;
- (id)_getDataPointsForSeriesAtIndex:(unsigned long long)arg1;
- (id)_getDataPointAtIndex:(unsigned long long)arg1 forSeriesAtIndex:(unsigned long long)arg2;
- (unsigned long long)_getNumberOfDataPointsForSeriesAtIndex:(unsigned long long)arg1;
- (id)_getSeriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)_getNumberOfSeries;
- (float)_relativePositionForYPlaneValue:(id)arg1;
- (float)_relativePositionForXPlaneValue:(id)arg1;
- (double)_absolutePositionForYPlaneValue:(id)arg1;
- (double)_absolutePositionForXPlaneValue:(id)arg1;
- (struct CGRect)_chartRect;
- (double)_yAxisLabelPadding;
- (double)_xAxisLabelPaddingForBackground:(_Bool)arg1;
- (void)_layoutChartSeries;
- (void)_layoutXAxisLabels;
- (void)_layoutAxisLabels;
- (void)_layoutScrollView;
- (void)layoutSubviews;
- (void)_adjustMinMaxValues;
- (void)_updateDataSeries;
- (void)_reloadDataSeries;
- (void)_updateBackgroundView;
- (void)_animateSeries;
- (void)selectAxisPoint:(long long)arg1 selected:(_Bool)arg2;
- (void)animate;
- (void)refreshViewAnimated:(_Bool)arg1;
- (void)refreshView;
- (void)reloadDataAnimated:(_Bool)arg1;
- (void)reloadData;
- (id)initWithMinDate:(id)arg1 maxDate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

