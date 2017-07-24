//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIPreviewPresentationControllerDelegate-Protocol.h>
#import <UIKit/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <UIKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UIView, UIViewController, UIWindow, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionViewControllerHelper : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIPreviewPresentationControllerDelegate>
{
    _UIPreviewInteractionHighlighter *_highlighter;
    _UIPreviewInteractionViewControllerPresentation *_viewControllerPresentation;
    UIWindow *_presentingWindow;
    CDUnknownBlockType _presentationCompletion;
    CDUnknownBlockType _dismissalCompletion;
    _Bool _shouldActAsAppearanceAnimationController;
    _Bool _shouldUseDefaultPresentationController;
    UIViewController *_previousParentViewController;
    UIView *_previousSuperview;
    id <UIViewControllerContextTransitioning> _currentTransitionContext;
}

@property(readonly, nonatomic) _UIPreviewInteractionViewControllerPresentation *viewControllerPresentation; // @synthesize viewControllerPresentation=_viewControllerPresentation;
- (void).cxx_destruct;
- (void)_performDismissalCompletionIfNeeded;
- (void)_finalizeAfterViewControllerPresentation;
- (id)customPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)defaultPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)_performPresentViewControllerFromViewController:(id)arg1;
- (void)previewPresentationController:(id)arg1 shouldDismissViewController:(id)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissViewController;
- (void)presentViewControllerFromViewController:(id)arg1 highlighter:(id)arg2 presentationCompletion:(CDUnknownBlockType)arg3 dismissalCompletion:(CDUnknownBlockType)arg4;
- (id)initWithViewControllerPresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

