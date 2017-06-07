//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSDate, NSObject, PHFetchResult, PXPhotosDetailsContext, PXRelatedDataSource, PXRelatedSettings;
@protocol OS_dispatch_queue;

@interface PXRelatedDataSourceManager : PXSectionedDataSourceManager
{
    _Bool _didStartLoading;
    _Bool _shouldCancelLoading;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PXRelatedSettings *_settings;
    unsigned long long _fetchLimit;
    unsigned long long _initialBatchSize;
    unsigned long long _loadBatchSize;
    NSDate *_loadStartDate;
    _Bool _didLoadInitialDataSource;
    _Bool __canceled;
    unsigned long long __initialBatchSize;
    unsigned long long __loadBatchSize;
    PXPhotosDetailsContext *__context;
    PHFetchResult *__collectionListFetchResult;
    PHFetchResult *__relatedCollections;
    PHFetchResult *__preparedRelatedCollections;
}

@property(retain, nonatomic, setter=_setPreparedRelatedCollections:) PHFetchResult *_preparedRelatedCollections; // @synthesize _preparedRelatedCollections=__preparedRelatedCollections;
@property(retain, nonatomic, setter=_setRelatedCollections:) PHFetchResult *_relatedCollections; // @synthesize _relatedCollections=__relatedCollections;
@property(nonatomic, getter=_isCanceled, setter=_setCanceled:) _Bool _canceled; // @synthesize _canceled=__canceled;
@property(readonly, nonatomic) PHFetchResult *_collectionListFetchResult; // @synthesize _collectionListFetchResult=__collectionListFetchResult;
@property(readonly, nonatomic) PXPhotosDetailsContext *_context; // @synthesize _context=__context;
@property(nonatomic) unsigned long long loadBatchSize; // @synthesize loadBatchSize=__loadBatchSize;
@property(nonatomic) unsigned long long initialBatchSize; // @synthesize initialBatchSize=__initialBatchSize;
- (void).cxx_destruct;
- (id)_referenceAssetForReferenceObject:(id)arg1;
- (id)_keyAssetForRelatedCollection:(id)arg1 referenceAsset:(id)arg2;
- (id)_collectionListRelatedToObject:(id)arg1;
- (id)_referenceObjectFromCollectionListFetchResult:(id)arg1;
- (void)_continueBackgroundLoadWithReferenceObject:(id)arg1 relatedCollections:(id)arg2;
- (id)_collectionsRelatedToReferenceObject:(id)arg1;
- (void)_continueBackgroundLoadWithReferenceObject:(id)arg1 attemptIndex:(long long)arg2;
- (void)_startBackgroundLoad;
- (void)_setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;
- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;
- (void)cancelLoading;
- (void)startLoading;
- (id)initWithPhotosDetailsContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) PXRelatedDataSource *dataSource; // @dynamic dataSource;

@end

