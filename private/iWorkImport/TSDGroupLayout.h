//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDContainerLayout.h>

#import <iWorkImport/TSDWrappableParent-Protocol.h>

@class TSDLayoutGeometry, TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent>
{
    TSDLayoutGeometry *mDynamicLayoutGeometry;
    struct CGRect mBoundsForStandardKnobs;
    TSUBezierPath *mCachedWrapPath;
    TSUBezierPath *mCachedExternalWrapPath;
}

+ (id)p_childWrapPathsFrom:(id)arg1;
- (void).cxx_destruct;
- (void)p_invalidateDescendentWrapPaths;
- (void)p_invalidateParentForWrap;
- (void)p_destroyDynamicCopies;
- (void)setDynamicGeometry:(id)arg1;
- (void)p_createDynamicCopies;
- (id)descendentWrappables;
- (void)transferLayoutGeometryToInfo:(id)arg1;
- (struct CGRect)rectInRootForCalculatingActivityLineEndpoint;
- (id)i_externalWrapPath;
- (id)i_wrapPath;
- (id)i_computeWrapPath;
- (_Bool)supportsFlipping;
- (_Bool)canFlip;
- (_Bool)supportsRotation;
- (_Bool)supportsInspectorPositioning;
- (_Bool)allowsConnections;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (_Bool)providesGuidesForChildLayouts;
- (void)setGeometry:(id)arg1;
- (void)dragBy:(struct CGPoint)arg1;
- (_Bool)isDraggable;
- (void)invalidateExteriorWrap;
- (void)invalidate;
- (void)endDynamicOperation;
- (struct CGSize)minimumSize;
- (_Bool)resizeMayChangeAspectRatio;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (id)computeInfoGeometryDuringResize;
- (void)beginDynamicOperation;
- (struct CGRect)rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1;
- (struct CGRect)frameForCulling;
- (struct CGRect)alignmentFrame;
- (struct CGRect)clipRect;
- (struct CGRect)boundsForStandardKnobs;
- (void)processChangedProperty:(int)arg1;
- (id)computeLayoutGeometry;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (id)reliedOnLayouts;
- (id)layoutGeometryFromInfo;
- (_Bool)canInspectGeometry;
- (id)visibleGeometries;

@end

