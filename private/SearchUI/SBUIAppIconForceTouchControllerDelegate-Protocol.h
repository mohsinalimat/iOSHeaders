//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/NSObject-Protocol.h>

@class SBSApplicationShortcutItem, SBUIAppIconForceTouchController, SBUIForceTouchGestureRecognizer;

@protocol SBUIAppIconForceTouchControllerDelegate <NSObject>

@optional
- (_Bool)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 shouldActivateApplicationShortcutItem:(SBSApplicationShortcutItem *)arg2 atIndex:(unsigned long long)arg3 forGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg4;
- (void)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 didDismissForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 willDismissForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 didPresentForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 willPresentForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (_Bool)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 shouldUseSecureWindowForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (_Bool)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 shouldHandleGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
@end

