//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSDictionary, NSManagedObjectID, NSMutableArray, NSMutableSet, NSString, PHChangeRequestHelper, PHObjectPlaceholder, PHPerson, PHRelationshipChangeRequestHelper;

@interface PHPersonChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    _Bool _clientEntitled;
    NSString *_clientName;
    int _clientProcessID;
    NSMutableArray *_personUUIDsToMerge;
    NSString *_nominalMergeTargetUUID;
    NSMutableSet *_faceUUIDsRequiringFaceCropGeneration;
    NSMutableSet *_rejectedMergeCandidatePersonUUIDs;
    NSMutableSet *_graphDedupePersonUUIDs;
    PHChangeRequestHelper *_helper;
    PHPerson *_targetPerson;
    NSString *_identifier;
    PHRelationshipChangeRequestHelper *_facesHelper;
    PHRelationshipChangeRequestHelper *_keyFaceHelper;
    PHRelationshipChangeRequestHelper *_rejectedFacesHelper;
    PHRelationshipChangeRequestHelper *_mergeCandidatesHelper;
    PHRelationshipChangeRequestHelper *_invalidMergeCandidatesHelper;
}

+ (id)changeRequestForDedupingGraphPersons:(id)arg1;
+ (id)changeRequestsForMergeCandidatePersons:(id)arg1;
+ (id)changeRequestForMergingPersons:(id)arg1 nominalTargetIdentifier:(id)arg2;
+ (id)changeRequestForMergingPersons:(id)arg1;
+ (_Bool)canGenerateUUIDWithoutEntitlements;
+ (void)deletePersons:(id)arg1;
+ (id)changeRequestForPerson:(id)arg1;
+ (id)creationRequestForPerson;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *invalidMergeCandidatesHelper; // @synthesize invalidMergeCandidatesHelper=_invalidMergeCandidatesHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *mergeCandidatesHelper; // @synthesize mergeCandidatesHelper=_mergeCandidatesHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *rejectedFacesHelper; // @synthesize rejectedFacesHelper=_rejectedFacesHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *keyFaceHelper; // @synthesize keyFaceHelper=_keyFaceHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *facesHelper; // @synthesize facesHelper=_facesHelper;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) PHPerson *targetPerson; // @synthesize targetPerson=_targetPerson;
@property(readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;
@property(readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled; // @synthesize clientEntitled=_clientEntitled;
- (void).cxx_destruct;
- (void)_setGraphDedupePersons:(id)arg1;
- (void)addInvalidMergeCandidatePersons:(id)arg1;
- (void)rejectMergeCandidatePersons:(id)arg1;
- (void)removeMergeCandidatePersons:(id)arg1;
- (void)addMergeCandidatePersons:(id)arg1;
- (void)mergePersons:(id)arg1;
- (void)_setNominalMergeTargetUUID:(id)arg1;
- (void)removeRejectedFaces:(id)arg1;
- (void)addRejectedFaces:(id)arg1;
- (void)addRejectedFaces:(id)arg1 forCluster:(_Bool)arg2;
- (void)setKeyFace:(id)arg1;
- (void)setKeyFace:(id)arg1 forCluster:(_Bool)arg2;
- (void)setKeyFaceForUserPick:(id)arg1;
- (void)_setKeyFace:(id)arg1 forCluster:(_Bool)arg2 pickSource:(short)arg3;
- (void)removeFaces:(id)arg1;
- (void)addFaces:(id)arg1;
- (id)_mutableRequiringFaceCropGenerationFacesUUIDs;
- (id)_mutableInvalidMergeCandidateObjectIDsAndUUIDs;
- (id)_mutableMergeCandidateObjectIDsAndUUIDs;
- (id)_mutableRejectedFacesObjectIDsAndUUIDs;
- (id)_mutableKeyFaceObjectIDsAndUUIDs;
- (id)_mutableFaceObjectIDsAndUUIDs;
- (void)_prepareKeyFaceHelperIfNeeded;
- (id)_existentInvalidMergeCandidateObjectIDs;
- (id)_existentMergeCandidateObjectIDs;
- (id)_noMinimumFaceCountPersonFetchOptions;
- (id)_existentRejectedFaceObjectIDs;
- (id)_existentFaceObjectIDs;
- (id)_existentObjectIDsUsingQuery:(id)arg1;
- (void)didMutate;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, getter=isNew) _Bool new;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)_shouldPromotePerson:(id)arg1 toVerifiedType:(int *)arg2;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)_hasMutationForVerifiedType:(int *)arg1;
- (_Bool)_containsUserMutations;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *managedEntityName;
@property(nonatomic, getter=isVerified) _Bool verified;
@property(nonatomic) short keyFacePickSource;
@property(copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property(nonatomic) long long verifiedType;
@property(nonatomic, getter=isInPersonNamingModel) _Bool inPersonNamingModel;
@property(copy, nonatomic) NSString *personUri;
- (void)setPersonUUID:(id)arg1;
- (id)personUUID;
@property(copy, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) unsigned long long manualOrder;
@property(nonatomic) long long type;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedPerson;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initForNewObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

