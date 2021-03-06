//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FitnessUI/FIUIChartDataGroupDataSource-Protocol.h>
#import <FitnessUI/FIUIChartSeriesDataSource-Protocol.h>

@class FIUIChartBackgroundView, FIUIChartDataGroup, FIUIChartTimeAxisDescriptor, NSArray, NSDateInterval, NSNumber, NSString;
@protocol FIUIChartAxisDescriptor, FIUIChartDataSource;

@interface FIUIChartView : UIView <FIUIChartDataGroupDataSource, FIUIChartSeriesDataSource>
{
    FIUIChartDataGroup *_dataGroup;
    NSArray *_xAxisLabels;
    NSArray *_xAxisSubLabels;
    NSArray *_yAxisLabels;
    NSArray *_chartSeries;
    UIView *_containerView;
    _Bool _labelsInsetChartBackground;
    _Bool _xAxisLabelsShouldBaselineAlign;
    id <FIUIChartDataSource> _dataSource;
    FIUIChartTimeAxisDescriptor *_xAxisDescriptor;
    id <FIUIChartAxisDescriptor> _yAxisDescriptor;
    FIUIChartBackgroundView *_backgroundView;
    double _yAxisEdgeInset;
    double _xAxisToLabelPadding;
    double _animationDuration;
    NSDateInterval *_dateInterval;
    NSNumber *_minYValue;
    NSNumber *_maxYValue;
    NSNumber *_highlightedYValue;
    struct UIEdgeInsets _seriesEdgeInsets;
    struct UIEdgeInsets _contentBufferEdgeInsets;
}

@property(retain, nonatomic) NSNumber *highlightedYValue; // @synthesize highlightedYValue=_highlightedYValue;
@property(retain, nonatomic) NSNumber *maxYValue; // @synthesize maxYValue=_maxYValue;
@property(retain, nonatomic) NSNumber *minYValue; // @synthesize minYValue=_minYValue;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) struct UIEdgeInsets contentBufferEdgeInsets; // @synthesize contentBufferEdgeInsets=_contentBufferEdgeInsets;
@property(nonatomic) struct UIEdgeInsets seriesEdgeInsets; // @synthesize seriesEdgeInsets=_seriesEdgeInsets;
@property(nonatomic) _Bool xAxisLabelsShouldBaselineAlign; // @synthesize xAxisLabelsShouldBaselineAlign=_xAxisLabelsShouldBaselineAlign;
@property(nonatomic) _Bool labelsInsetChartBackground; // @synthesize labelsInsetChartBackground=_labelsInsetChartBackground;
@property(nonatomic) double xAxisToLabelPadding; // @synthesize xAxisToLabelPadding=_xAxisToLabelPadding;
@property(nonatomic) double yAxisEdgeInset; // @synthesize yAxisEdgeInset=_yAxisEdgeInset;
@property(retain, nonatomic) FIUIChartBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) id <FIUIChartAxisDescriptor> yAxisDescriptor; // @synthesize yAxisDescriptor=_yAxisDescriptor;
@property(retain, nonatomic) FIUIChartTimeAxisDescriptor *xAxisDescriptor; // @synthesize xAxisDescriptor=_xAxisDescriptor;
@property(nonatomic) __weak id <FIUIChartDataSource> dataSource; // @synthesize dataSource=_dataSource;
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
- (id)_labelsForSeriesAtIndex:(unsigned long long)arg1;
- (id)_dataPointsForSeriesAtIndex:(unsigned long long)arg1;
- (id)_dataPointAtIndex:(unsigned long long)arg1 forSeriesAtIndex:(unsigned long long)arg2;
- (unsigned long long)_numberOfDataPointsForSeriesAtIndex:(unsigned long long)arg1;
- (id)_seriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)_numberOfSeries;
- (float)_relativePositionForXPlaneValue:(id)arg1;
- (double)_absolutePositionForXPlaneValue:(id)arg1;
- (struct CGRect)_insetChartRect;
- (struct CGRect)_chartRect;
- (double)_yAxisLabelPadding;
- (double)_xAxisLabelPaddingForBackground:(_Bool)arg1;
- (void)_layoutChartSeries;
- (void)_layoutXAxisLabels;
- (void)_layoutYAxisLabels;
- (void)_layoutAxisLabels;
- (void)_layoutContainerView;
- (void)layoutSubviews;
- (void)_updateHighlightedValue;
- (void)_adjustMinMaxValues;
- (void)_updateDataSeries;
- (void)_reloadDataSeries;
- (void)_updateBackgroundView;
- (void)selectAxisPoint:(long long)arg1 selected:(_Bool)arg2;
- (void)reloadData;
- (id)initWithDateInterval:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

