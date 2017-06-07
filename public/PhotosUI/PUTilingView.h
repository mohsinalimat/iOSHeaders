//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, PUReuseQueue, PUTileAnimator, PUTileTransitionCoordinator, PUTileTree, PUTilingLayout;
@protocol PUTilingCoordinateSystem, PUTilingViewScrollDelegate, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewTileUseDelegate;

@interface PUTilingView : UIScrollView
{
    struct {
        _Bool respondsToDataSourceConverterForTransitionFromLayoutToLayout;
        _Bool respondsToTileTransitionCoordinatorForTransitionFromLayoutWithContext;
        _Bool respondsToTileTransitionCoordinatorForUpdateWithItems;
        _Bool respondsToTileTransitionCoordinatorForChangeFromFrame;
        _Bool respondsToTileTransitionCoordinatorForReattachedTileControllers;
        _Bool respondsToTileTransitionCoordinatorForLayoutInvalidationContext;
        _Bool respondsToCanBypass20069585Check;
    } _tileTransitionDelegateFlags;
    struct {
        _Bool respondsToScrollInfoWithLayout;
        _Bool respondsToInitialVisibleOriginWithLayout;
        _Bool respondsToTargetVisibleOriginForProposedVisibleOrigin;
    } _scrollDelegateFlags;
    struct {
        _Bool respondsToWillStartUsingTileController;
        _Bool respondsToDidStopUsingTileController;
        _Bool respondsToDidUpdateTileControllers;
        _Bool respondsToDidEndAnimatingTileControllers;
    } _tileUseDelegateFlags;
    _Bool __needsUpdateLayoutVisibleRect;
    _Bool __needsUpdateTileControllersVisibleRect;
    _Bool __needsUpdateLayoutCoordinateSystem;
    _Bool __needsUpdateLayout;
    _Bool __needsUpdateScrollViewProperties;
    _Bool __needsUpdateTileControllers;
    _Bool __needsUpdateReferencedDataSources;
    _Bool __needsUpdateReferencedCoordinateSystems;
    _Bool __performingBatchUpdates;
    id <PUTilingViewTileSource> _tileSource;
    PUTilingLayout *_layout;
    PUTileAnimator *_tileAnimator;
    id <PUTilingViewTileTransitionDelegate> _tileTransitionDelegate;
    id <PUTilingViewScrollDelegate> _scrollDelegate;
    id <PUTilingViewTileUseDelegate> _tileUseDelegate;
    id <PUTilingCoordinateSystem> _contentCoordinateSystem;
    id <PUTilingCoordinateSystem> _fixedCoordinateSystem;
    PUTilingLayout *__pendingLayout;
    PUReuseQueue *__tileControllerReuseQueue;
    PUTileTree *__activeTileControllers;
    PUTileTree *__inactiveTileControllers;
    PUTileTree *__detachedTileControllers;
    NSMutableDictionary *__referencedDataSourcesByIdentifiers;
    NSMutableSet *__referencedCoordinateSystems;
    PUTileTransitionCoordinator *__tileTransitionCoordinatorForNextLayout;
    long long __reasonForNextLayoutCoordinateSystemUpdate;
    NSMutableArray *__pendingUpdateItems;
    double __pagingSpringPullAdjustment;
    double __pagingFrictionAdjustment;
    NSMutableDictionary *__postLayoutBlocks;
    CDUnknownBlockType _onNextTileControllersUpdateBlock;
    struct UIEdgeInsets _loadingInsets;
}

