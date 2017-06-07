//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/DevicePINControllerDelegate-Protocol.h>
#import <PreferencesUI/HMHomeManagerDelegate-Protocol.h>

@class HMHomeManager, NSString, PSSpecifier;

@interface PSUIPasscodeLockController : PSListController <HMHomeManagerDelegate, DevicePINControllerDelegate>
{
    int _policyDictatedMaxFailedAttempts;
    PSSpecifier *_voiceDialSpecifier;
    PSSpecifier *_voiceDialGroupSpecifier;
    _Bool _canUnlockWatch;
    HMHomeManager *_homeManager;
}

+ (long long)passcodeGracePeriod;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(nonatomic) _Bool canUnlockWatch; // @synthesize canUnlockWatch=_canUnlockWatch;
- (void).cxx_destruct;
- (void)profileNotification:(id)arg1;
- (void)disablePasscodeRequiredSpecifiers:(id)arg1;
- (void)setEnabledInLockScreen:(id)arg1 specifier:(id)arg2;
- (id)enabledInLockScreen:(id)arg1;
- (id)specifiers;
- (void)suspend;
- (_Bool)canBeShownFromSuspendedState;
- (void)showKeychainAlert;
- (void)didAcceptRemovePIN;
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
- (void)_didUpdatePasscode:(id)arg1;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)_showWeakWarningAlertForController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)devicePINController:(id)arg1 shouldAcceptPIN:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_makeWipeDeviceGroupFooter;
- (void)_setWipeEnabled:(_Bool)arg1;
- (void)setWipeEnabled:(id)arg1 specifier:(id)arg2;
- (id)wipeEnabled:(id)arg1;
- (_Bool)showReplyWithMessage;
- (_Bool)isWalletRestricted;
- (void)setWallet:(id)arg1 specifier:(id)arg2;
- (id)wallet:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(_Bool)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)setHomeControlAccessAllowedWhenLocked:(id)arg1 specifier:(id)arg2;
- (id)homeControlAccessAllowedWhenLocked:(id)arg1;
- (_Bool)isAssistantRestricted;
- (void)setAssistantUnderLockEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)assistantUnderLockEnabled:(id)arg1;
- (void)updateVoiceDialGroup;
- (_Bool)isVoiceDialRestricted;
- (_Bool)shouldShowVoiceDial;
- (void)setVoiceDial:(id)arg1 specifier:(id)arg2;
- (id)voiceDial:(id)arg1;
- (void)_localizeGracePeriodTitlesForSpecifier:(id)arg1;
- (void)_updateGracePeriodForSpecifier:(id)arg1;
- (void)updateGracePeriodSpecifier;
- (void)setGraceValue:(id)arg1 specifier:(id)arg2;
- (id)graceValue:(id)arg1;
- (void)showPINSheet:(id)arg1;
- (void)togglePasscode:(id)arg1;
- (void)_showDeleteSavedFingerprintsAlert;
- (long long)fingerprintCount;
- (_Bool)isPasscodeSet;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

