//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLSyncablePerson-Protocol.h>

@class NSDictionary, NSSet, NSString, PLDetectedFace, PLDetectedFaceGroup;

@interface PLPerson : PLManagedObject <PLSyncablePerson>
{
    _Bool _needsPersistenceUpdate;
}

+ (id)_stringFromContact:(id)arg1 preferGivenName:(_Bool)arg2;
+ (id)displayNameFromContact:(id)arg1;
+ (id)fullNameFromContact:(id)arg1;
+ (id)_persistenceUpdateQueue;
+ (id)fetchPersonCountByAssetUUIDForAssetUUIDs:(id)arg1 predicate:(id)arg2 error:(id *)arg3;
+ (void)batchFetchPersonsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)batchFetchPersonUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (void)createAssociatedPersonForFaceGroup:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)createAssociatedPersonForFaceGroup:(id)arg1;
+ (void)deleteAllPersonsInManagedObjectContext:(id)arg1;
+ (id)personsWithPersonUri:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)allPersonsInManagedObjectContext:(id)arg1;
+ (id)personWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)_personsMatchingPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;
+ (id)insertIntoManagedObjectContext:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verified:(_Bool)arg4;
+ (id)insertIntoPhotoLibrary:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verified:(_Bool)arg4;
+ (void)enumerateAssetUUIDsForSearchIndexingWithPersonUUID:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(CDUnknownBlockType)arg3;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1;
+ (id)peopleToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2;
+ (id)peopleWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)listOfSyncedProperties;
@property(nonatomic) _Bool needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
- (void)mergePersons:(id)arg1 nominalTarget:(id)arg2;
- (id)_metadataKeys;
- (id)_optimalMetadataForMergingPersons:(id)arg1;
- (void)removePersistedFileSystemData;
- (void)persistMetadataToFileSystem;
- (_Bool)isValidForPersistence;
- (void)refreshFaceCrops;
- (void)refreshRejectedFaces;
- (void)refreshFaces;
- (id)debugLogDescription;
- (id)mutableFaceCrops;
- (id)mutableRejectedFacesNeedingFaceCrops;
- (id)mutableRejectedFaces;
- (id)mutableFaces;
- (void)didSave;
- (void)willSave;
- (void)prepareForDeletion;
- (_Bool)shouldIndexForSearch;
- (id)cplPersonChange;
- (_Bool)isSyncableChange;
- (_Bool)supportsCloudUpload;

// Remaining properties
@property(retain, nonatomic) PLDetectedFaceGroup *associatedFaceGroup; // @dynamic associatedFaceGroup;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(retain, nonatomic) NSDictionary *contactMatchingDictionary; // @dynamic contactMatchingDictionary;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSSet *detectedFaces; // @dynamic detectedFaces;
@property(retain, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly, nonatomic) int faceCount; // @dynamic faceCount;
@property(retain, nonatomic) NSSet *faceCrops; // @dynamic faceCrops;
@property(retain, nonatomic) NSString *fullName; // @dynamic fullName;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool inPersonNamingModel; // @dynamic inPersonNamingModel;
@property(retain, nonatomic) PLDetectedFace *keyFace; // @dynamic keyFace;
@property(nonatomic) int manualOrder; // @dynamic manualOrder;
@property(retain, nonatomic) NSSet *personReferences; // @dynamic personReferences;
@property(retain, nonatomic) NSString *personUUID; // @dynamic personUUID;
@property(retain, nonatomic) NSString *personUri; // @dynamic personUri;
@property(retain, nonatomic) NSSet *rejectedFaces; // @dynamic rejectedFaces;
@property(retain, nonatomic) NSSet *rejectedFacesNeedingFaceCrops; // @dynamic rejectedFacesNeedingFaceCrops;
@property(readonly) Class superclass;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) _Bool verified; // @dynamic verified;

@end

