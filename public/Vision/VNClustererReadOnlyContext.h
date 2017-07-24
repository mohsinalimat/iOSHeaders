//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNClustererContextBase.h>

#import <Vision/VNClustererModelQuerying-Protocol.h>

@protocol VNClusteringReadOnly;

__attribute__((visibility("hidden")))
@interface VNClustererReadOnlyContext : VNClustererContextBase <VNClustererModelQuerying>
{
    id <VNClusteringReadOnly> _clusterer;
}

+ (id)distanceBetweenFacesWithFaceprint:(id)arg1 andFaceprint:(id)arg2 error:(id *)arg3;
+ (id)representativenessForFaces:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)maximumFaceIdInModelAndReturnError:(id *)arg1;
- (id)getDistances:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (id)distanceBetweenLevel1Clusters:(id)arg1 error:(id *)arg2;
- (id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id *)arg3;
- (id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id *)arg2;
- (id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id *)arg2;
- (id)allClusteredFaceIdsAndReturnError:(id *)arg1;
- (_Bool)_createGreedyClustererWith:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 error:(id *)arg5;

@end

