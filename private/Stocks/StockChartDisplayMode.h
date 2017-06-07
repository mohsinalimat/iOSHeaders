//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Stocks/NSCopying-Protocol.h>

@class NSString, UIColor;

@interface StockChartDisplayMode : NSObject <NSCopying>
{
    NSString *_hash;
    _Bool _showsVolume;
    _Bool _HUDEnabled;
    _Bool _showsPriceLabelForPreviousClose;
    _Bool _usesDetailedAxisLabels;
    _Bool _graphOverlapsYAxisLabels;
    long long _maxInterval;
    double _showsTitle;
    unsigned long long _yAxisLabelCount;
    unsigned long long _horizontalGridlineCount;
    double _volumeHeight;
    double _intervalRowHeight;
    double _lineWidth;
    UIColor *_lineColor;
    UIColor *_backgroundLinesColor;
    UIColor *_xAxisKeylineColor;
    UIColor *_axisLabelsColor;
    struct CGGradient *_backgroundGradient;
    struct CGSize _chartSize;
    struct UIEdgeInsets _lineGraphInsets;
    struct UIEdgeInsets _chartRenderingInsets;
}

+ (id)defaultDisplayMode;
@property(nonatomic) struct UIEdgeInsets chartRenderingInsets; // @synthesize chartRenderingInsets=_chartRenderingInsets;
@property(nonatomic) struct CGGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(retain, nonatomic) UIColor *axisLabelsColor; // @synthesize axisLabelsColor=_axisLabelsColor;
@property(retain, nonatomic) UIColor *xAxisKeylineColor; // @synthesize xAxisKeylineColor=_xAxisKeylineColor;
@property(retain, nonatomic) UIColor *backgroundLinesColor; // @synthesize backgroundLinesColor=_backgroundLinesColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double intervalRowHeight; // @synthesize intervalRowHeight=_intervalRowHeight;
@property(nonatomic) double volumeHeight; // @synthesize volumeHeight=_volumeHeight;
@property(nonatomic) _Bool graphOverlapsYAxisLabels; // @synthesize graphOverlapsYAxisLabels=_graphOverlapsYAxisLabels;
@property(nonatomic) struct UIEdgeInsets lineGraphInsets; // @synthesize lineGraphInsets=_lineGraphInsets;
@property(nonatomic) _Bool usesDetailedAxisLabels; // @synthesize usesDetailedAxisLabels=_usesDetailedAxisLabels;
@property(nonatomic) _Bool showsPriceLabelForPreviousClose; // @synthesize showsPriceLabelForPreviousClose=_showsPriceLabelForPreviousClose;
@property(nonatomic) unsigned long long horizontalGridlineCount; // @synthesize horizontalGridlineCount=_horizontalGridlineCount;
@property(nonatomic) unsigned long long yAxisLabelCount; // @synthesize yAxisLabelCount=_yAxisLabelCount;
@property(nonatomic) double showsTitle; // @synthesize showsTitle=_showsTitle;
@property(nonatomic) _Bool HUDEnabled; // @synthesize HUDEnabled=_HUDEnabled;
@property(nonatomic) long long maxInterval; // @synthesize maxInterval=_maxInterval;
@property(nonatomic) _Bool showsVolume; // @synthesize showsVolume=_showsVolume;
@property(nonatomic) struct CGSize chartSize; // @synthesize chartSize=_chartSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) double lineGraphBottomPadding;
@property(readonly, nonatomic) double gutterHeight;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

