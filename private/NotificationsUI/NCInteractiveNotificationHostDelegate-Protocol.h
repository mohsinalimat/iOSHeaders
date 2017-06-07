//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotificationsUI/NSObject-Protocol.h>

@class NSDictionary, UIViewController;
@protocol NCInteractiveNotificationHost;

@protocol NCInteractiveNotificationHostDelegate <NSObject>

@optional
- (void)hostViewController:(UIViewController<NCInteractiveNotificationHost> *)arg1 serviceRequestedDismissalEnabled:(_Bool)arg2;
- (void)hostViewController:(UIViewController<NCInteractiveNotificationHost> *)arg1 didEnable:(_Bool)arg2 actionAtIndex:(unsigned long long)arg3;
- (void)hostViewController:(UIViewController<NCInteractiveNotificationHost> *)arg1 didRequestDismissalWithContext:(NSDictionary *)arg2;
- (void)hostViewControllerDidChangePreferredContentSize:(UIViewController<NCInteractiveNotificationHost> *)arg1;
@end

