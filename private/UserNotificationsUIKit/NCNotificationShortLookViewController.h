//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationViewController.h>

#import <UserNotificationsUIKit/NCBannerPresentationTransitioningDelegateObserver-Protocol.h>
#import <UserNotificationsUIKit/NCLongLookPresentationControllerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationPreviewInteractionManagerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationViewControllerObserving-Protocol.h>

@class NCBannerPresentationTransitionDelegate, NCNotificationPreviewInteractionManager, NSDate, NSHashTable, NSString, UITapGestureRecognizer, UIView, UIViewController;

@interface NCNotificationShortLookViewController : NCNotificationViewController <NCNotificationViewControllerObserving, NCNotificationPreviewInteractionManagerDelegate, NCBannerPresentationTransitioningDelegateObserver, NCLongLookPresentationControllerDelegate>
{
    NCBannerPresentationTransitionDelegate *_bannerPresentationTransitionDelegate;
    NCNotificationViewController *_longLookNotificationViewController;
    UIView *_contextDefiningContainerView;
    UIViewController *_contextDefiningViewController;
    UITapGestureRecognizer *_tapGesture;
    NSDate *_tapBeginTime;
    UIView *_audioAccessoryView;
    NSHashTable *_audioAccessoryViewObservers;
    _Bool _didScrollPresentLongLookViewController;
    NCNotificationPreviewInteractionManager *_previewInteractionManager;
}

@property(retain, nonatomic, getter=_previewInteractionManager) NCNotificationPreviewInteractionManager *previewInteractionManager; // @synthesize previewInteractionManager=_previewInteractionManager;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect)longLookPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2;
- (struct CGRect)_frameForTransitionViewInScrollView;
- (_Bool)wantsUseableContainerHeightForTransitionWithDelegate:(id)arg1;
- (void)notificationViewControllerDidDismiss:(id)arg1;
- (void)notificationViewControllerWillDismiss:(id)arg1;
- (void)notificationViewControllerDidPresent:(id)arg1;
- (void)notificationViewControllerWillPresent:(id)arg1;
- (void)previewInteractionManager:(id)arg1 shouldFinishInteractionWithCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)previewInteractionManagerShouldAttemptToFinishInteraction:(id)arg1;
- (void)previewInteractionManagerDidEndUserInteraction:(id)arg1;
- (void)previewInteractionManagerWillBeginUserInteraction:(id)arg1;
- (_Bool)previewInteractionManagerShouldBeginInteraction:(id)arg1;
- (id)longLookViewControllerForPreviewInteractionManager:(id)arg1;
- (id)_longLookNotificationViewController;
- (id)containerViewForPreviewInteractionManager:(id)arg1;
- (void)customContentDidLoadExtension:(id)arg1;
- (void)customContent:(id)arg1 didLoadAudioAccessoryView:(id)arg2;
- (void)_presentLongLookForScrollAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadPresentationContainerViewIfNecessary;
- (id)_notificationShortLookViewIfLoaded;
- (id)_customContentProvidingViewControllerCreateIfNecessary;
- (void)_loadExtensionIfNecessary;
- (void)_setAudioAccessoryView:(id)arg1;
- (void)removeAudioAccesoryViewObserver:(id)arg1;
- (void)addAudioAccessoryViewObserver:(id)arg1;
- (void)_updateWithProvidedStaticContent;
- (_Bool)_tryDismissingShortLookInScrollView:(id)arg1;
- (void)_handleTapOnView:(id)arg1;
- (void)_notificationViewControllerViewDidLoad;
- (void)_loadLookView;
- (void)_updateScrollViewContentSize;
- (_Bool)_shouldPadScrollViewContentSizeHeight;
- (void)_configureScrollViewIfNecessary;
- (Class)_scrollViewClass;
- (_Bool)_isPresentingCustomContentProvidingViewController;
@property(readonly, nonatomic, getter=_presentedLongLookViewController) NCNotificationViewController *presentedLongLookViewController;
- (id)_newPreviewInteractionManager;
- (_Bool)_setNotificationRequest:(id)arg1;
- (_Bool)_setDelegate:(id)arg1;
- (void)setInteractionEnabled:(_Bool)arg1;
- (_Bool)shouldRestorePresentingShortLookOnDismiss;
- (void)expandAndPlayAudioMessage;
- (void)presentLongLookAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillLayoutSubviews;
- (_Bool)isContentExtensionVisible:(id)arg1;
- (_Bool)dismissPresentedViewControllerAndClearNotification:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)didReceiveNotificationRequest:(id)arg1;
- (_Bool)hasCommittedToPresentingCustomContentProvidingViewController;
- (_Bool)isShortLook;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

