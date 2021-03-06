//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDMediaAccessory.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDDevice, HMDRemoteLoginHandler, HMDSoftwareUpdate, HMFSoftwareVersion, NSString;

@interface HMDAppleMediaAccessory : HMDMediaAccessory <HMFLogging>
{
    HMDDevice *_device;
    HMDRemoteLoginHandler *_remoteLoginHandler;
    HMFSoftwareVersion *_softwareVersion;
    HMDSoftwareUpdate *_softwareUpdate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) HMDRemoteLoginHandler *remoteLoginHandler; // @synthesize remoteLoginHandler=_remoteLoginHandler;
- (void).cxx_destruct;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)handleRemovedSoftwareUpdateModel:(id)arg1 message:(id)arg2;
- (void)handleAddedSoftwareUpdateModel:(id)arg1 message:(id)arg2;
- (void)handleAddedRootSettingsModel:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)backingStoreObjects:(long long)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (id)remoteMessageDestination;
- (void)_relayRequestMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startUpdate:(id)arg1;
- (void)_fetchAvailableUpdate:(id)arg1;
- (void)updateSoftwareUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setSoftwareUpdate:(id)arg1;
@property(readonly) HMDSoftwareUpdate *softwareUpdate; // @synthesize softwareUpdate=_softwareUpdate;
- (_Bool)supportsSoftwareUpdate;
- (void)_updateSoftwareVersion:(id)arg1;
- (void)setSoftwareVersion:(id)arg1;
@property(readonly) HMFSoftwareVersion *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
- (void)updateRootGroup:(id)arg1;
- (void)addRootSettings;
- (_Bool)supportsSettings;
- (void)handleDeviceIsNotReachable:(id)arg1;
- (void)handleDeviceIsReachable:(id)arg1;
- (void)startMonitoringReachability;
- (id)deviceMonitor;
- (void)setRemotelyReachable:(_Bool)arg1;
- (void)handleCurrentDeviceUpdated:(id)arg1;
- (void)handleCurrentDeviceChanged:(id)arg1;
- (_Bool)shouldUpdateWithDevice:(id)arg1;
- (void)__updateDeviceWithDeviceIdentifier:(id)arg1;
- (void)updateWithDevice:(id)arg1;
- (void)handleDeviceUpdated:(id)arg1;
- (void)setDevice:(id)arg1;
@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (_Bool)isCurrentAccessory;
- (void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3;
- (void)_registerForMessages;
- (void)dealloc;
- (id)init;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)assistantObject;
- (id)_decodeHashedRouteUID:(id)arg1;
- (id)_hashRouteID:(id)arg1;
- (id)url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

