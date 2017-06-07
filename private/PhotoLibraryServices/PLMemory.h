//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLSearchableAssetCollection-Protocol.h>

@class NSData, NSDate, NSDictionary, NSSet, NSString, PLManagedAsset;

@interface PLMemory : PLManagedObject <PLSearchableAssetCollection>
{
    _Bool _needsPersistenceUpdate;
}

+ (void)deleteMemoriesWithObjectIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (void)deletePendingMemoriesCreatedBefore:(id)arg1 inPhotoLibrary:(id)arg2;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1;
+ (id)memoriesWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)memoriesMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)memoriesWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)memoryWithUUID:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)memoriesToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 creationDate:(id)arg5;
+ (id)baseSearchIndexPredicate;
@property(nonatomic) _Bool needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
- (void)removePersistedFileSystemData;
- (void)persistMetadataToFileSystem;
- (_Bool)isValidForPersistence;
- (id)cplMemoryChange;
- (id)updatedKeyAsset;
- (void)updateWithCPLMemoryChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)prepareForDeletion;
- (void)didSave;
- (void)delete;
- (void)willSave;
- (_Bool)isSyncableChange;
- (_Bool)supportsCloudUpload;
- (id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
- (unsigned long long)searchIndexCategory;
- (id)searchIndexContents;

// Remaining properties
@property(retain, nonatomic) NSData *assetListPredicate; // @dynamic assetListPredicate;
@property(nonatomic) short category; // @dynamic category;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSSet *curatedAssets; // @dynamic curatedAssets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool favorite; // @dynamic favorite;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) PLManagedAsset *keyAsset; // @dynamic keyAsset;
@property(retain, nonatomic) NSDate *lastMoviePlayedDate; // @dynamic lastMoviePlayedDate;
@property(retain, nonatomic) NSDate *lastViewedDate; // @dynamic lastViewedDate;
@property(retain, nonatomic) NSDictionary *movieAssetState; // @dynamic movieAssetState;
@property(retain, nonatomic) NSSet *movieCuratedAssets; // @dynamic movieCuratedAssets;
@property(retain, nonatomic) NSData *movieData; // @dynamic movieData;
@property(nonatomic) _Bool pending; // @dynamic pending;
@property(retain, nonatomic) NSData *photosGraphData; // @dynamic photosGraphData;
@property(nonatomic) long long photosGraphVersion; // @dynamic photosGraphVersion;
@property(nonatomic) _Bool rejected; // @dynamic rejected;
@property(retain, nonatomic) NSSet *representativeAssets; // @dynamic representativeAssets;
@property(nonatomic) double score; // @dynamic score;
@property(nonatomic) short subcategory; // @dynamic subcategory;
@property(retain, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) _Bool userCreated; // @dynamic userCreated;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

