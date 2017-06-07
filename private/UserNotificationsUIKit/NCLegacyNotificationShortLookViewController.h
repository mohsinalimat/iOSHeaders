//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationShortLookViewController.h>

@class UIView;

@interface NCLegacyNotificationShortLookViewController : NCNotificationShortLookViewController
{
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)transitioningDelegate:(id)arg1 didFinishDismissalOfViewController:(id)arg2 completed:(_Bool)arg3;
- (_Bool)wantsUseableContainerHeightForTransitionWithDelegate:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_backgroundTapGesture:(id)arg1;
- (void)_finishAdditionalContentReveal;
- (void)_resizeLegacyScrollViewToFitContentSizeWithKeyboardFrame:(struct CGRect)arg1;
- (void)_resizeLegacyScrollViewToFitContentSize;
- (_Bool)_tryDismissingShortLookInScrollView:(id)arg1;
- (struct CGSize)_preferredCustomContentSizeForSize:(struct CGSize)arg1;
- (void)_setCustomContentProvidingViewController:(id)arg1;
- (void)_updateWithProvidedCustomContent;
- (void)_setupCustomContentProvider;
- (id)_legacyLookViewIfLoaded;
- (void)_notificationViewControllerViewDidLoad;
- (void)_loadLookView;
- (void)_configureScrollViewIfNecessary;
- (void)_updateScrollViewContentSize;
- (id)_newTransitionManager;
- (void)expandAndPlayAudioMessage;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)dismissPresentedViewControllerAndClearNotification:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)hasCommittedToPresentingCustomContentProvidingViewController;

@end

