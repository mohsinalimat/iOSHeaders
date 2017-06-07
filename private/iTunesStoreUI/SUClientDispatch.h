//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SUClientDispatch : NSObject
{
}

+ (_Bool)wasLaunchedFromLibrary;
+ (id)tabBarController;
+ (_Bool)showPreviewOverlayAnimated:(_Bool)arg1;
+ (void)setClientBridge:(id)arg1;
+ (_Bool)sendActionForDialog:(id)arg1 button:(id)arg2;
+ (id)scriptExecutionContext;
+ (id)previewOverlayViewController;
+ (_Bool)presentOverlayBackgroundViewController:(id)arg1;
+ (id)overlayConfigurationForStorePage:(id)arg1;
+ (id)overlayBackgroundViewController;
+ (id)newScriptInterface;
+ (_Bool)matchesClientApplication:(id)arg1;
+ (_Bool)isTabBarControllerLoaded;
+ (id)imagePool;
+ (id)imageCache;
+ (_Bool)hidePreviewOverlayAnimated:(_Bool)arg1;
+ (id)exitStoreButtonTitle;
+ (_Bool)enterAccountFlowWithViewController:(id)arg1 animated:(_Bool)arg2;
+ (void)dismissOverlayBackgroundViewController;
+ (_Bool)composeReviewWithViewController:(id)arg1 animated:(_Bool)arg2;
+ (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
+ (id)clientInterface;

@end

