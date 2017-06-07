//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHChartRep.h>

@class CALayer, NSMutableDictionary, NSSet, TSCHMultiDataChartRepElementIndex;

__attribute__((visibility("hidden")))
@interface TSCHMultiDataChartRep : TSCHChartRep
{
    CALayer *mRootLayer;
    CALayer *mElementsContainerLayer;
    _Bool mRenderingBackgroundLayer;
    _Bool mRenderingElementShapeLayer;
    _Bool mRenderingElementLabelsLayer;
    _Bool mRenderingDataSetNameLayer;
    _Bool mRenderingReferenceLineLayer;
    _Bool mAnimatedLayersNeedUpdate;
    _Bool mShouldAnimateLabelsQuickly;
    _Bool mIsAnimatingForBuilds;
    unsigned long long mElementLayersMultiDataSetIndex;
    int mGridDirection;
    NSMutableDictionary *mIndexedElements;
    TSCHMultiDataChartRepElementIndex *mCurrentRepElementIndex;
    CALayer *mDataSetNameLayer;
    CALayer *mReferenceLinesContainerLayer;
    NSSet *mReferenceLinesToRender;
    NSSet *mReferenceLineLabelsSearchSelectionsToRender;
    NSMutableDictionary *mLayerIdToLayerMap;
    NSMutableDictionary *mPreviousOutsideBodyBounds;
    _Bool _shouldDisableMultiDataControls;
}

@property(readonly, nonatomic) _Bool shouldDisableMultiDataControls; // @synthesize shouldDisableMultiDataControls=_shouldDisableMultiDataControls;
- (void)didEndZooming;
- (void)willBeginZooming;
- (_Bool)shouldUseLegendLayerForLayerBasedRep;
- (id)imageFromFill:(id)arg1 forResolutionWithBounds:(struct CGRect)arg2 toRepElementTransform:(struct CGAffineTransform)arg3 skipIntegral:(_Bool)arg4 returningFillFrame:(struct CGRect *)arg5;
- (id)previousOutsideBodyBounds;
- (id)layerIdToLayerMap;
- (_Bool)needsAnimationForAnimationInfo:(id)arg1;
- (_Bool)frameInUnscaledCanvasNeedsPaddingForShadows;
- (id)p_elementLayers;
- (_Bool)isHorizontalChart;
- (id)p_chartModel;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

