//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationPreviewInteractionManager, NCNotificationViewController, UIView;

@protocol NCNotificationPreviewInteractionManagerDelegate <NSObject>
- (UIView *)containerViewForPreviewInteractionManager:(NCNotificationPreviewInteractionManager *)arg1;
- (NCNotificationViewController *)longLookViewControllerForPreviewInteractionManager:(NCNotificationPreviewInteractionManager *)arg1;

@optional
- (void)previewInteractionManager:(NCNotificationPreviewInteractionManager *)arg1 shouldFinishInteractionWithCompletionBlock:(void (^)(_Bool))arg2;
- (_Bool)previewInteractionManagerShouldAttemptToFinishInteraction:(NCNotificationPreviewInteractionManager *)arg1;
- (void)previewInteractionManagerDidEndUserInteraction:(NCNotificationPreviewInteractionManager *)arg1;
- (void)previewInteractionManagerWillBeginUserInteraction:(NCNotificationPreviewInteractionManager *)arg1;
- (_Bool)previewInteractionManagerShouldBeginInteraction:(NCNotificationPreviewInteractionManager *)arg1;
@end

