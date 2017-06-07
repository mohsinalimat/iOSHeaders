//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSSet;

@interface PGFeatureVectorBasedMemoryGenerator : PGMemoryGenerator
{
    NSSet *_featureVectors;
    unsigned long long _relatedType;
    unsigned long long _memoryCategory;
    long long _memorySubcategory;
    double _minimumPeopleMatchingScore;
    double _maximumLocationMatchingDistance;
    double _minimumLocationMatchingScore;
}

@property(nonatomic) double minimumLocationMatchingScore; // @synthesize minimumLocationMatchingScore=_minimumLocationMatchingScore;
@property(nonatomic) double maximumLocationMatchingDistance; // @synthesize maximumLocationMatchingDistance=_maximumLocationMatchingDistance;
@property(nonatomic) double minimumPeopleMatchingScore; // @synthesize minimumPeopleMatchingScore=_minimumPeopleMatchingScore;
@property(nonatomic) long long memorySubcategory; // @synthesize memorySubcategory=_memorySubcategory;
@property(nonatomic) unsigned long long memoryCategory; // @synthesize memoryCategory=_memoryCategory;
@property(nonatomic) unsigned long long relatedType; // @synthesize relatedType=_relatedType;
@property(retain, nonatomic) NSSet *featureVectors; // @synthesize featureVectors=_featureVectors;
- (void).cxx_destruct;
- (unsigned long long)_postProcessMatch:(id)arg1;
- (id)generateMemories:(unsigned long long)arg1;
- (id)initWithController:(id)arg1;

@end

