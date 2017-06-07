//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/PSListControllerTestableSpecifiers-Protocol.h>

@class NSString, PSSpecifier;

@interface PSUISoundsPrefController : PSListController <PSListControllerTestableSpecifiers>
{
    float _volume;
    float _rateLimitedVolume;
    int _lastPlayedSound;
    _Bool _hasTelephony;
    _Bool _volumeHUDSupressed;
    double _lastTime;
    PSSpecifier *_voiceMailSpecifier;
    long long _voiceMailSpecifierIndex;
}

+ (id)booleanCapabilitiesToTest;
- (void).cxx_destruct;
- (void)setCanChangeRingtoneWithButtons:(id)arg1 specifier:(id)arg2;
- (id)canChangeRingtoneWithButtons:(id)arg1;
- (void)setPlayKeyboardSound:(id)arg1 specifier:(id)arg2;
- (id)shouldPlayCalendarSound:(id)arg1;
- (id)detailTextForToneWithSpecifier:(id)arg1;
- (void)setVolume:(id)arg1 specifier:(id)arg2;
- (void)setVolumeAfterRateLimiting;
- (void)volumeChangedExternally:(id)arg1;
- (id)volume:(id)arg1;
- (id)soundEffects:(id)arg1;
- (void)setSoundEffects:(id)arg1 specifier:(id)arg2;
- (void)dealloc;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)endInterruption;
- (void)updateVolume;
- (void)didLock;
- (id)specifiers;
- (_Bool)_canChangeRingtoneWithButtons;
- (void)updateVoiceMailVisibility;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)willForeground;
- (void)didBackground;
- (void)setVolumeHUDSupression:(_Bool)arg1;
- (int)_deviceType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

