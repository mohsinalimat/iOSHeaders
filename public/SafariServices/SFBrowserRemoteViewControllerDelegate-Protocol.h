//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSError, NSNumber, NSString, NSURL, SFBrowserRemoteViewController;

@protocol SFBrowserRemoteViewControllerDelegate <NSObject>
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 hostApplicationOpenURL:(NSURL *)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 setSwipeGestureEnabled:(_Bool)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 executeCustomActivityProxyID:(NSNumber *)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 fetchActivityViewControllerInfoForURL:(NSURL *)arg2 title:(NSString *)arg3;
- (void)remoteViewControllerDidLoadWebView:(SFBrowserRemoteViewController *)arg1;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 didFinishInitialLoad:(_Bool)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 viewServiceDidTerminateWithError:(NSError *)arg2;
- (void)remoteViewControllerWillDismiss:(SFBrowserRemoteViewController *)arg1;

@optional
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 didDecideCookieSharingForURL:(NSURL *)arg2 shouldCancel:(_Bool)arg3;
@end

