//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDUserContextServer-Protocol.h>

@class NSMutableSet, NSString, NSXPCConnection, _CDInMemoryUserContext, _CDUserContextService;
@protocol OS_dispatch_queue;

@interface _CDUserContextServerClient : NSObject <_CDUserContextServer>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_activateMonitorQueue;
    _CDUserContextService *_service;
    _CDInMemoryUserContext *_userContext;
    NSXPCConnection *_clientConnection;
    NSMutableSet *_wakingRegistrations;
    NSMutableSet *_nonWakingRegistration;
}

+ (id)clientOfService:(id)arg1 withConnection:(id)arg2 andContext:(id)arg3;
@property(retain, nonatomic) NSMutableSet *nonWakingRegistration; // @synthesize nonWakingRegistration=_nonWakingRegistration;
@property(retain, nonatomic) NSMutableSet *wakingRegistrations; // @synthesize wakingRegistrations=_wakingRegistrations;
@property(retain, nonatomic) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(retain, nonatomic) _CDInMemoryUserContext *userContext; // @synthesize userContext=_userContext;
@property(retain, nonatomic) _CDUserContextService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *activateMonitorQueue; // @synthesize activateMonitorQueue=_activateMonitorQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)valuesForPaths:(id)arg1 inContextsMatching:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forPath:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)evaluatePredicate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)deregisterCallback:(id)arg1;
- (void)deregisterAllCallbacks:(_Bool)arg1;
- (void)registerCallback:(id)arg1;
- (void)handlePreviouslyFiredRegistration:(id)arg1;
- (void)propertiesOfPath:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)hasKnowledgeOfPath:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initForService:(id)arg1 withConnection:(id)arg2 andContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

