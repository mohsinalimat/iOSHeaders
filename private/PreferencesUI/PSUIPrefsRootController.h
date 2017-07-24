//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSRootController.h>

@class PSUIPrefsListController;

@interface PSUIPrefsRootController : PSRootController
{
    PSUIPrefsListController *_rootListController;
}

+ (void)stopRingtoneWithFadeOut:(float)arg1;
+ (void)playRingtoneWithIdentifier:(id)arg1 loop:(_Bool)arg2;
+ (_Bool)isPlayingRingtone;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (void)loadView;
- (id)rootListController;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setupControllerForToolbar:(id)arg1;
- (void)mediaServerDiedNotification:(id)arg1;

@end

