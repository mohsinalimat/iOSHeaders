//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHMultiDataChartRep.h>

__attribute__((visibility("hidden")))
@interface TSCHMultiDataBarChartRep : TSCHMultiDataChartRep
{
}

- (void)updateAppearanceForElementLayer:(id)arg1 seriesIndex:(unsigned long long)arg2;
- (void)updateElementFrame:(struct CGRect)arg1 forElementLayer:(id)arg2 series:(id)arg3 addingAnimationsToAnimationInfo:(id)arg4;
- (void)updateElementLayerLayoutForCurrentRepElementIndexAnimationInfo:(id)arg1;
- (void)p_calculateInterceptForElementFrame:(struct CGRect)arg1 elementLayer:(id)arg2 animationInfo:(id)arg3;
- (_Bool)p_repElementIsAboveInterceptForSeriesIndex:(unsigned long long)arg1 groupIndex:(unsigned long long)arg2;
- (struct CGRect)currentRepElementBoundsInNaturalSpace;
- (struct CGRect)p_renderingElementFrameForBarElementFrame:(struct CGRect)arg1;
- (struct CGRect)p_clampRenderingElementFrame:(struct CGRect)arg1 barElementFrame:(struct CGRect)arg2;
- (id)p_currentBarSeriesModelCache;
- (unsigned long long)p_currentGroupIndex;
- (unsigned long long)p_currentSeriesIndex;
- (id)p_barElementsRenderer;

@end

