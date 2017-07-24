//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationBarDelegate-Protocol.h>

@class UINavigationBar, UINavigationItem, UISearchController;
@protocol UIViewControllerTransitionCoordinator;

@protocol _UINavigationBarDelegatePrivate <UINavigationBarDelegate>

@optional
- (struct CGRect)_incomingNavigationBarFrame;
- (void)_navigationItemDidUpdateSearchController:(UINavigationItem *)arg1 oldSearchController:(UISearchController *)arg2;
- (void)_navigationBarDidEndAnimation:(UINavigationBar *)arg1;
- (_Bool)isNavigationBarHidden;
- (_Bool)enableBackButtonDuringTransition;
- (void)_updatePaletteConstraints;
- (void)_updatePalettesWithBlock:(void (^)(_UINavigationControllerPalette *))arg1;
- (double)_customNavigationTransitionDuration;
- (_Bool)_isInteractiveCustomNavigationTransition;
- (_Bool)_shouldCrossFadeNavigationBar;
- (_Bool)_willPerformCustomNavigationTransitionForPush;
- (_Bool)_willPerformCustomNavigationTransitionForPop;
- (id <UIViewControllerTransitionCoordinator>)_transitionCoordinator;
- (_Bool)_hasInterruptibleNavigationTransition;
- (struct NSDirectionalEdgeInsets)_layoutMarginsforNavigationBar:(UINavigationBar *)arg1;
- (void)_navigationBarWillBeginCoordinatedTransitionAnimations:(UINavigationBar *)arg1;
- (void)_navigationBarChangedSize:(UINavigationBar *)arg1;
- (void)_navigationBarDidChangeStyle:(UINavigationBar *)arg1;
- (void)navigationBarDidChangeOpacity:(UINavigationBar *)arg1;
- (void)navigationBarDidResizeForPrompt:(UINavigationBar *)arg1;
@end

