//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRFrameworkDeviceDelegate-Protocol.h>
#import <NanoRegistry/NRMutableStateParentDelegate-Protocol.h>
#import <NanoRegistry/NRPairedDeviceRegistryXPCFrameworkDelegate-Protocol.h>
#import <NanoRegistry/NSXPCConnectionDelegate-Protocol.h>

@class NRMutableDeviceCollection, NSMutableArray, NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NRPairedDeviceRegistry : NSObject <NSXPCConnectionDelegate, NRFrameworkDeviceDelegate, NRMutableStateParentDelegate, NRPairedDeviceRegistryXPCFrameworkDelegate>
{
    _Bool _xpcConnectionInvalidated;
    _Bool _hasSomeEntitlements;
    _Bool _hasSecurePropertyEntitlement;
    _Bool _isDeviceCollectionDiffRequested;
    _Bool _areSecurePropertiesRequested;
    _Bool _initialLastCompatibilityStateHasBeenSent;
    _Bool _initialStatusHasBeenSent;
    _Bool _isInitialized;
    _Bool _secureDataIsAvailable;
    _Bool _needToFetchSecureProperties;
    unsigned short _lastCompatibilityStateSent;
    int _devicesUpdateCounterNotifyToken;
    int _securePropertiesUnlockedNotifyToken;
    int _demoModeNotifyToken;
    int _idleNotifyToken;
    NSXPCConnection *_xpcConnection;
    NSMutableDictionary *_mutableDeviceDictionary;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_finishedPairingSemaphores;
    long long _pairingCompatibilityVersion;
    long long _maxPairingCompatibilityVersion;
    long long _minPairingCompatibilityVersion;
    unsigned long long _devicesUpdateCounter;
    NRMutableDeviceCollection *_deviceCollection;
    NSMutableArray *_deviceCollectionUpdateBlocks;
    NSMutableArray *_securePropertiesUpdateBlocks;
    NSMutableArray *_waitForDeviceCollectionBlocks;
    unsigned long long _lastStatusSent;
    NSObject<OS_dispatch_queue> *_pairingOrSwitchCompleteQueue;
}

