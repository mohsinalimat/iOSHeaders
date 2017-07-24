//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCPrivateDataController.h>

@class FCMTWriterMutexLock, NSMutableDictionary, NSSet;

@interface FCReadingHistory : FCPrivateDataController
{
    NSMutableDictionary *_itemsByIdentifier;
    NSMutableDictionary *_itemsByArticleID;
    FCMTWriterMutexLock *_itemsLock;
}

+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)localStoreMigrator;
+ (void)populateLocalStoreClassRegistry:(id)arg1;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (_Bool)requiresHighPriorityFirstSync;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresPushNotificationSupport;
+ (id)desiredKeys;
@property(retain, nonatomic) FCMTWriterMutexLock *itemsLock; // @synthesize itemsLock=_itemsLock;
@property(retain, nonatomic) NSMutableDictionary *itemsByArticleID; // @synthesize itemsByArticleID=_itemsByArticleID;
@property(retain, nonatomic) NSMutableDictionary *itemsByIdentifier; // @synthesize itemsByIdentifier=_itemsByIdentifier;
- (void).cxx_destruct;
- (void)_removeHistoryItemWithItemID:(id)arg1 articleID:(id)arg2;
- (void)_addHistoryItems:(id)arg1 addToStore:(_Bool)arg2;
- (void)_modifyHistoryForArticleID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_readingHistoryItemForArticleID:(id)arg1;
- (void)clearHistory;
- (void)removeArticleFromHistory:(id)arg1;
- (void)markArticleAsReadWithHeadline:(id)arg1;
- (void)markArticleAsReadWithHeadline:(id)arg1 fromGroupType:(long long)arg2 swipedToArticle:(_Bool)arg3 onScreenChecker:(CDUnknownBlockType)arg4;
- (_Bool)markArticleAsReadWithArticleID:(id)arg1 articleVersion:(long long)arg2 readDate:(id)arg3;
- (void)markArticle:(id)arg1 asArticleConsumed:(_Bool)arg2;
- (_Bool)toggleArticleHasBeenConsumed:(id)arg1;
- (_Bool)hasArticleBeenConsumed:(id)arg1;
- (void)markArticle:(id)arg1 asOffensive:(_Bool)arg2;
- (_Bool)toggleArticleHasBeenMarkedAsOffensive:(id)arg1;
- (_Bool)hasArticleBeenMarkedAsOffensive:(id)arg1;
- (_Bool)markArticle:(id)arg1 withLikingStatus:(unsigned long long)arg2;
- (unsigned long long)likingStatusForArticleID:(id)arg1;
- (_Bool)_markArticleAsSeenWithArticleID:(id)arg1 articleVersion:(long long)arg2 historyItem:(id)arg3 modifiedHistoryFeaturesOut:(unsigned long long *)arg4;
- (_Bool)_markArticleAsSeenWithHeadline:(id)arg1 historyItem:(id)arg2 modifiedHistoryFeaturesOut:(unsigned long long *)arg3;
- (_Bool)markArticleAsSeenWithHeadline:(id)arg1;
- (_Bool)hasArticleBeenSeen:(id)arg1;
- (_Bool)hasArticleBeenVisited:(id)arg1;
- (_Bool)hasArticleBeenRead:(id)arg1;
- (id)lastVisitedDateForArticleID:(id)arg1;
- (id)allReadingHistoryItems;
@property(readonly, nonatomic) NSSet *allConsumedArticleIDs;
@property(readonly, nonatomic) NSSet *allSeenArticleIDs;
@property(readonly, nonatomic) NSSet *allReadArticleIDs;
- (id)_sortedReadingHistoryItemsWithMaxCount:(unsigned long long)arg1;
- (id)allSortedArticleIDsInReadingHistory;
- (id)mostRecentlyReadArticlesWithMaxCount:(unsigned long long)arg1;
- (id)historyItemsForArticleIDs:(id)arg1;
- (id)pruneRecords:(id)arg1 forZoneName:(id)arg2;
- (_Bool)canHelpPruneZoneName:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (void)loadLocalCachesFromStore;
- (id)syncReadingHistoryItemRecords:(id)arg1 didRemoveLastVisitedAt:(out _Bool *)arg2;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;

@end

