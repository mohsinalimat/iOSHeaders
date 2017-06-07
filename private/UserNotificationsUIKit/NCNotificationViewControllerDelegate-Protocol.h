//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class MTMaterialSettings, NCNotificationAction, NCNotificationViewController, NSDictionary, UIView, UIViewController;
@protocol UIViewControllerTransitionCoordinator;

@protocol NCNotificationViewControllerDelegate <NSObject>
- (void)notificationViewController:(NCNotificationViewController *)arg1 executeAction:(NCNotificationAction *)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(_Bool))arg4;
- (void)notificationViewController:(NCNotificationViewController *)arg1 requestPermissionToExecuteAction:(NCNotificationAction *)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(_Bool))arg4;

@optional
- (MTMaterialSettings *)materialSettingsForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerIsReadyToBePresented:(NCNotificationViewController *)arg1;
- (_Bool)shouldLoadAudioAccessoryViewForNotificationViewController:(NCNotificationViewController *)arg1;
- (_Bool)showAdditionalMessageLinesForNotificationViewController:(NCNotificationViewController *)arg1;
- (UIView *)customBackgroundViewForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didCommitToLongLookPresentation:(_Bool)arg2 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didCommitToShortLookPresentation:(_Bool)arg2 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (struct CGRect)notificationViewController:(NCNotificationViewController *)arg1 convertRect:(struct CGRect)arg2 toLocalWindowSpaceFromView:(UIView *)arg3;
- (struct CGRect)presentationFrameForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerDidEndUserInteraction:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerWillBeginUserInteraction:(NCNotificationViewController *)arg1;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didDismissShortLook:(_Bool)arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didDismissLongLook:(_Bool)arg2;
- (void)longLookWillDismissForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didPresentLongLook:(_Bool)arg2;
- (void)longLookWillPresentForNotificationViewController:(NCNotificationViewController *)arg1;
- (UIViewController *)notificationViewController:(NCNotificationViewController *)arg1 preferredViewControllerForPresentingFromViewController:(UIViewController *)arg2;
- (_Bool)shouldAddHintTextForNotificationViewController:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewController:(NCNotificationViewController *)arg1 suggestsDismissingShortLookWithSource:(id)arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(void (^)(_Bool))arg2;
- (_Bool)notificationViewControllerShouldAllowInteractionGesture:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewControllerShouldBlurShortLook:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewControllerShouldInterpretTapAsDefaultAction:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewControllerShouldPan:(NCNotificationViewController *)arg1;
- (long long)notificationViewControllerDateFormatStyle:(NCNotificationViewController *)arg1;
@end

