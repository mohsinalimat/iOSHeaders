//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCForegroundClient-Protocol.h>

@class BRCALRowID, BRCAccountSession, BRCFSEventsMonitor, BRCPQLConnection, BRCPrivateClientZone, BRCRelativePath, BRCSyncContext, BRCZoneRowID, BRContainer, BRMangledID, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSURL, brc_task_tracker;
@protocol BRCAppLibraryDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCAppLibrary : NSObject <BRCForegroundClient>
{
    // Error parsing type: AQ, name: _activeQueries
    // Error parsing type: AQ, name: _activeRecursiveQueries
    // Error parsing type: AQ, name: _activeAliasQueries
    long long _maxLostStamp;
    NSNumber *_deepScanStamp;
    NSString *_deepScanReason;
    NSMutableDictionary *_pendingFileCoordinators;
    NSMutableSet *_XPCClientsUsingUbiquity;
    BRMangledID *_mangledID;
    BRCAccountSession *_session;
    BRCPrivateClientZone *_defaultClientZone;
    _Bool _activated;
    NSMutableSet *_targetAppLibraries;
    NSMutableSet *_targetSharedServerZones;
    NSObject<OS_dispatch_queue> *_targetAppLibraryQueue;
    NSMutableSet *_foregroundClients;
    _Bool _needsSave;
    _Bool _containerMetadataNeedsSyncUp;
    unsigned int _state;
    brc_task_tracker *_tracker;
    id <BRCAppLibraryDelegate> _delegate;
    BRCPQLConnection *_db;
    BRCALRowID *_dbRowID;
    BRCZoneRowID *_zoneRowID;
    NSString *_appLibraryID;
    NSNumber *_fileID;
    NSNumber *_generationID;
    BRContainer *_containerMetadata;
    NSString *_containerMetadataEtag;
}

