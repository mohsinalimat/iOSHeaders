//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHChartRep.h>

@class NSArray, NSDictionary, TSCHChartPieElementsRenderer;

__attribute__((visibility("hidden")))
@interface TSCHPieChartRep : TSCHChartRep
{
    TSCHChartPieElementsRenderer *mPieElementRenderer;
    NSArray *mWedgeKnobs;
    NSDictionary *mSeriesIndexedPieWedgeDraggingLayers;
    _Bool mHasDrawnSinceWedgeKnobTrackerCreated;
}

- (void)renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (double)p_radius;
- (double)dragTravelAlongBisectorBetweenStartPoint:(struct CGPoint)arg1 andEndingPoint:(struct CGPoint)arg2 forSeries:(unsigned long long)arg3;
- (void)clearRenderers;
- (id)pieElementRenderer;
- (_Bool)forceRenderBlankBackground;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

