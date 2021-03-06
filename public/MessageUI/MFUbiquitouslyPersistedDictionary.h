//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MessageUI/MFMutableDictionaryProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

@interface MFUbiquitouslyPersistedDictionary : NSObject <MFMutableDictionaryProtocol>
{
    NSString *_identifier;
    NSUbiquitousKeyValueStore *_kvStore;
    NSMutableDictionary *_storedObjects;
    NSObject<OS_dispatch_queue> *_mutationQueue;
    NSString *_plistPath;
}

+ (id)sharedDictionaryWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *plistPath; // @synthesize plistPath=_plistPath;
- (void)_storeChangedExternally:(id)arg1;
- (void)_mergeKVStoreChangedKeys:(id)arg1;
- (void)_resetKVStore;
- (void)_purgeOldestEntries;
- (void)_synchronize;
- (void)_ensureStoredObjectsAreInKVStore;
- (void)_writeToPlist;
@property(readonly, nonatomic) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(readonly) unsigned long long count;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

