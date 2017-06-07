//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

#import <FrontBoardServices/FBSApplicationDataStoreRepositoryClient-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface FBSApplicationDataStoreRepositoryClient : FBSSystemServiceFacilityClient <FBSApplicationDataStoreRepositoryClient>
{
    NSMutableDictionary *_prefetchedKeyCounts;
    NSMutableDictionary *_prefetchedKeyValues;
    NSMutableDictionary *_pendingChangesToPrefetchedKeys;
    NSObject<OS_dispatch_queue> *_prefetchedDataQueue;
    NSObject<OS_dispatch_queue> *_observersQueue;
    NSHashTable *_observers;
}

- (void)fireCompletion:(CDUnknownBlockType)arg1 arrayResults:(id)arg2 error:(id)arg3;
- (void)fireCompletion:(CDUnknownBlockType)arg1 result:(id)arg2 error:(id)arg3;
- (void)fireCompletion:(CDUnknownBlockType)arg1 error:(id)arg2;
- (id)clientCallbackQueue;
- (void)_sendMessageType:(int)arg1 withMessage:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3 waitForReply:(_Bool)arg4;
- (id)_observers;
- (_Bool)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id *)arg3;
- (void)_setPrefetchedObjectIfNecessary:(id)arg1 forKey:(id)arg2 application:(id)arg3;
- (void)_handleStoreInvalidated:(id)arg1;
- (id)_allPrefetchedChangesInFlightForApplication:(id)arg1;
- (_Bool)_isChangeInFlightForPrefetchedKey:(id)arg1 application:(id)arg2;
- (void)_setChangeInFlight:(_Bool)arg1 forPrefetchedKey:(id)arg2 application:(id)arg3;
- (void)_handleValueChanged:(id)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeAllObjectsForApplication:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3 checkPrefetch:(_Bool)arg4;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)availableDataStores:(CDUnknownBlockType)arg1;
- (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sendPrefetchedKeys:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removePrefetchedKeys:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addPrefetchedKeys:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

