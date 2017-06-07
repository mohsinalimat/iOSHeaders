//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/FMFSessionDelegate-Protocol.h>

@class ACAccount, ACAccountStore, FMFDevice, FMFSession, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSOperationQueue, NSString;

@interface PSUILocationServicesListController : PSListController <FMFSessionDelegate>
{
    NSDictionary *_locationEntitiesDetails;
    NSMutableArray *_coalescedSystemServices;
    NSArray *_ignoredLocationEntities;
    _Bool _deferredRefreshDueToConfirm;
    _Bool _locationNotificationsEnabled;
    NSMutableDictionary *_coalesceAppKeys;
    NSDate *_twentyFourHoursAgo;
    ACAccountStore *_accountStore;
    ACAccount *_primaryAccount;
    NSOperationQueue *_locationSharingOperationQueue;
    FMFSession *_locationSharingSession;
    FMFDevice *_locationSharingDevice;
    NSNumber *_locationSharingEnabled;
}

+ (_Bool)isLocationRestricted;
+ (void)setCoreRoutineAuthorized:(_Bool)arg1;
+ (_Bool)isCoreRoutineAuthorized;
- (void).cxx_destruct;
- (void)didUpdateHidingStatus:(_Bool)arg1;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)connectionError:(id)arg1;
- (void)mainThreadDidUpdateHidingStatus:(_Bool)arg1;
- (void)mainThreadDidChangeActiveLocationSharingDevice:(id)arg1;
- (void)mainThreadConnectionError:(id)arg1;
- (id)locationSharingDevice;
- (_Bool)isLocationSharingEnabled;
- (id)locationSharingSession;
- (id)locationSharingOperationQueue;
- (unsigned long long)locationSharingTimeout;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)updateLocationSharingSpecifiersWithReload:(_Bool)arg1;
- (id)locationSharingSpecifiers;
- (_Bool)isLocationSharingModificationAllowed;
- (_Bool)_shouldEnableLocationSharingSpecifier;
- (id)primaryAccount;
- (id)accountStore;
- (void)_locationSharingSpecifierWasTapped:(id)arg1;
- (id)locationDetailSpecifiers;
- (_Bool)_isBundleBlacklisted:(id)arg1;
- (id)localizedDisplayNameForBundleID:(id)arg1;
- (id)hiddenBundleIdentifiers;
- (void)showLocationPrivacyPage;
- (void)willBecomeActive;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateForApplicationDidBecomeActive:(id)arg1;
- (void)updateRecentlyUsedDate;
- (void)updateMutableStateForLocationSharing;
- (void)updateSpecifiersForImposedSettingsWithReload:(_Bool)arg1;
- (void)updateSpecifiersForImposedSettings;
- (void)updateFindMyFriendsStateBasedOnRestriction;
- (void)updateMutableStateBasedOnRestriction;
- (void)disableAfterLoginConfirmation:(id)arg1;
- (void)setEntityAuthorized:(id)arg1 specifier:(id)arg2;
- (void)_setEntityAuthorized:(_Bool)arg1 specifier:(id)arg2;
- (id)isEntityAuthorized:(id)arg1;
- (_Bool)_isFindMyDeviceSpecifier:(id)arg1;
- (void)_setLocationServicesEnabled:(_Bool)arg1;
- (void)_cancelConfirmDisableForSpecifier:(id)arg1;
- (void)setLocationServicesEnabled:(id)arg1 specifier:(id)arg2;
- (void)refreshLinkStatusInParent;
- (id)isLocationServicesEnabled:(id)arg1;
- (int)locationUsageForEntity:(id)arg1;
- (int)locationUsageBasedOnDetails:(id)arg1;
- (void)stopLocationStatusUpdates;
- (void)startLocationStatusUpdates;
- (void)updateLocationUsage;
- (void)setUsage:(int)arg1 forCell:(id)arg2;
- (void)setAuthLevel:(unsigned long long)arg1 forCell:(id)arg2;
- (void)profileNotification:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

