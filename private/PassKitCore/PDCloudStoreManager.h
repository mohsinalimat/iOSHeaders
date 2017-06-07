//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CKContainer, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, PDCloudStoreDataSource, PDCloudStoreManagerDelegate;

@interface PDCloudStoreManager : NSObject
{
    CKContainer *_container;
    NSMutableDictionary *_subscriptionsByIdentifier;
    NSMutableDictionary *_zonesByName;
    NSMutableDictionary *_changeTokensByZoneID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_retryTimer;
    unsigned long long _nextExpectedState;
    long long _suspendCount;
    _Bool _resettingCloudStore;
    id <PDCloudStoreDataSource> _dataSource;
    NSString *_archivePath;
    id <PDCloudStoreManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <PDCloudStoreManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
@property(readonly, nonatomic) id <PDCloudStoreDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_addOperation:(id)arg1;
- (void)_stopFetchRetryTimer;
- (void)_startFetchRetryTimerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_resetZonesByName;
- (void)_resetSubscriptionsByIdentifier;
- (void)_resetChangeTokens;
- (void)_subscriptionOperationWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_deleteAllZoneSubscriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_createZoneSubscriptionWithIdentifier:(id)arg1 forZone:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchAllSubscriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_zoneOperationWithZonesToSave:(id)arg1 zonesIDsToDelete:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_deleteAllZonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_createZone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchRecordZonesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_zoneForCloudStoreCodingItemClass:(Class)arg1;
- (void)_modifyRecordsOperationWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cloudStoreAccountInformationWithCompletion:(CDUnknownBlockType)arg1;
- (id)_parseItemFromRecord:(id)arg1;
- (id)_passUniqueIdentifierForRecord:(id)arg1 transactionType:(long long)arg2;
- (id)_serverChangeTokenFromArchiveData:(id)arg1;
- (id)_cachedServerChangeTokens;
- (void)_saveServerChangeTokens;
- (void)_retryContainerStateWithError:(id)arg1 retryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 retryCount:(unsigned long long)arg3 shouldRetry:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_setContainerState:(unsigned long long)arg1 retryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setContainerState:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setContainerState:(unsigned long long)arg1;
- (_Bool)_ensureState:(unsigned long long)arg1;
- (void)_detachFromContainer;
- (void)_attachToContainer;
- (void)_cloudStoreAccountChanged:(id)arg1;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (void)initalCloudDatabaseSetupWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAndStoreChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)allItemsOfClassType:(Class)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDataSource:(id)arg1;
- (id)init;

@end
