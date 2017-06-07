//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUSectionedTilingLayout.h>

@class NSIndexPath, NSMutableDictionary, PUParallaxComputer, UITraitCollection;
@protocol PUOneUpTilingLayoutDelegate;

@interface PUOneUpTilingLayout : PUSectionedTilingLayout
{
    struct CGSize _itemSize;
    NSIndexPath *_inFocusIndexPath;
    NSIndexPath *_neighborIndexPath;
    double _transitionProgress;
    struct {
        _Bool respondsToAspectRatioForItemAtIndexPath;
        _Bool respondsToBadgeSizeForItemAtIndexPath;
        _Bool respondsToAssetExplorerReviewScreenBadgeSizeForItemAtIndexPath;
        _Bool respondsToShouldShowPlayButtonForItemAtIndexPath;
        _Bool respondsToShouldShowProgressIndicatorForItemAtIndexPath;
        _Bool respondsToShouldShowBufferingIndicatorForItemAtIndexPath;
        _Bool respondsToShouldShowLoadingIndicatorForItemAtIndexPath;
        _Bool respondsToModelTileTransformForItemAtIndexPath;
        _Bool respondsToContentOffsetForItemAtIndexPath;
        _Bool respondsToShouldShowAccessoryForItemAtIndexPath;
        _Bool respondsToMinimumVisibleContentHeightForItemAtIndexPath;
        _Bool respondsToMinimumVisibleAccessoryHeightForItemAtIndexPath;
        _Bool respondsToShouldShowVideoPlaceholderForItemAtIndexPath;
        _Bool respondsToDisableInitialZoomToFillForItemAtIndexPath;
    } _delegateFlags;
    NSMutableDictionary *_layoutInfosByIndexPathByTileKind;
    _Bool _useBackgroundTile;
    _Bool _useBadgeTiles;
    _Bool _useAssetExplorerReviewScreenBadgeTiles;
    _Bool _useAssetExplorerReviewScreenSelectionIndicatorTiles;
    _Bool _useUserTransformTiles;
    _Bool _shouldPinContentToTop;
    id <PUOneUpTilingLayoutDelegate> _delegate;
    long long _tileInitialContentMode;
    UITraitCollection *_traitCollection;
    PUParallaxComputer *_parallaxComputer;
    struct CGSize _interpageSpacing;
    struct CGSize _playButtonSize;
    struct CGSize _progressIndicatorSize;
    struct CGSize _assetExplorerReviewScreenProgressIndicatorSize;
    struct CGSize _bufferingIndicatorSize;
    struct CGSize _loadingIndicatorSize;
    struct CGSize _displaySizeForInsetMatching;
    struct UIEdgeInsets _contentGuideInsets;
}

