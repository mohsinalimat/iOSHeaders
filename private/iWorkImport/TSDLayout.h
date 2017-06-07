//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDAbstractLayout.h>

#import <iWorkImport/TSKSearchTarget-Protocol.h>

@class NSMutableSet, NSObject, NSSet, NSString, TSDLayoutGeometry;
@protocol TSDInfo;

__attribute__((visibility("hidden")))
@interface TSDLayout : TSDAbstractLayout <TSKSearchTarget>
{
    NSObject<TSDInfo> *mInfo;
    int mLayoutState;
    struct CGPoint mBaseAlignmentFrameOriginForFixingInterimPosition;
    struct CGRect mDirtyRect;
    struct {
        unsigned int position:1;
        unsigned int size:1;
        unsigned int inlineSize:1;
    } mInvalidFlags;
    TSDLayoutGeometry *mBaseGeometry;
    struct CGRect mInitialBoundsForStandardKnobs;
    struct CGPoint mCapturedInfoGeometryPositionForAttached;
    struct CGPoint mCapturedAlignmentFrameOriginForAttached;
    NSMutableSet *mConnectedLayouts;
    struct CGSize mMaximumInlineFrameSize;
}

@property(nonatomic) struct CGSize maximumInlineFrameSize; // @synthesize maximumInlineFrameSize=mMaximumInlineFrameSize;
@property(readonly, nonatomic) NSSet *connectedLayouts; // @synthesize connectedLayouts=mConnectedLayouts;
@property(readonly, nonatomic) int layoutState; // @synthesize layoutState=mLayoutState;
@property(readonly, nonatomic) TSDLayoutGeometry *originalGeometry; // @synthesize originalGeometry=mBaseGeometry;
@property(readonly, nonatomic) NSObject<TSDInfo> *info; // @synthesize info=mInfo;
- (void)p_invalidateConnectedLayouts;
- (void)removeConnectedLayout:(id)arg1;
- (void)addConnectedLayout:(id)arg1;
- (_Bool)allowsConnections;
- (id)layoutForSelectionPath:(id)arg1;
- (_Bool)selectionMustBeEntirelyOnscreenToCountAsVisibleInSelectionPath:(id)arg1;
- (_Bool)canvasShouldScrollForSelectionPath:(id)arg1;
- (double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2;
- (struct CGRect)rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1;
- (struct CGRect)rectInRootForZoomingToSelectionPath:(id)arg1;
- (struct CGRect)rectInRootForSelectionPath:(id)arg1;
- (struct CGRect)rectInRootOfAutoZoomContextOfSelectionPath:(id)arg1;
- (id)childSearchTargets;
- (struct CGSize)p_newMaxInlineFrameSize;
- (void)p_recursiveInvalidate;
- (void)p_unregisterWithLayoutController:(id)arg1;
- (void)p_registerWithLayoutController:(id)arg1;
- (id)i_externalWrapPath;
- (id)i_wrapPath;
- (struct CGRect)i_takeDirtyRect;
- (void)i_accumulateLayoutsIntoSet:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (id)additionalGuides;
- (_Bool)shouldProvideSizingGuides;
- (_Bool)shouldDisplayGuides;
- (_Bool)allowIntersectionOfChildLayout:(id)arg1;
- (_Bool)orderedBefore:(id)arg1;
- (struct CGSize)maximumFrameSizeForChild:(id)arg1;
- (id)additionalLayoutsForRepCreation;
- (id)reliedOnLayouts;
- (id)dependentLayouts;
- (struct CGPoint)commentPoleTopPosition;
- (struct CGPoint)activityLineUnscaledEndPointForSearchReference:(id)arg1;
- (struct CGPoint)calculatePointFromSearchReference:(id)arg1;
- (struct CGRect)rectInRootForCalculatingActivityLineEndpoint;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (id)searchTarget;
- (void)processChangedProperty:(int)arg1;
- (double)scaleForInlineClampingUnrotatedSize:(struct CGSize)arg1 withGeometry:(id)arg2;
- (id)computeLayoutGeometry;
- (id)computeInfoGeometryDuringResize;
- (struct CGPoint)centerForConnecting;
- (struct CGPoint)centerForRotation;
- (struct CGRect)boundsForStandardKnobs;
@property(readonly, nonatomic, getter=isDraggable) _Bool draggable;
@property(readonly, nonatomic, getter=isSelectable) _Bool selectable;
- (void)validateFromLastInterimPosition;
- (_Bool)canFlip;
- (struct CGAffineTransform)originalPureTransformInRoot;
- (struct CGAffineTransform)pureTransformInRoot;
@property(readonly, nonatomic) _Bool canInspectGeometry;
- (id)inspectorGeometry;
- (id)pureGeometryInParent;
- (id)pureGeometryInRoot;
- (id)pureGeometry;
- (id)originalPureGeometry;
- (id)initialInfoGeometry;
- (struct CGRect)initialBoundsForStandardKnobs;
- (_Bool)isBeingManipulated;
- (void)endResize;
- (void)takeSizeFromTracker:(id)arg1;
- (void)resizeWithTransform:(struct CGAffineTransform)arg1 asChild:(_Bool)arg2;
- (struct CGSize)minimumSize;
- (void)beginResize;
@property(readonly, nonatomic) _Bool canAspectRatioLockBeChangedByUser;
@property(readonly, nonatomic) _Bool resizeMayChangeAspectRatio;
- (void)endRotate;
- (void)takeRotationFromTracker:(id)arg1;
- (void)beginRotate;
- (_Bool)shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (struct CGAffineTransform)layoutTransformInInfoSpace:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)originalTransformForProvidingGuides;
- (struct CGAffineTransform)originalTransformInRoot;
- (void)endDrag;
- (void)dragBy:(struct CGPoint)arg1;
- (void)dragByUnscaled:(struct CGPoint)arg1;
- (void)beginDrag;
- (_Bool)isBeingTransformed;
- (void)pauseDynamicTransformation;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (struct CGPoint)alignmentFrameOriginForFixingInterimPosition;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;
- (void)dynamicStrokeWidthChangeDidBegin;
@property(readonly, nonatomic) _Bool isStrokeBeingManipulated;
- (id)stroke;
- (_Bool)isInTopLevelContainerForEditing;
- (_Bool)isInGroup;
- (_Bool)shouldBeDisplayedInShowMode;
- (struct CGPoint)infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (Class)repClassOverride;
- (void)processChanges:(id)arg1;
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)arg1;
- (id)layoutGeometryFromInfo;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (void)validate;
@property(readonly, nonatomic) _Bool invalidGeometry;
- (id)layoutController;
- (id)rootLayout;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
- (_Bool)parentAutosizes;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (void)setParent:(id)arg1;
- (void)unregisterFromLayoutController;
- (void)updateChildrenFromInfo;
- (void)invalidateChildren;
- (void)invalidateExteriorWrap;
- (void)updateMaximumInlineFrameSize;
- (void)invalidateInlineSize;
- (void)invalidateFrame;
- (void)invalidateSize;
- (void)invalidatePosition;
- (void)invalidate;
- (_Bool)shouldValidate;
@property(copy, nonatomic) TSDLayoutGeometry *dynamicGeometry;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (void)setAdjustedInterimPositionY:(double)arg1;
- (void)setAdjustedInterimPositionX:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

