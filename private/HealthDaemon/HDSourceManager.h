//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabaseValueCache, HDProfile;
@protocol OS_dispatch_queue;

@interface HDSourceManager : NSObject
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDDatabaseValueCache *_localSourceEntityCache;
    HDDatabaseValueCache *_clientSourceCache;
}

+ (_Bool)_isSpartanDeviceBundleIdentifier:(id)arg1;
+ (_Bool)_isLocalDeviceBundleIdentifier:(id)arg1;
+ (id)_applicationNameForBundleIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)_applicationsUninstalledNotification:(id)arg1;
- (id)_getNameForBundleIdentifier:(id)arg1 isCurrentDevice:(_Bool)arg2;
- (unsigned long long)_sourceOptionsForApplicationEntitlements:(id)arg1;
- (id)_createSourceEntityForBundleIdentifier:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3 isCurrentDevice:(_Bool)arg4 productType:(id)arg5 error:(id *)arg6;
- (id)_createSourceEntityForClientWithBundleIdentifier:(id)arg1 name:(id)arg2 entitlements:(id)arg3 error:(id *)arg4;
- (id)_createSourceEntityForSpartanDeviceWithError:(id *)arg1;
- (id)_createSourceEntityForLocalDeviceWithError:(id *)arg1;
- (id)_fetchClientSourceForPersistentID:(id)arg1 error:(id *)arg2;
- (id)_sourcePersistentIDsFromSourceEntities:(id)arg1;
- (void)_deleteSourceIfNoSampleFoundWithBundleIdentifier:(id)arg1;
- (_Bool)_deleteSourceWithEntity:(id)arg1 bundleIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)deleteSourceWithBundleIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)createSourcesWithCodables:(id)arg1 provenance:(long long)arg2 error:(id *)arg3;
- (id)allWatchSourcesWithError:(id *)arg1;
- (id)allSourcesWithError:(id *)arg1;
- (id)clientSourceForUUID:(id)arg1 error:(id *)arg2;
- (id)clientSourcesForSourceIDs:(id)arg1 error:(id *)arg2;
- (id)sourceUUIDForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)clientSourceForSourceEntity:(id)arg1 error:(id *)arg2;
- (id)clientSourceForSourceEntities:(id)arg1 error:(id *)arg2;
- (id)clientSourceForPersistentID:(id)arg1 error:(id *)arg2;
- (id)clientSourceForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)_sourceForBundleIdentifier:(id)arg1 createSourceBlock:(CDUnknownBlockType)arg2 modifySourceBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (id)sourceForCodableSource:(id)arg1 provenance:(long long)arg2 createIfNecessary:(_Bool)arg3 error:(id *)arg4;
- (id)sourceForAppleDeviceWithUUID:(id)arg1 identifier:(id)arg2 name:(id)arg3 productType:(id)arg4 createIfNecessary:(_Bool)arg5 error:(id *)arg6;
- (id)sourceEntityForSource:(id)arg1 createOrUpdateIfNecessary:(_Bool)arg2 error:(id *)arg3;
- (id)sourceForApplicationIdentifier:(id)arg1 createOrUpdateIfNecessary:(_Bool)arg2 entitlements:(id)arg3 name:(id)arg4 error:(id *)arg5;
- (id)createOrUpdateSourceForClient:(id)arg1 error:(id *)arg2;
- (id)sourceForClient:(id)arg1 error:(id *)arg2;
- (id)healthAppSourceWithError:(id *)arg1;
- (id)localDeviceSourceWithError:(id *)arg1;
- (id)_predicateForSourceBundleIdentifier:(id)arg1 localOnly:(_Bool)arg2;
- (id)localSourceForSourceID:(id)arg1 error:(id *)arg2;
- (id)localSourceForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)allSourcesForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)setLocalDeviceSourceUUID:(id)arg1 bundleIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)updateCurrentDeviceNameWithError:(id *)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1;

@end

