//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import <WebApp/UIApplicationDelegate-Protocol.h>

@class NSString, NSURL, UIWindow, WebAppController;

@interface WebApplication : UIApplication <UIApplicationDelegate>
{
    NSURL *_lastActiveWebClipURL;
    WebAppController *_webApp;
    _Bool _wasSuspendedUnderLock;
}

- (void).cxx_destruct;
- (void)applicationOpenURL:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)_showWebApplicationAtURL:(id)arg1;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (id)nameOfDefaultImageToUpdateAtSuspension:(long long)arg1;
- (_Bool)applicationSuspendWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

