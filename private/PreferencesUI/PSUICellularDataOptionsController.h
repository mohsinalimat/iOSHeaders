//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSListItemsController, PSSpecifier;

@interface PSUICellularDataOptionsController : PSListController
{
    PSListItemsController *_RATModeDrilldownController;
    PSSpecifier *_mobileDataGroup;
    PSSpecifier *_enableRATSpecifier;
    int _RATSwitchKind;
    _Bool _3GOverrideTo4G;
    _Bool _LTEOverrideTo4G;
}

- (void).cxx_destruct;
- (void)roamingOptionsDidChange;
- (id)isMobileDataEnabled:(id)arg1;
- (id)getCDMARoamingStatus:(id)arg1;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetEnabledConfirmed:(id)arg1;
- (void)setEUInternetCancelled:(id)arg1;
- (id)getEUInternetStatus:(id)arg1;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getDataRoamingStatus:(id)arg1;
- (id)roamingSettingsDescription:(id)arg1;
- (_Bool)shouldShowLTEOptions;
- (_Bool)shouldShowLegacyRATOptions;
- (id)getLTEService:(id)arg1;
- (void)setLTEService:(id)arg1 specifier:(id)arg2;
- (_Bool)supportsVoLTE;
- (id)localizableRATModeStringKeyForKey:(id)arg1 targetMode:(int)arg2;
- (void)reloadRATStatus:(id)arg1;
- (void)updateRATSpecifiers;
- (_Bool)_updateMobileDataGroupContentShowingRAT:(_Bool)arg1;
- (void)updateRATStateWithDictionary:(id)arg1;
- (id)getRATSwitchIsOn:(id)arg1;
- (id)getRATModeState:(id)arg1;
- (void)_setRATModeConfirmed:(int)arg1;
- (void)_setRATModeStateIsOn:(_Bool)arg1;
- (void)acceptedRATSwitch:(id)arg1;
- (void)canceledRATSwitch:(id)arg1;
- (void)setRATSwitchIsOn:(id)arg1 specifier:(id)arg2;
- (void)setRATModeState:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (id)controllerForSpecifier:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;

@end

