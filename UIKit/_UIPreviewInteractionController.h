//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UIPreviewInteractionDelegate-Protocol.h>

@class NSArray, NSString, UIGestureRecognizer, UIPanGestureRecognizer, UIPreviewInteraction, UIView, UIViewController, _UIPreviewGestureRecognizer2, _UIPreviewInteractionCommitTransition, _UIPreviewInteractionViewControllerTransition, _UIPreviewPresentationController2, _UIRevealGestureRecognizer2;
@protocol UIViewControllerPreviewing_Internal, _UIPreviewInteractionControllerDelegate, _UIPreviewInteractionHighlighting;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate>
{
    _Bool _performingPreviewTransition;
    _Bool _performingCommitTransition;
    id <_UIPreviewInteractionControllerDelegate> _delegate;
    UIView *_sourceView;
    UIViewController *_presentingViewController;
    UIPreviewInteraction *_previewInteraction;
    _UIRevealGestureRecognizer2 *_revealGestureRecognizer;
    _UIPreviewGestureRecognizer2 *_previewGestureRecognizer;
    UIPanGestureRecognizer *_modalPanGestureRecognizer;
    UIViewController *_currentPreviewViewController;
    _UIPreviewPresentationController2 *_currentPresentationController;
    _UIPreviewInteractionViewControllerTransition *_currentTransitionDelegate;
    _UIPreviewInteractionCommitTransition *_currentCommitTransition;
    id <UIViewControllerPreviewing_Internal> _currentPreviewingContext;
    id <_UIPreviewInteractionHighlighting> _currentHighlighter;
    struct CGPoint _location;
}

@property(retain, nonatomic) id <_UIPreviewInteractionHighlighting> currentHighlighter; // @synthesize currentHighlighter=_currentHighlighter;
@property(nonatomic) __weak id <UIViewControllerPreviewing_Internal> currentPreviewingContext; // @synthesize currentPreviewingContext=_currentPreviewingContext;
@property(nonatomic) _Bool performingCommitTransition; // @synthesize performingCommitTransition=_performingCommitTransition;
@property(nonatomic) _Bool performingPreviewTransition; // @synthesize performingPreviewTransition=_performingPreviewTransition;
@property(retain, nonatomic) _UIPreviewInteractionCommitTransition *currentCommitTransition; // @synthesize currentCommitTransition=_currentCommitTransition;
@property(retain, nonatomic) _UIPreviewInteractionViewControllerTransition *currentTransitionDelegate; // @synthesize currentTransitionDelegate=_currentTransitionDelegate;
@property(retain, nonatomic) _UIPreviewPresentationController2 *currentPresentationController; // @synthesize currentPresentationController=_currentPresentationController;
@property(retain, nonatomic) UIViewController *currentPreviewViewController; // @synthesize currentPreviewViewController=_currentPreviewViewController;
@property(retain, nonatomic) UIPanGestureRecognizer *modalPanGestureRecognizer; // @synthesize modalPanGestureRecognizer=_modalPanGestureRecognizer;
@property(retain, nonatomic) _UIPreviewGestureRecognizer2 *previewGestureRecognizer; // @synthesize previewGestureRecognizer=_previewGestureRecognizer;
@property(retain, nonatomic) _UIRevealGestureRecognizer2 *revealGestureRecognizer; // @synthesize revealGestureRecognizer=_revealGestureRecognizer;
@property(retain, nonatomic) UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) __weak id <_UIPreviewInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_panningRecognizerDidFire:(id)arg1;
- (void)_finalizeInteractivePreview;
- (void)_resetCustomPresentationHooks;
- (id)_preferredNavigationControllerForCommitTransition;
- (_Bool)_previewingIsPossibleForView:(id)arg1;
- (_Bool)_viewControllerIsChildOfTwoColumnSplitViewController:(id)arg1;
@property(readonly, nonatomic) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *presentationGestureRecognizer;
- (void)_finalizeAfterPreviewViewControllerPresentation;
- (void)_dismissPreviewViewControllerIfNeeded;
- (_Bool)_preparePreviewViewControllerPresentationFromPreviewInteraction:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(_Bool)arg3;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)commitInteractivePreview;
@property(readonly, nonatomic) NSArray *gestureRecognizers; // @dynamic gestureRecognizers;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
