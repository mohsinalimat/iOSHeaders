//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSSet, TSDInteractiveCanvasController, TSDLayoutController, TSKAccessController, TSKChangeNotifier, TSKDocumentRoot, TSPObjectContext;
@protocol OS_dispatch_queue, TSDCanvasDelegate;

__attribute__((visibility("hidden")))
@interface TSDCanvas : NSObject
{
    id <TSDCanvasDelegate> mDelegate;
    TSDInteractiveCanvasController *mCanvasController;
    NSArray *mInfos;
    NSArray *mTopLevelReps;
    NSSet *mAllReps;
    struct __CFDictionary *mRepsByLayout;
    TSDLayoutController *mLayoutController;
    _Bool mIsTemporaryForLayout;
    struct CGSize mUnscaledSize;
    double mViewScale;
    double mContentsScale;
    _Bool mWideGamut;
    struct {
        unsigned int layout:1;
        unsigned int reps:1;
        unsigned int visibleBounds:1;
        unsigned int layers:1;
    } mInvalidFlags;
    _Bool mInLayout;
    NSArray *mPreviouslyVisibleLayouts;
    NSMutableArray *mBlocksToPerform;
    NSObject<OS_dispatch_queue> *mBlocksToPerformAccessQueue;
    _Bool mIgnoringClickThrough;
    struct CGColor *mBackgroundColor;
    struct UIEdgeInsets mContentInset;
    _Bool mClipToCanvas;
    _Bool mAllowsFontSubpixelQuantization;
    _Bool mSuppressesShadowsAndReflections;
}

@property(readonly, nonatomic) _Bool isTemporaryForLayout; // @synthesize isTemporaryForLayout=mIsTemporaryForLayout;
@property(nonatomic) double viewScale; // @synthesize viewScale=mViewScale;
@property(nonatomic) struct CGSize unscaledSize; // @synthesize unscaledSize=mUnscaledSize;
@property(nonatomic) _Bool suppressesShadowsAndReflections; // @synthesize suppressesShadowsAndReflections=mSuppressesShadowsAndReflections;
@property(nonatomic) _Bool allowsFontSubpixelQuantization; // @synthesize allowsFontSubpixelQuantization=mAllowsFontSubpixelQuantization;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=mContentInset;
@property(nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor=mBackgroundColor;
@property(readonly, nonatomic) TSDLayoutController *layoutController; // @synthesize layoutController=mLayoutController;
@property(copy, nonatomic) NSArray *infosToDisplay; // @synthesize infosToDisplay=mInfos;
@property(nonatomic) id <TSDCanvasDelegate> delegate; // @synthesize delegate=mDelegate;
- (void)p_removeAllReps;
- (void)orderRepsForLayout:(id)arg1;
- (_Bool)p_updateRepsFromLayouts;
- (void)p_layoutWithReadLock;
- (struct CGRect)p_bounds;
- (struct CGImage *)i_newImageInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2 integralBounds:(struct CGRect)arg3 distortedToMatch:(_Bool)arg4;
- (struct CGContext *)i_createContextToDrawImageInScaledRect:(struct CGRect)arg1 withTargetIntegralSize:(struct CGSize)arg2 returningBounds:(struct CGRect *)arg3 integralBounds:(struct CGRect *)arg4;
- (struct CGImage *)i_imageInScaledRect:(struct CGRect)arg1 withTargetIntegralSize:(struct CGSize)arg2 distortedToMatch:(_Bool)arg3;
- (struct CGImage *)i_imageInScaledRect:(struct CGRect)arg1;
- (struct CGImage *)i_image;
- (void)i_clipsImagesToBounds:(_Bool)arg1;
- (void)i_drawRepsInContext:(struct CGContext *)arg1;
- (void)i_drawRepsInContext:(struct CGContext *)arg1 distort:(struct CGAffineTransform)arg2;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)i_drawBackgroundInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (void)i_drawBackgroundInContext:(struct CGContext *)arg1;
- (struct CGRect)i_clipRectForCreatingRepsFromLayouts;
- (struct CGRect)i_unscaledRectOfLayouts;
- (struct CGRect)i_approximateScaledFrameOfEditingMenuAtPoint:(struct CGPoint)arg1;
- (void)i_unregisterRep:(id)arg1;
- (void)i_registerRep:(id)arg1;
- (_Bool)i_shouldIgnoreClickThrough;
- (void)i_performBlockWhileIgnoringClickThrough:(CDUnknownBlockType)arg1;
- (_Bool)p_expandHitRegionOfPoint:(struct CGPoint)arg1 forRep:(id)arg2 smallRepOutset:(double)arg3 forShortestDistance:(double *)arg4;
- (_Bool)p_shouldRep:(id)arg1 countAsClosestSmallRepForSizeLimit:(double)arg2;
- (id)hitRep:(struct CGPoint)arg1 inTopLevelReps:(id)arg2 smallRepOutset:(double)arg3 passingTest:(CDUnknownBlockType)arg4;
- (struct CGRect)visibleUnscaledRectForClippingReps;
- (struct CGSize)convertBoundsToUnscaledSize:(struct CGSize)arg1;
- (struct CGSize)convertUnscaledToBoundsSize:(struct CGSize)arg1;
- (struct CGPoint)convertBoundsToUnscaledPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertUnscaledToBoundsPoint:(struct CGPoint)arg1;
- (struct CGRect)convertBoundsToUnscaledRect:(struct CGRect)arg1;
- (struct CGRect)convertUnscaledToBoundsRect:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool canvasIsWideGamut;
- (void)i_setCanvasIsWideGamut:(_Bool)arg1;
@property(readonly, nonatomic) double contentsScale;
- (void)i_setContentsScale:(double)arg1;
- (_Bool)isRenderingForKPF;
- (_Bool)isDrawingIntoPDF;
- (_Bool)shouldSuppressBackgrounds;
- (_Bool)shouldShowInstructionalText;
- (_Bool)shouldShowTextOverflowGlyphs;
- (_Bool)isPrinting;
- (_Bool)wantsEditingLayoutsForOffscreenInfos;
@property(readonly, nonatomic) _Bool isCanvasInteractive;
- (_Bool)spellCheckingSuppressed;
- (_Bool)spellCheckingSupported;
@property(readonly, nonatomic) _Bool supportsAdaptiveLayout;
- (_Bool)i_needsLayout;
- (void)layoutIfNeeded;
- (void)invalidateLayers;
- (void)invalidateVisibleBounds;
- (void)invalidateReps;
- (void)layoutInvalidated;
- (void)recreateAllLayoutsAndReps;
- (id)allReps;
- (id)topLevelReps;
- (id)repForLayout:(id)arg1;
- (void)i_updateInfosInLayoutController;
- (void)i_setInfosToDisplay:(id)arg1 updatingLayoutController:(_Bool)arg2;
@property(readonly, nonatomic) TSDInteractiveCanvasController *canvasController;
- (void)i_setCanvasController:(id)arg1;
@property(readonly, nonatomic) TSKAccessController *accessController;
@property(readonly, nonatomic) TSKChangeNotifier *changeNotifier;
@property(readonly, nonatomic) TSPObjectContext *objectContext;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (void)performBlockAfterLayoutIfNecessary:(CDUnknownBlockType)arg1;
- (Class)rootLayoutClass;
- (void)dealloc;
- (void)teardown;
- (id)initForTemporaryLayout;
- (id)initWithLayoutControllerClass:(Class)arg1 delegate:(id)arg2;
- (id)init;
- (id)textRendererForLayer:(id)arg1 context:(struct CGContext *)arg2;

@end

