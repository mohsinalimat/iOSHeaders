//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UILayoutContainerViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UILayoutContainerView, UILayoutGuide, UILongPressGestureRecognizer, UISlidingBarConfiguration, UISlidingBarState, UISlidingBarStateRequest, UIView, UIViewController, _UIPanelInternalState;
@protocol UIPanelControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIPanelController : NSObject <UIGestureRecognizerDelegate, UILayoutContainerViewDelegate>
{
    struct {
        unsigned int isUpdatingState:1;
        unsigned int needsDeferredUpdateWhileUpdatingState:1;
        unsigned int isPerformingDeferredUpdate:1;
        unsigned int nextLayoutIsForConstraintBasedAnimationStart:1;
        unsigned int inWillTransitionToTraitCollection:1;
        unsigned int inViewWillTransitionToSize:1;
        unsigned int inViewWillTransitionToSizeRecursingToChildren:1;
        unsigned int constraintsAndViewsLocked:1;
        unsigned int takingDestinationSnapshot:1;
        unsigned int registeredForKeyboardNotifications:1;
    } _panelControllerFlags;
    NSMutableArray *_wrapperBlocksForNextUpdate;
    _Bool __hasUpdatedForTraitCollection;
    _Bool __needsFirstTimeUpdateForTraitCollection;
    _Bool __changingViewControllerParentage;
    UIViewController *_owningViewController;
    UIView *_dimmingView;
    UILayoutContainerView *_view;
    NSArray *__constraints;
    UILayoutGuide *__layoutGuide;
    _UIPanelInternalState *__internalState;
    _UIPanelInternalState *__previousInternalState;
    UISlidingBarState *__lastComputedPublicState;
    NSArray *__lastPossiblePublicStates;
    UILongPressGestureRecognizer *__gestureRecognizer;
    UIView *__leadingBorderView;
    UIView *__trailingBorderView;
    UIView *__sourceSnapshotView;
    struct CGSize __lastViewSize;
}

@property(nonatomic, setter=_setChangingViewControllerParentage:) _Bool _changingViewControllerParentage; // @synthesize _changingViewControllerParentage=__changingViewControllerParentage;
@property(nonatomic, setter=_setNeedsFirstTimeUpdateForTraitCollection:) _Bool _needsFirstTimeUpdateForTraitCollection; // @synthesize _needsFirstTimeUpdateForTraitCollection=__needsFirstTimeUpdateForTraitCollection;
@property(nonatomic, setter=_setHasUpdatedForTraitCollection:) _Bool _hasUpdatedForTraitCollection; // @synthesize _hasUpdatedForTraitCollection=__hasUpdatedForTraitCollection;
@property(retain, nonatomic, setter=_setSnapshotView:) UIView *_sourceSnapshotView; // @synthesize _sourceSnapshotView=__sourceSnapshotView;
@property(retain, nonatomic, setter=_setTrailingBorderView:) UIView *_trailingBorderView; // @synthesize _trailingBorderView=__trailingBorderView;
@property(retain, nonatomic, setter=_setLeadingBorderView:) UIView *_leadingBorderView; // @synthesize _leadingBorderView=__leadingBorderView;
@property(retain, nonatomic, setter=_setGestureRecognizer:) UILongPressGestureRecognizer *_gestureRecognizer; // @synthesize _gestureRecognizer=__gestureRecognizer;
@property(nonatomic, setter=_setLastViewSize:) struct CGSize _lastViewSize; // @synthesize _lastViewSize=__lastViewSize;
@property(copy, nonatomic, setter=_setLastPossiblePublicStates:) NSArray *_lastPossiblePublicStates; // @synthesize _lastPossiblePublicStates=__lastPossiblePublicStates;
@property(copy, nonatomic, setter=_setLastComputedPublicState:) UISlidingBarState *_lastComputedPublicState; // @synthesize _lastComputedPublicState=__lastComputedPublicState;
@property(retain, nonatomic, setter=_setPreviousInternalState:) _UIPanelInternalState *_previousInternalState; // @synthesize _previousInternalState=__previousInternalState;
@property(retain, nonatomic, setter=_setInternalState:) _UIPanelInternalState *_internalState; // @synthesize _internalState=__internalState;
@property(retain, nonatomic, setter=_setLayoutGuide:) UILayoutGuide *_layoutGuide; // @synthesize _layoutGuide=__layoutGuide;
@property(retain, nonatomic, setter=_setConstraints:) NSArray *_constraints; // @synthesize _constraints=__constraints;
@property(retain, nonatomic) UILayoutContainerView *view; // @synthesize view=_view;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) __weak UIViewController *owningViewController; // @synthesize owningViewController=_owningViewController;
- (void).cxx_destruct;
- (void)_adjustNonOverlayLeadingScrollViewsForKeyboardInfo:(id)arg1;
- (void)_adjustForKeyboardInfo:(id)arg1;
- (void)_stopObservingKeyboardNotifications;
- (void)_observeKeyboardNotificationsOnScreen:(id)arg1;
- (void)animateToRequest:(id)arg1;
- (void)_animateFromRequest:(id)arg1 toRequest:(id)arg2 withAffectedSides:(long long)arg3;
- (void)_endInteractingWithSuccess:(_Bool)arg1;
- (void)_updateInteractionWithOffset:(double)arg1;
- (void)_beginInteractingForSide:(long long)arg1;
- (void)_gestureChanged:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_pointHitsAffordance:(struct CGPoint)arg1 returningSide:(long long *)arg2;
- (id)_createBorderView;
- (void)_updateToNewPublicState:(id)arg1 withSize:(struct CGSize)arg2;
- (void)_performWrappedUpdate:(CDUnknownBlockType)arg1;
- (void)_performSingleDeferredUpdatePass;
- (void)_performDeferredUpdate;
- (void)_setNeedsDeferredUpdate;
- (void)updateViewConstraints;
- (void)__viewWillLayoutSubviews;
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;
- (void)_expandWithTransitionCoordinator:(id)arg1;
- (void)_collapseWithTransitionCoordinator:(id)arg1;
- (void)_updateForTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_willExpandWithNewTraitCollection:(id)arg1;
- (_Bool)_willCollapseWithNewTraitCollection:(id)arg1;
- (void)addWrapperBlockForNextUpdate:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
@property(readonly, nonatomic) long long collapsedState;
- (_Bool)isInteractingOrAnimating;
- (void)setNeedsUpdate;
- (id)allViewControllers;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)_removeIdentifiedChildViewController:(id)arg1;
- (void)_addIdentifiedChildViewController:(id)arg1;
- (void)loadView;
@property(copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property(readonly, nonatomic) NSArray *possibleStates;
@property(readonly, nonatomic) UISlidingBarState *currentState;
@property(copy, nonatomic) UISlidingBarConfiguration *configuration;
@property(nonatomic) __weak id <UIPanelControllerDelegate> delegate;
@property(readonly, nonatomic) UIViewController *collapsedViewController;
@property(retain, nonatomic) UIViewController *trailingViewController;
@property(retain, nonatomic) UIViewController *leadingViewController;
@property(retain, nonatomic) UIViewController *mainViewController;
- (void)dealloc;
- (id)initWithOwningViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
