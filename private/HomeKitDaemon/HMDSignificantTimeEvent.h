//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTimeEvent.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSignificantTimeEvent : HMDTimeEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMFMessageReceiver>
{
    NSString *_significantEvent;
    NSDateComponents *_offset;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(retain, nonatomic) NSDateComponents *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (void).cxx_destruct;
- (id)metricData;
- (id)_nextTimerDate;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_handleUpdateRequest:(id)arg1;
- (id)emptyModelObject;
- (id)createPayload;
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

