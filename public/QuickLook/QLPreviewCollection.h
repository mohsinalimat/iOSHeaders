//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QuickLook/QLPageViewControllerDataSource-Protocol.h>
#import <QuickLook/QLPageViewControllerDelegate-Protocol.h>
#import <QuickLook/QLPreviewCollectionProtocol-Protocol.h>
#import <QuickLook/QLPreviewItemViewControllerDelegate-Protocol.h>
#import <QuickLook/QLTransitionControllerProtocol-Protocol.h>
#import <QuickLook/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, QLAppearance, QLItemViewController, QLPageViewController, QLPinchRotationTracker, QLPreviewItemStore, QLSwipeDownTracker, QLTransitionContext, QLTransitionDriver, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol QLPreviewControllerStateProtocol, QLTransitionControllerProtocol;

__attribute__((visibility("hidden")))
@interface QLPreviewCollection : UIViewController <QLTransitionControllerProtocol, QLPageViewControllerDataSource, QLPageViewControllerDelegate, QLPreviewItemViewControllerDelegate, UIGestureRecognizerDelegate, QLPreviewCollectionProtocol>
{
    struct _NSRange _previewItemRange;
    long long _currentItemIndex;
    QLPreviewItemStore *_itemStore;
    UIView *_localAccessoryViewContainer;
    UIView *_remoteAccessoryViewContainer;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_verticalPanGesture;
    UISwipeGestureRecognizer *_pageSwipeGesture;
    UIPanGestureRecognizer *_pagePanGesture;
    QLAppearance *_appearance;
    NSString *_loadingString;
    unsigned long long _visibilityState;
    unsigned long long _appearanceActions;
    _Bool _isAvailable;
    _Bool _allowInteractiveTransitions;
    _Bool _fullScreen;
    _Bool _isEditing;
    _Bool _isTransitioningPage;
    QLPageViewController *_pageViewController;
    id <QLPreviewControllerStateProtocol> _stateManager;
    UIPanGestureRecognizer *_slideGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UIRotationGestureRecognizer *_rotationGesture;
    QLSwipeDownTracker *_swipeDownTracker;
    QLPinchRotationTracker *_pinchRotationTracker;
    QLTransitionContext *_transitionContext;
    id <QLTransitionControllerProtocol> _transitionController;
    QLTransitionDriver *_transitionDriver;
}

+ (void)previewCollectionUsingRemoteViewController:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)remotePreviewCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)quickLookExtension;
@property(retain) QLTransitionDriver *transitionDriver; // @synthesize transitionDriver=_transitionDriver;
@property(retain) id <QLTransitionControllerProtocol> transitionController; // @synthesize transitionController=_transitionController;
@property(retain) QLTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain) QLPinchRotationTracker *pinchRotationTracker; // @synthesize pinchRotationTracker=_pinchRotationTracker;
@property(retain) QLSwipeDownTracker *swipeDownTracker; // @synthesize swipeDownTracker=_swipeDownTracker;
@property(retain) UIRotationGestureRecognizer *rotationGesture; // @synthesize rotationGesture=_rotationGesture;
@property(retain) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property(retain) UIPanGestureRecognizer *slideGesture; // @synthesize slideGesture=_slideGesture;
@property(nonatomic) _Bool isTransitioningPage; // @synthesize isTransitioningPage=_isTransitioningPage;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) _Bool allowInteractiveTransitions; // @synthesize allowInteractiveTransitions=_allowInteractiveTransitions;
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(retain) id <QLPreviewControllerStateProtocol> stateManager; // @synthesize stateManager=_stateManager;
@property(retain) QLPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (void).cxx_destruct;
- (void)_updateCanChangeCurrentPage;
- (long long)dragDataOwnerForPreviewItemViewController:(id)arg1;
- (void)previewItemViewController:(id)arg1 didEnableEditMode:(_Bool)arg2;
- (void)previewItemViewController:(id)arg1 hasUnsavedEdits:(_Bool)arg2;
- (void)previewItemViewControllerDidEditPreview:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadingTextForPreviewItemViewController:(id)arg1;
- (void)expandContentOfPreviewItemViewController:(id)arg1 withURL:(id)arg2;
- (void)previewItemViewControllerWantsUpdatePrinter:(id)arg1;
- (void)previewItemViewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)previewItemViewControllerDidUpdateTitle:(id)arg1;
- (void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(id)arg1;
- (void)previewItemViewControllerWantsUpdateKeyCommands:(id)arg1;
- (void)previewItemViewControllerWantsUpdateToolbar:(id)arg1 animated:(_Bool)arg2;
- (void)previewItemViewControllerWantsToShowShareSheet:(id)arg1;
- (void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)previewItemViewController:(id)arg1 wantsToOpenURL:(id)arg2;
- (void)previewItemViewController:(id)arg1 wantsFullScreen:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_tapGestureRecognized;
- (void)_installGestures;
- (id)pageViewController:(id)arg1 parallaxViewInPage:(id)arg2 withIndex:(unsigned long long)arg3;
- (void)pageViewController:(id)arg1 didCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;
- (void)pageViewController:(id)arg1 willCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;
- (void)pageViewController:(id)arg1 didTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;
- (void)pageViewController:(id)arg1 isTransitioningFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 withProgress:(double)arg6;
- (void)pageViewController:(id)arg1 willTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;
- (void)pageViewController:(id)arg1 willBeginInteractiveTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5;
- (id)pageViewController:(id)arg1 viewControllerAtIndex:(unsigned long long)arg2;
- (void)_updateWhitePointAdaptivityStyle;
- (void)_updateAccessoryViewWithPreviewItemViewController:(id)arg1;
- (void)_cleanAccessoryViewContainer;
- (void)_updatePrinter;
- (void)_updateTitleFromController;
- (void)_updatePreferredContentSize;
- (_Bool)_isVisible;
- (void)setSourceIsManaged:(_Bool)arg1;
- (void)setLoadingString:(id)arg1;
- (void)tearDownTransition:(_Bool)arg1;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)keyCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(_Bool)arg1;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (void)invalidatePreviewCollection;
@property(readonly) QLItemViewController *currentPreviewItemViewController;
- (_Bool)isRemote;
- (id)accessoryView;
- (void)setRemoteAccessoryContainer:(id)arg1;
- (void)updateCurrentPreviewConfiguration;
- (void)_updatePreviewVisibility:(_Bool)arg1;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;
- (void)slideToDismissGestureRecognized:(id)arg1;
- (void)rotationOrPinchGestureRecognized:(id)arg1;
- (id)gestureTracker;
- (void)_tearDownTransition:(_Bool)arg1;
- (void)_setUpTransitionDriverForPresenting:(_Bool)arg1 duration:(double)arg2;
- (void)startNonInteractiveTransitionPresenting:(_Bool)arg1;
- (void)completeTransition:(_Bool)arg1 withDuration:(double)arg2;
- (void)updateTransitionWithProgress:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

