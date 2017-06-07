//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDaemonConnection-Protocol.h>

@class HMDApplicationRegistry, HMDProcessInfo, HMDXPCRequestTracker, HMFMessageDispatcher, NSDictionary, NSSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface HMDConnectionProxy : NSObject <HMDaemonConnection>
{
    _Bool _entitledForAPIAccess;
    _Bool _entitledForSPIAccess;
    _Bool _entitledForBridgeSPIAccess;
    _Bool _entitledForBackgroundMode;
    _Bool _activated;
    NSXPCConnection *_xpcConnection;
    HMDProcessInfo *_processInfo;
    NSString *_clientName;
    HMFMessageDispatcher *_recvDispatcher;
    HMDXPCRequestTracker *_requestTracker;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSDictionary *_privateAccessEntitlement;
    HMDApplicationRegistry *_appRegistry;
}

@property(nonatomic) __weak HMDApplicationRegistry *appRegistry; // @synthesize appRegistry=_appRegistry;
@property(retain, nonatomic) NSDictionary *privateAccessEntitlement; // @synthesize privateAccessEntitlement=_privateAccessEntitlement;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDXPCRequestTracker *requestTracker; // @synthesize requestTracker=_requestTracker;
@property(retain, nonatomic) HMFMessageDispatcher *recvDispatcher; // @synthesize recvDispatcher=_recvDispatcher;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isEntitledForBackgroundMode) _Bool entitledForBackgroundMode; // @synthesize entitledForBackgroundMode=_entitledForBackgroundMode;
@property(readonly, nonatomic, getter=isEntitledForBridgeSPIAccess) _Bool entitledForBridgeSPIAccess; // @synthesize entitledForBridgeSPIAccess=_entitledForBridgeSPIAccess;
@property(readonly, nonatomic, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess; // @synthesize entitledForSPIAccess=_entitledForSPIAccess;
@property(readonly, nonatomic, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess; // @synthesize entitledForAPIAccess=_entitledForAPIAccess;
@property(nonatomic) __weak HMDProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)recheckinWithName:(id)arg1;
- (void)checkinWithName:(id)arg1 handleMessageWithName:(id)arg2 messageIdentifier:(id)arg3 messagePayload:(id)arg4 target:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)_notifyOfNewIncomingClientMessage;
- (_Bool)shouldSendResponseForMessageIdentifier:(id)arg1;
@property(readonly, nonatomic) NSSet *activeRequests;
- (void)deactivate;
- (void)activate;
@property(readonly, nonatomic) id remoteProxy;
- (id)extractTeamIdentifier;
@property(readonly, nonatomic) NSString *effectiveLocationBundleIdentifier;
@property(readonly, nonatomic) NSString *teamIdentifier;
@property(readonly, nonatomic) NSString *companionAppBundleIdentifier;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier;
@property(readonly, nonatomic) int clientPid;
@property(readonly, nonatomic) NSString *name;
- (id)_displayName;
@property(readonly, copy) NSString *description;
- (void)dealloc;
@property(readonly, nonatomic, getter=isAuthorizedForLocationAccess) _Bool authorizedForLocationAccess;
@property(readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) _Bool authorizedForMicrophoneAccess;
@property(readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) _Bool authorizedForHomeDataAccess;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 activeMessageTracker:(id)arg3 recvDispatcher:(id)arg4 appRegistry:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

