//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/CCUIModularControlCenterViewController.h>

#import <ControlCenterUI/CCUIScrollViewDelegate-Protocol.h>
#import <ControlCenterUI/CCUIStatusLabelViewControllerDelegate-Protocol.h>
#import <ControlCenterUI/UIGestureRecognizerDelegate-Protocol.h>

@class CCUIFlickGestureRecognizer, CCUIHeaderPocketView, CCUIScrollView, MTMaterialView, NSHashTable, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol CCUIModularControlCenterOverlayViewControllerDelegate;

@interface CCUIModularControlCenterOverlayViewController : CCUIModularControlCenterViewController <UIGestureRecognizerDelegate, CCUIScrollViewDelegate, CCUIStatusLabelViewControllerDelegate>
{
    MTMaterialView *_backgroundView;
    CCUIHeaderPocketView *_headerPocketView;
    CCUIScrollView *_scrollView;
    UIView *_containerView;
    UIPanGestureRecognizer *_headerPocketViewDismissalPanGesture;
    UITapGestureRecognizer *_headerPocketViewDismissalTapGesture;
    CCUIFlickGestureRecognizer *_collectionViewDismissalFlickGesture;
    UIPanGestureRecognizer *_collectionViewDismissalPanGesture;
    UITapGestureRecognizer *_collectionViewDismissalTapGesture;
    UIPanGestureRecognizer *_collectionViewScrollPanGesture;
    NSHashTable *_blockingGestureRecognizers;
    struct CGRect _cachedSourcePresentationFrame;
    struct CGRect _cachedTargetPresentationFrame;
    double _dismissalGestureYOffset;
    _Bool _interactiveTransition;
    double _chevronAlpha;
    unsigned long long _presentationState;
}

@property(nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
- (void).cxx_destruct;
- (void)_setupPanGestureFailureRequirements;
- (void)_updateHotPocketAnimated:(_Bool)arg1;
- (_Bool)_scrollViewCanAcceptDownwardsPan;
- (_Bool)_scrollViewIsScrollable;
- (_Bool)_scrollPanGestureRecognizerCanBeginForGestureVelocity:(struct CGPoint)arg1;
- (_Bool)_scrollPanGestureRecognizerShouldBegin:(id)arg1;
- (double)_dismissalGestureActivationMinimumYOffset;
- (void)_dismissalPanGestureRecognizerFailed:(id)arg1;
- (void)_dismissalPanGestureRecognizerCancelled:(id)arg1;
- (void)_dismissalPanGestureRecognizerEnded:(id)arg1;
- (void)_dismissalPanGestureRecognizerChanged:(id)arg1;
- (void)_dismissalPanGestureRecognizerBegan:(id)arg1;
- (void)_handleDismissalPanGestureRecognizer:(id)arg1;
- (_Bool)_dismissalPanGestureRecognizerShouldBegin:(id)arg1;
- (void)_cancelDismissalPanGestures;
- (void)_handleDismissalFlickGestureRecognizer:(id)arg1;
- (_Bool)_dismissalFlickGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_dismissalFlickGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)_dismissalFlickGestureRecognizerShouldBegin:(id)arg1;
- (void)_handleDismissalTapGestureRecognizer:(id)arg1;
- (_Bool)_dismissalTapGestureRecognizerShouldBegin:(id)arg1;
- (double)_presentationGestureActivationMinimumYOffset;
- (void)cancelPresentationWithLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)endPresentationWithLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)updatePresentationWithLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)beginPresentationWithLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)moduleInstancesChangedForModuleInstanceManager:(id)arg1;
- (void)statusLabelViewControllerDidFinishStatusUpdates:(id)arg1;
- (void)statusLabelViewControllerWillBeginStatusUpdates:(id)arg1;
- (void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (_Bool)moduleCollectionViewController:(id)arg1 shouldForwardAppearanceCall:(_Bool)arg2 animated:(_Bool)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)scrollView:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (unsigned long long)__supportedInterfaceOrientations;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (struct CGRect)_moduleCollectionViewFrame;
- (id)_moduleCollectionViewContainerView;
- (struct CGRect)_statusLabelViewFrame;
- (id)_statusLabelViewContainerView;
- (void)_reparentAndBecomeActive;
- (void)_makePresentationFramesDirty;
- (struct CGRect)_targetPresentationFrame;
- (struct CGRect)_sourcePresentationFrame;
- (void)_setPocketViewOriginFromCollectionOriginY:(double)arg1;
- (void)_setCollectionViewOrigin:(struct CGPoint)arg1;
- (void)_updatePresentationForRevealPercentage:(double)arg1;
- (void)_updatePresentationForLocationY:(double)arg1;
- (void)_endDismissalAnimated:(_Bool)arg1 withSuccess:(_Bool)arg2;
- (void)_beginDismissalAnimated:(_Bool)arg1 interactive:(_Bool)arg2;
- (void)dismissAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_endPresentationWithSuccess:(_Bool)arg1;
- (void)_beginPresentationAnimated:(_Bool)arg1 interactive:(_Bool)arg2;
- (void)presentAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (struct UIEdgeInsets)edgeInsets;
- (id)initWithSystemAgent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CCUIModularControlCenterOverlayViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

