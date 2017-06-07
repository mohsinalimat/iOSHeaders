//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/NSURLSessionDelegate-Protocol.h>
#import <SiriCore/SiriCoreStreamProvider-Protocol.h>

@class AFWatchdogTimer, NSInputStream, NSOperationQueue, NSOutputStream, NSString, NSURL, NSURLSession, SAConnectionPolicyRoute, SiriCoreConnectionType;
@protocol OS_dispatch_queue, SiriCoreStreamProviderDelegate;

@interface SiriCoreNetworkStreamProvider : NSObject <NSURLSessionDelegate, SiriCoreStreamProvider>
{
    id <SiriCoreStreamProviderDelegate> _delegate;
    NSURL *_url;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    SAConnectionPolicyRoute *_route;
    _Bool _prefersWWAN;
    _Bool _connectByPOPEnabled;
    SiriCoreConnectionType *_connectionType;
    int _interfaceIndex;
    NSString *_interfaceName;
    _Bool _isCanceled;
    NSURLSession *_urlSession;
    NSOperationQueue *_opQueue;
    CDUnknownBlockType _completion_block;
    AFWatchdogTimer *_streamCaptureTimer;
    NSString *_resolvedHost;
    NSString *_connectionId;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)getMetricsContext:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)setConnectByPOPMethod:(_Bool)arg1;
- (void)setPrefersWWAN:(_Bool)arg1;
- (void)setPolicyRoute:(id)arg1;
- (_Bool)shouldFallbackFromError:(id)arg1;
- (_Bool)isPeerConnectionError:(id)arg1;
- (void)close;
- (id)getResolvedHost;
- (void)getRemoteMetrics:(CDUnknownBlockType)arg1;
- (id)analysisInfo;
- (id)connectionType;
- (void)_getConfiguredStreamPairWithInitalPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openStreamPairForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)supportsInitialPayload;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;
- (_Bool)shouldFallbackQuickly;
- (id)headerData;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

