//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSArray;

@interface PGWeekendMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSArray *_weekendNodes;
}

@property(retain, nonatomic) NSArray *weekendNodes; // @synthesize weekendNodes=_weekendNodes;
- (void).cxx_destruct;
- (id)_potentialMemoriesForDryTesting;
- (id)_collectionNodeForPotentialMemory:(id)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;

@end

