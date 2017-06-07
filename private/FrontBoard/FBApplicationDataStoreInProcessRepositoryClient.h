//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/FBSApplicationDataStoreRepositoryClient-Protocol.h>

@class NSCountedSet, NSHashTable, NSMutableDictionary, NSString;
@protocol FBApplicationDataStoreRepository, OS_dispatch_queue;

@interface FBApplicationDataStoreInProcessRepositoryClient : NSObject <FBSApplicationDataStoreRepositoryClient>
{
    id <FBApplicationDataStoreRepository> _dataStore;
    NSCountedSet *_prefetchedKeys;
    NSObject<OS_dispatch_queue> *_prefetchQueue;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSObject<OS_dispatch_queue> *_observersQueue;
    NSHashTable *_observers;
    struct NSMutableDictionary *_prefetchedKeyValues;
}

@property(retain, nonatomic) NSMutableDictionary *prefetchedKeyValues; // @synthesize prefetchedKeyValues=_prefetchedKeyValues;
- (id)_observers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id *)arg3;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3 checkPrefetch:(_Bool)arg4;
- (id)objectForKey:(id)arg1 forApplication:(id)arg2 checkPrefetch:(_Bool)arg3;
- (void)removeAllObjectsForApplication:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)availableDataStores:(CDUnknownBlockType)arg1;
- (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)_repositoryInvalidated:(id)arg1;
- (void)_valueChanged:(id)arg1;
- (void)_invalidateCacheIfObjectIsNotEqual:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;
- (void)_updateCacheIfNecessaryWithObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;
- (id)_prefetchQueue_prefetchedKeysForApplication:(id)arg1;
- (void)_updateNotificationListeners;
- (void)_sendAndCachePrefetchedKeysWithCompletion:(CDUnknownBlockType)arg1;
- (void)removePrefetchedKeys:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addPrefetchedKeys:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDataStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
