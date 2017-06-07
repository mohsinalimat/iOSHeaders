//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSXPCConnection.h>

@class MFPromise, NSLock, NSObject, NSXPCInterface, Protocol;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSXPCConnection : NSXPCConnection
{
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    MFPromise *_connectionPromise;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    long long _resumeCount;
    unsigned int _state;
    _Bool _shouldLaunchMobileMail;
    Protocol *_protocol;
}

@property(nonatomic) _Bool shouldLaunchMobileMail; // @synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail;
@property(readonly, retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
- (void)_sendInvocation:(id)arg1 remoteInterface:(id)arg2 remoteProxy:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (int)processIdentifier;
- (int)auditSessionIdentifier;
- (id)_connection;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)invalidationHandler;
- (void)setInterruptionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)interruptionHandler;
- (void)_queue_invokeInvalidationHandler;
- (void)_invokeInterruptionHandlerForPromise:(id)arg1;
- (CDUnknownBlockType)_nts_wrappedInterruptionHandler;
- (void)_finishPromise:(id)arg1 withConnection:(id)arg2 error:(id)arg3;
- (void)_invalidatePromise:(id)arg1;
- (id)_connectionForPromise:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (id)exportedObject;
- (void)setExportedInterface:(id)arg1;
- (id)exportedInterface;
- (void)setRemoteObjectInterface:(id)arg1;
- (id)remoteObjectInterface;
- (id)description;
- (void)dealloc;
- (id)initWithProtocol:(id)arg1;

@end
