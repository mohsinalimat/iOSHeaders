//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsUI/NSObject-Protocol.h>

@class UINavigationController, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol UINavigationControllerDelegate <NSObject>

@optional
- (id <UIViewControllerAnimatedTransitioning>)navigationController:(UINavigationController *)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(UIViewController *)arg3 toViewController:(UIViewController *)arg4;
- (id <UIViewControllerInteractiveTransitioning>)navigationController:(UINavigationController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(UINavigationController *)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(UINavigationController *)arg1;
- (void)navigationController:(UINavigationController *)arg1 didShowViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)navigationController:(UINavigationController *)arg1 willShowViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
@end