+ (id)centerTileKinds;
+ (void)initialize;
@property(retain, nonatomic) PUParallaxComputer *parallaxComputer; // @synthesize parallaxComputer=_parallaxComputer;
@property(nonatomic) _Bool shouldPinContentToTop; // @synthesize shouldPinContentToTop=_shouldPinContentToTop;
@property(nonatomic) struct CGSize displaySizeForInsetMatching; // @synthesize displaySizeForInsetMatching=_displaySizeForInsetMatching;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(nonatomic) long long tileInitialContentMode; // @synthesize tileInitialContentMode=_tileInitialContentMode;
@property(nonatomic) _Bool useUserTransformTiles; // @synthesize useUserTransformTiles=_useUserTransformTiles;
@property(nonatomic) struct CGSize loadingIndicatorSize; // @synthesize loadingIndicatorSize=_loadingIndicatorSize;
@property(nonatomic) struct CGSize bufferingIndicatorSize; // @synthesize bufferingIndicatorSize=_bufferingIndicatorSize;
@property(nonatomic) struct CGSize assetExplorerReviewScreenProgressIndicatorSize; // @synthesize assetExplorerReviewScreenProgressIndicatorSize=_assetExplorerReviewScreenProgressIndicatorSize;
@property(nonatomic) struct CGSize progressIndicatorSize; // @synthesize progressIndicatorSize=_progressIndicatorSize;
@property(nonatomic) struct CGSize playButtonSize; // @synthesize playButtonSize=_playButtonSize;
@property(nonatomic) _Bool useAssetExplorerReviewScreenSelectionIndicatorTiles; // @synthesize useAssetExplorerReviewScreenSelectionIndicatorTiles=_useAssetExplorerReviewScreenSelectionIndicatorTiles;
@property(nonatomic) _Bool useAssetExplorerReviewScreenBadgeTiles; // @synthesize useAssetExplorerReviewScreenBadgeTiles=_useAssetExplorerReviewScreenBadgeTiles;
@property(nonatomic) _Bool useBadgeTiles; // @synthesize useBadgeTiles=_useBadgeTiles;
@property(nonatomic) _Bool useBackgroundTile; // @synthesize useBackgroundTile=_useBackgroundTile;
@property(nonatomic) struct UIEdgeInsets contentGuideInsets; // @synthesize contentGuideInsets=_contentGuideInsets;
@property(readonly, nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(nonatomic) struct CGSize interpageSpacing; // @synthesize interpageSpacing=_interpageSpacing;
@property(nonatomic) __weak id <PUOneUpTilingLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_normalizedTransitionProgressFrom:(id)arg1 withAbscissa:(double)arg2 outNeighbor:(out id *)arg3;
- (id)_indexPathOfItemClosestToAbscissa:(double)arg1;
- (void)_getLayoutRect:(out struct CGRect *)arg1 transform:(out struct CGAffineTransform *)arg2 parallaxOffset:(out struct CGPoint *)arg3 forContentOfItemAtIndexPath:(id)arg4 options:(unsigned long long)arg5;
- (id)_displayTileTransformForItemAtIndexPath:(id)arg1 pageSize:(struct CGSize)arg2 secondaryDisplayTransform:(id)arg3 options:(unsigned long long)arg4;
- (id)_displayTileTransformForItemAtIndexPath:(id)arg1 options:(unsigned long long)arg2;
- (struct CGRect)_untransformedRectForItemAtIndexPath:(id)arg1 pageRect:(struct CGRect)arg2;
- (struct CGRect)_untransformedRectForItemAtIndexPath:(id)arg1;
- (struct CGRect)_pageRectForItemAtIndexPath:(id)arg1;
- (struct CGSize)_itemSize;
- (_Bool)_isVideoPlacholderVisibleForItemAtIndexPath:(id)arg1;
- (_Bool)_accessoryViewVisibilityForItemAtIndexPath:(id)arg1;
- (struct CGPoint)_contentOffsetForItemAtIndexPath:(id)arg1;
- (double)_minimumBottomContentInsetsForItemAtIndexPath:(id)arg1;
- (void)invalidateVideoPlaceholderForItemAtIndexPath:(id)arg1;
- (void)_invalidateContentRelatedTilesWithIndexPath:(id)arg1 inContext:(id)arg2;
- (void)invalidateContentOffsetForItemAtIndexPath:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)invalidateAccessoryForItemAtIndexPath:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)invalidateModelTileTransformForItemAtIndexPath:(id)arg1;
- (void)invalidateBadgeSizeForItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSIndexPath *indexPathOfCurrentItem;
- (struct CGRect)visibleRectForItemAtIndexPath:(id)arg1 transitionProgress:(double)arg2;
- (struct CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2;
- (id)_createLayoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (struct CGSize)sizeForSection:(long long)arg1 numberOfItems:(long long)arg2;
- (void)addLayoutInfosForTilesInRect:(struct CGRect)arg1 section:(long long)arg2 toSet:(id)arg3;
- (struct CGSize)estimatedSectionSize;
- (id)preferredScrollInfo;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (void)setVisibleRect:(struct CGRect)arg1;
- (id)init;

@end
