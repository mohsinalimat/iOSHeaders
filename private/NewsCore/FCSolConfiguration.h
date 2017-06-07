//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCSolConfiguration : NSObject
{
    unsigned long long _maxArticleCombos;
    unsigned long long _heuristicSampleSize;
    unsigned long long _searchBranchMultiplier;
    double _searchBranchDecay;
    double _searchTimeLimit;
    double _tagSizeCoeff;
    double _tagFavoritedCoeff;
    double _tagArticleScoreCoeff;
    double _tagPersonalizationCoeff;
    double _articleEntityScoreWeightRatio;
    double _utilityWeightAlpha;
    double _utilityWeightBeta;
    double _importanceScalar;
    long long _heuristicOption;
}

+ (id)configurationWithTreatment:(id)arg1;
@property(readonly, nonatomic) long long heuristicOption; // @synthesize heuristicOption=_heuristicOption;
@property(readonly, nonatomic) double importanceScalar; // @synthesize importanceScalar=_importanceScalar;
@property(readonly, nonatomic) double utilityWeightBeta; // @synthesize utilityWeightBeta=_utilityWeightBeta;
@property(readonly, nonatomic) double utilityWeightAlpha; // @synthesize utilityWeightAlpha=_utilityWeightAlpha;
@property(readonly, nonatomic) double articleEntityScoreWeightRatio; // @synthesize articleEntityScoreWeightRatio=_articleEntityScoreWeightRatio;
@property(readonly, nonatomic) double tagPersonalizationCoeff; // @synthesize tagPersonalizationCoeff=_tagPersonalizationCoeff;
@property(readonly, nonatomic) double tagArticleScoreCoeff; // @synthesize tagArticleScoreCoeff=_tagArticleScoreCoeff;
@property(readonly, nonatomic) double tagFavoritedCoeff; // @synthesize tagFavoritedCoeff=_tagFavoritedCoeff;
@property(readonly, nonatomic) double tagSizeCoeff; // @synthesize tagSizeCoeff=_tagSizeCoeff;
@property(readonly, nonatomic) double searchTimeLimit; // @synthesize searchTimeLimit=_searchTimeLimit;
@property(readonly, nonatomic) double searchBranchDecay; // @synthesize searchBranchDecay=_searchBranchDecay;
@property(readonly, nonatomic) unsigned long long searchBranchMultiplier; // @synthesize searchBranchMultiplier=_searchBranchMultiplier;
@property(readonly, nonatomic) unsigned long long heuristicSampleSize; // @synthesize heuristicSampleSize=_heuristicSampleSize;
@property(readonly, nonatomic) unsigned long long maxArticleCombos; // @synthesize maxArticleCombos=_maxArticleCombos;
- (id)initWithHeuristicSampleSize:(unsigned long long)arg1 searchBranchMultiplier:(unsigned long long)arg2 searchBranchDecay:(double)arg3 searchTimeLimit:(double)arg4 tagSizeCoeff:(double)arg5 tagFavoritedCoeff:(double)arg6 tagArticleScoreCoeff:(double)arg7 tagPersonalizationCoeff:(double)arg8 articleEntityScoreWeightRatio:(double)arg9 utilityWeightAlpha:(double)arg10 utilityWeightBeta:(double)arg11 importanceScalar:(double)arg12 heuristicOption:(long long)arg13;

@end
