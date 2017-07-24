//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGEarlyMomentsWithPeopleMemoryGenerator : PGMemoryGenerator
{
    _Bool _shouldGenerateAllMemories;
    NSDate *_localDate;
}

+ (id)earlyMomentsByPeopleNodes:(id)arg1;
+ (unsigned long long)numberOfPotentialMemoriesForGraph:(id)arg1;
@property(nonatomic) _Bool shouldGenerateAllMemories; // @synthesize shouldGenerateAllMemories=_shouldGenerateAllMemories;
@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
- (void).cxx_destruct;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateEarlyMomentsWithPeopleForLocalDate:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;

@end

