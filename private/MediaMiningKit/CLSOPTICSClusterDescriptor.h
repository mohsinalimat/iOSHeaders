//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface CLSOPTICSClusterDescriptor : NSObject
{
    NSNumber *_startIndex;
    NSNumber *_endIndex;
    struct _NSRange _indexRange;
    NSNumber *_clusterSize;
    NSNumber *_rootLevel;
    NSNumber *_minCoreDistanceIndex;
    NSNumber *_minCoreDistance;
    NSNumber *_coreDistance;
}

+ (id)clusterDescriptor:(struct _NSRange)arg1 rootLevel:(long long)arg2 minCoreDistanceIndex:(long long)arg3 minCoreDistance:(double)arg4;
@property(readonly, retain, nonatomic) NSNumber *minCoreDistance; // @synthesize minCoreDistance=_coreDistance;
@property(readonly, retain, nonatomic) NSNumber *minCoreDistanceIndex; // @synthesize minCoreDistanceIndex=_minCoreDistanceIndex;
@property(readonly, retain, nonatomic) NSNumber *rootLevel; // @synthesize rootLevel=_rootLevel;
@property(readonly, retain, nonatomic) NSNumber *clusterSize; // @synthesize clusterSize=_clusterSize;
@property(readonly, retain, nonatomic) NSNumber *endIndex; // @synthesize endIndex=_endIndex;
@property(readonly, retain, nonatomic) NSNumber *startIndex; // @synthesize startIndex=_startIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange indexRange;
- (id)initWithParameters:(struct _NSRange)arg1 rootLevel:(long long)arg2 minCoreDistanceIndex:(long long)arg3 minCoreDistance:(double)arg4;

@end

