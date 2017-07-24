//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/CSSearchableIndexDelegate-Protocol.h>
#import <Message/MFDiagnosticsGenerator-Protocol.h>
#import <Message/MFLibrarySearchableIndexVerifierDataSource-Protocol.h>

@class CSSearchableIndex, MFCancelationToken, MFCoalescer, MFLazyCache, MFWeakSet, NSMutableArray, NSMutableSet, NSString, _MFLibrarySearchableIndexBudgetConfiguration, _MFLibrarySearchableIndexPendingRemovals;
@protocol MFLibrarySearchableIndexDataSource, MFScheduler, OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

@interface MFLibrarySearchableIndex : NSObject <MFDiagnosticsGenerator, CSSearchableIndexDelegate, MFLibrarySearchableIndexVerifierDataSource>
{
    NSString *_indexName;
    MFCancelationToken *_cancelationToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_coalescingTimer;
    long long _resumeCount;
    long long _transaction;
    unsigned long long _throttledIndexingBatchSize;
    unsigned long long _throttledDataSourceBatchSize;
    unsigned long long _currentMaximumBatchSize;
    MFCoalescer *_budgetCoalescer;
    double _remainingIndexingBudget;
    long long _remainingIndexingBudgetOverage;
    NSObject<OS_os_activity> *_batchIndexingActivity;
    NSMutableArray *_pendingItems;
    NSMutableSet *_pendingDomainRemovals;
    _MFLibrarySearchableIndexPendingRemovals *_pendingIdentifierRemovals;
    NSObject<OS_dispatch_queue> *_indexingQueue;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    id <MFScheduler> _indexingBatchScheduler;
    MFLazyCache *_searchResultsCache;
    MFWeakSet *_middleware;
    _Bool _isForeground;
    _Bool _isActive;
    _Bool _needsRefresh;
    _Bool _needsVerification;
    _Bool _clientStateFetched;
    _Bool _coalesceTimerFired;
    _Bool _scheduledProcessing;
    _Bool _scheduledRefresh;
    _Bool _scheduledVerification;
    id <MFLibrarySearchableIndexDataSource> _dataSource;
    _MFLibrarySearchableIndexBudgetConfiguration *_budgetConfiguration;
    CSSearchableIndex *_csIndex;
}

+ (void)_saveLocalClientState:(id)arg1;
+ (id)_localClientState;
+ (id)_localClientStateURL;
@property(retain, nonatomic) CSSearchableIndex *csIndex; // @synthesize csIndex=_csIndex;
@property(readonly, nonatomic) _MFLibrarySearchableIndexBudgetConfiguration *budgetConfiguration; // @synthesize budgetConfiguration=_budgetConfiguration;
@property(nonatomic) id <MFLibrarySearchableIndexDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)identifiersMatchingCriterion:(id)arg1;
- (void)removeAllItems;
- (void)removeItemsForDomainIdentifier:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1 reasons:(id)arg2;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (void)_indexItems:(id)arg1 fromRefresh:(_Bool)arg2;
- (void)indexItems:(id)arg1;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (id)indexedEmptySubjectIdentifers;
- (id)requestSpotlightDiagnosticsForMessageRowId:(id)arg1;
- (void)_processSpotlightVerificationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_processRefreshRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_processIdentifierRemovals:(id)arg1;
- (id)_processDomainRemovals:(id)arg1;
- (void)_processIndexingBatch:(id)arg1 clientState:(id)arg2;
- (void)_getDomainRemovals:(id *)arg1 identifierRemovals:(id *)arg2;
- (id)_consumeBatchOfSize:(unsigned long long)arg1;
- (void)_logIndexingPowerEventWithIdentifier:(id)arg1 additionalEventData:(id)arg2 usePersistentLog:(_Bool)arg3;
- (void)_scheduleDataSourceRefresh;
- (void)_scheduleProcessPendingItems;
- (void)_queueTransitionActive:(_Bool)arg1;
- (void)_queueRefresh;
- (void)_queueConsumeBudgetItemCount:(unsigned long long)arg1;
- (void)_queueConsumeBudgetElapsedPeriod:(double)arg1;
- (void)_transitionWithBudgetTimeUsed:(double)arg1;
- (void)_coalescingTimerFired;
- (void)_stopCoalescingTimer;
- (void)_startCoalescingTimer;
- (id)librarySearchableIndexForSearchableIndexVerifier:(id)arg1;
- (id)dataSamplesForSearchableIndexVerifier:(id)arg1 searchableIndex:(id)arg2;
- (void)_dataSourceVerifyRepresentativeSampleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dataSourceRequestNeededUpdatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dataSourceInvalidateItemsGreaterThanTransaction:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dataSourceAssignTransaction:(long long)arg1 forIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dataSourceAssignTransaction:(long long)arg1 updates:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dataSourceScheduleWork:(CDUnknownBlockType)arg1;
- (void)refresh;
- (void)resume;
- (void)suspend;
- (void)_invalidateCache;
- (long long)_nextTransaction;
@property(readonly, getter=_transaction) long long transaction;
- (void)_noteNeedsLastClientStateFetch;
- (void)_fetchLastClientState;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
@property(nonatomic, getter=_isForeground, setter=_setForeground:) _Bool foreground;
- (double)_throttleRequestedSize:(unsigned long long *)arg1 action:(CDUnknownBlockType)arg2;
- (void)_verifySpotlightIndex;
- (void)_registerDistantFutureSpotlightVerification;
- (void)_scheduleSpotlightVerificationOnIndexingQueueWithCompletion:(CDUnknownBlockType)arg1;
- (void)_scheduleSpotlightVerification;
- (void)setRemainingIndexingBudget:(double)arg1 shouldPersist:(_Bool)arg2;
- (void)_persistRemainingIndexingBudgetValue:(id)arg1;
- (void)_scheduleResetIndexingBudgetTimer;
- (void)_resetIndexingBudgetTimer;
- (double)persistedRemainingIndexingBudget;
- (id)_budgetPersistenceKey;
- (void)_powerStateChanged;
@property(readonly, nonatomic) unsigned long long pendingIndexItemsCount;
- (id)copyDiagnosticInformation;
- (void)addMiddleware:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

