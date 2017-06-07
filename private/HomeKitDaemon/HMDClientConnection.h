//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDHomeManager, HMFMessageDispatcher, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDClientConnection : NSObject <HMFMessageReceiver>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDHomeManager *_homeManager;
    NSMutableArray *_commandsBeingExecuted;
}

@property(retain, nonatomic) NSMutableArray *commandsBeingExecuted; // @synthesize commandsBeingExecuted=_commandsBeingExecuted;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleDaemonRequest:(id)arg1;
- (void)_handleSiriSyncDataRequest:(id)arg1;
- (void)_handleSiriCommand:(id)arg1;
- (void)dealloc;
- (void)_registerForMessages;
- (id)initWithHomeManager:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

