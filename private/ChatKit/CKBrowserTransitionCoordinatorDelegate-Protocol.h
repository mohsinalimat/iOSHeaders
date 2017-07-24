//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKAppGrabberView, CKBrowserSwitcherFooterView, CKBrowserTransitionCoordinator, IMBalloonPlugin, UIViewController;
@protocol CKBrowserViewControllerProtocol;

@protocol CKBrowserTransitionCoordinatorDelegate <NSObject>

@optional
- (struct CGRect)cachedCompactFrameInWindowCoordsForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (void)reinsertSwitcherFooterViewForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (CKBrowserSwitcherFooterView *)switcherFooterViewForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (void)reinsertAppGrabberViewForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (CKAppGrabberView *)appGrabberForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (void)browserTransitionCoordinatorWantsPresentationOfAppManager:(CKBrowserTransitionCoordinator *)arg1;
- (void)browserTransitionCoordinatorWantsPresentationOfAppStore:(CKBrowserTransitionCoordinator *)arg1;
- (struct CGRect)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 preferredFrameForBrowser:(UIViewController<CKBrowserViewControllerProtocol> *)arg2;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 wantsToSwitchToPlugin:(IMBalloonPlugin *)arg2;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 didTransitionFromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 browserWillBecomeInactive:(UIViewController<CKBrowserViewControllerProtocol> *)arg2;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 expandedStateDidChange:(_Bool)arg2 withReason:(long long)arg3;
@end

