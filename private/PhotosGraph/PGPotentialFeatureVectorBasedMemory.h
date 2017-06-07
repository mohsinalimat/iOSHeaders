//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSDictionary, NSIndexSet, NSSet;

@interface PGPotentialFeatureVectorBasedMemory : PGPotentialMemory
{
    _Bool _isBirthday;
    NSDictionary *_matchingKeywords;
    NSDictionary *_referenceKeywords;
    NSDictionary *_momentKeywords;
    NSSet *_peopleNodes;
    NSIndexSet *_sortedCriteria;
    double _matchingScore;
    double _contentScore;
    double _neighborScore;
}

@property double neighborScore; // @synthesize neighborScore=_neighborScore;
@property double contentScore; // @synthesize contentScore=_contentScore;
@property double matchingScore; // @synthesize matchingScore=_matchingScore;
@property(retain) NSIndexSet *sortedCriteria; // @synthesize sortedCriteria=_sortedCriteria;
@property _Bool isBirthday; // @synthesize isBirthday=_isBirthday;
@property(retain) NSSet *peopleNodes; // @synthesize peopleNodes=_peopleNodes;
@property(retain) NSDictionary *momentKeywords; // @synthesize momentKeywords=_momentKeywords;
@property(retain) NSDictionary *referenceKeywords; // @synthesize referenceKeywords=_referenceKeywords;
@property(retain) NSDictionary *matchingKeywords; // @synthesize matchingKeywords=_matchingKeywords;
- (void).cxx_destruct;

@end

