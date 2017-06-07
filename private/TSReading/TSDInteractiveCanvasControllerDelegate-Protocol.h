//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSKChangeSourceObserver-Protocol.h>
#import <TSReading/TSKDocumentRootProvider-Protocol.h>

@class NSArray, NSMutableArray, NSObject, NSString, Protocol, TSDAutoscroll, TSDCanvasView, TSDEditorController, TSDInteractiveCanvasController, TSDLayout, TSDRep, TSKDocumentRoot, TSKScrollView, TSKSelection, UIGestureRecognizer, UITouch, UIView;
@protocol TSCEResolverContainer, TSDEditor, TSDGesture, TSDGestureTarget, TSDImageReplacer, TSDInfo, TSDLayoutGeometryProvider, TSDPanGuide, TSDTextInput, TSKModel, TSKSearchReference;

@protocol TSDInteractiveCanvasControllerDelegate <TSKChangeSourceObserver, TSKDocumentRootProvider>
@property(readonly, retain, nonatomic) TSKDocumentRoot *documentRoot;

@optional
@property(readonly, nonatomic) _Bool allowTextEditingToBegin;
@property(readonly, nonatomic) _Bool allowEditMenuToAppear;
@property(readonly, nonatomic) struct CGSize sizeOfScrollViewEnclosingCanvas;
@property(readonly, nonatomic) _Bool shouldPopKnobsOutsideEnclosingScrollView;
@property(readonly, nonatomic) _Bool shouldShowInstructionalText;
@property(readonly, nonatomic) _Bool shouldShowTextOverflowGlyphs;
@property(readonly, nonatomic) _Bool shouldClipToScrollViewBoundsInVisibleBounds;
@property(readonly, nonatomic) _Bool shouldResizeCanvasToScrollView;
@property(readonly, nonatomic) _Bool spellCheckingSuppressed;
@property(readonly, nonatomic) _Bool spellCheckingSupported;
@property(readonly, nonatomic) _Bool isPrintingCanvas;
@property(readonly, nonatomic) _Bool isCanvasInteractive;
- (_Bool)interactiveCanvasControllerShouldDeferViewCreation:(TSDInteractiveCanvasController *)arg1;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 outsetSelectionRect:(struct CGRect)arg2;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 canvasViewBoundsWithBounds:(struct CGRect)arg2;
- (_Bool)allowSelectionPopoverForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (_Bool)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 allowsSmartMagnifyForRep:(TSDRep *)arg2;
- (_Bool)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 allowsHyperlinkWithGesture:(id <TSDGesture>)arg2 forRep:(TSDRep *)arg3;
- (_Bool)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 allowsEditMenuForRep:(TSDRep *)arg2;
- (_Bool)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 canvasViewShouldBecomeFirstResponder:(TSDCanvasView *)arg2;
- (void)interactiveCanvasControllerWillBecomeFirstResponder:(TSDInteractiveCanvasController *)arg1;
- (_Bool)interactiveCanvasControllerShouldEndEditingWhenLosingFirstResponder:(TSDInteractiveCanvasController *)arg1;
- (_Bool)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 shouldTakeFirstResponderForTextEditor:(id <TSDTextInput>)arg2;
- (_Bool)interactiveCanvasControllerShouldAnimateToSearchReferences:(TSDInteractiveCanvasController *)arg1;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 targetRectForInfo:(NSObject<TSDInfo> *)arg2 withSelection:(TSKSelection *)arg3;
- (NSObject<TSDInfo> *)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 infoForModel:(NSObject<TSKModel> *)arg2 withSelection:(TSKSelection *)arg3;
- (_Bool)interactiveCanvasControllerIsRelatedCanvasScrolling:(TSDInteractiveCanvasController *)arg1;
- (_Bool)interactiveCanvasControllerShouldResampleImages:(TSDInteractiveCanvasController *)arg1;
- (NSArray *)additionalGestureTargetsForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1 gesture:(id <TSDGesture>)arg2;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 updateGestureTargetStack:(NSMutableArray *)arg2 gesture:(id <TSDGesture>)arg3;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 layoutUnregistered:(TSDLayout *)arg2;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 layoutRegistered:(TSDLayout *)arg2;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 willLayoutRep:(TSDRep *)arg2;
- (id)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 delegateConformingToProtocol:(Protocol *)arg2 forLayout:(TSDLayout *)arg3;
- (id)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 delegateConformingToProtocol:(Protocol *)arg2 forRep:(TSDRep *)arg3;
- (id <TSDLayoutGeometryProvider>)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 layoutGeometryProviderForLayout:(TSDLayout *)arg2;
- (NSArray *)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 gestureTargetStackWhenScrollingWithGesture:(id <TSDGesture>)arg2;
- (id <TSDGestureTarget>)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 primaryTargetForGesture:(id <TSDGesture>)arg2;
- (id <TSDPanGuide>)panGuideForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1 withMovementDirection:(struct CGPoint)arg2;
- (_Bool)interactiveCanvasControllerShouldUseGuidedPan:(TSDInteractiveCanvasController *)arg1 withMovementDirection:(struct CGPoint)arg2;
- (struct CGRect)scrollViewClippingBoundsForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 expandBoundsForScrollViewHitTesting:(struct CGRect)arg2;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 expandBoundsForHitTesting:(struct CGRect)arg2;
- (double)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 adjustViewScale:(double)arg2;
- (struct CGPoint)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 restrictedContentOffset:(struct CGPoint)arg2 forViewScale:(double)arg3;
- (struct CGPoint)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 clampContentOffset:(struct CGPoint)arg2 forViewScale:(double)arg3 scrollViewBoundsSize:(struct CGSize)arg4;
- (struct CGPoint)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 clampContentOffset:(struct CGPoint)arg2 forViewScale:(double)arg3;
- (_Bool)isInteractiveCanvasControllerTextOnly:(TSDInteractiveCanvasController *)arg1;
- (_Bool)shouldSuppressCommentKnobsForRep:(TSDRep *)arg1;
- (id <TSCEResolverContainer>)activeResolverContainer;
- (void)canvasEditorDidChangeSelection:(id <TSDEditor>)arg1;
- (_Bool)isPopoverGestureInFlight;
- (Class)canvasViewClassOverride;
- (_Bool)shouldIgnoreTextGestures;
- (_Bool)allowTouchOutsideCanvasView:(UITouch *)arg1 forGesture:(UIGestureRecognizer *)arg2;
- (UIView *)viewForGestureRecognizer:(UIGestureRecognizer *)arg1;
- (_Bool)zoomOnSelectionChange:(TSDInteractiveCanvasController *)arg1;
- (_Bool)inPrintPreviewMode;
- (UIView *)visibleBoundsClipViewForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 visibleBoundsWithClippingLayerBounds:(struct CGRect)arg2 canvasBounds:(struct CGRect)arg3;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 expandVisibleBoundsForClippingReps:(struct CGRect)arg2;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 expandVisibleBoundsForTiling:(struct CGRect)arg2;
- (double)autoZoomAnimationDurationForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (_Bool)interactiveCanvasControllerSupportsAutozoom:(TSDInteractiveCanvasController *)arg1;
- (long long)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 imageReplaceBadgeBehaviorForRep:(TSDRep *)arg2;
- (id <TSDImageReplacer>)imageReplacerForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 didScrollForAutoscroll:(TSDAutoscroll *)arg2;
- (_Bool)doubleTappedCanvasBackgroundAtPoint:(struct CGPoint)arg1;
- (_Bool)tappedCanvasBackgroundAtPoint:(struct CGPoint)arg1;
- (Class)wpTrackerClassOverride;
- (Class)wpFloatingCommentEditorClassOverride;
- (Class)wpEditorClassOverride;
- (void)editorDidChangeSelection:(id <TSDEditor>)arg1;
- (void)editorDidChangeSelectionWithTextInputEditor:(id <TSDEditor>)arg1 changingEditor:(id <TSDEditor>)arg2;
- (void)selectionDidChange;
- (void)setSelection:(TSKSelection *)arg1 onModel:(NSObject *)arg2 withFlags:(unsigned long long)arg3;
- (void)willScrollSearchReferenceToVisible:(id <TSKSearchReference>)arg1;
- (void)dynamicOperationDidEnd;
- (void)dynamicOperationWillBegin;
- (NSArray *)rectanglesObscuringView:(UIView *)arg1;
- (NSString *)descriptionForCanvasViewScale:(double)arg1;
- (double)nextCanvasViewScaleDetentForProposedViewScale:(double)arg1 greater:(_Bool)arg2;
- (double)canvasViewScaleForProposedViewScale:(double)arg1 originalViewScale:(double)arg2;
- (struct CGSize)canvasCenterOffsetForProposedViewScale:(double)arg1 originalViewScale:(double)arg2;
- (void)canvasWillEndEditingToBeginEditingRep:(TSDRep *)arg1;
- (TSDEditorController *)editorControllerForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (struct CGRect)visibleUnscaledCanvasRectWithoutKeyboard;
- (void)interactiveCanvasControllerDidAnimateViewScale:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 willAnimateToViewScale:(double)arg2 withDuration:(double)arg3 unscaledContentOffset:(struct CGPoint)arg4;
- (_Bool)interactiveCanvasControllerShouldMaintainPositionOnSetViewScale:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidLayoutAndRenderOnBackgroundThread:(TSDInteractiveCanvasController *)arg1;
- (_Bool)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 shouldDispatchBackgroundWork:(void (^)(void))arg2;
- (void)interactiveCanvasControllerDidZoomWithUserGesture:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidZoom:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerIsZooming:(TSDInteractiveCanvasController *)arg1 viewScale:(double)arg2;
- (void)interactiveCanvasControllerWillZoom:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 performLockedAction:(void (^)(void))arg2;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 scrollViewWillEndDragging:(TSKScrollView *)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 scrollViewWillBeginDragging:(TSKScrollView *)arg2;
- (void)interactiveCanvasControllerDidStopScrolling:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidScroll:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerWillScroll:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidEndScrollingAnimation:(TSDInteractiveCanvasController *)arg1 stillAnimating:(_Bool)arg2;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 willAnimateScrollToVisibleUnscaledRect:(struct CGRect)arg2;
- (void)interactiveCanvasControllerDidUpdateLayersFromReps:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidLayout:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidValidateLayouts:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerWillLayout:(TSDInteractiveCanvasController *)arg1;
@end

