//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFLocationSensingCoordinatorDelegate-Protocol.h>
#import <Home/HMAccessoryDelegatePrivate-Protocol.h>
#import <Home/HMCameraSnapshotControlDelegate-Protocol.h>
#import <Home/HMCameraStreamControlDelegate-Protocol.h>
#import <Home/HMHomeDelegatePrivate-Protocol.h>
#import <Home/HMHomeManagerDelegatePrivate-Protocol.h>
#import <Home/HMResidentDeviceDelegate-Protocol.h>

@class HFLocationSensingCoordinator, HMHome, HMHomeManager, NAFuture, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface HFHomeKitDispatcher : NSObject <HMResidentDeviceDelegate, HMCameraSnapshotControlDelegate, HMCameraStreamControlDelegate, HFLocationSensingCoordinatorDelegate, HMHomeManagerDelegatePrivate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate>
{
    _Bool _hasLoadedHomes;
    int _homeKitPreferencesChangedNotifyToken;
    HMHomeManager *_homeManager;
    HMHome *_home;
    HMHome *_overrideHome;
    HMHome *_selectedHome;
    HFLocationSensingCoordinator *_locationCoordinator;
    NSTimer *_homeSensingIdleTimer;
    NSMutableDictionary *_remoteAccessStateByHomeID;
    NSHashTable *_homeObservers;
    NSHashTable *_homeManagerObservers;
    NSHashTable *_accessoryObservers;
    NSHashTable *_residentDeviceObservers;
    NSHashTable *_cameraObservers;
    NSMutableArray *_homePromises;
    NSMutableArray *_allHomesPromises;
}

+ (id)sharedDispatcher;
+ (unsigned long long)_homeManagerCreationPolicy;
@property(retain, nonatomic) NSMutableArray *allHomesPromises; // @synthesize allHomesPromises=_allHomesPromises;
@property(retain, nonatomic) NSMutableArray *homePromises; // @synthesize homePromises=_homePromises;
@property(retain, nonatomic) NSHashTable *cameraObservers; // @synthesize cameraObservers=_cameraObservers;
@property(retain, nonatomic) NSHashTable *residentDeviceObservers; // @synthesize residentDeviceObservers=_residentDeviceObservers;
@property(retain, nonatomic) NSHashTable *accessoryObservers; // @synthesize accessoryObservers=_accessoryObservers;
@property(retain, nonatomic) NSHashTable *homeManagerObservers; // @synthesize homeManagerObservers=_homeManagerObservers;
@property(retain, nonatomic) NSHashTable *homeObservers; // @synthesize homeObservers=_homeObservers;
@property(retain, nonatomic) NSMutableDictionary *remoteAccessStateByHomeID; // @synthesize remoteAccessStateByHomeID=_remoteAccessStateByHomeID;
@property(nonatomic) int homeKitPreferencesChangedNotifyToken; // @synthesize homeKitPreferencesChangedNotifyToken=_homeKitPreferencesChangedNotifyToken;
@property(retain, nonatomic) NSTimer *homeSensingIdleTimer; // @synthesize homeSensingIdleTimer=_homeSensingIdleTimer;
@property(retain, nonatomic) HFLocationSensingCoordinator *locationCoordinator; // @synthesize locationCoordinator=_locationCoordinator;
@property(retain, nonatomic) HMHome *selectedHome; // @synthesize selectedHome=_selectedHome;
@property(retain, nonatomic) HMHome *overrideHome; // @synthesize overrideHome=_overrideHome;
@property(nonatomic) _Bool hasLoadedHomes; // @synthesize hasLoadedHomes=_hasLoadedHomes;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void).cxx_destruct;
- (void)startHomeSensingIdleTimer;
- (void)updateStopHomeSensingIdleTimerState;
- (id)homeSensingActiveFuture;
- (void)_setDelegate:(id)arg1 forAccessoryHierarchy:(id)arg2;
- (void)_setDelegate:(id)arg1 forObjectsInHome:(id)arg2;
- (id)_primaryHome;
- (void)_finishAllHomesPromises:(id)arg1;
- (void)_finishHomePromises:(id)arg1;
- (void)_updateRemoteAccessStateForHome:(id)arg1 notifyingObservers:(_Bool)arg2;
- (void)coordinator:(id)arg1 homeSensingStatusDidChange:(_Bool)arg2;
- (void)coordinator:(id)arg1 locationSensingAvailabilityDidChange:(_Bool)arg2;
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;
- (void)residentDevice:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)residentDevice:(id)arg1 didUpdateEnabled:(_Bool)arg2;
- (void)residentDevice:(id)arg1 didUpdateName:(id)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareVersion:(id)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareUpdateAvailable:(_Bool)arg2;
- (void)accessory:(id)arg1 didUpdateStoreID:(id)arg2;
- (void)accessory:(id)arg1 didUpdateBundleID:(id)arg2;
- (void)accessory:(id)arg1 didUpdateHasAuthorizationDataForCharacteristic:(id)arg2;
- (void)accessoryDidUpdateAdditionalSetupRequired:(id)arg1;
- (void)accessory:(id)arg1 didUpdateApplicationDataForService:(id)arg2;
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
- (void)accessoryDidUpdateName:(id)arg1;
- (void)home:(id)arg1 didRemoveResidentDevice:(id)arg2;
- (void)home:(id)arg1 didAddResidentDevice:(id)arg2;
- (void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateAccesoryInvitationsForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2;
- (void)homeDidUpdateApplicationData:(id)arg1;
- (void)home:(id)arg1 didUpdateLocation:(id)arg2;
- (void)home:(id)arg1 didEncounterError:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didUnblockAccessory:(id)arg2;
- (void)home:(id)arg1 didUpdateTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2;
- (void)home:(id)arg1 didRemoveActionSet:(id)arg2;
- (void)home:(id)arg1 didAddActionSet:(id)arg2;
- (void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3;
- (void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3;
- (void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (void)home:(id)arg1 didAddServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)homeDidUpdateName:(id)arg1;
- (void)homeManagerDidEndBatchNotifications:(id)arg1;
- (void)homeManagerWillStartBatchNotifications:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(_Bool)arg2;
- (void)homeManager:(id)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
- (void)homeManager:(id)arg1 didUpdateResidentEnabledForThisDevice:(_Bool)arg2;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (void)homeManagerDidUpdateApplicationData:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManagerDidUpdatePrimaryHome:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)updateSelectedHome;
@property(nonatomic) _Bool selectedHomeFollowsLocation;
@property(readonly, nonatomic) NAFuture *locationSensingAvailableFuture;
@property(readonly, nonatomic) NAFuture *allHomesFuture;
@property(readonly, nonatomic) NAFuture *homeFuture;
- (void)_setSelectedHome:(id)arg1 notifyAndSaveIfNecessary:(_Bool)arg2;
- (void)updateHome;
- (void)warmup;
- (void)dispatchCameraObserverMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchAccessoryObserverMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchHomeObserverMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchHomeManagerObserverMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)removeCameraObserver:(id)arg1;
- (void)addCameraObserver:(id)arg1;
- (void)removeResidentDeviceObserver:(id)arg1;
- (void)addResidentDeviceObserver:(id)arg1;
- (void)removeAccessoryObserver:(id)arg1;
- (void)addAccessoryObserver:(id)arg1;
- (void)removeHomeObserver:(id)arg1;
- (void)addHomeObserver:(id)arg1;
- (void)removeHomeManagerObserver:(id)arg1;
- (void)addHomeManagerObserver:(id)arg1;
- (void)_createHomeManagerIfNecessary;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

