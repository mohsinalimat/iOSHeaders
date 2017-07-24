//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PLSyncContext, PLSyncableAsset;

@interface PLCPLFacePullSupport : NSObject
{
    id <PLSyncContext> _syncContext;
    id <PLSyncableAsset> _currentAsset;
}

+ (id)_disjointSetsByAddingSet:(id)arg1 toSets:(id)arg2;
+ (void)applyFacesChangesFromAssetChange:(id)arg1 toAsset:(id)arg2 inSyncContext:(id)arg3;
- (void)_applyPersonFromFaceReference:(id)arg1 toDetectedFace:(id)arg2;
- (_Bool)_canReassignFaceFromPerson:(id)arg1 toPerson:(id)arg2 shouldDedupePersons:(_Bool *)arg3;
- (void)_unlinkPersonIfVerifiedFromFace:(id)arg1;
- (void)_applyDimensionAndStateFromFaceReference:(id)arg1 toDetectedFace:(id)arg2;
- (void)_finalizeFace:(id)arg1 withFaceRef:(id)arg2 applyDimensionAndState:(_Bool)arg3;
- (id)_createFaceFromFaceRef:(id)arg1 algorithmVersion:(int)arg2;
- (id)_applyAssetChange:(id)arg1 toExistingFaces:(id)arg2 withPolicy:(long long)arg3;
- (long long)_policyForApplyingFaceChangesFromAssetChange:(id)arg1;
- (void)applyFacesChangesFromAssetChange:(id)arg1;
- (void)dealloc;
- (id)initWithSyncContext:(id)arg1 asset:(id)arg2;

@end

