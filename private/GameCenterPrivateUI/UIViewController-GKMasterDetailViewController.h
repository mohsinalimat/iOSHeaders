//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (GKMasterDetailViewController)
+ (struct UIEdgeInsets)largerEdgeInsetsForView:(id)arg1 isWithinSplitView:(_Bool)arg2;
+ (struct UIEdgeInsets)largerEdgeInsetsForView:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets largerEdgeInsets; // @dynamic largerEdgeInsets;
- (void)_gkMasterDetailViewControllerWillTransitionToTraitCollection:(id)arg1 transitionCoordinator:(id)arg2;
- (void)_gkPopDetailViewControllerAnimated:(_Bool)arg1;
- (void)_gkShowDetailViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_gkPushDetailViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_gkInternalPushDetailViewControllerInCompactMode:(id)arg1 animated:(_Bool)arg2;
- (void)_gkPushMasterViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_gkSetMasterDetailViewController:(id)arg1;
- (id)_gkMasterDetailViewController;
- (_Bool)_gkIsContainedByRegularWidthMasterDetailViewController;
@end

