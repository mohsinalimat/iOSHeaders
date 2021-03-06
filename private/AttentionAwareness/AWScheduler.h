//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/AWScheduler-Protocol.h>
#import <AttentionAwareness/NSXPCListenerDelegate-Protocol.h>

@class AWAttentionSampler, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWScheduler : NSObject <AWScheduler, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_clients;
    AWAttentionSampler *_attentionSampler;
    AWAttentionSampler *_unitTestSampler;
}

+ (id)sharedScheduler;
- (void).cxx_destruct;
- (void)getUnitTestSamplerWithReply:(CDUnknownBlockType)arg1;
- (void)outputPowerLogWithReply:(CDUnknownBlockType)arg1;
- (void)setDebugPreference:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getDebugPreferences:(CDUnknownBlockType)arg1;
- (void)armEvents;
- (void)processHIDEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)removeClientsForConnection:(id)arg1;
- (void)removeInvalidClients;
- (void)removeInvalidClientsWithConnection:(id)arg1;
- (void)addClient:(id)arg1 clientConfig:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getSupportedEventsWithReply:(CDUnknownBlockType)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

