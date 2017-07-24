//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPurgeableController-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXUIViewControllerZoomTransitionEndPoint-Protocol.h>
#import <PhotosUICore/PXWidgetCompositionDelegate-Protocol.h>
#import <PhotosUICore/PXWidgetUnlockDelegate-Protocol.h>
#import <PhotosUICore/UIViewControllerPreviewingDelegate-Protocol.h>
#import <PhotosUICore/UIViewControllerPreviewingDelegate_Private-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, PXAssetCollectionActionController, PXBarsController, PXPhotosDetailsContext, PXPhotosDetailsHeaderTileWidget, PXPhotosDetailsSpecManager, PXPhotosDetailsViewModel, PXScrollViewController, PXSwipeSelectionManager, PXTilingController, PXUIScrollViewController, PXWidgetComposition, PXWidgetSpec, UIScrollView, UIView, _PXPhotosDetailsPreviewOrbContext;
@protocol PXActionPerformerDelegate, PXPhotosDetailsUIViewControllerDelegate, PXUIWidget, UIViewControllerPreviewing;

@interface PXPhotosDetailsUIViewController : UIViewController <PXWidgetCompositionDelegate, PXChangeObserver, PXUIViewControllerZoomTransitionEndPoint, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, PXActionPerformerDelegate, PXWidgetUnlockDelegate, PXScrollViewControllerObserver, PXPurgeableController>
{
    struct {
        _Bool requestDismissal;
    } _delegateRespondsTo;
    _Bool __hasAppeared;
    _Bool __shouldFocusHeader;
    _Bool _empty;
    PXPhotosDetailsContext *_context;
    unsigned long long _options;
    id <PXPhotosDetailsUIViewControllerDelegate> _delegate;
    PXPhotosDetailsViewModel *__viewModel;
    PXUIScrollViewController *__scrollViewController;
    NSArray *__widgets;
    NSMapTable *__widgetOptions;
    PXPhotosDetailsHeaderTileWidget *__headerWidget;
    PXTilingController *__headerAssetWidgetTilingController;
    PXWidgetComposition *__composition;
    PXPhotosDetailsSpecManager *__specManager;
    NSMutableArray *__widgetDisablingDimmingViews;
    PXWidgetSpec *__widgetSpec;
    PXSwipeSelectionManager *__swipeSelectionManager;
    PXAssetCollectionActionController *__previewActionController;
    _PXPhotosDetailsPreviewOrbContext *__previewOrbContext;
    Class __barsControllerClass;
    CDUnknownBlockType __unlockStatus;
    CDUnknownBlockType __unlockHandler;
    id <PXUIWidget> __previewWidget;
    UIView *__headerTileView;
    CDUnknownBlockType __ppt_allWidgetLoadingCompleteHandler;
    id <UIViewControllerPreviewing> __previewingContext;
    PXBarsController *_barsController;
    id <PXActionPerformerDelegate> _actionPerformerDelegate;
    unsigned long long _occludedContentEdges;
    struct UIEdgeInsets _contentEdgeInsets;
}

