//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CVML/CVMLClustering-Protocol.h>

@interface CVMLHierarchicalClustering : NSObject <CVMLClustering>
{
    struct shared_ptr<vision::mod::ClusteringAbstract> m_ClusteringImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)cancelClustering:(id *)arg1;
- (id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (id)getClustersWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)addDescriptorIds:(id)arg1 withSimilarityMatrix:(id)arg2 error:(id *)arg3;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end

