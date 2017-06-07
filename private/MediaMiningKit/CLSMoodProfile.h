//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSProfile.h>

@class CLSMeaningClue;

@interface CLSMoodProfile : CLSProfile
{
    CLSMeaningClue *_mood;
}

+ (id)reductionRulesPath;
+ (id)supportedMeaningClueKeys;
+ (id)profileDependenciesIdentifiers;
+ (id)informantDependenciesIdentifiers;
+ (id)classIdentifier;
@property(retain, nonatomic) CLSMeaningClue *mood; // @synthesize mood=_mood;
- (void).cxx_destruct;
- (id)_bestWordsFromCountedSet:(id)arg1 reverse:(_Bool)arg2;
- (void)processResultsWithReductionForInvestigation:(id)arg1;
- (unsigned long long)moodIdentifier;
- (_Bool)isValid;
- (id)processResultsOperationForInvestigation:(id)arg1;

@end

