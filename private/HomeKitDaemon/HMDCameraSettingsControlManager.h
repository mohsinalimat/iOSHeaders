//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDAccessory, HMDNotificationRegistration, HMDService, HMFMessageDispatcher, NSArray, NSDictionary, NSString, NSUUID;
@protocol HMDCameraSettingsControlManagerDelegate, OS_dispatch_queue;

@interface HMDCameraSettingsControlManager : NSObject <HMFMessageReceiver, HMFLogging>
{
    NSDictionary *_characteristicsValues;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <HMDCameraSettingsControlManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDAccessory *_accessory;
    HMDService *_streamService;
    NSUUID *_uniqueIdentifier;
    NSString *_logID;
    NSArray *_characteristicsList;
    HMDNotificationRegistration *_notificationRegistration;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(readonly, nonatomic) NSArray *characteristicsList; // @synthesize characteristicsList=_characteristicsList;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) HMDService *streamService; // @synthesize streamService=_streamService;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak id <HMDCameraSettingsControlManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (void).cxx_destruct;
- (void)_callDelegate;
- (void)_updateValue:(id)arg1 forCharacteristic:(id)arg2;
- (void)updateValue:(id)arg1 forCharacteristic:(id)arg2;
- (void)_characteristicsUpdated:(id)arg1;
- (void)_handleStreamStatusMultireadResponse:(id)arg1;
- (void)_readCharacteristicValues;
- (_Bool)_getCharacteristic:(id *)arg1 characteristicType:(id)arg2;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)handleAccessoryIsReachable:(id)arg1;
@property(retain, nonatomic) NSDictionary *characteristicsValues; // @synthesize characteristicsValues=_characteristicsValues;
- (void)dealloc;
- (void)registerForMessages;
- (id)logIdentifier;
- (id)initWithWorkQueue:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 accessory:(id)arg4 streamService:(id)arg5 characteristicsList:(id)arg6 msgDispatcher:(id)arg7;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