+ (CDUnknownBlockType)activePairedDeviceSelectorBlock;
+ (CDUnknownBlockType)pairedDevicesSelectorBlock;
+ (CDUnknownBlockType)activeDeviceSelectorBlock;
+ (id)sharedInstance;
+ (_Bool)shouldBoostProcess;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pairingOrSwitchCompleteQueue; // @synthesize pairingOrSwitchCompleteQueue=_pairingOrSwitchCompleteQueue;
@property(nonatomic) _Bool needToFetchSecureProperties; // @synthesize needToFetchSecureProperties=_needToFetchSecureProperties;
@property(nonatomic) _Bool secureDataIsAvailable; // @synthesize secureDataIsAvailable=_secureDataIsAvailable;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
@property(nonatomic) _Bool initialStatusHasBeenSent; // @synthesize initialStatusHasBeenSent=_initialStatusHasBeenSent;
@property(nonatomic) _Bool initialLastCompatibilityStateHasBeenSent; // @synthesize initialLastCompatibilityStateHasBeenSent=_initialLastCompatibilityStateHasBeenSent;
@property(nonatomic) unsigned short lastCompatibilityStateSent; // @synthesize lastCompatibilityStateSent=_lastCompatibilityStateSent;
@property(nonatomic) unsigned long long lastStatusSent; // @synthesize lastStatusSent=_lastStatusSent;
@property(nonatomic) _Bool areSecurePropertiesRequested; // @synthesize areSecurePropertiesRequested=_areSecurePropertiesRequested;
@property(nonatomic) _Bool isDeviceCollectionDiffRequested; // @synthesize isDeviceCollectionDiffRequested=_isDeviceCollectionDiffRequested;
@property(retain, nonatomic) NSMutableArray *waitForDeviceCollectionBlocks; // @synthesize waitForDeviceCollectionBlocks=_waitForDeviceCollectionBlocks;
@property(retain, nonatomic) NSMutableArray *securePropertiesUpdateBlocks; // @synthesize securePropertiesUpdateBlocks=_securePropertiesUpdateBlocks;
@property(retain, nonatomic) NSMutableArray *deviceCollectionUpdateBlocks; // @synthesize deviceCollectionUpdateBlocks=_deviceCollectionUpdateBlocks;
@property(retain, nonatomic) NRMutableDeviceCollection *deviceCollection; // @synthesize deviceCollection=_deviceCollection;
@property(nonatomic) _Bool hasSecurePropertyEntitlement; // @synthesize hasSecurePropertyEntitlement=_hasSecurePropertyEntitlement;
@property(nonatomic) unsigned long long devicesUpdateCounter; // @synthesize devicesUpdateCounter=_devicesUpdateCounter;
@property(nonatomic) int idleNotifyToken; // @synthesize idleNotifyToken=_idleNotifyToken;
@property(nonatomic) int demoModeNotifyToken; // @synthesize demoModeNotifyToken=_demoModeNotifyToken;
@property(nonatomic) int securePropertiesUnlockedNotifyToken; // @synthesize securePropertiesUnlockedNotifyToken=_securePropertiesUnlockedNotifyToken;
@property(nonatomic) int devicesUpdateCounterNotifyToken; // @synthesize devicesUpdateCounterNotifyToken=_devicesUpdateCounterNotifyToken;
@property(nonatomic) long long minPairingCompatibilityVersion; // @synthesize minPairingCompatibilityVersion=_minPairingCompatibilityVersion;
@property(nonatomic) long long maxPairingCompatibilityVersion; // @synthesize maxPairingCompatibilityVersion=_maxPairingCompatibilityVersion;
@property(nonatomic) long long pairingCompatibilityVersion; // @synthesize pairingCompatibilityVersion=_pairingCompatibilityVersion;
@property(nonatomic) _Bool hasSomeEntitlements; // @synthesize hasSomeEntitlements=_hasSomeEntitlements;
@property(retain, nonatomic) NSMutableArray *finishedPairingSemaphores; // @synthesize finishedPairingSemaphores=_finishedPairingSemaphores;
@property(nonatomic) _Bool xpcConnectionInvalidated; // @synthesize xpcConnectionInvalidated=_xpcConnectionInvalidated;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSMutableDictionary *mutableDeviceDictionary; // @synthesize mutableDeviceDictionary=_mutableDeviceDictionary;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)_pingActiveGizmoWithPriority:(long long)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)serverRequestReporterWithType:(id)arg1;
- (void)_submitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned int)arg3;
- (id)_synchronousPrivateDaemonProxyWithErrorString:(id)arg1;
- (id)_privateDaemonProxyWithErrorString:(id)arg1;
- (id)_privateDaemonConnection;
- (void)_getActiveDeviceAssertionsWithInlineBlock:(CDUnknownBlockType)arg1;
- (void)getSwitchEventsFromIndex:(unsigned int)arg1 inlineCallback:(CDUnknownBlockType)arg2;
- (void)_getSwitchEventsFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 inlineCallback:(CDUnknownBlockType)arg3;
- (id)_deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id *)arg2;
- (unsigned int)switchIndex;
- (void)pairingClientDidEnterPhase:(id)arg1;
- (id)deviceIDForIDSDevice:(id)arg1;
- (id)deviceIDForNRDevice:(id)arg1;
- (id)deviceForNRDevice:(id)arg1 fromIDSDevices:(id)arg2;
- (id)deviceForIDSDevice:(id)arg1;
- (id)deviceForBluetoothID:(id)arg1;
- (id)deviceForBTDeviceID:(id)arg1;
- (id)deviceForPairingID:(id)arg1;
- (id)_getSecureProperties:(id)arg1;
- (id)_getLocalDeviceCollection;
- (void)_submitAlbertPairingReport;
- (void)sendDevicesUpdatedNotification;
- (void)xpcHasNewOOBKey:(id)arg1;
- (void)xpcDeviceID:(id)arg1 needsPasscode:(id)arg2;
- (void)_xpcInterruptionHandler;
- (void)_xpcInvalidationHandler;
- (id)_findActivePairedDevice;
- (_Bool)supportsPairedDevice;
- (_Bool)_supportsWatch;
- (id)_xpcInitializeConnection;
- (void)_qsRecoveryMigrationWithPairedBTDeviceID:(id)arg1;
- (void)_addRemoveRecoveryStepIDSFinalizeQS:(_Bool)arg1 withPairedBTDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepIDSFinalize:(_Bool)arg1;
- (void)_addRemoveRecoveryStepObliterate:(_Bool)arg1 withStatePath:(id)arg2;
- (void)_addRemoveRecoveryStepResetNVRAM:(_Bool)arg1;
- (void)_addRemoveRecoveryStepICloudDeletePaymentCards:(_Bool)arg1;
- (void)_addRemoveRecoveryStepStockholmReset:(_Bool)arg1;
- (void)_addRemoveRecoveryStepIDSUnpair:(_Bool)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepUnpairBluetooth:(_Bool)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepDeletePairingStore:(_Bool)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepRemoteUnpair:(_Bool)arg1 withAdvertisedName:(id)arg2 andPairedDeviceID:(id)arg3;
- (void)_addRemoveRecoveryStepIDSUnpairStartQS:(_Bool)arg1 withPairedBTDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepIDSUnpairStart:(_Bool)arg1;
- (void)_addRemoveRecoveryStepDeleteAccounts:(_Bool)arg1;
- (void)_addRemoveRecoveryStepBackup:(_Bool)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepDisableDaemons:(_Bool)arg1;
- (void)_setObliterationEnabled:(_Bool)arg1;
- (void)_triggerRecovery;
- (id)_recoveryDescription;
- (void)overrideSignalStrengthLimit:(long long)arg1;
- (void)endDiscovery;
- (void)beginDiscovery;
- (void)retriggerUnpairInfoDialog;
- (long long)minQuickSwitchCompatibilityVersion;
- (void)userIsCheckingForUpdate;
- (id)blockAndQueryVersions;
- (_Bool)isPaired;
- (id)pairingID;
- (id)pairingStorePath;
- (void)resumePairingClientCrashMonitoring;
- (void)suspendPairingClientCrashMonitoring;
- (void)abortPairingWithReason:(id)arg1;
- (void)abortPairing;
- (id)waitForActivePairedDevice;
- (void)waitForPairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (void)pairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (void)_pairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (unsigned short)compatibilityState;
- (void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2;
- (void)switchToSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)unpairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)pairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)unpairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)unpairWithDevice:(id)arg1 shouldObliterate:(_Bool)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)notifyPairingShouldContinue;
- (void)notifyPasscode:(id)arg1 forDevice:(id)arg2;
- (void)notifyActivationCompleted:(id)arg1 withSuccess:(_Bool)arg2;
- (void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)companionPasscodePairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(CDUnknownBlockType)arg4;
- (id)getDevicesMatching:(CDUnknownBlockType)arg1;
- (id)getAllDevices;
- (id)getActivePairedDevice;
- (id)getPairedDevices;
- (id)getDevices;
- (void)getDevicesWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (unsigned long long)readNotifyToken:(int)arg1;
@property(readonly, nonatomic) unsigned long long status;
- (void)blockUntilDeviceCollectionIsInitialized;
- (void)updateSecurePropertiesWithQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateDeviceCollectionWithQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestSecureProperties;
- (void)fireAllDeviceCollectionBlocksWithStatus:(_Bool)arg1;
- (void)fireDeviceCollectionBlocksUpUntilIndex:(unsigned long long)arg1;
- (void)fireAllInitialDeviceCollectionBlocksWith:(_Bool)arg1;
- (void)requestDeviceCollectionDiffWithForce:(_Bool)arg1;
- (void)initializeWithShouldMakeEmptyDeviceCollection:(_Bool)arg1;
- (void)setupDeviceCollectionObserver;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (void)transitionToCompatibilityState:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)sendCompatibilityStateChangeNotification;
- (void)sendStatusChangeNotification;
- (void)checkStatusAndCompatibilityState;
- (void)parseDiffForNRDeviceUpdatesAndPairUnpair:(id)arg1 hasSecurePropertyEntitlement:(_Bool)arg2 shouldBeQuiet:(_Bool)arg3;
- (void)resumePairingOrSwitchCompleteQueue;
- (id)createDevicesFromMutableDevices:(id)arg1 andPropertyStore:(id)arg2;
- (void)createDevicesFromMutableDevicesAndPropertyStore:(id)arg1;
- (id)_getClientInfo;
- (id)_getChangeHistory;
- (id)retrieveSecurePropertiesWithIDs:(id)arg1;
- (void)postNotification:(id)arg1 forDeviceID:(id)arg2 withUserInfo:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)initNotifyTokens;
- (_Bool)isDaemonIdle;
- (int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (int)registerNotifyTokenWithName:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithBoost:(_Bool)arg1;
- (id)init;
- (void)syncDevicesWithDevice:(id)arg1;
- (void)_invalidateActiveDeviceAssertionWithIdentifier:(id)arg1;
- (void)setActivePairedDevice:(id)arg1 withActiveDeviceAssertionHandler:(CDUnknownBlockType)arg2;
- (void)setActivePairedDevice:(id)arg1 isMagicSwitch:(_Bool)arg2 operationHasCompleted:(CDUnknownBlockType)arg3;
- (void)setActivePairedDevice:(id)arg1 operationHasCompleted:(CDUnknownBlockType)arg2;
- (_Bool)pairedDeviceSupportQuickSwitch;
- (_Bool)pairedDeviceCountIsLessThanMaxPairedDevices;
- (long long)maxPairedDeviceCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