+ (void)preloadResources;
@property(nonatomic) unsigned long long occludedContentEdges; // @synthesize occludedContentEdges=_occludedContentEdges;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(nonatomic) __weak id <PXActionPerformerDelegate> actionPerformerDelegate; // @synthesize actionPerformerDelegate=_actionPerformerDelegate;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(readonly, nonatomic) PXBarsController *barsController; // @synthesize barsController=_barsController;
@property(retain, nonatomic, setter=_setPreviewingContext:) id <UIViewControllerPreviewing> _previewingContext; // @synthesize _previewingContext=__previewingContext;
@property(copy, nonatomic, setter=_ppt_setAllWidgetLoadingCompleteHandler:) CDUnknownBlockType _ppt_allWidgetLoadingCompleteHandler; // @synthesize _ppt_allWidgetLoadingCompleteHandler=__ppt_allWidgetLoadingCompleteHandler;
@property(retain, nonatomic, setter=_setHeaderTileView:) UIView *_headerTileView; // @synthesize _headerTileView=__headerTileView;
@property(nonatomic, setter=_setShouldFocusHeader:) _Bool _shouldFocusHeader; // @synthesize _shouldFocusHeader=__shouldFocusHeader;
@property(readonly, nonatomic) id <PXUIWidget> _previewWidget; // @synthesize _previewWidget=__previewWidget;
@property(readonly, copy, nonatomic) CDUnknownBlockType _unlockHandler; // @synthesize _unlockHandler=__unlockHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType _unlockStatus; // @synthesize _unlockStatus=__unlockStatus;
@property(readonly, nonatomic) Class _barsControllerClass; // @synthesize _barsControllerClass=__barsControllerClass;
@property(retain, nonatomic, setter=_setPreviewOrbContext:) _PXPhotosDetailsPreviewOrbContext *_previewOrbContext; // @synthesize _previewOrbContext=__previewOrbContext;
@property(retain, nonatomic, setter=_setPreviewActionController:) PXAssetCollectionActionController *_previewActionController; // @synthesize _previewActionController=__previewActionController;
@property(retain, nonatomic, setter=_setSwipeSelectionManager:) PXSwipeSelectionManager *_swipeSelectionManager; // @synthesize _swipeSelectionManager=__swipeSelectionManager;
@property(nonatomic, setter=_setHasAppeared:) _Bool _hasAppeared; // @synthesize _hasAppeared=__hasAppeared;
@property(retain, nonatomic, setter=_setWidgetSpec:) PXWidgetSpec *_widgetSpec; // @synthesize _widgetSpec=__widgetSpec;
@property(readonly, nonatomic) NSMutableArray *_widgetDisablingDimmingViews; // @synthesize _widgetDisablingDimmingViews=__widgetDisablingDimmingViews;
@property(readonly, nonatomic) PXPhotosDetailsSpecManager *_specManager; // @synthesize _specManager=__specManager;
@property(readonly, nonatomic) PXWidgetComposition *_composition; // @synthesize _composition=__composition;
@property(readonly, nonatomic) PXTilingController *_headerAssetWidgetTilingController; // @synthesize _headerAssetWidgetTilingController=__headerAssetWidgetTilingController;
@property(readonly, nonatomic) PXPhotosDetailsHeaderTileWidget *_headerWidget; // @synthesize _headerWidget=__headerWidget;
@property(readonly, nonatomic) NSMapTable *_widgetOptions; // @synthesize _widgetOptions=__widgetOptions;
@property(readonly, nonatomic) NSArray *_widgets; // @synthesize _widgets=__widgets;
@property(readonly, nonatomic) PXUIScrollViewController *_scrollViewController; // @synthesize _scrollViewController=__scrollViewController;
@property(readonly, nonatomic) PXPhotosDetailsViewModel *_viewModel; // @synthesize _viewModel=__viewModel;
@property(nonatomic) __weak id <PXPhotosDetailsUIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_ppt_informAllWidgetsLoadedHandlerIfNeeded;
- (void)ppt_navigateToMovieWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)ppt_performBlockAfterAllWidgetLoadingCompletes:(CDUnknownBlockType)arg1;
- (void)ppt_toggleDiscloseWidgets;
@property(readonly, nonatomic) UIScrollView *ppt_scrollView;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)_performAddToMemoriesAnimation;
- (void)_updatePreviewActionController;
- (id)previewActionItems;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)_widgetAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)playMiroMovieWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;
- (void)prepareForInteractiveTransition:(id)arg1;
- (void)scrollRegionOfInterestToVisible:(id)arg1 forTransition:(id)arg2;
- (void)preloadWithSourceRegionOfInterest:(id)arg1 forTransition:(id)arg2;
- (id)_regionOfInterestForContext:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (void)restoreBackgroundColor:(id)arg1 forTransition:(id)arg2;
- (id)removeBackgroundColorForTransition:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (_Bool)px_canPerformSwipeDownTransitionWithMasterViewController:(id)arg1;
- (_Bool)px_canPerformZoomTransitionWithMasterViewController:(id)arg1;
- (_Bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (_Bool)px_canPerformPinchTransitionWithMasterViewController:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerWillLayoutSubviews:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)widgetComposition:(id)arg1 didUpdateCompositionWithDefaultAnimationOptions:(id)arg2;
- (void)widgetComposition:(id)arg1 widgetHasLoadedContentDataDidChange:(id)arg2;
- (_Bool)widgetComposition:(id)arg1 widget:(id)arg2 transitionToViewController:(id)arg3 withTransitionType:(long long)arg4;
- (long long)widgetComposition:(id)arg1 loadingPriorityForWidget:(id)arg2;
- (_Bool)widgetComposition:(id)arg1 shouldUseEdgeToEdgeLayoutForWidget:(id)arg2;
- (_Bool)widgetComposition:(id)arg1 requestViewControllerDismissalAnimated:(_Bool)arg2;
- (_Bool)widgetCompositionHasContentAbove:(id)arg1;
- (struct NSObject *)widgetComposition:(id)arg1 viewControllerHostingWidget:(id)arg2;
- (void)widget:(id)arg1 performAfterUnlockingDeviceIfNecessary:(CDUnknownBlockType)arg2 failurehandler:(CDUnknownBlockType)arg3;
- (_Bool)widgetDeviceIsUnlocked:(id)arg1;
- (void)_updateBarSpec;
- (void)_invalidateBarSpec;
- (void)_updateWidgetSpec;
- (void)_invalidateWidgetSpec;
- (void)_updateCompositionSpec;
- (void)_invalidateCompositionSpec;
- (_Bool)px_isSnapBackDestination;
- (void)purgeIfPossible;
- (void)_handleDeviceDidUnlock;
- (void)_updateWidgetDisablingWithAnimationOptions:(id)arg1;
- (void)_updateTitleAndSubtitle;
- (id)standaloneMapViewController;
- (id)preferredFocusEnvironments;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_photosDetailsContextForTransitionWithViewController:(id)arg1;
- (id)_photosDetailsContextForTransition:(id)arg1;
- (unsigned long long)_optionsForWidget:(id)arg1;
- (void)_updateAllWidgetsFaceModeState;
- (void)_updateAllWidgetsSelectionState;
- (void)_updateAllWidgetsSpec;
- (void)_loadWidgets;
- (_Bool)_shouldShowMovieHeader;
- (void)_loadComposition;
- (void)_ensureComposition;
- (void)_ensureScrollViewController;
- (void)_handleWidgetsLoadingDelay;
@property(readonly, nonatomic) _Bool shouldUpdateStatusBarTitle;
- (id)contentScrollView;
@property(readonly, nonatomic) PXScrollViewController *scrollViewController;
- (void)_updateScrollViewControllerContentInset;
- (_Bool)_dismissSelfIfSafeAnimated:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (void)_viewWillLayoutBeforeAppearing;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)_userEventSourceForDetailView:(id)arg1;
- (void)_updateStatusBarTitle;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContext:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1 configuration:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool keepsSourceRegionOfInterestContent;
@property(readonly) Class superclass;

@end

