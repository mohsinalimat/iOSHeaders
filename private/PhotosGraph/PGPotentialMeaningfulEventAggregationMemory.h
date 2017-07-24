//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, NSSet, NSString;

@interface PGPotentialMeaningfulEventAggregationMemory : PGPotentialMemory
{
    NSMutableSet *_collectionNodes;
    NSMutableSet *_mutableMomentNodes;
    unsigned long long _meaning;
    NSString *_key;
    NSArray *_relevantAssets;
}

@property(retain, nonatomic) NSArray *relevantAssets; // @synthesize relevantAssets=_relevantAssets;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSSet *collectionNodes; // @synthesize collectionNodes=_collectionNodes;
@property(readonly) unsigned long long meaning; // @synthesize meaning=_meaning;
- (void).cxx_destruct;
- (double)score;
- (id)peopleUUIDs;
- (void)addCollectionNode:(id)arg1 controller:(id)arg2;
- (id)initWithMeaning:(unsigned long long)arg1 features:(id)arg2;

@end

