//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKLocalPlayer.h>

@class UIViewController;
@protocol GKAuthenticateViewController;

@interface GKLocalPlayer (iOSAuthenticationUI)
- (void)removeActiveViewControllerAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showViewController:(id)arg1 wrapInNavController:(_Bool)arg2;
@property(retain, nonatomic) UIViewController<GKAuthenticateViewController> *signInViewController;
@property(retain, nonatomic) UIViewController *rootViewController;
@property(retain, nonatomic) UIViewController *activeViewController;
@end

