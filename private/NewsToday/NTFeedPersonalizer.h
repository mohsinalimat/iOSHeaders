//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/FCFeedPersonalizing-Protocol.h>

@class FCKeyValueStore, FCPersonalizationTreatment, NSString;
@protocol FCTodayPrivateData, FRReadonlyPersonalizationAggregateStore, FRRingBufferContainer;

@interface NTFeedPersonalizer : NSObject <FCFeedPersonalizing>
{
    FCPersonalizationTreatment *_personalizationTreatment;
    id <FRReadonlyPersonalizationAggregateStore> _readonlyPersonalizationAggregateStore;
    double _articleDiversificationSimilarityExpectationStart;
    double _articleDiversificationSimilarityExpectationEnd;
    double _articleDiversificationUniquePublisherExpectationSlope;
    double _articleDiversificationUniquePublisherExpectationYIntercept;
    id <FCTodayPrivateData> _todayData;
    id <FRRingBufferContainer> _globalScoresRingBufferContainer;
    FCKeyValueStore *_globalScoreRangesValueStore;
}

@property(retain, nonatomic) FCKeyValueStore *globalScoreRangesValueStore; // @synthesize globalScoreRangesValueStore=_globalScoreRangesValueStore;
@property(retain, nonatomic) id <FRRingBufferContainer> globalScoresRingBufferContainer; // @synthesize globalScoresRingBufferContainer=_globalScoresRingBufferContainer;
@property(copy, nonatomic) id <FCTodayPrivateData> todayData; // @synthesize todayData=_todayData;
@property(nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept; // @synthesize articleDiversificationUniquePublisherExpectationYIntercept=_articleDiversificationUniquePublisherExpectationYIntercept;
@property(nonatomic) double articleDiversificationUniquePublisherExpectationSlope; // @synthesize articleDiversificationUniquePublisherExpectationSlope=_articleDiversificationUniquePublisherExpectationSlope;
@property(nonatomic) double articleDiversificationSimilarityExpectationEnd; // @synthesize articleDiversificationSimilarityExpectationEnd=_articleDiversificationSimilarityExpectationEnd;
@property(nonatomic) double articleDiversificationSimilarityExpectationStart; // @synthesize articleDiversificationSimilarityExpectationStart=_articleDiversificationSimilarityExpectationStart;
@property(retain, nonatomic) id <FRReadonlyPersonalizationAggregateStore> readonlyPersonalizationAggregateStore; // @synthesize readonlyPersonalizationAggregateStore=_readonlyPersonalizationAggregateStore;
@property(copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment; // @synthesize personalizationTreatment=_personalizationTreatment;
- (void).cxx_destruct;
- (id)limitArticlesByMinimumArticleQuality:(id)arg1;
- (unsigned long long)whitelistLevelForTagID:(id)arg1;
- (id)scoresForTagIDs:(id)arg1;
- (id)rankTagIDsDescending:(id)arg1;
- (id)limitArticlesByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
- (id)diversifyArticles:(id)arg1 limit:(unsigned long long)arg2;
- (id)sortArticles:(id)arg1;
- (id)sortArticles:(id)arg1 options:(long long)arg2;
- (void)prepareAutoFavoritesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareForUseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPersonalizationTreatment:(id)arg1 readonlyPersonalizationAggregateStore:(id)arg2 articleDiversificationSimilarityExpectationStart:(double)arg3 articleDiversificationSimilarityExpectationEnd:(double)arg4 articleDiversificationUniquePublisherExpectationSlope:(double)arg5 articleDiversificationUniquePublisherExpectationYIntercept:(double)arg6 todayData:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

