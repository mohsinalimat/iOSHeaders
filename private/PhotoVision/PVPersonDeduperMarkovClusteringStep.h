//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoVision/PVPersonDeduperStep.h>

__attribute__((visibility("hidden")))
@interface PVPersonDeduperMarkovClusteringStep : PVPersonDeduperStep
{
}

+ (id)markovClustering:(id)arg1 withDistanceBlock:(CDUnknownBlockType)arg2;
- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (id)name;

@end

