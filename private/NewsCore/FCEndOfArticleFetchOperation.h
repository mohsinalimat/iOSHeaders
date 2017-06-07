//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFetchOperation.h>

@class FCCloudContext, FCFeedTransformationEndOfArticle, FCFeedTransformationPersonalizedSort, FCHeadline;
@protocol FCFeedPersonalizing;

@interface FCEndOfArticleFetchOperation : FCFetchOperation
{
    _Bool _fetchAllTopics;
    _Bool _fetchPublisherHeadlines;
    _Bool _fetchRelatedHeadlines;
    unsigned long long _minimumPublisherHeadlineCount;
    unsigned long long _minimumRelatedHeadlineCount;
    unsigned long long _totalPublisherHeadlineCount;
    unsigned long long _totalRelatedHeadlineCount;
    FCCloudContext *_context;
    id <FCFeedPersonalizing> _feedPersonalizer;
    FCHeadline *_headline;
    FCFeedTransformationPersonalizedSort *_personalizationTransform;
    FCFeedTransformationEndOfArticle *_endOfArticleTransform;
}

@property(retain, nonatomic) FCFeedTransformationEndOfArticle *endOfArticleTransform; // @synthesize endOfArticleTransform=_endOfArticleTransform;
@property(retain, nonatomic) FCFeedTransformationPersonalizedSort *personalizationTransform; // @synthesize personalizationTransform=_personalizationTransform;
@property(retain, nonatomic) FCHeadline *headline; // @synthesize headline=_headline;
@property(retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property unsigned long long totalRelatedHeadlineCount; // @synthesize totalRelatedHeadlineCount=_totalRelatedHeadlineCount;
@property unsigned long long totalPublisherHeadlineCount; // @synthesize totalPublisherHeadlineCount=_totalPublisherHeadlineCount;
@property unsigned long long minimumRelatedHeadlineCount; // @synthesize minimumRelatedHeadlineCount=_minimumRelatedHeadlineCount;
@property unsigned long long minimumPublisherHeadlineCount; // @synthesize minimumPublisherHeadlineCount=_minimumPublisherHeadlineCount;
@property _Bool fetchRelatedHeadlines; // @synthesize fetchRelatedHeadlines=_fetchRelatedHeadlines;
@property _Bool fetchPublisherHeadlines; // @synthesize fetchPublisherHeadlines=_fetchPublisherHeadlines;
@property _Bool fetchAllTopics; // @synthesize fetchAllTopics=_fetchAllTopics;
- (void).cxx_destruct;
- (void)_streamingHeadlinesForArticleIDs:(id)arg1 callbackQueue:(id)arg2 minimumResultCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_streamingHeadlinesForFeedItems:(id)arg1 tagsByID:(id)arg2;
- (void)_fetchThumbnailsForHeadlines:(id)arg1 callbackQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_filterHeadlines:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performOperation;
- (void)prepareOperation;
- (id)initWithContext:(id)arg1 headline:(id)arg2;

@end

