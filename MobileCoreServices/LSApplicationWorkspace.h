//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LSApplicationWorkspaceRemoteObserver, LSInstallProgressDelegate, LSInstallProgressList, NSMutableDictionary, NSXPCConnection;

@interface LSApplicationWorkspace : NSObject
{
    _Bool _enhancedAppValidationEnabled;
    LSApplicationWorkspaceRemoteObserver *_remoteObserver;
    NSMutableDictionary *_createdInstallProgresses;
    LSInstallProgressList *_observedInstallProgresses;
    LSInstallProgressDelegate *_delegateProxy;
    NSXPCConnection *_connection;
}

+ (id)activeManagedConfigurationRestrictionUUIDs;
+ (id)defaultWorkspace;
+ (id)callbackQueue;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly) LSInstallProgressList *observedInstallProgresses; // @synthesize observedInstallProgresses=_observedInstallProgresses;
@property(readonly) NSMutableDictionary *createdInstallProgresses; // @synthesize createdInstallProgresses=_createdInstallProgresses;
- (void)_LSSendApplicationIconDidChangeForBundleID:(id)arg1;
- (void)_LSClearSchemaCaches;
- (void)_LSFailedToOpenURL:(id)arg1 withBundle:(id)arg2;
- (_Bool)_LSPrivateDatabaseNeedsRebuild;
- (void)_LSPrivateSyncWithMobileInstallation;
- (_Bool)_LSPrivateRebuildApplicationDatabasesForSystemApps:(_Bool)arg1 internal:(_Bool)arg2 user:(_Bool)arg3;
- (void)clearCreatedProgressForBundleID:(id)arg1;
- (_Bool)installPhaseFinishedForProgress:(id)arg1;
- (id)installProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2;
- (void)removeInstallProgressForBundleID:(id)arg1;
- (id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2;
- (void)removeDeviceIdentifierForVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (id)createDeviceIdentifierWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (id)deviceIdentifierForVendor;
- (id)deviceIdentifierForAdvertising;
- (void)clearAdvertisingIdentifier;
- (_Bool)invalidateIconCache:(id)arg1;
- (_Bool)allowsAlternateIcons;
- (_Bool)updateiTunesMetadataWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)updateSINFWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 error:(id *)arg4;
- (_Bool)unregisterPlugin:(id)arg1;
- (_Bool)registerPlugin:(id)arg1;
- (_Bool)unregisterApplication:(id)arg1;
- (_Bool)registerApplication:(id)arg1;
- (_Bool)registerApplicationDictionary:(id)arg1;
- (_Bool)registerApplicationDictionary:(id)arg1 withObserverNotification:(int)arg2;
- (_Bool)uninstallSystemApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)restoreSystemApplication:(id)arg1;
- (_Bool)uninstallApplication:(id)arg1 withOptions:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)uninstallApplication:(id)arg1 withOptions:(id)arg2;
- (_Bool)downgradeApplicationToPlaceholder:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (_Bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)sendNotificationForApp:(id)arg1 withExtensions:(id)arg2 OperationType:(unsigned long long)arg3 success:(_Bool)arg4;
- (_Bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (_Bool)installApplication:(id)arg1 withOptions:(id)arg2;
- (void)sendUninstallNotificationForApp:(id)arg1 withPlugins:(id)arg2;
- (void)sendInstallNotificationForApp:(id)arg1 withPlugins:(id)arg2;
- (_Bool)getClaimedActivityTypes:(id *)arg1 domains:(id *)arg2;
- (id)machOUUIDsForBundleIdentifiers:(id)arg1 error:(id *)arg2;
- (id)bundleIdentifiersForMachOUUIDs:(id)arg1 error:(id *)arg2;
- (id)removedSystemApplications;
- (_Bool)applicationIsInstalled:(id)arg1;
- (void)enumerateApplicationsForSiriWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateApplicationsOfType:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateApplicationsOfType:(unsigned long long)arg1 legacySPI:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 legacySPI:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (id)pluginsMatchingQuery:(id)arg1 applyFilter:(CDUnknownBlockType)arg2;
- (void)enumeratePluginsMatchingQuery:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 applyFilter:(CDUnknownBlockType)arg4;
- (id)installedPlugins;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(_Bool)arg4 userInfo:(id)arg5 delegate:(id)arg6;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(_Bool)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)openSensitiveURL:(id)arg1 withOptions:(id)arg2;
- (_Bool)openURL:(id)arg1;
- (_Bool)openSensitiveURL:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (_Bool)openURL:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (_Bool)openURL:(id)arg1 withOptions:(id)arg2;
- (_Bool)openApplicationWithBundleID:(id)arg1;
- (id)applicationsAvailableForOpeningDocument:(id)arg1;
- (id)applicationForUserActivityDomainName:(id)arg1;
- (id)applicationForUserActivityType:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1 limit:(unsigned long long)arg2;
- (id)applicationsWithVPNPlugins;
- (id)applicationsWithAudioComponents;
- (id)applicationsWithUIBackgroundModes;
- (id)directionsApplications;
- (id)applicationProxiesWithPlistFlags:(unsigned int)arg1 bundleFlags:(unsigned long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly) LSInstallProgressDelegate *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(readonly) LSApplicationWorkspaceRemoteObserver *remoteObserver; // @synthesize remoteObserver=_remoteObserver;
- (_Bool)establishConnection;
- (void)getKnowledgeUUID:(id *)arg1 andSequenceNumber:(id *)arg2;
- (_Bool)enhancedAppLoggingEnabled;
- (void)dealloc;
- (id)init;
- (id)allApplications;
- (id)unrestrictedApplications;
- (id)placeholderApplications;
- (id)allInstalledApplications;
- (id)legacyApplicationProxiesListWithType:(unsigned long long)arg1;
- (id)applicationsOfType:(unsigned long long)arg1;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 withFilter:(CDUnknownBlockType)arg4;
- (id)URLOverrideForURL:(id)arg1;
- (_Bool)isApplicationAvailableToOpenURLCommon:(id)arg1 includePrivateURLSchemes:(_Bool)arg2 error:(id *)arg3;
- (_Bool)isApplicationAvailableToOpenURL:(id)arg1 includePrivateURLSchemes:(_Bool)arg2 error:(id *)arg3;
- (_Bool)isApplicationAvailableToOpenURL:(id)arg1 error:(id *)arg2;
- (id)applicationsAvailableForOpeningURL:(id)arg1 legacySPI:(_Bool)arg2;
- (id)applicationsAvailableForOpeningURL:(id)arg1;
- (id)privateURLSchemes;
- (id)publicURLSchemes;
- (id)URLSchemesOfType:(long long)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)applicationForOpeningResource:(id)arg1;

@end
