//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNRequest.h>

@class NSArray;

@interface VNGetClustersRequest : VNRequest
{
    NSArray *_clusterIDs;
}

- (void).cxx_destruct;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (id)observationsCacheKey;
@property(copy, nonatomic) NSArray *clusterIDs; // @synthesize clusterIDs=_clusterIDs;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

