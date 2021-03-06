//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDMagicMoveMatching-Protocol.h>

@class CALayer, NSArray, NSDictionary, TSDCanvas, TSDKnobTracker, TSDLayout, TSDLayoutGeometry, TSDTilingBackgroundQueue, TSUOnce;
@protocol OS_dispatch_queue, TSDContainerRep;

__attribute__((visibility("hidden")))
@interface TSDRep : NSObject <TSDMagicMoveMatching>
{
    TSDCanvas *mCanvas;
    TSDRep<TSDContainerRep> *mParentRep;
    TSDKnobTracker *mKnobTracker;
    _Bool mSelectionHighlightLayerValid;
    CALayer *mSelectionHighlightLayer;
    _Bool mCollaboratorCursorLayerValid;
    CALayer *mCollaboratorCursorLayer;
    NSDictionary *mTextureAnimationInfo;
    _Bool mShowTemporaryHighlight;
    CALayer *mTemporaryHighlightLayer;
    _Bool mShowDragAndDropHighlight;
    CALayer *mDragAndDropHighlightLayer;
    TSDLayout *mTemporaryMixingLayout;
    _Bool mWantsToRedrawWithOpenGL;
    TSDLayout *mLayout;
    struct CGColor *mDefaultSelectionHighlightColor;
    TSDLayoutGeometry *mLastGeometryInRoot;
    struct CGRect mOriginalLayerFrameInScaledCanvas;
    TSDTilingBackgroundQueue *mTileQueue;
    TSUOnce *mTileQueueOnce;
    NSObject<OS_dispatch_queue> *mKnobsAccessQueue;
    NSArray *mKnobs;
    _Bool mKnobPositionsInvalid;
    _Bool mShowKnobsWhenManipulated;
    _Bool mKnobsAreShowing;
    _Bool mHasBeenRemoved;
}