+ (unsigned long long)_defaultEdgesScrollingContentIntoSafeArea;
@property(copy, nonatomic) CDUnknownBlockType onNextTileControllersUpdateBlock; // @synthesize onNextTileControllersUpdateBlock=_onNextTileControllersUpdateBlock;
@property(readonly, nonatomic) NSMutableDictionary *_postLayoutBlocks; // @synthesize _postLayoutBlocks=__postLayoutBlocks;
@property(nonatomic, setter=_setPagingFrictionAdjustment:) double _pagingFrictionAdjustment; // @synthesize _pagingFrictionAdjustment=__pagingFrictionAdjustment;
@property(nonatomic, setter=_setPagingSpringPullAdjustment:) double _pagingSpringPullAdjustment; // @synthesize _pagingSpringPullAdjustment=__pagingSpringPullAdjustment;
@property(readonly, nonatomic) NSMutableArray *_pendingUpdateItems; // @synthesize _pendingUpdateItems=__pendingUpdateItems;
@property(nonatomic, getter=_isPerformingBatchUpdates, setter=_setPerformingBatchUpdates:) _Bool _performingBatchUpdates; // @synthesize _performingBatchUpdates=__performingBatchUpdates;
@property(nonatomic, setter=_setReasonForNextLayoutCoordinateSystemUpdate:) long long _reasonForNextLayoutCoordinateSystemUpdate; // @synthesize _reasonForNextLayoutCoordinateSystemUpdate=__reasonForNextLayoutCoordinateSystemUpdate;
@property(retain, nonatomic, setter=_setTileTransitionCoordinatorForNextLayout:) PUTileTransitionCoordinator *_tileTransitionCoordinatorForNextLayout; // @synthesize _tileTransitionCoordinatorForNextLayout=__tileTransitionCoordinatorForNextLayout;
@property(nonatomic, setter=_setNeedsUpdateReferencedCoordinateSystems:) _Bool _needsUpdateReferencedCoordinateSystems; // @synthesize _needsUpdateReferencedCoordinateSystems=__needsUpdateReferencedCoordinateSystems;
@property(nonatomic, setter=_setNeedsUpdateReferencedDataSources:) _Bool _needsUpdateReferencedDataSources; // @synthesize _needsUpdateReferencedDataSources=__needsUpdateReferencedDataSources;
@property(nonatomic, setter=_setNeedsUpdateTileControllers:) _Bool _needsUpdateTileControllers; // @synthesize _needsUpdateTileControllers=__needsUpdateTileControllers;
@property(nonatomic, setter=_setNeedsUpdateScrollViewProperties:) _Bool _needsUpdateScrollViewProperties; // @synthesize _needsUpdateScrollViewProperties=__needsUpdateScrollViewProperties;
@property(nonatomic, setter=_setNeedsUpdateLayout:) _Bool _needsUpdateLayout; // @synthesize _needsUpdateLayout=__needsUpdateLayout;
@property(nonatomic, setter=_setNeedsUpdateLayoutCoordinateSystem:) _Bool _needsUpdateLayoutCoordinateSystem; // @synthesize _needsUpdateLayoutCoordinateSystem=__needsUpdateLayoutCoordinateSystem;
@property(nonatomic, setter=_setNeedsUpdateTileControllersVisibleRect:) _Bool _needsUpdateTileControllersVisibleRect; // @synthesize _needsUpdateTileControllersVisibleRect=__needsUpdateTileControllersVisibleRect;
@property(nonatomic, setter=_setNeedsUpdateLayoutVisibleRect:) _Bool _needsUpdateLayoutVisibleRect; // @synthesize _needsUpdateLayoutVisibleRect=__needsUpdateLayoutVisibleRect;
@property(readonly, nonatomic) NSMutableSet *_referencedCoordinateSystems; // @synthesize _referencedCoordinateSystems=__referencedCoordinateSystems;
@property(readonly, nonatomic) NSMutableDictionary *_referencedDataSourcesByIdentifiers; // @synthesize _referencedDataSourcesByIdentifiers=__referencedDataSourcesByIdentifiers;
@property(readonly, nonatomic) PUTileTree *_detachedTileControllers; // @synthesize _detachedTileControllers=__detachedTileControllers;
@property(readonly, nonatomic) PUTileTree *_inactiveTileControllers; // @synthesize _inactiveTileControllers=__inactiveTileControllers;
@property(readonly, nonatomic) PUTileTree *_activeTileControllers; // @synthesize _activeTileControllers=__activeTileControllers;
@property(readonly, nonatomic) PUReuseQueue *_tileControllerReuseQueue; // @synthesize _tileControllerReuseQueue=__tileControllerReuseQueue;
@property(retain, nonatomic, setter=_setPendingLayout:) PUTilingLayout *_pendingLayout; // @synthesize _pendingLayout=__pendingLayout;
@property(readonly, nonatomic) id <PUTilingCoordinateSystem> fixedCoordinateSystem; // @synthesize fixedCoordinateSystem=_fixedCoordinateSystem;
@property(readonly, nonatomic) id <PUTilingCoordinateSystem> contentCoordinateSystem; // @synthesize contentCoordinateSystem=_contentCoordinateSystem;
@property(nonatomic) __weak id <PUTilingViewTileUseDelegate> tileUseDelegate; // @synthesize tileUseDelegate=_tileUseDelegate;
@property(nonatomic) __weak id <PUTilingViewScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak id <PUTilingViewTileTransitionDelegate> tileTransitionDelegate; // @synthesize tileTransitionDelegate=_tileTransitionDelegate;
@property(nonatomic) __weak PUTileAnimator *tileAnimator; // @synthesize tileAnimator=_tileAnimator;
@property(retain, nonatomic, setter=_setLayout:) PUTilingLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) struct UIEdgeInsets loadingInsets; // @synthesize loadingInsets=_loadingInsets;
@property(nonatomic) __weak id <PUTilingViewTileSource> tileSource; // @synthesize tileSource=_tileSource;
- (void).cxx_destruct;
- (void)_transferTileControllersToDataSource:(id)arg1 usingDataSourceConverter:(id)arg2;
- (id)_dataSourceWithIdentifier:(id)arg1;
- (void)_registerDataSource:(id)arg1;
- (void)registerPostLayoutBlock:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;
- (void)_runPostLayoutBlocks;
- (void)_updateReferencedCoordinateSystemsIfNeeded;
- (void)_updateReferencedDataSourcesIfNeeded;
- (void)_updateTileControllersWithLayout:(id)arg1 reactivatability:(CDUnknownBlockType)arg2 appearanceHandler:(CDUnknownBlockType)arg3 updateHandler:(CDUnknownBlockType)arg4 disappearanceHandler:(CDUnknownBlockType)arg5 heartBeatHandler:(CDUnknownBlockType)arg6;
- (void)_updateTileControllersWithLayout:(id)arg1 tileTransitionCoordinator:(id)arg2;
- (void)_updateTileControllersIfNeeded;
- (void)_updateScrollViewPropertiesWithLayout:(id)arg1;
- (void)_updateScrollViewPropertiesIfNeeded;
- (void)_updateTileControllersVisibleRectIfNeeded;
- (void)_updateLayoutVisibleRectIfNeeded;
- (void)_updateLayoutCoordinateSystemIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updateIfNeeded;
- (void)_invalidateTileControllersWithTileTransitionCoordinator:(id)arg1;
- (void)_invalidateTileControllers;
- (void)_setNeedsUpdate;
- (void)_invalidateReferencedCoordinateSystems;
- (void)_invalidateReferencedDataSources;
- (void)_invalidateScrollViewProperties;
- (void)_invalidateLayout;
- (void)_invalidateLayoutCoordinateSystemWithReason:(long long)arg1;
- (void)_invalidateTileControllersVisibleRect;
- (void)_invalidateLayoutVisibleRect;
- (void)invalidateLayout:(id)arg1 withContext:(id)arg2;
@property(readonly, nonatomic) _Bool isAnyTileControllerAnimating;
- (id)_createTileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSource:(id)arg3 tileSource:(id)arg4;
- (void)_enumerateActiveTileControllersUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateAllTileControllersUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllTileControllersUsingBlock:(CDUnknownBlockType)arg1;
- (id)tileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSourceIdentifier:(id)arg3;
- (void)enumeratePresentedTileControllersInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)presentedTileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSourceIdentifier:(id)arg3;
- (void)reattachTileControllers:(id)arg1 withContext:(id)arg2;
- (id)freezeTileController:(id)arg1;
- (void)detachTileControllers:(id)arg1;
- (void)_applyPendingUpdates;
- (void)reloadItemAtIndexPath:(id)arg1 dataSource:(id)arg2;
- (void)moveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2 dataSource:(id)arg3;
- (void)deleteItemAtIndexPath:(id)arg1 dataSource:(id)arg2;
- (void)insertItemAtIndexPath:(id)arg1 dataSource:(id)arg2;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)transitionToLayout:(id)arg1 withContext:(id)arg2 animationSetupCompletionHandler:(CDUnknownBlockType)arg3;
- (void)transitionToLayout:(id)arg1;
- (void)tileControllerDidEndAnimating:(id)arg1;
- (void)enqueueTileControllerForReuse:(id)arg1;
- (id)dequeueTileControllerWithReuseIdentifier:(id)arg1;
- (void)registerTileControllerClass:(Class)arg1 forReuseIdentifier:(id)arg2;
- (void)_adjustScrollViewPagingDeceleration;
- (void)_handleChangeFromBounds:(struct CGRect)arg1 fromFrame:(struct CGRect)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 layout:(id)arg2;

@end
