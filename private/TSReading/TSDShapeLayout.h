//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDStyledLayout.h>

@class TSDBezierPath, TSDEditableBezierPathSource, TSDFill, TSDInfoGeometry, TSDMutableStroke, TSDPathSource;

@interface TSDShapeLayout : TSDStyledLayout
{
    struct {
        unsigned int path:1;
        unsigned int pathBounds:1;
        unsigned int pathBoundsWithoutStroke:1;
        unsigned int pathIsOpen:1;
        unsigned int pathIsLineSegment:1;
        unsigned int alignmentFrame:1;
        unsigned int headAndTail:1;
        unsigned int headLineEnd:1;
        unsigned int tailLineEnd:1;
        unsigned int clippedPath:1;
    } mShapeInvalidFlags;
    TSDBezierPath *mCachedPath;
    struct CGRect mCachedPathBounds;
    struct CGRect mCachedPathBoundsWithoutStroke;
    _Bool mCachedPathIsOpen;
    _Bool mCachedPathIsLineSegment;
    struct CGRect mCachedAlignmentFrame;
    struct CGPoint mHeadPoint;
    struct CGPoint mTailPoint;
    struct CGPoint mHeadLineEndPoint;
    struct CGPoint mTailLineEndPoint;
    double mHeadLineEndAngle;
    double mTailLineEndAngle;
    long long mHeadCutSegment;
    long long mTailCutSegment;
    double mHeadCutT;
    double mTailCutT;
    TSDBezierPath *mCachedClippedPath;
    TSDPathSource *mShrunkenPathSource;
    TSDEditableBezierPathSource *mCachedEditableBezierPathSource;
    TSDPathSource *mCachedPathSource;
    TSDPathSource *mResizePathSource;
    TSDInfoGeometry *mResizeInfoGeometry;
    TSDInfoGeometry *mInitialInfoGeometry;
    TSDPathSource *mProvidedPathSource;
    TSDMutableStroke *mDynamicStroke;
    TSDFill *mDynamicFill;
}

@property(retain, nonatomic) TSDFill *dynamicFill; // @synthesize dynamicFill=mDynamicFill;
- (void)p_updateResizeInfoGeometryFromResizePathSource;
- (id)p_unitePath:(id)arg1 withLineEndForHead:(_Bool)arg2 stroke:(id)arg3;
- (struct CGRect)p_boundsOfLineEndForHead:(_Bool)arg1 transform:(struct CGAffineTransform)arg2;
- (id)p_createClippedPath;
- (void)p_computeAngle:(double *)arg1 point:(struct CGPoint *)arg2 cutSegment:(long long *)arg3 cutT:(double *)arg4 forLineEndAtHead:(_Bool)arg5;
- (void)p_validateTailLineEnd;
- (void)p_validateHeadLineEnd;
- (void)p_validateHeadAndTail;
- (void)p_invalidateClippedPath;
- (void)p_invalidateTail;
- (void)p_invalidateHead;
- (_Bool)p_cachedPathIsLineSegment;
- (_Bool)p_cachedPathIsOpen;
- (struct CGRect)p_cachedPathBoundsWithoutStroke;
- (struct CGRect)p_cachedPathBounds;
- (id)p_cachedPath;
- (id)i_computeWrapPathClosed:(_Bool)arg1;
- (id)i_computeWrapPath;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;
- (unsigned long long)numberOfControlKnobs;
- (id)strokeTailLineEnd;
- (id)strokeHeadLineEnd;
- (struct CGPoint)unclippedTailPoint;
- (struct CGPoint)unclippedHeadPoint;
- (_Bool)isBeingManipulated;
- (_Bool)supportsRotation;
- (id)initialInfoGeometry;
- (struct CGSize)minimumSize;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (_Bool)supportsResize;
- (void)invalidatePathBounds;
- (void)invalidatePath;
- (void)invalidateFrame;
- (_Bool)canResetTextAndObjectHandles;
- (_Bool)canBeIntersected;
@property(readonly, nonatomic) TSDFill *fill;
- (void)aliasPathForScale:(double)arg1 originalStroke:(id)arg2 adjustedStroke:(id *)arg3 adjustedPath:(id *)arg4 startDelta:(struct CGPoint *)arg5 endDelta:(struct CGPoint *)arg6;
- (void)aliasPathForScale:(double)arg1 adjustedStroke:(id *)arg2 adjustedPath:(id *)arg3 startDelta:(struct CGPoint *)arg4 endDelta:(struct CGPoint *)arg5;
- (struct CGRect)aliasedAlignmentFrameForScale:(double)arg1;
- (struct CGPoint)centerForConnecting;
- (_Bool)isInvisibleAutosizingShape;
- (_Bool)shouldBeDisplayedInShowMode;
- (_Bool)isInvisible;
- (struct CGRect)shapeFrameWithTransform:(struct CGAffineTransform)arg1;
- (id)clippedPathForLineEnds;
- (double)lineEndScale;
- (_Bool)isTailEndOnLeft;
- (double)tailLineEndAngle;
- (double)headLineEndAngle;
- (struct CGPoint)tailLineEndPoint;
- (struct CGPoint)headLineEndPoint;
- (struct CGPoint)tailPoint;
- (struct CGPoint)headPoint;
- (id)layoutInfoGeometry;
- (_Bool)pathIsLineSegment;
- (_Bool)pathIsOpen;
- (id)smartPathSource;
- (struct CGRect)pathBoundsWithoutStroke;
- (struct CGRect)pathBounds;
- (id)path;
- (id)editablePathSource;
- (id)pathSource;
- (id)shapeInfo;
- (_Bool)isStrokeBeingManipulated;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;
- (void)dynamicStrokeWidthChangeDidBegin;
- (id)stroke;
- (struct CGRect)boundsForStandardKnobs;
- (void)processChangedProperty:(int)arg1;
- (struct CGRect)alignmentFrameInRoot;
- (struct CGRect)alignmentFrame;
- (void)setGeometry:(id)arg1;
- (struct CGAffineTransform)computeLayoutTransform;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end

