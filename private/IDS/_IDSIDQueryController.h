//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol>
{
    NSMutableDictionary *_listeners;
    NSMutableDictionary *_idStatusCache;
    NSMutableDictionary *_transactionIDToBlockMap;
    NSString *_rerouteService;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_serviceToken;
    NSMapTable *_delegateToInfo;
    NSMutableDictionary *_listenerIDToServicesMap;
    id _delegateContext;
}

+ (void)initialize;
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;
- (_Bool)_flushQueryCacheForService:(id)arg1;
- (_Bool)_warmupQueryCacheForService:(id)arg1;
- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (_Bool)_hasCacheForService:(id)arg1;
- (_Bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(_Bool)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3;
- (id)_delegateMapForListenerID:(id)arg1 service:(id)arg2;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 delegateMap:(id)arg2;
- (id)_reroutedPrototypeService:(id)arg1;
- (void)_purgeIDStatusCache;
- (void)_purgeIDStatusCacheAfter:(double)arg1;
- (void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2;
- (id)_cachedStatusForDestination:(id)arg1 service:(id)arg2;
- (id)_cacheForService:(id)arg1;
- (_Bool)_isListenerWithID:(id)arg1 listeningToService:(id)arg2;
- (void)dealloc;
- (id)initWithDelegateContext:(id)arg1 queueController:(id)arg2;
- (id)init;
- (_Bool)removeListenerID:(id)arg1 forService:(id)arg2;
- (void)addListenerID:(id)arg1 forService:(id)arg2;
- (void)daemonDisconnected;
- (void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(_Bool)arg4 error:(id)arg5;
- (void)_connect;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)___oldDealloc;
- (id)__sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4 waitForReply:(_Bool)arg5;
- (void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_requestCacheForService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_disconnectFromQueryService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

