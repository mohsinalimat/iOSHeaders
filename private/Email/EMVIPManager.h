//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, EAEmailAddressSet, NSMutableDictionary, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

@interface EMVIPManager : NSObject
{
    NSMutableDictionary *_vipsByIdentifier;
    EAEmailAddressSet *_cachedEmailAddresses;
    CNContactStore *_contactStore;
    NSUbiquitousKeyValueStore *_keyValueStore;
    NSObject<OS_dispatch_queue> *_operationQueue;
}

+ (id)_contactDescriptors;
+ (id)plistURL;
+ (void)initialize;
+ (id)_log;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) NSUbiquitousKeyValueStore *keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (id)_contactFromContacts:(id)arg1 matchingMostAddresses:(id)arg2;
- (id)_contactForName:(id)arg1 emailAddresses:(id)arg2;
- (id)_validatedCloudVIPFromStore:(id)arg1 withCloudKey:(id)arg2;
- (id)_cloudKeyForIdentifier:(id)arg1;
- (void)_mergeVIPs;
- (void)_updateLocalWithCloud:(id)arg1 refresh:(_Bool)arg2;
- (void)_keyValueStoreChanged:(id)arg1;
- (void)_updateCloudWithLocal;
- (void)_saveVIPsLocally;
- (void)_saveVIPs;
- (id)_vipsDictionary;
- (void)_loadVIPs;
- (void)_removeVIPsWithIdentifiers:(id)arg1;
- (void)removeVIPsWithEmailAddresses:(id)arg1;
- (void)removeVIPsWithIdentifiers:(id)arg1;
- (_Bool)_isVIPForContact:(id)arg1 orAddresses:(id)arg2;
- (void)saveVIPs:(id)arg1;
- (id)_allVIPEmailAddresses;
- (id)allVIPEmailAddresses;
- (id)allVIPs;
- (id)vipWithIdentifier:(id)arg1;
- (void)dealloc;
- (void)_vipManagerCommonInitWithKeyValueStore:(id)arg1 contactStore:(id)arg2;
- (id)initWithSyncEnabled:(_Bool)arg1;
- (id)init;

@end

