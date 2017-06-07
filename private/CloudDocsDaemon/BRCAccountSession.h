//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCCloudDocsAppsObserver-Protocol.h>
#import <CloudDocsDaemon/BRCIndexingArbiter-Protocol.h>
#import <CloudDocsDaemon/BRCPQLDBCorruptionHandler-Protocol.h>

@class BRCAccountWaitOperation, BRCApplicationShortcutService, BRCApplyScheduler, BRCClientState, BRCContainerScheduler, BRCDeadlineScheduler, BRCDiskSpaceReclaimer, BRCFSDownloader, BRCFSReader, BRCFSUploader, BRCFSWriter, BRCGlobalProgress, BRCNotificationManager, BRCPQLConnection, BRCServerPersistedState, BRCSpotlightIndexer, BRCStageRegistry, BRCThrottle, BRCUserNotification, BRCVolume, CDSession, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, NSURL, br_pacer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCAccountSession : NSObject <BRCPQLDBCorruptionHandler, BRCCloudDocsAppsObserver, BRCIndexingArbiter>
{
    NSMutableDictionary *_syncContexts;
    BRCDeadlineScheduler *_defaultScheduler;
    NSURL *_dbURL;
    NSObject<OS_dispatch_source> *_dbWatcher;
    NSObject<OS_dispatch_queue> *_dbWatcherQueue;
    NSObject<OS_dispatch_queue> *_dbCorruptionQueue;
    int _cloudDocsFD;
    CDUnknownBlockType _dbProfilingHook;
    NSString *_databaseID;
    NSHashTable *_miscOperations;
    BRCPQLConnection *_clientDB;
    BRCPQLConnection *_serverDB;
    BRCPQLConnection *_readOnlyDB;
    BRCClientState *_clientState;
    BRCServerPersistedState *_serverState;
    struct brc_mutex _zonesLock;
    NSMutableDictionary *_libraryRowIDsByMangledID;
    NSMutableDictionary *_appLibrariesByRowID;
    NSMutableDictionary *_serverZonesByZoneRowID;
    NSMutableDictionary *_sharedServerZonesByMangledID;
    NSMutableDictionary *_sharedClientZonesByMangledID;
    NSMutableDictionary *_privateServerZonesByID;
    NSMutableDictionary *_privateClientZonesByID;
    NSString *_accountID;
    NSMutableSet *_xpcClients;
    _Bool _resumed;
    BRCGlobalProgress *_globalProgress;
    unsigned long long _lastDiskSpaceCheckTime;
    unsigned long long _availableDiskSpace;
    unsigned long long _totalDiskSpace;
    _Bool _isGreedy;
    struct brc_mutex _zonesCreationLock;
    br_pacer *_reschedulePendingDiskItemsPacer;
    br_pacer *_updateDiskSpacePacer;
    _Bool _accountIsReady;
    BRCAccountWaitOperation *_accountWaitOperation;
    _Bool _isDBOpened;
    NSMutableDictionary *_rootsByFolderType;
    NSMutableDictionary *_fsEventsMonitors;
    BRCApplicationShortcutService *_shortcutService;
    _Bool _isCancelled;
    NSString *_appSupportDirPath;
    NSString *_cacheDirPath;
    NSString *_ubiquityTokenSalt;
    BRCContainerScheduler *_containerScheduler;
    BRCApplyScheduler *_applyScheduler;
    BRCVolume *_volume;
    BRCFSReader *_fsReader;
    BRCFSUploader *_fsUploader;
    BRCFSDownloader *_fsDownloader;
    BRCFSWriter *_fsWriter;
    BRCUserNotification *_userNotification;
    BRCNotificationManager *_notificationManager;
    BRCStageRegistry *_stageRegistry;
    BRCDiskSpaceReclaimer *_diskReclaimer;
    CDSession *_coreDuetSession;
    BRCSpotlightIndexer *_spotlightIndexer;
    BRCThrottle *_appLibraryScanThrottle;
    BRCThrottle *_appLibraryResetThrottle;
    BRCThrottle *_sharedAppLibraryResetThrottle;
    BRCThrottle *_appLibraryAliasRemovalThrottle;
    BRCThrottle *_lostItemThrottle;
    BRCThrottle *_operationFailureThrottle;
    BRCThrottle *_syncClientZoneThrottle;
    BRCThrottle *_syncClientZoneErrorThrottle;
    NSObject<OS_dispatch_queue> *_resetQueue;
}

