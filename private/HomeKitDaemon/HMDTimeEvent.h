//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDEvent.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDBackgroundTaskAgentTimer, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDTimeEvent : HMDEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMFMessageReceiver>
{
    _Bool _repetitive;
    HMDBackgroundTaskAgentTimer *_btaTimer;
}

+ (_Bool)isValidOffsetDateComponents:(id)arg1;
+ (_Bool)isValidAbsoluteDateComponents:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaTimer; // @synthesize btaTimer=_btaTimer;
@property(readonly, nonatomic) _Bool repetitive; // @synthesize repetitive=_repetitive;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_reactiveTriggerAfterDelay;
- (void)timerFired:(id)arg1;
- (id)_nextTimerDate;
- (_Bool)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isActive;
- (void)_updateRepetitive;
- (void)_initialize;
- (id)initWithModel:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

