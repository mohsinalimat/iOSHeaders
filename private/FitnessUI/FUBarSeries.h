//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FitnessUI/FUChartSeries.h>

@class NSArray, UIColor;

@interface FUBarSeries : FUChartSeries
{
    _Bool _fadeZeroBars;
    double _barWidth;
    double _barSpacing;
    double _roundedCornerRadius;
    double _fadeInPercentage;
    UIColor *_strokeColor;
    double _strokeWidth;
    UIColor *_backgroundStrokeColor;
    double _backgroundStrokeWidth;
    NSArray *_barColors;
    struct CGGradient *_barGradient;
    UIColor *_barColor;
    UIColor *_fadedBarColor;
    NSArray *_labelAttributes;
    NSArray *_plotPoints;
    NSArray *_barLabels;
}

@property(retain, nonatomic) NSArray *barLabels; // @synthesize barLabels=_barLabels;
@property(retain, nonatomic) NSArray *plotPoints; // @synthesize plotPoints=_plotPoints;
@property(retain, nonatomic) NSArray *labelAttributes; // @synthesize labelAttributes=_labelAttributes;
@property(retain, nonatomic) UIColor *fadedBarColor; // @synthesize fadedBarColor=_fadedBarColor;
@property(nonatomic) _Bool fadeZeroBars; // @synthesize fadeZeroBars=_fadeZeroBars;
@property(retain, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
@property(nonatomic) struct CGGradient *barGradient; // @synthesize barGradient=_barGradient;
@property(retain, nonatomic) NSArray *barColors; // @synthesize barColors=_barColors;
@property(nonatomic) double backgroundStrokeWidth; // @synthesize backgroundStrokeWidth=_backgroundStrokeWidth;
@property(retain, nonatomic) UIColor *backgroundStrokeColor; // @synthesize backgroundStrokeColor=_backgroundStrokeColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double fadeInPercentage; // @synthesize fadeInPercentage=_fadeInPercentage;
@property(nonatomic) double roundedCornerRadius; // @synthesize roundedCornerRadius=_roundedCornerRadius;
@property(nonatomic) double barSpacing; // @synthesize barSpacing=_barSpacing;
@property(nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
- (void).cxx_destruct;
- (void)_translateColorThresholds;
- (void)_strokeRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 color:(struct CGColor *)arg3 width:(double)arg4;
- (id)_chartColorForChartYValue:(double)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

