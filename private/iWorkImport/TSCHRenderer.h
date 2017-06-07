//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSCHSupportsTextEditing-Protocol.h>

@class NSString, TSCHChartInfo, TSCHChartLayoutItem, TSCHChartModel;
@protocol TSCHSupportsRendering;

__attribute__((visibility("hidden")))
@interface TSCHRenderer : NSObject <TSCHSupportsTextEditing>
{
    id <TSCHSupportsRendering> mChartRep;
    TSCHChartLayoutItem *mChartLayoutItem;
}

@property(readonly, nonatomic) id <TSCHSupportsRendering> chartRep; // @synthesize chartRep=mChartRep;
- (struct CGRect)tLayerRectForContext:(struct CGContext *)arg1;
- (struct CGRect)chartLayoutSpaceRenderingRect;
- (void)addSelection:(id)arg1 toCGPath:(struct CGPath *)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 selection:(id)arg2;
- (_Bool)canRenderSelectionPath:(id)arg1;
- (void)p_debugLayoutInContext:(struct CGContext *)arg1;
- (void)p_renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)strokeRectInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 color:(struct CGColor *)arg3;
- (void)renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (int)chunkPlane;
- (int)textDrawingFlagForSelectionPath:(id)arg1;
- (double)frameHeightChangeForPath:(id)arg1;
- (void)useEditedString:(id)arg1;
- (id)textEditorForSelectionPath:(id)arg1 chartEditor:(id)arg2;
- (struct CGRect)frameForEditingTextForSelectionPath:(id)arg1;
- (_Bool)canEditTextForSelectionPath:(id)arg1;
@property(readonly, nonatomic) struct CGColor *debugColor;
@property(readonly, nonatomic) _Bool debugLayout;
@property(readonly, nonatomic) _Bool supportsSeparateLabelsRenderPass;
- (_Bool)isCompositeRenderer;
@property(readonly, nonatomic) double viewScale;
@property(readonly, nonatomic) TSCHChartLayoutItem *layoutItem;
@property(readonly, nonatomic) TSCHChartModel *model;
@property(readonly, nonatomic) TSCHChartInfo *chartInfo;
- (void)dealloc;
- (id)initWithChartRep:(id)arg1 layoutItem:(id)arg2;
- (void)drawErrorBarsInContext:(struct CGContext *)arg1 chartVertical:(_Bool)arg2 elementRenderClass:(Class)arg3;
- (void)drawTrendLinesInContext:(struct CGContext *)arg1 chartVertical:(_Bool)arg2 elementRenderClass:(Class)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