+ (id)userIdentityForName:(id)arg1 db:(id)arg2;
+ (id)userIdentityForKey:(id)arg1 db:(id)arg2;
+ (id)sessionForDumpingDatabasesAtURL:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *resetQueue; // @synthesize resetQueue=_resetQueue;
@property(readonly, nonatomic) BRCGlobalProgress *globalProgress; // @synthesize globalProgress=_globalProgress;
@property(readonly, nonatomic) BRCThrottle *syncClientZoneErrorThrottle; // @synthesize syncClientZoneErrorThrottle=_syncClientZoneErrorThrottle;
@property(readonly, nonatomic) BRCThrottle *syncClientZoneThrottle; // @synthesize syncClientZoneThrottle=_syncClientZoneThrottle;
@property(readonly, nonatomic) BRCThrottle *operationFailureThrottle; // @synthesize operationFailureThrottle=_operationFailureThrottle;
@property(readonly, nonatomic) BRCThrottle *lostItemThrottle; // @synthesize lostItemThrottle=_lostItemThrottle;
@property(readonly, nonatomic) BRCThrottle *appLibraryAliasRemovalThrottle; // @synthesize appLibraryAliasRemovalThrottle=_appLibraryAliasRemovalThrottle;
@property(readonly, nonatomic) BRCThrottle *sharedAppLibraryResetThrottle; // @synthesize sharedAppLibraryResetThrottle=_sharedAppLibraryResetThrottle;
@property(readonly, nonatomic) BRCThrottle *appLibraryResetThrottle; // @synthesize appLibraryResetThrottle=_appLibraryResetThrottle;
@property(readonly, nonatomic) BRCThrottle *appLibraryScanThrottle; // @synthesize appLibraryScanThrottle=_appLibraryScanThrottle;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) BRCSpotlightIndexer *spotlightIndexer; // @synthesize spotlightIndexer=_spotlightIndexer;
@property(readonly, nonatomic) CDSession *coreDuetSession; // @synthesize coreDuetSession=_coreDuetSession;
@property(readonly, nonatomic) BRCDiskSpaceReclaimer *diskReclaimer; // @synthesize diskReclaimer=_diskReclaimer;
@property(readonly, nonatomic) BRCUserNotification *userNotification; // @synthesize userNotification=_userNotification;
@property(readonly, nonatomic) BRCFSDownloader *fsDownloader; // @synthesize fsDownloader=_fsDownloader;
@property(readonly, nonatomic) BRCFSUploader *fsUploader; // @synthesize fsUploader=_fsUploader;
@property(readonly, nonatomic) BRCVolume *volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) BRCDeadlineScheduler *defaultScheduler; // @synthesize defaultScheduler=_defaultScheduler;
@property(readonly, nonatomic) NSString *ubiquityTokenSalt; // @synthesize ubiquityTokenSalt=_ubiquityTokenSalt;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) NSString *cacheDirPath; // @synthesize cacheDirPath=_cacheDirPath;
@property(retain, nonatomic) NSString *appSupportDirPath; // @synthesize appSupportDirPath=_appSupportDirPath;
- (void).cxx_destruct;
@property(readonly, nonatomic) BRCStageRegistry *stageRegistry; // @synthesize stageRegistry=_stageRegistry;
@property(readonly, nonatomic) BRCNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) BRCFSWriter *fsWriter; // @synthesize fsWriter=_fsWriter;
@property(readonly, nonatomic) BRCFSReader *fsReader; // @synthesize fsReader=_fsReader;
@property(readonly, nonatomic) BRCContainerScheduler *containerScheduler; // @synthesize containerScheduler=_containerScheduler;
@property(readonly, nonatomic) BRCApplyScheduler *applyScheduler; // @synthesize applyScheduler=_applyScheduler;
- (_Bool)shouldIndexDocument:(id)arg1;
- (_Bool)shouldPathBeDesktopSymlink:(id)arg1;
- (void)recreateDesktopSymlinksIfNecessary;
- (void)_recreateSymlinkIfNecessaryForDocumentsPath:(id)arg1 folderName:(id)arg2 destinationPath:(id)arg3;
- (void)removeDesktopSymlink:(_Bool)arg1 andDocumentsSymlink:(_Bool)arg2;
- (unsigned long long)syncedFolderTypeForURL:(id)arg1;
- (id)roots;
- (void)removeRootForSyncedFolderType:(unsigned long long)arg1;
- (void)setRoot:(id)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (id)rootForSyncedFolderType:(unsigned long long)arg1;
- (_Bool)hasRootForSyncedFolderType:(unsigned long long)arg1;
- (id)createRootForSyncedFolderType:(unsigned long long)arg1;
- (id)fsEventsMonitors;
- (void)removeFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (void)setFSEventsMonitor:(id)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (_Bool)hasFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (id)fsEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (id)fsEventsMonitorForAppLibraryID:(id)arg1;
- (id)createFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (id)dirPathForSyncedFolderType:(unsigned long long)arg1;
- (void)dumpMiscOperationsToContext:(id)arg1;
- (void)dumpXPCClientsToContext:(id)arg1;
- (_Bool)disableSyncforSyncedFolderType:(unsigned long long)arg1 isInitialCreation:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_getRootPathXattrValue:(id *)arg1 forRootPath:(id)arg2 error:(id *)arg3;
- (_Bool)_setRootPathXattrValue:(id)arg1 forRootPath:(id)arg2 error:(id *)arg3;
- (_Bool)enableSyncforSyncedFolderType:(unsigned long long)arg1 isInitialCreation:(_Bool)arg2 error:(id *)arg3;
- (_Bool)applySyncPolicy:(long long)arg1 forSyncedFolderType:(unsigned long long)arg2 isInitialCreation:(_Bool)arg3 error:(id *)arg4;
@property(readonly, nonatomic) _Bool isGreedy;
- (void)startDownloadsForGreediness;
- (unsigned long long)totalEvictableSizeWithAccessTimeDelta:(double)arg1;
- (void)setOptimizeStorageEnabled:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasOptimizeStorageEnabled;
- (id)recentDocumentsService;
- (unsigned long long)accountSize;
- (void)availableDiskSpaceDidChange;
- (unsigned long long)availableDiskSpaceUsingCache:(_Bool)arg1 schedulingPendingDiskItemsIfNeeded:(_Bool)arg2;
- (unsigned long long)availableDiskSpaceUsingCache:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long availableDiskSpace;
- (void)cloudDocsAppsListDidChange:(id)arg1;
- (_Bool)createSharedAppLibraryOnDiskWithMangledID:(id)arg1 createdRoot:(_Bool *)arg2 rootFileID:(unsigned long long *)arg3;
- (_Bool)createAppLibraryOnDisk:(id)arg1 createdRoot:(_Bool *)arg2 createdDocuments:(_Bool *)arg3 rootFileID:(unsigned long long *)arg4;
- (_Bool)createAppLibrariesIfNeededWithError:(id *)arg1;
- (void)enumerateFileTypesWithFilterBlock:(CDUnknownBlockType)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateAccountHandlerSupportedFolderTypes:(CDUnknownBlockType)arg1;
- (void)enumerateSupportedFolderTypes:(CDUnknownBlockType)arg1;
- (id)getOrReserveLibraryRowIDForLibrary:(id)arg1 ownerName:(id)arg2;
- (id)getOrCreateSharedAppLibraryAndZones:(id)arg1 ownerName:(id)arg2 needsActivate:(_Bool *)arg3;
- (id)getOrCreateSharedAppLibraryAndZones:(id)arg1 ownerName:(id)arg2;
- (id)getOrCreatePrivateAppLibraryAndZonesIfNecessary:(id)arg1 appLibraryExists:(_Bool *)arg2;
- (id)getOrCreatePrivateAppLibraryAndZonesIfNecessary:(id)arg1;
- (id)_getOrCreateAppLibraryAndZonesIfNecessary:(id)arg1 ownerName:(id)arg2 creationFlags:(unsigned int *)arg3;
- (_Bool)_shouldPrivateAppLibraryBeCZMMoved:(id)arg1;
- (void)__registerServerZone:(id)arg1 clientZone:(id)arg2 appLibrary:(id)arg3 isShared:(_Bool)arg4;
- (id)__getOrCreateAppLibrary:(id)arg1 ownerName:(id)arg2 rowID:(id)arg3 createOnDisk:(_Bool)arg4 alreadyExists:(_Bool *)arg5 withClientZone:(id)arg6 createCZMMoved:(_Bool)arg7;
- (id)__getOrCreateClientZone:(id)arg1 ownerName:(id)arg2 withServerZone:(id)arg3;
- (id)__getOrCreateServerZone:(id)arg1 ownerName:(id)arg2;
- (void)enumerateSharedAppLibraries:(CDUnknownBlockType)arg1;
- (void)enumeratePrivateAppLibraries:(CDUnknownBlockType)arg1;
- (id)sharedAppLibraryByMangledID:(id)arg1;
- (id)privateAppLibraryByMangledID:(id)arg1;
- (id)privateAppLibraryByID:(id)arg1;
- (id)appLibraryByMangledID:(id)arg1;
- (id)appLibraryByRowID:(id)arg1;
- (void)destroySharedClientZone:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 whileRemovingPrivateClientZone:(id)arg2;
- (void)enumerateSharedClientZones:(CDUnknownBlockType)arg1;
- (id)sharedClientZoneByMangledID:(id)arg1;
- (id)sharedServerZoneByMangledID:(id)arg1;
- (void)enumeratePrivateClientZones:(CDUnknownBlockType)arg1;
- (void)enumerateClientZones:(CDUnknownBlockType)arg1;
- (id)privateClientZoneByID:(id)arg1;
- (id)cloudDocsClientZone;
- (id)privateClientZoneByMangledID:(id)arg1;
- (void)enumeratePrivateServerZones:(CDUnknownBlockType)arg1;
- (id)privateServerZoneByID:(id)arg1;
- (id)privateServerZoneByMangledID:(id)arg1;
- (void)enumerateAppLibraries:(CDUnknownBlockType)arg1;
- (void)enumerateServerZones:(CDUnknownBlockType)arg1;
- (id)clientZoneByMangledID:(id)arg1;
- (id)serverZoneByRowID:(id)arg1;
- (id)serverZoneByName:(id)arg1 ownerName:(id)arg2;
- (id)serverZoneByID:(id)arg1;
- (id)serverZoneByMangledID:(id)arg1;
- (id)_unloadClientZones;
- (void)_loadClientZonesFromDisk;
- (void)destroyLocalDataWithPristingContainerIDs:(id)arg1;
- (void)destroyLocalData;
- (void)destroyLocalDataWaitingForFilesToBeUnlinked:(_Bool)arg1 pristineContainerIDs:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)destroyLocalDataWaitingForFilesToBeUnlinked:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_recursivelyPrepareFolderForLogOutAtURL:(id)arg1 pruneEmptyFolders:(_Bool)arg2 pruneEmptyTopLevelFolder:(_Bool)arg3 maxDepth:(unsigned long long)arg4;
- (void)closeAndResetLocalState;
- (void)close;
- (id)fetchAccountWaitOperationWithAccountReady:(_Bool *)arg1;
@property(readonly, nonatomic) BRCAccountWaitOperation *accountWaitOperation;
- (void)resume;
- (_Bool)_createAppLibraryRootIfNeededAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)_createAppLibraryRootsIfNeededWithError:(id *)arg1;
- (_Bool)openWithError:(id *)arg1;
- (void)resetThrottles;
- (void)_setupThrottles;
- (void)markAccountMigrationComplete;
- (void)_createAccountSupportPathIfNeeded:(id)arg1 protectParent:(_Bool)arg2;
- (void)_setupSharedPackageExtensionsPlist;
- (void)userDefaultsChanged;
- (void)_showiCloudDriveAppInstallationNotificationIfNeeded;
- (void)closeXPCClientsSync;
- (void)addMiscOperation:(id)arg1;
- (void)unregisterClient:(id)arg1;
- (void)registerClient:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 salt:(id)arg2;
- (id)init;
- (void)addOfflineAppLibrary:(id)arg1;
- (void)addOfflineClientZone:(id)arg1;
- (void)addOfflineServerZone:(id)arg1;
- (_Bool)backupDatabaseToURL:(id)arg1 error:(id *)arg2;
- (_Bool)dumpFileCoordinationInfoToFileHandle:(id)arg1 error:(id *)arg2;
- (_Bool)dumpDatabaseToFileHandle:(id)arg1 zoneName:(id)arg2 error:(id *)arg3;
- (_Bool)initializeOfflineDatabase:(id *)arg1;
- (_Bool)dumpStatusToFileHandle:(id)arg1 zoneName:(id)arg2 error:(id *)arg3;
- (_Bool)_dumpClientZone:(id)arg1 toContext:(id)arg2 error:(id *)arg3;
- (_Bool)_dumpClientZoneStatus:(id)arg1 toContext:(id)arg2 error:(id *)arg3;
- (void)_dumpClientZoneBlockedState:(id)arg1 toContext:(id)arg2;
- (void)closeDBs;
- (_Bool)openDBWithError:(id *)arg1;
- (_Bool)validateDatabase:(id)arg1 serverTruth:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_openServerTruthConnectionWithError:(id *)arg1;
- (_Bool)_openClientTruthConnectionWithError:(id *)arg1;
- (_Bool)_checkIntegrity:(id)arg1 serverTruth:(_Bool)arg2 error:(id *)arg3;
- (void)_registerLastBootIfNeeded:(id)arg1 table:(struct NSObject *)arg2;
- (void)_clearNeedsUpgradeErrors:(id)arg1 brVersion:(id)arg2;
- (id)createUserKeyForName:(id)arg1;
- (id)userNameForKey:(id)arg1 db:(id)arg2;
- (id)userKeyForName:(id)arg1 db:(id)arg2;
- (void)learnOwnerIdentityForShare:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)_setUserIdentity:(id)arg1 forName:(id)arg2;
- (id)userIdentityForKey:(id)arg1;
- (id)createDeviceKeyForNameInServerDB:(id)arg1;
- (id)deviceKeyForName:(id)arg1 db:(id)arg2;
- (id)pendingDownloadItemWithDocumentID:(unsigned int)arg1;
- (struct PQLResultSet *)itemsNeedingIndexingEnumeratorWithMinNotifRank:(unsigned long long)arg1 maxNotifRank:(unsigned long long)arg2;
- (struct PQLResultSet *)bouncedItemsEnumerator;
- (struct PQLResultSet *)stagedItemsEnumerator;
- (struct PQLResultSet *)_privateServerZonesEnumerator:(id)arg1;
- (id)_privateServerZoneByName:(id)arg1 db:(id)arg2;
- (id)newPrivateServerZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)_privateClientZoneByName:(id)arg1 db:(id)arg2;
- (struct PQLResultSet *)_privateClientZonesEnumerator:(id)arg1;
- (id)newPrivateClientZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)_sharedServerZoneByName:(id)arg1 ownerName:(id)arg2 db:(id)arg3;
- (struct PQLResultSet *)_sharedServerZonesEnumerator:(id)arg1;
- (id)newSharedServerZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (struct PQLResultSet *)_sharedClientZonesEnumerator:(id)arg1;
- (id)newSharedClientZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (_Bool)_createSharedClientZone:(id)arg1 ownerName:(id)arg2;
- (_Bool)_createPrivateClientZone:(id)arg1;
- (_Bool)_deleteClientZone:(id)arg1;
- (_Bool)_createClientZone:(id)arg1 ownerName:(id)arg2;
- (struct PQLResultSet *)_privateAppLibrariesEnumerator:(id)arg1;
- (struct PQLResultSet *)_sharedAppLibrariesEnumerator:(id)arg1;
- (_Bool)_createSharedAppLibrary:(id)arg1;
- (_Bool)_createPrivateAppLibrary:(id)arg1;
- (_Bool)_deleteAppLibrary:(id)arg1;
- (_Bool)_createAppLibrary:(id)arg1;
- (id)newSharedAppLibraryFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newPrivateAppLibraryFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (_Bool)saveAppLibraryToDB:(id)arg1;
- (id)_reserveRowIDForLibrary:(id)arg1 owner:(id)arg2;
- (void)_enumerateAppLibraryRowIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)deleteServerZone:(id)arg1;
- (_Bool)createServerZone:(id)arg1;
- (_Bool)saveClientZoneToDB:(id)arg1;
- (_Bool)saveServerZoneToDB:(id)arg1;
- (void)preventDatabaseFromBeingReused;
- (_Bool)_stepBackupDetector:(struct backup_detector)arg1 newState:(struct backup_detector *)arg2 error:(id *)arg3;
- (_Bool)_setupBackupDetector:(struct backup_detector *)arg1 error:(id *)arg2;
- (id)newConnectionWithLabel:(id)arg1 readonly:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_setupConnection:(id)arg1 databaseName:(id)arg2 flags:(int)arg3 error:(id *)arg4;
- (_Bool)_setupConnection:(id)arg1 databaseName:(id)arg2 readonly:(_Bool)arg3 error:(id *)arg4;
- (void)stopDBWatcher;
- (void)_startWatcher;
- (void)disableDatabaseProfilingForDB:(id)arg1;
- (void)enableDatabaseProfilingForDB:(id)arg1;
- (void)setupDatabase;
- (id)newConnection:(id)arg1;
- (void)dbBecameCorrupted:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BRCPQLConnection *readOnlyDB;
@property(readonly, nonatomic) BRCPQLConnection *serverDB;
@property(readonly, nonatomic) BRCPQLConnection *clientDB;
@property(readonly, nonatomic) BRCServerPersistedState *serverState;
@property(readonly, nonatomic) BRCClientState *clientState;
@property(readonly, nonatomic) NSString *databaseID;
- (void)scheduleZoneMovesToCloudDocs:(id)arg1;
- (int)resolvePathAdditionalMetadata:(id)arg1 appLibrary:(id *)arg2 clientZone:(id *)arg3;
- (void)_resolvePathInMobileDocsRoot:(id)arg1 appLibrary:(id *)arg2 clientZone:(id *)arg3;
- (id)resolvedOpenRelpathForPath:(id)arg1 mustExist:(_Bool)arg2 errcode:(int *)arg3;
- (id)singleClientZoneMatchingSearchString:(id)arg1 error:(id *)arg2;
- (id)clientZonesMatchingSearchString:(id)arg1 error:(id *)arg2;
- (id)_clientZonesMatchingSearchString:(id)arg1;
- (void)setNeedsPCSMigration:(_Bool)arg1;
- (_Bool)PCSMigrationComplete;
- (_Bool)shouldPerformPCSMigration;
- (id)syncContextForZone:(id)arg1 metadata:(_Bool)arg2;
- (id)allSyncContexts;
- (id)syncContextForZone:(id)arg1;
- (id)syncContextForZone:(id)arg1 metadata:(_Bool)arg2 createIfNeeded:(_Bool)arg3;
- (id)syncContextForZone:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)syncContextForAppLibrary:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)zoneHealthSyncContext;
- (id)sharedSyncContext;
- (id)defaultSyncContext;
- (id)_syncContextForContextIdentifier:(id)arg1 sourceAppIdentifier:(id)arg2 isShared:(_Bool)arg3 createIfNeeded:(_Bool)arg4;
- (id)globalItemByFileID:(unsigned long long)arg1 db:(id)arg2;
- (id)globalItemByFileID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)globalItemByDocumentID:(unsigned int)arg1 db:(id)arg2;
- (id)globalItemByDocumentID:(unsigned int)arg1;
- (id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemIDByRowID:(unsigned long long)arg1;
- (id)newLocalItemFromPQLResultSet:(id)arg1 db:(id)arg2 error:(id *)arg3;
- (id)_containerMetadataRecordsToSaveWithBatchSize:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
