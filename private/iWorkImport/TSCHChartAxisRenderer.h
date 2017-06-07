//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHRenderer.h>

#import <iWorkImport/TSCHCompositeRendering-Protocol.h>

@class NSString, TSCHSelectionPath;

__attribute__((visibility("hidden")))
@interface TSCHChartAxisRenderer : TSCHRenderer <TSCHCompositeRendering>
{
    TSCHSelectionPath *mAxisTitleSelectionPath;
    struct CGRect mStartingEditingFrame;
    NSString *mEditingString;
}

@property(retain, nonatomic) NSString *editingString; // @synthesize editingString=mEditingString;
- (void)useEditedString:(id)arg1;
- (struct CGRect)frameForEditingTextForSelectionPath:(id)arg1;
- (_Bool)canEditTextForSelectionPath:(id)arg1;
- (void)addSelection:(id)arg1 toCGPath:(struct CGPath *)arg2;
- (_Bool)p_isTitleVisible;
- (void)renderIntoContext:(struct CGContext *)arg1 selection:(id)arg2;
- (_Bool)canRenderSelectionPath:(id)arg1;
- (void)drawIntoLayer:(int)arg1 inContext:(struct CGContext *)arg2 visible:(struct CGRect)arg3;
- (void)p_renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)p_addTickmarkPaths:(struct CGContext *)arg1 axis:(id)arg2 locations:(id)arg3 stroke:(id)arg4 width:(float)arg5;
- (void)p_debugRenderTickmarkArea:(struct CGContext *)arg1;
- (void)p_addLinePath:(struct CGContext *)arg1 stroke:(id)arg2;
- (void)p_drawTitle:(struct CGContext *)arg1 rangePtr:(struct _NSRange *)arg2;
- (_Bool)isCompositeRenderer;
- (id)axisLayoutItem;
- (void)willBeginTransparencyLayer:(int)arg1 inContext:(struct CGContext *)arg2;
- (id)transparencyLayers;
- (_Bool)needsAnySeparateLayers;
- (_Bool)p_needsSharedTickMarkLayer;
- (_Bool)p_needsPositionBasedTransparencyLayer;
- (id)axisTitleSelectionPath;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

