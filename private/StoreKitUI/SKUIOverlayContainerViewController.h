//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIColor, UIControl, UITapGestureRecognizer;
@protocol SKUIOverlayContainerDelegate;

@interface SKUIOverlayContainerViewController : UIViewController <UIGestureRecognizerDelegate>
{
    UIControl *_backstopView;
    _Bool _isAdjustingViewsForDismiss;
    long long _popViewControllerCount;
    long long _selectedViewControllerIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_viewControllers;
    id <SKUIOverlayContainerDelegate> _delegate;
}

@property(nonatomic) __weak id <SKUIOverlayContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_viewControllerForPoint:(struct CGPoint)arg1;
- (void)_slideInViewController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)_selectedViewController;
- (void)_removeChildren;
- (void)_pushViewController:(id)arg1;
- (void)_positionViewControllersForSize:(struct CGSize)arg1 traitCollection:(id)arg2;
- (void)_popViewControllers;
- (double)_overlaySpacingForSize:(struct CGSize)arg1;
- (struct CGSize)_overlaySizeForController:(id)arg1 atBoundsSize:(struct CGSize)arg2;
- (long long)_indexOfViewControllerForPoint:(struct CGPoint)arg1;
- (struct CGRect)_centeredFrameForViewController:(id)arg1 inBounds:(struct CGRect)arg2;
- (void)_fadeInViewController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIColor *dimmingViewColor;
- (void)_frameAction:(id)arg1;
- (void)_tapAction:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)loadView;
@property(readonly, copy, nonatomic) NSArray *viewControllers;
- (void)showViewController:(id)arg1 withFlipTransition:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)showViewControllers:(id)arg1;
- (void)showViewController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)replaceViewController:(id)arg1 withViewController:(id)arg2;
- (void)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)dismissWithFadeTransitionCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dismissWithFlipTransition:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIControl *backstopControl;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

