//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFMessageTransportDelegate-Protocol.h>

@class HMFMessageTransport, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HMFMessageDispatcher : NSObject <HMFMessageTransportDelegate>
{
    _Bool _remoteSource;
    HMFMessageTransport *_transport;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_notificationHandlers;
}

@property(nonatomic, getter=isRemoteSource) _Bool remoteSource; // @synthesize remoteSource=_remoteSource;
@property(retain, nonatomic) NSMutableDictionary *notificationHandlers; // @synthesize notificationHandlers=_notificationHandlers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMFMessageTransport *transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dispatchMessage:(id)arg1;
- (void)deregisterReceiver:(id)arg1;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)_deregisterForMessage:(id)arg1 receiver:(id)arg2 token:(id)arg3;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (id)initWithTransport:(id)arg1;
- (id)init;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 target:(id)arg2;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

