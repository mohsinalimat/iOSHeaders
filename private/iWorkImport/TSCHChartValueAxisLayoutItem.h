//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHChartAxisLayoutItem.h>

@class TSCHChartValueAxisLabelsLayoutItem;

__attribute__((visibility("hidden")))
@interface TSCHChartValueAxisLayoutItem : TSCHChartAxisLayoutItem
{
    TSCHChartValueAxisLabelsLayoutItem *mValueLabels;
}

@property(readonly, nonatomic) TSCHChartValueAxisLabelsLayoutItem *axisValueLabelsLayoutItem; // @synthesize axisValueLabelsLayoutItem=mValueLabels;
- (struct CGRect)protected_layoutSpaceRectForAllLabels;
- (id)renderersWithRep:(id)arg1;
- (void)p_layoutLabelsNow;
- (void)buildSubTree;
- (void)dealloc;

@end