@property(copy, nonatomic) NSDictionary *textureAnimationInfo; // @synthesize textureAnimationInfo=mTextureAnimationInfo;
@property(nonatomic) __weak TSDRep<TSDContainerRep> *parentRep; // @synthesize parentRep=mParentRep;
@property(retain, nonatomic) TSDLayout *temporaryMixingLayout; // @synthesize temporaryMixingLayout=mTemporaryMixingLayout;
@property(readonly, nonatomic) __weak TSDCanvas *canvas; // @synthesize canvas=mCanvas;
@property(readonly, nonatomic, getter=isCollaboratorCursorLayerValid) _Bool collaboratorCursorLayerValid; // @synthesize collaboratorCursorLayerValid=mCollaboratorCursorLayerValid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *hyperlinkRegions;
- (_Bool)wantsToDistortWithImagerContext;
- (_Bool)directlyManagesLayerContent;
- (struct CGPoint)centerForRotation;
- (id)infoForTransforming;
- (_Bool)resizeFromCenterOnly;
- (double)opacity;
- (_Bool)isLocked;
- (_Bool)isPlaceholder;
- (_Bool)isOpaque;
- (_Bool)masksToBounds;
- (_Bool)canEditWithEditor:(id)arg1;
- (void)willBeRemoved;
- (void)processChangedProperty:(int)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)repDirectlyManagesContentsScaleOfLayer:(id)arg1;
@property(readonly, nonatomic) struct CGRect frameForMagicMove;
- (id)textureForDescription:(id)arg1;
- (void)setTextureAttributes:(id)arg1 textureBounds:(struct CGRect)arg2;
- (struct CGAffineTransform)unRotatedTransform:(struct CGAffineTransform)arg1;
- (_Bool)wantsToHandleTapsWhenLocked;
- (_Bool)wantsToHandleTapsOnContainingGroup;
- (_Bool)canClipThemeContentToCanvas;
- (_Bool)handleMultipleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (void)endDragInlineWithText;
- (void)beginDragInlineWithText;
- (_Bool)allowDragAcrossPageBoundaries;
- (struct CGRect)i_originalLayerFrameInScaledCanvas;
- (double)contentsScale;
- (void)i_configureFontSmoothingForContext:(struct CGContext *)arg1 layer:(id)arg2;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (struct CGRect)clipRect;
- (_Bool)isDrawingInFlippedContext;
- (void)setNeedsDisplay;
- (void)computeDirectLayerFrame:(struct CGRect *)arg1 andTransform:(struct CGAffineTransform *)arg2 basedOnLayoutGeometry:(id)arg3;
- (void)computeDirectLayerFrame:(struct CGRect *)arg1 andTransform:(struct CGAffineTransform *)arg2;
- (void)computeDirectLayerFrame:(struct CGRect *)arg1 andTransform:(struct CGAffineTransform *)arg2 basedOnTransform:(struct CGAffineTransform)arg3 andSize:(struct CGSize)arg4;
- (void)antiAliasDefeatLayerFrame:(struct CGRect *)arg1 forTransform:(struct CGAffineTransform)arg2;
- (void)antiAliasDefeatLayerTransform:(struct CGAffineTransform *)arg1 forFrame:(struct CGRect)arg2;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (struct CGAffineTransform)layerTransformInRootForZeroAnchor;
- (struct CGAffineTransform)parentLayerInverseTransformInRootForZeroAnchor;
- (struct CGAffineTransform)layerTransform;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(_Bool)arg3;
- (void)updateFromLayout;
- (void)updateChildrenFromLayout;
- (id)repForHandleSingleTap;
- (id)repForRotating;
- (id)repForSelecting;
- (id)additionalRepsForDragging;
- (id)p_repForDraggingIgnoringTopLevelEditing:(_Bool)arg1;
- (id)i_repForDraggingIgnoringTopLevelEditing;
- (id)repForDragging;
- (_Bool)intersectsUnscaledRect:(struct CGRect)arg1;
- (double)shortestDistanceToPoint:(struct CGPoint)arg1 countAsHit:(_Bool *)arg2;
- (_Bool)shouldExpandHitRegionWhenSmall;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (id)hitRepChrome:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)hitReps:(struct CGPoint)arg1 withSlopBlock:(CDUnknownBlockType)arg2;
- (id)hitReps:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (id)hitRep:(struct CGPoint)arg1;
- (id)hitRep:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (struct CGRect)convertNaturalRectFromLayerRelative:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectToLayerRelative:(struct CGRect)arg1;
- (struct CGPoint)convertNaturalPointFromLayerRelative:(struct CGPoint)arg1;
- (struct CGPoint)convertNaturalPointToLayerRelative:(struct CGPoint)arg1;
- (struct CGAffineTransform)transformToConvertNaturalFromLayerRelative;
- (struct CGAffineTransform)transformToConvertNaturalToLayerRelative;
- (struct CGRect)layerFrameInScaledCanvasRelativeToParent;
- (struct CGRect)i_layerFrameInScaledCanvasIgnoringDragging;
- (struct CGRect)layerFrameInScaledCanvas;
- (struct CGRect)frameInScreenSpace;
- (struct CGRect)frameInUnscaledCanvasIncludingChrome;
- (struct CGRect)frameInUnscaledCanvas;
- (struct CGPoint)convertNaturalPointFromUnscaledCanvas:(struct CGPoint)arg1;
- (struct CGPoint)convertNaturalPointToUnscaledCanvas:(struct CGPoint)arg1;
- (struct CGPath *)newPathInScaledCanvasFromNaturalRect:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectFromUnscaledCanvas:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectToUnscaledCanvas:(struct CGRect)arg1;
- (struct CGRect)naturalBounds;
- (double)angleInRoot;
- (void)addToSet:(id)arg1;
- (void)i_willBeRemoved;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)setWantsToRedrawWithOpenGL;
- (id)info;
@property(readonly, nonatomic) TSDLayout *layout; // @synthesize layout=mLayout;
- (id)interactiveCanvasController;
- (_Bool)i_hasInteractiveCanvasController;
- (id)description;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (struct CGRect)i_partition_deepClipRect;

@end

