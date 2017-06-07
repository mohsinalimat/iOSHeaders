//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFMessageDispatcher.h>

#import <HomeKitDaemon/HMDApplicationMonitorDelegate-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSXPCListenerDelegate-Protocol.h>

@class HMDApplicationMonitor, HMDApplicationRegistry, HMDBackgroundAppMessageFilter, HMDCentralMessageDispatcher, HMDLostModeMessageFilter, NSMutableSet, NSObject, NSString, NSUUID, NSXPCListener;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface HMDXpcServer : HMFMessageDispatcher <NSXPCListenerDelegate, HMFMessageReceiver, HMDApplicationMonitorDelegate>
{
    HMDApplicationRegistry *_appRegistry;
    NSObject<OS_dispatch_queue> *_xpcWorkQueue;
    NSUUID *_uuid;
    NSXPCListener *_xpcListener;
    NSMutableSet *_xpcClients;
    HMDApplicationMonitor *_appMonitor;
    NSObject<OS_dispatch_group> *_activeMessageTracker;
    HMDCentralMessageDispatcher *_recvDispatcher;
    HMFMessageDispatcher *_notificationRelayDispatcher;
    HMDBackgroundAppMessageFilter *_backgroundAppMsgFilter;
    HMDLostModeMessageFilter *_lostModeMessageFilter;
}

@property(retain, nonatomic) HMDLostModeMessageFilter *lostModeMessageFilter; // @synthesize lostModeMessageFilter=_lostModeMessageFilter;
@property(retain, nonatomic) HMDBackgroundAppMessageFilter *backgroundAppMsgFilter; // @synthesize backgroundAppMsgFilter=_backgroundAppMsgFilter;
@property(retain, nonatomic) HMFMessageDispatcher *notificationRelayDispatcher; // @synthesize notificationRelayDispatcher=_notificationRelayDispatcher;
@property(retain, nonatomic) HMDCentralMessageDispatcher *recvDispatcher; // @synthesize recvDispatcher=_recvDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *activeMessageTracker; // @synthesize activeMessageTracker=_activeMessageTracker;
@property(nonatomic) __weak HMDApplicationMonitor *appMonitor; // @synthesize appMonitor=_appMonitor;
@property(retain, nonatomic) NSMutableSet *xpcClients; // @synthesize xpcClients=_xpcClients;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcWorkQueue; // @synthesize xpcWorkQueue=_xpcWorkQueue;
@property(retain, nonatomic) HMDApplicationRegistry *appRegistry; // @synthesize appRegistry=_appRegistry;
- (void).cxx_destruct;
- (void)_handleResumeXPCConnectionRequest:(id)arg1;
- (void)_handleSuspendXPCConnectionRequest:(id)arg1;
- (void)_registerForMessages;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (void)_sendMessage:(id)arg1 andInvokeCompletionHandler:(CDUnknownBlockType)arg2 withDeliveryCompletion:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 completionQueue:(id)arg3 deliveryCompletionHandler:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)applicationMonitorDidChangeActiveHomeKitAppStatus:(_Bool)arg1;
- (void)applicationMonitorDidChangeAppState:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)endPoint;
- (void)reset;
- (_Bool)stop;
- (_Bool)start;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 receiveDispatcher:(id)arg2 notificationRelayDispatcher:(id)arg3 messageFilterChain:(id)arg4 registerAsMachService:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

