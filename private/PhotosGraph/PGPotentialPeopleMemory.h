//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, PGGraphNode;

@interface PGPotentialPeopleMemory : PGPotentialMemory
{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_peopleNode;
    long long _year;
    NSArray *_facedAssets;
}

@property(retain) NSArray *facedAssets; // @synthesize facedAssets=_facedAssets;
@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphNode *peopleNode; // @synthesize peopleNode=_peopleNode;
- (void).cxx_destruct;
- (void)addMomentNode:(id)arg1;
- (id)initWithSubcategory:(long long)arg1 peopleNode:(id)arg2 year:(long long)arg3;

@end

