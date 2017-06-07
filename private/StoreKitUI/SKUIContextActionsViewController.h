//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <StoreKitUI/UIInterfaceActionHandlerInvocationDelegate-Protocol.h>
#import <StoreKitUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <StoreKitUI/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <StoreKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSMutableArray, NSString, SKUIContextActionsConfiguration, SKUIContextActionsPresentationController, UIGestureRecognizer, UIInterfaceActionGroupView, UIStackView, UIVisualEffectView;

@interface SKUIContextActionsViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIPopoverPresentationControllerDelegate, UIInterfaceActionHandlerInvocationDelegate, UIAdaptivePresentationControllerDelegate>
{
    _Bool _orbPresentation;
    _Bool _appliedSystemRecognizer;
    UIGestureRecognizer *_systemProvidedGestureRecognzier;
    SKUIContextActionsPresentationController *_transitionPresentationController;
    SKUIContextActionsConfiguration *_configuration;
    NSMutableArray *_constraints;
    UIInterfaceActionGroupView *_contextActionView;
    UIStackView *_stackView;
    UIVisualEffectView *_backgroundView;
    UIInterfaceActionGroupView *_scrollableActionGroupView;
    struct CGPoint _gestureRecognizerInitialLocation;
}

@property(nonatomic, getter=hasAppliedSystemRecognizer) _Bool appliedSystemRecognizer; // @synthesize appliedSystemRecognizer=_appliedSystemRecognizer;
@property(nonatomic) struct CGPoint gestureRecognizerInitialLocation; // @synthesize gestureRecognizerInitialLocation=_gestureRecognizerInitialLocation;
@property(retain, nonatomic) UIInterfaceActionGroupView *scrollableActionGroupView; // @synthesize scrollableActionGroupView=_scrollableActionGroupView;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIInterfaceActionGroupView *contextActionView; // @synthesize contextActionView=_contextActionView;
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) SKUIContextActionsConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) SKUIContextActionsPresentationController *transitionPresentationController; // @synthesize transitionPresentationController=_transitionPresentationController;
@property(retain, nonatomic) UIGestureRecognizer *systemProvidedGestureRecognzier; // @synthesize systemProvidedGestureRecognzier=_systemProvidedGestureRecognzier;
@property(nonatomic, getter=isOrbPresentation) _Bool orbPresentation; // @synthesize orbPresentation=_orbPresentation;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)_transitionPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_reloadViewsConfiguration;
- (void)_applySystemRecognizer;
- (void)systemProvidedGestureRecognzierTriggered:(id)arg1;
- (void)viewTapped:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
