//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/IKAppDocumentDelegate-Protocol.h>
#import <StoreKitUI/SKUIMediaQueryDelegate-Protocol.h>
#import <StoreKitUI/SKUIModalSourceViewProvider-Protocol.h>
#import <StoreKitUI/SKUINavigationBarControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUINavigationBarDisplayConfiguring-Protocol.h>
#import <StoreKitUI/SKUINavigationPaletteProvider-Protocol.h>
#import <StoreKitUI/SKUIResourceLoaderDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabAppearanceStatusObserver-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabNestedPagedScrolling-Protocol.h>
#import <StoreKitUI/SKUIToolbarControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUIViewControllerTesting-Protocol.h>
#import <StoreKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class IKAppDocument, NSArray, NSDictionary, NSNumber, NSSet, NSString, NSValue, SKUIMediaQueryEvaluator, SKUIMetricsDOMChangeQueue, SKUIMetricsPageRenderEvent, SKUINavigationBarController, SKUIToolbarController, SSVLoadURLOperation, UIScrollView, UIView, UIViewController;

@interface SKUIDocumentContainerViewController : SKUIViewController <IKAppDocumentDelegate, SKUIMediaQueryDelegate, SKUIModalSourceViewProvider, SKUINavigationBarControllerDelegate, SKUINavigationBarDisplayConfiguring, SKUINavigationPaletteProvider, SKUIToolbarControllerDelegate, UIViewControllerTransitioningDelegate, SKUIResourceLoaderDelegate, SKUIViewControllerTesting, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling>
{
    UIViewController *_beforeErrorChildViewController;
    UIViewController *_childViewController;
    NSArray *_defaultLeftBarButtonItems;
    IKAppDocument *_document;
    double _lastBottomLayoutGuideLength;
    double _lastTopLayoutGuideLength;
    SSVLoadURLOperation *_loadURLOperation;
    _Bool _makeSearchBarFirstResponderOnLoad;
    SKUIMediaQueryEvaluator *_mediaQueryEvaluator;
    SKUINavigationBarController *_navigationBarController;
    _Bool _selectSearchBarContentOnBecomingFirstResponder;
    SKUIToolbarController *_toolbarController;
    NSNumber *_orientationAtDisappear;
    NSNumber *_pageResponseAbsoluteTime;
    NSSet *_personalizationItems;
    NSDictionary *_presentationOptions;
    CDStruct_19149c72 _scrollingTabAppearanceStatus;
    NSArray *_searchBarControllers;
    NSValue *_sizeAtDisappear;
    unsigned long long _templateViewElementType;
    struct CGSize _viewSize;
    NSString *_urlString;
    CDUnknownBlockType _pendingSizeTransitionCompletion;
    SKUIMetricsPageRenderEvent *_pageRenderEvent;
    SKUIMetricsDOMChangeQueue *_domChangeTimingQueue;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (_Bool)allowsChildViewControllerNavigationBarManagement;
@property(retain, nonatomic) SKUIMetricsDOMChangeQueue *domChangeTimingQueue; // @synthesize domChangeTimingQueue=_domChangeTimingQueue;
@property(retain, nonatomic) SKUIMetricsPageRenderEvent *pageRenderEvent; // @synthesize pageRenderEvent=_pageRenderEvent;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)childViewController;
- (id)_sidepackViewControllerWithOptions:(id)arg1 clientContext:(id)arg2;
- (void)_showLegacyStorePageWithRequest:(id)arg1 page:(id)arg2 pageType:(long long)arg3 URLResponse:(id)arg4;
- (void)_showAccountViewControllerWithURL:(id)arg1;
- (_Bool)_shouldFillNavigationBarContentsBasedOnNavigationBarViewElement;
- (void)_setChildViewController:(id)arg1;
- (void)_sendOnViewAttributesChangeWithAttributes:(id)arg1 viewWillAppear:(_Bool)arg2;
- (void)_reloadToolbar;
- (void)_reloadNavigationPalette;
- (void)_reloadNavigationBarController;
- (void)_reloadNavigationBarControllerIfNeeded;
- (void)_reloadPageData;
- (void)_reloadDefaultBarButtonItems;
- (void)_redirectToURL:(id)arg1;
- (id)_newViewControllerWithTemplateElement:(id)arg1 options:(id)arg2 clientContext:(id)arg3;
- (id)_toolbarViewElement;
- (id)_navigationBarViewElement;
- (void)_finishLoadOperationWithResponse:(id)arg1 error:(id)arg2;
- (void)_finishLegacyProtocolOperationForResponse:(id)arg1 dataProvider:(id)arg2 dictionary:(id)arg3;
- (void)_enqueueLoadURLOperation;
- (void)_skui_applicationWillEnterForeground:(id)arg1;
- (void)_skui_applicationDidEnterBackground:(id)arg1;
- (void)_networkTypeChangeNotification:(id)arg1;
- (void)_setSelectSearchBarContentOnBecomingFirstResponder:(_Bool)arg1;
- (void)_setMakeSearchBarFirstResponderOnLoad:(_Bool)arg1;
- (_Bool)_selectSearchBarContentOnBecomingFirstResponder;
- (_Bool)_makeSearchBarFirstResponderOnLoad;
- (void)_reloadNavigationItemContents;
- (void)_submitPageRenderIfPossible;
- (void)_onReportDocumentReady:(id)arg1;
- (void)_onReportRequestTimes:(id)arg1;
- (void)_onReportDOMChange:(id)arg1;
- (void)_onReportPlatformJsonTimes:(id)arg1;
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIScrollView *scrollingTabNestedPagingScrollView;
- (void)scrollingTabAppearanceStatusWasUpdated:(CDStruct_19149c72)arg1;
@property(readonly, nonatomic) UIView *navigationPaletteView;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersNavigationBarBackgroundViewHidden;
- (id)navigationBarTintColor;
- (long long)navigationBarTintAdjustmentMode;
- (id)navigationBarTitleTextTintColor;
- (id)additionalRightBarButtonItemForNavigationBarController:(id)arg1;
- (id)additionalLeftBarButtonItemForNavigationBarController:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)mediaQueryEvaluatorDidChange:(id)arg1;
- (id)mediaQueryEvaluator:(id)arg1 valueForKey:(id)arg2;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (void)documentDidSendMessage:(id)arg1;
- (id)impressionableViewElementsForDocument:(id)arg1;
- (void)documentScrollToTop:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)document:(id)arg1 runTestWithName:(id)arg2 options:(id)arg3;
- (_Bool)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;
- (CDUnknownBlockType)pendingSizeTransitionCompletion;
- (id)toolbarItems;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)reloadData;
- (id)previewMenuItems;
- (void)loadView;
- (id)contentScrollView;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)skui_viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 clientContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

