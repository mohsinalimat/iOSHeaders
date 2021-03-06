//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDEndpointInterface-Protocol.h>

@class HDClient, HDDaemon, HDServer, NSString;
@protocol OS_dispatch_queue;

@interface HDEndpoint : NSObject <HDEndpointInterface>
{
    HDClient *_client;
    HDDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_queue;
    HDServer *_server;
}

+ (id)endpointWithClient:(id)arg1 healthDaemon:(id)arg2;
+ (_Bool)_isClientEntitled:(id)arg1 error:(id *)arg2;
+ (_Bool)_isDeviceSupportedWithBehavior:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) HDServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
@property(readonly, nonatomic) HDClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)remote_serverForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (id)initWithClient:(id)arg1 healthDaemon:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

