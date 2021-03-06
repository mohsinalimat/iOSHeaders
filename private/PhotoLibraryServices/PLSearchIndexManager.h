//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCountedSet, NSDictionary, NSString, PLClientServerTransaction, PLKeywordManager, PLPhotoLibrary, PLSearchIndexDateFormatter, PLThrottleTimer, PSIDatabase;
@protocol OS_dispatch_queue;

@interface PLSearchIndexManager : NSObject
{
    PLSearchIndexDateFormatter *_dateFormatter;
    PLKeywordManager *_keywordManager;
    PLPhotoLibrary *_photoLibrary;
    PSIDatabase *_db;
    PLThrottleTimer *_throttleTimer;
    PLClientServerTransaction *_serverTransaction;
    NSString *_searchIndexDirectory;
    NSDictionary *_searchMetadata;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_uuidsToProcess;
    _Bool _receivedUpdatesWhileIndexing;
    _Bool _hasScheduledCloseIndex;
    _Bool _hasValidSearchIndex;
    _Bool _isTrackingRebuild;
    long long _rebuildReason;
    long long _updateState;
    _Bool __indexing;
    CDUnknownBlockType __inqAfterIndexingDidIterate;
    NSCountedSet *__pauseReasons;
}

+ (id)defaultDatabasePath;
+ (id)_defaultDatabaseDirectory;
+ (id)_databasePathInDirectory:(id)arg1;
+ (id)sharedInstance;
+ (id)fetchMemoryUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAlbumUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAssetUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchMemoriesWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAlbumsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAssetsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
@property(readonly, copy, nonatomic) NSCountedSet *_pauseReasons; // @synthesize _pauseReasons=__pauseReasons;
@property(copy, nonatomic, setter=_setInqAfterIndexingDidIterate:) CDUnknownBlockType _inqAfterIndexingDidIterate; // @synthesize _inqAfterIndexingDidIterate=__inqAfterIndexingDidIterate;
@property(getter=_isIndexing, setter=_setIndexing:) _Bool _indexing; // @synthesize _indexing=__indexing;
- (void)_inqResumeIndexingIfNeeded;
- (id)_uuidsToRemoveFromUUIDsToProcess:(id)arg1;
- (_Bool)_inqHasValidSearchIndex;
- (void)_inqEnsurePhotoLibraryExists;
- (void)_inqEnsureSearchProgressExists;
- (void)_inqEnsureSearchMetadataExists;
- (void)_inqEnsureSearchIndexExists;
- (void)_inqCloseIndexIfAbleOrForce:(_Bool)arg1 isDelete:(_Bool)arg2;
- (void)_inqDropClientServerTransactionIfNeeded;
- (void)_inqTakeClientServerTransactionIfNeeded;
- (void)_inqScheduleCloseIndexIfNeeded;
- (_Bool)_removeFileAtPath:(id)arg1 description:(id)arg2;
- (id)_dbMetadataPath;
- (id)_dbPath;
- (id)_oldDbPath;
- (id)_cxindexProgressPath;
- (void)registerSceneTaxonomySHA:(id)arg1;
- (void)applyUpdates:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_updatesEnsuringMutableArraysFromUpdates:(id)arg1;
- (id)_updatesAfterConvertingDetectedFacesToAssetsInUpdates:(id)arg1;
- (id)_updatesAfterConvertingPersonsToAssetsInUpdates:(id)arg1;
- (void)resetSearchIndexWithReason:(long long)arg1 dropCompletion:(CDUnknownBlockType)arg2;
- (void)_inqResetSearchIndexWithReason:(long long)arg1 dropCompletion:(CDUnknownBlockType)arg2;
- (void)dropSearchIndexWithCompletion:(CDUnknownBlockType)arg1;
- (void)closeSearchIndexWithCompletion:(CDUnknownBlockType)arg1;
- (void)ensureSearchIndexExists;
- (void)_inqCloseSearchIndexAndDelete:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_throttleTimerFire:(id)arg1;
- (void)unpauseIndexingWithReason:(id)arg1;
- (void)pauseIndexingWithReason:(id)arg1;
- (void)_setIndexingPaused:(_Bool)arg1 synchronously:(_Bool)arg2 reason:(id)arg3;
- (void)_inqSetIndexingPaused:(_Bool)arg1 reason:(id)arg2;
@property(readonly, getter=isIndexingPaused) _Bool indexingPaused;
- (_Bool)_inqIsIndexingPaused;
- (void)_inqAddUpdatesWithUUIDs:(id)arg1 forKey:(id)arg2;
@property(readonly) unsigned long long enqueuedUUIDsCount;
- (unsigned long long)_inqEnqueuedUUIDsCountForceLoad:(_Bool)arg1;
- (void)_inqEndTrackingUpdateIfNeeded;
- (void)_inqTrackTransitionFromUpdateScheduledToUpdatingIfAble;
- (void)_inqStartTrackingUpdateIfAble;
- (void)_inqEndTrackingRebuildIfNeeded;
- (void)_inqStartTrackingRebuildWithReason:(long long)arg1;
- (void)_localeDidChange:(id)arg1;
- (_Bool)_inqUpdateSceneTaxonomySHA:(id)arg1;
- (_Bool)_inqUpdateLocale;
- (_Bool)_inqUpdateMetadata:(id)arg1 forKey:(id)arg2 logMessage:(id)arg3;
- (void)_onQueueAsyncWithDelay:(double)arg1 perform:(CDUnknownBlockType)arg2;
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;
- (void)_onQueueSync:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSearchIndexDirectory:(id)arg1;

@end

