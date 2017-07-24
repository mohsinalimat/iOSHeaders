//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCHeadlineClusteringRules, FCSolTagID, NSMutableSet, NSSet;

@interface FCSolArticleGroup : NSObject
{
    FCSolTagID *_tagId;
    NSSet *_articles;
    double _personalizationScore;
    FCHeadlineClusteringRules *_rules;
    NSMutableSet *_topArticles;
    NSMutableSet *_orphans;
    double _score;
    double _heuristicScore;
}

+ (id)predictBestGroup:(id)arg1 ungroupedArticles:(id)arg2 ungroupedTags:(id)arg3 articlesByTag:(id)arg4 heuristic:(id)arg5 autoFavoriteHeuristic:(id)arg6;
@property(nonatomic) double heuristicScore; // @synthesize heuristicScore=_heuristicScore;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) NSMutableSet *orphans; // @synthesize orphans=_orphans;
@property(readonly, nonatomic) NSMutableSet *topArticles; // @synthesize topArticles=_topArticles;
@property(retain, nonatomic) FCHeadlineClusteringRules *rules; // @synthesize rules=_rules;
@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(retain, nonatomic) NSSet *articles; // @synthesize articles=_articles;
@property(retain, nonatomic) FCSolTagID *tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;
- (void)computeTopArticlesAndScore;
- (id)initWithTagId:(id)arg1 personalizationScore:(double)arg2 articles:(id)arg3 rules:(id)arg4;

@end

