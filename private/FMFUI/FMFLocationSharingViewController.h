//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <FMFUI/FMFSessionDelegateInternal-Protocol.h>

@class FMFHandle, NSArray, NSMutableDictionary, NSString, UIAlertController;

@interface FMFLocationSharingViewController : PSListController <FMFSessionDelegateInternal>
{
    _Bool _isMyLocationEnabled;
    _Bool _useFamilyCirclePhotos;
    _Bool _useFamilyCirclePhotosLoaded;
    NSArray *_allFollowersHandles;
    NSArray *_followersHandles;
    NSArray *_followersSpecifiers;
    NSArray *_familySpecifiers;
    NSMutableDictionary *_dsidToFamilyPhoto;
    NSArray *_hashedFamilyDsids;
    void *_addressBook;
    FMFHandle *_lastSelectedHandle;
    NSArray *_familyMembers;
    UIAlertController *_genericErrorAlert;
}

@property(nonatomic) _Bool useFamilyCirclePhotosLoaded; // @synthesize useFamilyCirclePhotosLoaded=_useFamilyCirclePhotosLoaded;
@property(nonatomic) _Bool useFamilyCirclePhotos; // @synthesize useFamilyCirclePhotos=_useFamilyCirclePhotos;
@property(retain, nonatomic) UIAlertController *genericErrorAlert; // @synthesize genericErrorAlert=_genericErrorAlert;
@property(retain, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property(nonatomic) _Bool isMyLocationEnabled; // @synthesize isMyLocationEnabled=_isMyLocationEnabled;
@property(retain, nonatomic) FMFHandle *lastSelectedHandle; // @synthesize lastSelectedHandle=_lastSelectedHandle;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(retain, nonatomic) NSArray *hashedFamilyDsids; // @synthesize hashedFamilyDsids=_hashedFamilyDsids;
@property(retain, nonatomic) NSMutableDictionary *dsidToFamilyPhoto; // @synthesize dsidToFamilyPhoto=_dsidToFamilyPhoto;
@property(retain, nonatomic) NSArray *familySpecifiers; // @synthesize familySpecifiers=_familySpecifiers;
@property(retain, nonatomic) NSArray *followersSpecifiers; // @synthesize followersSpecifiers=_followersSpecifiers;
@property(retain, nonatomic) NSArray *followersHandles; // @synthesize followersHandles=_followersHandles;
@property(retain, nonatomic) NSArray *allFollowersHandles; // @synthesize allFollowersHandles=_allFollowersHandles;
- (void).cxx_destruct;
- (void)networkReachabilityUpdated:(_Bool)arg1;
- (void)didReceiveServerError:(id)arg1;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didStopSharingMyLocationWithHandle:(id)arg1;
- (void)didStartSharingMyLocationWithHandle:(id)arg1;
- (void)didUpdateHidingStatus:(_Bool)arg1;
- (void)reloadSpecifiersOnMainQueue;
- (void)_meDeviceSpecifierWasTapped:(id)arg1;
- (id)allHandlesMatchingABCardForSelectedHandle:(id)arg1;
- (void)shareMyLocation:(id)arg1;
- (id)_followerHandleWithHashedDSID:(id)arg1;
- (void)removeFollower:(id)arg1;
- (void)addShareActionToContactViewController:(id)arg1;
- (void)addRemoveActionToContactViewController:(id)arg1;
- (void *)recordForHandle:(id)arg1;
- (id)reverseString:(id)arg1;
- (id)stringByKeepingCharacterSet:(id)arg1 inString:(id)arg2;
- (_Bool)phoneNumberMatches:(id)arg1 phone2:(id)arg2;
- (_Bool)_isFamilyMemberAFollower:(id)arg1;
- (_Bool)_isHandleAFollower:(id)arg1;
- (void)_pushAddressBookUIForHandle:(id)arg1;
- (void)_showFamilyMemberDetails:(id)arg1;
- (void)_showHandleDetails:(id)arg1;
- (id)_shareSwitchEnabled:(id)arg1;
- (void)displayGenericErrorAlert;
- (void)_setShareSwitchEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)formatStringForHours:(long long)arg1 minutes:(long long)arg2;
- (id)offerTimeRemaining:(double)arg1;
- (id)monogramForHandle:(id)arg1;
- (id)_specifierForHandle:(id)arg1;
- (_Bool)noMeDeviceSelected:(id)arg1;
- (id)sortedFollowersWithCombinedRecords:(id)arg1;
- (void)_loadFamilyMemberPhotos;
- (void)_loadFamilyMembers:(_Bool)arg1;
- (id)specifiers;
- (void)abChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

