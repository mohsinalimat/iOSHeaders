//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FitnessUI/FIUIChartSeries.h>

@class NSArray, NSDictionary, NSMutableArray, UIColor;

@interface FIUIChartFloatingBarSeries : FIUIChartSeries
{
    NSArray *_barRects;
    NSMutableArray *_barLabelTopPoints;
    NSMutableArray *_barLabelBottomPoints;
    NSMutableArray *_barLabels;
    UIColor *_barColor;
    double _cornerRadius;
    NSDictionary *_labelAttributes;
}

@property(retain, nonatomic) NSDictionary *labelAttributes; // @synthesize labelAttributes=_labelAttributes;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
- (void).cxx_destruct;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSubviews;
- (void)_loadFromDataSet;

@end

