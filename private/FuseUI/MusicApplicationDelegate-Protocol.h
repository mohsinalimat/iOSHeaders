//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/UIApplicationDelegate-Protocol.h>

@class MusicClientContext, UIAlertController;

@protocol MusicApplicationDelegate <UIApplicationDelegate>
@property(readonly, nonatomic) _Bool didFinishLaunching;
@property(readonly, nonatomic) MusicClientContext *clientContext;
- (void)presentNowPlayingViewControllerAnimated:(_Bool)arg1;
- (void)presentFailureAlertController:(UIAlertController *)arg1;
@end

