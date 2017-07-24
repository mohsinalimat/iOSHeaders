//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDEvent.h>

#import <HomeKitDaemon/HMDTriggerEventProtocol-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDEventTriggerExecutionSession, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDPresenceEvent : HMDEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMFMessageReceiver, HMDTriggerEventProtocol>
{
    _Bool _currentStatus;
    NSString *_presenceType;
    NSMutableDictionary *_users;
    NSMutableArray *_userUUIDs;
    HMDEventTriggerExecutionSession *_executionSession;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(nonatomic) __weak HMDEventTriggerExecutionSession *executionSession; // @synthesize executionSession=_executionSession;
@property(nonatomic) _Bool currentStatus; // @synthesize currentStatus=_currentStatus;
@property(readonly, nonatomic) NSMutableArray *userUUIDs; // @synthesize userUUIDs=_userUUIDs;
@property(readonly, nonatomic) NSMutableDictionary *users; // @synthesize users=_users;
@property(retain, nonatomic) NSString *presenceType; // @synthesize presenceType=_presenceType;
- (void).cxx_destruct;
- (id)presenceMetricData;
- (id)metricData;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)presenceTypeForClient;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)removeUser:(id)arg1;
- (void)_addUser:(id)arg1;
- (void)_removeAllUsers;
- (void)_updateUsers:(id)arg1 payload:(id)arg2 home:(id)arg3;
- (void)_updatePresenceType:(id)arg1 payload:(id)arg2;
- (void)_handleUpdateRequest:(id)arg1;
- (_Bool)compatibleWithUser:(id)arg1;
- (_Bool)evaluateWithHomePresence:(id)arg1;
- (void)didEndExecutionSession:(id)arg1;
- (void)_evaluatePresenceEvent:(id)arg1;
- (void)_handleHomePresenceUpdate:(id)arg1;
- (void)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_registerForMessages;
- (id)thisUser;
- (id)emptyModelObject;
- (id)createClientPayload;
- (id)createDaemonPayload;
- (id)createPresenceEventPayload:(_Bool)arg1;
- (id)createPayload;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithModel:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

