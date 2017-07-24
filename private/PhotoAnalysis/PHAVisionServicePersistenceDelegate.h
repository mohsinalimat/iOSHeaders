//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PVPersistenceDelegate-Protocol.h>

@class NSString, PHAManager, PHPhotoLibrary;

@interface PHAVisionServicePersistenceDelegate : NSObject <PVPersistenceDelegate>
{
    PHPhotoLibrary *_photoLibrary;
    PHAManager *_photoAnalysisManager;
    unsigned int _activeFaceAlgorithmVersion;
    _Bool _personBuilderMergeCandidatesDisabled;
}

@property _Bool personBuilderMergeCandidatesDisabled; // @synthesize personBuilderMergeCandidatesDisabled=_personBuilderMergeCandidatesDisabled;
@property(nonatomic) unsigned int activeFaceAlgorithmVersion; // @synthesize activeFaceAlgorithmVersion=_activeFaceAlgorithmVersion;
- (void).cxx_destruct;
- (void)logPVDebugMessage:(id)arg1;
- (void)logPVInfoMessage:(id)arg1;
- (void)logPVWarningMessage:(id)arg1;
- (void)logPVErrorMessage:(id)arg1;
- (id)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(id)arg1 faceClusterer:(id)arg2 canceler:(id)arg3 context:(id)arg4 error:(id *)arg5;
- (id)_faceToFaceCountMapForFaces:(id)arg1;
- (id)_representativenessByFaceCSNFromFaces:(id)arg1 canceler:(id)arg2;
- (id)bestRepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 candidateFaces:(id)arg3 canceler:(id)arg4;
- (id)bestRepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 canceler:(id)arg3;
- (_Bool)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(_Bool)arg2 canceler:(id)arg3 error:(id *)arg4;
- (_Bool)_cleanupMergeCandidatesForVerifiedPersons:(id)arg1 inLibrary:(id)arg2 minimumFaceGroupSize:(unsigned long long)arg3 canceler:(id)arg4 error:(id *)arg5;
- (_Bool)cleanupMergeCandidatesWithMinimumFaceGroupSize:(unsigned long long)arg1 canceler:(id)arg2 error:(id *)arg3;
- (void)buildPersonsWithFaceClusterer:(id)arg1 keyFaceUpdateBlock:(CDUnknownBlockType)arg2 canceler:(id)arg3 context:(id)arg4;
- (void)collectPersonBuilderMetrics;
- (void)_buildPersonsFromUpdatedFaceGroups:(id)arg1 faceClusterer:(id)arg2 keyFaceUpdateBlock:(CDUnknownBlockType)arg3 canceler:(id)arg4 context:(id)arg5;
- (void)_updateFaceCSNsToAddByPerson:(id)arg1 faceCSNsToRemoveByPerson:(id)arg2 faceByCSN:(id)arg3 faceCSNsByPersonLocalIdentifier:(id)arg4 faceCSNsByMigratedPersonLocalIdentifier:(id)arg5 personsToUpdate:(id)arg6;
- (id)_duplicateFaceCSNsOnAssetForPerson:(id)arg1 faceCSNsOnPerson:(id)arg2 faceByCSNCache:(id)arg3;
- (_Bool)_completePersonBuildingWithPersonsToUpdate:(id)arg1 facesToRemoveByPerson:(id)arg2 facesToAddByPerson:(id)arg3 updateFaceGroup:(id)arg4 newMergeCandidatePairs:(id)arg5 newInvalidMergeCandidatePairs:(id)arg6 faceByCSN:(id)arg7 personCache:(id)arg8 keyFaceUpdateBlock:(CDUnknownBlockType)arg9 canceler:(id)arg10 context:(id)arg11 error:(id *)arg12;
- (void)_enumeratePersonsWithLocalIdentifiers:(id)arg1 fetchOptions:(id)arg2 personCache:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_getRejectedTrainingFaceCSNs:(id *)arg1 rejectedFaceCSNs:(id *)arg2 forPerson:(id)arg3 faceByCSN:(id)arg4;
- (unsigned long long)_level0ClusterIdForFaceCSN:(unsigned long long)arg1 level0Clusters:(id)arg2;
- (void)_getTrainingFacesByPerson:(id *)arg1 confirmedFaceCSNs:(id *)arg2 faceCSNsByPerson:(id *)arg3 faceCSNsByMigratedPerson:(id *)arg4 mergeCandidates:(id *)arg5 invalidMergeCandidates:(id *)arg6 rejectedPersonsByPerson:(id *)arg7 faceByCSN:(id *)arg8 inFaces:(id)arg9 personCache:(id)arg10 canceler:(id)arg11;
- (void)dedupeGraphVerifiedPersonsInFaceGroup:(id)arg1 personCache:(id)arg2;
- (void)_getMergeCandidates:(id)arg1 invalidMergeCandidates:(id)arg2 forPersonsWithLocalIdentifiers:(id)arg3;
- (id)_updatedFaceGroupByFGLocalIdentifierFromClusterCSNsWithCanceler:(id)arg1 fetchLimit:(unsigned long long)arg2;
- (_Bool)needsPersonBuilding;
- (id)_pvFaceprintForPHFace:(id)arg1;
- (_Bool)recordNeedToPersonBuildOnFaceGroupContainingFace:(id)arg1 error:(id *)arg2;
- (_Bool)deleteEmptyGroupsAndReturnError:(id *)arg1;
- (_Bool)resetLibraryClustersWithCanceler:(id)arg1 error:(id *)arg2;
- (void)_enumerateFetchResult:(id)arg1 withBatchSize:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)persistChangesToAlgorithmicFaceGroups:(id)arg1 faceCSNByLocalIdentifierForNewlyClusteredFaces:(id)arg2 faceCSNsOfUnclusteredFaces:(id)arg3 localIdentifiersOfUnclusteredFaces:(id)arg4 persistenceCompletionBlock:(CDUnknownBlockType)arg5 canceler:(id)arg6 error:(id *)arg7;
- (id)_localIdentifiersOfUnverifiedPersonsAssociatedWithFaceGroups:(id)arg1 withCanceler:(id)arg2;
- (id)_fetchPHFacesForFaceIdentifiers:(id)arg1;
- (_Bool)removeAlgorithmicallyGroupedFacesWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)setKeyFaceOfAlgorithmicFaceGroupToFaceWithClusterSequenceNumbers:(id)arg1 error:(id *)arg2;
- (id)keyFacesFromAlgorithmicGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(_Bool)arg2 error:(id *)arg3;
- (id)localIdentifiersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)facesAlgorithmicallyGroupedWithFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(_Bool)arg2 error:(id *)arg3;
- (id)localIdentifiersOfFacesAlgorithmicallyGroupedWithFacesWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)clusterSequenceNumberForFaceGroupWithLocalIdentifier:(id)arg1;
- (id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)arg1 error:(id *)arg2;
- (id)allAlgorithmicFaceGroups:(id *)arg1;
- (unsigned long long)countOfAlgorithmicFaceGroups;
- (_Bool)removeAutoAssignedFacesFromVerifiedPersonsAndPrepareForPersonBuilding:(id)arg1 canceler:(id)arg2 error:(id *)arg3;
- (id)facesFromFaceGroupWithMostNumberOfFacesOnPerson:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)rejectedFaceClusterSequenceNumbersForPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)rejectedFaceGroupLocalIdentifiersForPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)rejectedUnverifiedPersonLocalIdentifiersForPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)rejectedFaceLocalIdentifiersForPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)rejectedFacesForPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)facesForPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)personsForLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)personWithFaceLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)allPersons:(id *)arg1;
- (id)faceAssociatedWithFaceCrop:(id)arg1;
- (id)associateFace:(id)arg1 withFaceCrop:(id)arg2 error:(id *)arg3;
- (_Bool)clearDirtyStateOnFaceCrops:(id)arg1 error:(id *)arg2;
- (id)dirtyFaceCropsWithLimit:(unsigned long long)arg1;
- (_Bool)hasDirtyFaceCrops;
- (_Bool)persistGeneratedFaceCrops:(id)arg1 error:(id *)arg2;
- (_Bool)updateFaceprint:(id)arg1 ofPersistedFace:(id)arg2 error:(id *)arg3;
- (id)faceprintsByFaceLocalIdentifiers:(id)arg1 version:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)cleanupInconsistentlyClusteredFacesWithCanceler:(id)arg1 error:(id *)arg2;
- (id)_fetchResultForInconsistentlyClusteredFacesInPhotoLibrary:(id)arg1;
- (_Bool)persistFaces:(id)arg1 deleteFaces:(id)arg2 forAsset:(id)arg3 persistedFaces:(id *)arg4 error:(id *)arg5;
- (_Bool)unclusterFaces:(id)arg1 error:(id *)arg2;
- (id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg1 canceler:(id)arg2 error:(id *)arg3;
- (_Bool)resetClusterSequenceNumberOfFacesWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)facesFromAsset:(id)arg1 error:(id *)arg2;
- (id)assetForIdentifier:(id)arg1 error:(id *)arg2;
- (id)unverifiedVisibleFacesFromFaceGroupContainingFacesWithClusterSequenceNumbers:(id)arg1 withFaceprintVersion:(unsigned int)arg2;
- (id)facesForClusteringWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned int)arg2 excludeClustered:(_Bool)arg3;
- (id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned int)arg2;
- (id)unclusteredClusteringEligibleFaceLocalIdentifiers:(id *)arg1;
- (id)faceLocalIdentifiersInFaceGroupWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)facesForFaceLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (unsigned long long)countOfClusteredFacesWithClusterSequenceNumbersInRange:(struct _NSRange)arg1;
- (unsigned long long)countOfClusteredFaces;
- (unsigned long long)countOfUnclusteredClusteringEligibleFaces;
- (unsigned long long)countOfClusteringEligibleFaces;
- (unsigned long long)countOfFaces;
- (id)newUnclusteredClusteringEligibleFacesFetchOptions;
- (id)newUnclusteredFacesFetchPredicate;
- (id)newClusteringEligibleFacesFetchOptions;
- (id)newClusteringEligibleFacesFetchPredicate;
- (id)personsFetchResultWithLocalIdentifiers:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)verifiedPersonsFetchResultWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)fetchPersonWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)fetchPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchFaceWithClusterSequenceNumber:(id)arg1 error:(id *)arg2;
- (id)fetchFaceWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchAssetWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)photoLibrary;
- (id)initWithPhotoAnalysisManager:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

