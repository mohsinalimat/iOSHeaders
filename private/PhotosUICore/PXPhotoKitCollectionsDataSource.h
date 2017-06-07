//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXCollectionsDataSource.h>

@class NSArray, NSDictionary;

@interface PXPhotoKitCollectionsDataSource : PXCollectionsDataSource
{
    NSArray *__collectionListBySection;
    NSArray *__collectionsFetchResultBySection;
    NSDictionary *__keyAssetsFetchResultsByCollection;
    NSDictionary *__collectionsIndexPathsByCollection;
    NSArray *__virtualCollections;
}

@property(readonly, nonatomic) NSArray *_virtualCollections; // @synthesize _virtualCollections=__virtualCollections;
@property(readonly, nonatomic) NSDictionary *_collectionsIndexPathsByCollection; // @synthesize _collectionsIndexPathsByCollection=__collectionsIndexPathsByCollection;
@property(readonly, nonatomic) NSDictionary *_keyAssetsFetchResultsByCollection; // @synthesize _keyAssetsFetchResultsByCollection=__keyAssetsFetchResultsByCollection;
@property(readonly, nonatomic) NSArray *_collectionsFetchResultBySection; // @synthesize _collectionsFetchResultBySection=__collectionsFetchResultBySection;
@property(readonly, nonatomic) NSArray *_collectionListBySection; // @synthesize _collectionListBySection=__collectionListBySection;
- (void).cxx_destruct;
- (_Bool)collectionIsScenes:(id)arg1;
- (_Bool)collectionIsPlaces:(id)arg1;
- (_Bool)collectionIsPeople:(id)arg1;
- (_Bool)collectionIsPlaceholderCollection:(id)arg1;
- (_Bool)collectionIsSmartFolder:(id)arg1;
- (_Bool)collectionIsSynced:(id)arg1;
- (_Bool)collectionIsRecentlyDeletedAlbum:(id)arg1;
- (_Bool)collectionIsHiddenAlbum:(id)arg1;
- (_Bool)collectionIsCloudSharedAndOwned:(id)arg1;
- (_Bool)collectionIsCloudShared:(id)arg1;
- (_Bool)collectionIsImports:(id)arg1;
- (_Bool)collectionIsFavoriteMemories:(id)arg1;
- (_Bool)collectionIsEvents:(id)arg1;
- (_Bool)collectionIsFaces:(id)arg1;
- (_Bool)collectionIsStandIn:(id)arg1;
- (_Bool)collectionIsFolder:(id)arg1;
- (void)enumerateCollectionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)collectionListForSection:(long long)arg1;
- (id)collectionAtIndexPath:(id)arg1;
- (id)indexPathForCollection:(id)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)_assetAtSimpleIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)_collectionAtSimpleIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)_collectionListAtSimpleIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)init;
- (id)initWithCollectionListBySection:(id)arg1 collectionsFetchResultBySection:(id)arg2 keyAssetsFetchResultsByCollection:(id)arg3 collectionsIndexPathsByCollection:(id)arg4 virtualCollections:(id)arg5;

@end

