//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCameraSettingsControlManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraStreamControlManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDAccessory, HMDCameraResidentMessageHandler, HMDCameraSettingsControlManager, HMDCameraStreamManagerSession, HMDCameraStreamSnapshotHandler, HMDCameraSupportedConfigurationCache, HMDNotificationRegistration, HMDService, HMFMessageDispatcher, HMFNetMonitor, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraStreamControlMessageHandler : NSObject <HMFTimerDelegate, HMDCameraSettingsControlManagerDelegate, HMDCameraStreamControlManagerDelegate, HMFLogging>
{
    HMDCameraStreamManagerSession *_streamSession;
    HMDService *_streamManagementService;
    HMDCameraSettingsControlManager *_streamStatusManager;
    HMDNotificationRegistration *_notificationRegistration;
    HMDCameraResidentMessageHandler *_residentMessageHandler;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDAccessory *_accessory;
    CDUnknownBlockType _messageSender;
    NSUUID *_uniqueIdentifier;
    NSUUID *_profileUniqueIdentifier;
    HMDCameraSupportedConfigurationCache *_supportedConfigCache;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    HMDCameraSettingsControlManager *_settingsControlManager;
    HMFNetMonitor *_networkMonitor;
}

+ (id)logCategory;
@property(retain, nonatomic) HMFNetMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(readonly, nonatomic) HMDCameraSettingsControlManager *settingsControlManager; // @synthesize settingsControlManager=_settingsControlManager;
@property(readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property(retain, nonatomic) HMDCameraSupportedConfigurationCache *supportedConfigCache; // @synthesize supportedConfigCache=_supportedConfigCache;
@property(readonly, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) CDUnknownBlockType messageSender; // @synthesize messageSender=_messageSender;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // @synthesize residentMessageHandler=_residentMessageHandler;
@property(readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(readonly, nonatomic) HMDCameraSettingsControlManager *streamStatusManager; // @synthesize streamStatusManager=_streamStatusManager;
@property(readonly, nonatomic) HMDService *streamManagementService; // @synthesize streamManagementService=_streamManagementService;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)_resetCurrentStreamState:(id)arg1;
- (void)_sendStreamStoppedNotification:(id)arg1;
- (void)streamControlManagerDidStopStreamForSessionID:(id)arg1 error:(id)arg2;
- (void)streamControlManagerDidReconfigureStream:(id)arg1;
- (void)streamControlManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(id)arg3 slotIdentifier:(id)arg4;
- (void)streamControlManagerDidStartStream:(id)arg1 slotIdentifier:(id)arg2;
- (void)streamControlManagerDidSetupRemoteConnection:(id)arg1;
- (void)streamControlManagerDidNegotiateStream:(id)arg1 selectedParameters:(id)arg2;
- (void)streamControlManager:(id)arg1 didFail:(id)arg2;
@property(readonly, nonatomic) unsigned long long streamingStatus;
@property(readonly, copy, nonatomic) NSString *streamSessionID;
- (void)_handleSetAudioState:(id)arg1;
- (void)_handleStopMessage:(id)arg1;
- (void)_handleReconfigureMessage:(id)arg1;
- (void)_handleStartMessage:(id)arg1;
- (void)_handleRemoteSetupMessage:(id)arg1;
- (void)_handleNegotiateMessage:(id)arg1;
- (void)handleMessage:(id)arg1;
- (void)_stopStream:(id)arg1;
- (_Bool)_isRemoteSetupMessage:(id)arg1;
- (_Bool)_isSetAudioStreamSettingMessage:(id)arg1;
- (_Bool)_isStopMessage:(id)arg1;
- (_Bool)_isReconfigureMessage:(id)arg1;
- (_Bool)_isStartMessage:(id)arg1;
- (_Bool)_isNegotiateMessage:(id)arg1;
@property(retain, nonatomic) HMDCameraStreamManagerSession *streamSession; // @synthesize streamSession=_streamSession;
- (void)handleActivePhoneCallEstablishedNotification:(id)arg1;
- (void)handleForegroundAppsNotification:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)handleAccessoryIsNotReachable:(id)arg1;
- (void)dealloc;
- (void)registerForMessages;
- (id)logIdentifier;
- (id)initWithWorkQueue:(id)arg1 streamSnapshotHandler:(id)arg2 messageSender:(CDUnknownBlockType)arg3 accessory:(id)arg4 streamManagementService:(id)arg5 msgDispatcher:(id)arg6 profileUniqueIdentifier:(id)arg7 networkMonitor:(id)arg8 residentMessageHandler:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

