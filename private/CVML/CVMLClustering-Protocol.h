//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CVMLSimilarityMatrix, NSArray, NSData, NSDictionary, NSNumber, NSSet;

@protocol CVMLClustering
- (NSArray *)suggestionsForClusterIdsWithFlags:(NSDictionary *)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (NSArray *)suggestionsForClusterIds:(NSArray *)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (NSArray *)getClustersWithOptions:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)addDescriptorIds:(NSArray *)arg1 withSimilarityMatrix:(CVMLSimilarityMatrix *)arg2 error:(id *)arg3;

@optional
- (NSDictionary *)getDistances:(NSArray *)arg1 to:(NSArray *)arg2;
- (NSArray *)getClustersForClusterIds:(NSArray *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (NSDictionary *)getRepresentativenessForFaces:(NSArray *)arg1 error:(id *)arg2;
- (NSDictionary *)getDistanceBetweenLevel1Clusters:(NSArray *)arg1;
- (NSNumber *)getDistanceBetweenLevel0ClustersWithFaceIds:(NSArray *)arg1;
- (NSArray *)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(NSNumber *)arg1;
- (NSSet *)getClusteredIds;
- (NSData *)getClusterState:(id *)arg1;
- (NSArray *)refinedSuggestionsForClusterIds:(NSArray *)arg1 fromClusters:(NSArray *)arg2 affinityThreshold:(float)arg3 error:(id *)arg4;
- (_Bool)cancelClustering:(id *)arg1;
@end