@property(nonatomic) _Bool containerMetadataNeedsSyncUp; // @synthesize containerMetadataNeedsSyncUp=_containerMetadataNeedsSyncUp;
@property(retain, nonatomic) NSString *containerMetadataEtag; // @synthesize containerMetadataEtag=_containerMetadataEtag;
@property(readonly, nonatomic) BRContainer *containerMetadata; // @synthesize containerMetadata=_containerMetadata;
@property(nonatomic) __weak BRCPrivateClientZone *defaultClientZone; // @synthesize defaultClientZone=_defaultClientZone;
@property(retain, nonatomic) NSNumber *deepScanStamp; // @synthesize deepScanStamp=_deepScanStamp;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSNumber *generationID; // @synthesize generationID=_generationID;
@property(retain, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(readonly, nonatomic) BRMangledID *mangledID; // @synthesize mangledID=_mangledID;
@property(readonly, nonatomic) NSString *appLibraryID; // @synthesize appLibraryID=_appLibraryID;
@property(retain, nonatomic) BRCZoneRowID *zoneRowID; // @synthesize zoneRowID=_zoneRowID;
@property(retain, nonatomic) BRCALRowID *dbRowID; // @synthesize dbRowID=_dbRowID;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) _Bool needsSave; // @synthesize needsSave=_needsSave;
@property(readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
@property(retain, nonatomic) id <BRCAppLibraryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long maxLostStamp; // @synthesize maxLostStamp=_maxLostStamp;
@property(readonly, nonatomic) brc_task_tracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)setIsOverQuota:(_Bool)arg1;
- (id)createAliasWithTarget:(id)arg1 parentPath:(id)arg2 forceReparent:(_Bool)arg3 error:(id *)arg4;
@property(readonly, nonatomic) NSString *pathRelativeToRoot;
- (void)scheduleContainerMetadataSyncUp;
- (void)_updateIsInCloudDocsZone;
- (void)zoneDidChangeMovedToCloudDocsState;
- (void)recreateDocumentsFolderIfNeeded;
- (id)rootItemGlobalID;
- (id)rootItemID;
- (struct BRCDirectoryItem *)fetchRootItem;
- (struct BRCDirectoryItem *)fetchRootItemInDB:(id)arg1;
- (id)documentsFolderItemID;
@property(readonly, nonatomic) BRCRelativePath *documentsPath;
- (_Bool)shouldSaveContainerMetadataServerside;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(CDUnknownBlockType)arg2;
- (_Bool)wasMovedToCloudDocs;
- (id)containerMetadataFilledWithTCCInfo;
- (id)aliasByUnsaltedBookmarkData:(id)arg1;
- (struct PQLResultSet *)liveAliasesEnumeratorTargetingThisAppLibrary;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemIDByRowID:(unsigned long long)arg1;
- (id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2;
- (void)_addTargetSharedServerZone:(id)arg1;
- (void)_removeTargetSharedServerZoneForSharedServerZone:(id)arg1;
- (void)_addTargetSharedServerZoneForSharedItem:(id)arg1;
- (void)_removedAliasItemForTargetAppLibrary:(id)arg1;
- (void)_addTargetAppLibrary:(id)arg1;
- (void)_addTargetAppLibraryForAliasItem:(id)arg1;
- (void)_removeAllTargetAppLibrariesAndSharedServerZones;
- (void)_resolveTargetAppLibrariesAndSharedClientZones;
- (_Bool)isStillTargetingSharedServerZone:(id)arg1;
- (_Bool)isStillTargetingAppLibrary:(id)arg1;
- (id)_aliasAppLibraryTargetSQLPrefix;
- (struct PQLResultSet *)_targetSharedServerZonesEnumerator;
- (struct PQLResultSet *)_targetAppLibrariesEnumerator;
@property(readonly, nonatomic) NSString *identifier;
- (void)didReceiveHandoffRequest;
@property(readonly, nonatomic) BRCSyncContext *syncContext;
@property(readonly, nonatomic) BRCSyncContext *syncContextIfExists;
- (void)recomputeShouldEvictState;
@property(readonly, nonatomic) _Bool shouldEvictUploadedItems;
@property(readonly, nonatomic) _Bool isForeground;
- (void)removeForegroundClient:(id)arg1;
- (void)addForegroundClient:(id)arg1;
- (unsigned long long)documentCountWithDB:(id)arg1;
- (unsigned long long)documentEvictableSizeUsageWithAccessTimeDelta:(double)arg1 db:(id)arg2;
- (unsigned long long)documentEvictableSizeUsageWithDB:(id)arg1;
- (unsigned long long)documentSizeUsageWithDB:(id)arg1;
- (_Bool)hasLocalChanges;
- (_Bool)hasUbiquitousDocuments;
- (_Bool)hasDocumentsOrDirectory;
- (_Bool)hasInitialFaultsEverLive;
- (_Bool)hasInitialFaultsLive;
- (long long)throttleHashWithItemID:(id)arg1;
- (void)didCreateDataScopedItem;
- (void)didCreateDocumentScopedItem;
- (void)didRemoveDocumentsFolder;
- (void)didFindLostItem:(id)arg1 oldAppLibrary:(id)arg2;
- (void)updateFromFSAtPath:(id)arg1;
- (void)fsrootDidMoveToPath:(id)arg1;
- (void)setRootFileID:(unsigned long long)arg1;
- (void)scheduleDeepScanWithReason:(id)arg1;
- (_Bool)markChildrenLostForItemID:(id)arg1 inZone:(id)arg2 fileID:(id)arg3;
- (void)continueMarkingChildrenLostInZone:(id)arg1;
- (_Bool)markChildrenLostForItemID:(id)arg1 inZone:(id)arg2 fileID:(id)arg3 startingFromRow:(unsigned long long)arg4 hasMoreWork:(_Bool *)arg5;
- (unsigned long long)allocateLostStampAddingBackoff:(_Bool)arg1;
- (_Bool)isCoordinationPendingForItem:(id)arg1;
- (void)freeFileCoordinationSlotsAfterDelayForRead:(_Bool)arg1;
- (id)coordinatorForItem:(id)arg1 forRead:(_Bool)arg2;
- (void)cancelWriteCoordinatorForItem:(id)arg1;
- (struct PQLResultSet *)enumerateUserVisibleChildrenDirectoriesOfItemGlobalID:(id)arg1 db:(id)arg2;
- (struct PQLResultSet *)enumerateUserVisibleChildrenOfItemGlobalID:(id)arg1 sortOrder:(unsigned char)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 db:(id)arg5;
- (struct PQLResultSet *)itemsEnumeratorChildOf:(id)arg1 rankMin:(unsigned long long)arg2 rankMax:(unsigned long long)arg3 count:(unsigned long long)arg4 db:(id)arg5;
- (struct PQLResultSet *)itemsEnumeratorWithRankMin:(unsigned long long)arg1 rankMax:(unsigned long long)arg2 namePrefix:(id)arg3 shouldIncludeFolders:(_Bool)arg4 shouldIncludeOnlyFolders:(_Bool)arg5 shouldIncludeDocumentsScope:(_Bool)arg6 shouldIncludeDataScope:(_Bool)arg7 shouldIncludeExternalScope:(_Bool)arg8 shouldIncludeTrashScope:(_Bool)arg9 count:(unsigned long long)arg10 db:(id)arg11;
- (id)descriptionWithContext:(id)arg1;
- (id)_unwrappedDescriptionWithContext:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToAppLibrary:(id)arg1;
@property(readonly, nonatomic) _Bool isGreedy;
- (_Bool)hasUbiquityClientsConnected;
- (void)clearStateBits:(unsigned int)arg1;
- (_Bool)setStateBits:(unsigned int)arg1;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)activate;
- (void)removeClientUsingUbiquity:(id)arg1;
- (void)addClientUsingUbiquity:(id)arg1;
- (void)cancelFileCoordinators;
- (void)close;
@property(readonly, nonatomic) NSMutableDictionary *plist;
- (_Bool)supportsSpotlightIndexing;
- (void)associateWithClientZone:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 zoneRowID:(id)arg3 db:(id)arg4 plist:(id)arg5 session:(id)arg6 initialCreation:(_Bool)arg7 createdRootOnDisk:(_Bool)arg8 createdCZMMoved:(_Bool)arg9 rootFileID:(id)arg10;
- (id)init;
- (void)unregisterQueryWithAliases:(_Bool)arg1 isRecursive:(_Bool)arg2;
- (void)registerQueryWithAliases:(_Bool)arg1 isRecursive:(_Bool)arg2;
@property(readonly) _Bool hasActiveAliasQueries;
@property(readonly) _Bool hasActiveRecursiveQueries;
@property(readonly) _Bool hasActiveQueries;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) BRCFSEventsMonitor *fsEventsMonitor;
@property(readonly, nonatomic) BRCRelativePath *root;
@property(readonly, nonatomic) NSString *absolutePath;
- (_Bool)includesDataScope;
@property(readonly, nonatomic) unsigned long long syncedFolderType;
@property(readonly, nonatomic) _Bool isiCloudDesktopAppLibrary;
- (_Bool)isDocumentsAppLibrary;
- (_Bool)isDesktopAppLibrary;
@property(readonly, nonatomic) _Bool isCloudDocsAppLibrary;
@property(readonly, nonatomic) NSString *logName;
- (void)_updateContainerMetadataFromRecord:(id)arg1 stripIcons:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

