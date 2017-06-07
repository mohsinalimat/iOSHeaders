//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <TVMLKit/CAAnimationDelegate-Protocol.h>
#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>
#import <TVMLKit/UICollectionViewDataSource-Protocol.h>
#import <TVMLKit/UICollectionViewDelegate-Protocol.h>
#import <TVMLKit/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <TVMLKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class CALayer, IKAudioElement, IKImageElement, IKViewElement, NSArray, NSIndexPath, NSString, UICollectionView, UIImage, UIImageView, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _TVProductTemplateController : _TVBgImageLoadingViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, TVAppTemplateImpressionable, CAAnimationDelegate, UIPopoverPresentationControllerDelegate>
{
    IKViewElement *_templateElement;
    IKImageElement *_bgImageElement;
    IKImageElement *_heroImageElement;
    UIImage *_bgImage;
    UIImageView *_bgImageView;
    CALayer *_bgBlurSublayer;
    UIView *_backdropView;
    IKViewElement *_backdropTintElement;
    UIView *_backdropTintView;
    UIViewController *_backdropTintViewController;
    UIImageView *_vignetteView;
    UIImageView *_tvVignetteView;
    IKAudioElement *_bgAudioElement;
    IKViewElement *_productBannerElement;
    IKViewElement *_infoListElement;
    IKViewElement *_titleElement;
    UICollectionView *_collectionView;
    UIViewController *_bannerViewController;
    NSArray *_viewControllers;
    NSArray *_rowSpacingMetricsList;
    double _productBannerHeight;
    _Bool _isPartialScrollingTemplate;
    NSIndexPath *_autoHighlightIndexPath;
    _Bool _fadedIn;
    double _impressionThreshold;
    struct CGSize _contentSizeEnsured;
    UIImageView *_topHeroImageView;
    UIView *_topHeroSeparatorView;
    UIImageView *_topHeroGradientView;
    _Bool _topHeroImageVisible;
    IKImageElement *_topHeroImageElement;
}

+ (id)_backgroundImageProxyForProductTemplateElement:(id)arg1;
+ (id)_imageDecoratorForLoadingTemplateElement:(id)arg1;
- (void).cxx_destruct;
- (struct CGSize)_maxContentSize;
- (void)_updateBackgroundTintViewEffects;
- (void)_updateBackgroundTintView;
- (void)_configureBackgroundTintView;
- (struct UIEdgeInsets)_cellMarginForIndex:(long long)arg1 partialMargins:(struct UIEdgeInsets *)arg2;
- (id)_spacingMetricsForViewControllers:(id)arg1;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (id)_backgroundImageProxy;
- (struct CGSize)_backgroundImageProxySize;
- (long long)_backdropStyle;
- (void)_configureWithBannerElement:(id)arg1;
- (void)_configureWithBgElement:(id)arg1;
- (void)_configureTopHeroImage:(id)arg1;
- (id)_relatedSectionHeaderView;
- (id)_yOffsetForView:(id)arg1 withScrollView:(id)arg2 targetYOffset:(double)arg3;
- (id)_canonicalIDForElement:(id)arg1;
- (id)_adamIDForElement:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)_recordImpressionsForVisibleView;
- (void)_cancelImpressionsUpdate;
- (void)_updateImpressions;
- (_Bool)prefersNavigationBarBackgroundViewHidden;
- (id)navigationBarTintColor;
- (long long)preferredStatusBarStyle;
- (_Bool)animateAppearanceUpdate;
- (long long)preferredStatusBarUpdateAnimation;
- (void)_updateTopHeroImageVisibility:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)_topHeroImageViewSize;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)viewWillAppear:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)updateWithViewElement:(id)arg1;
- (void)updateWithProductTemplate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
