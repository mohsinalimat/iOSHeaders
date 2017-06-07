//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCForYouGroupsConfiguration : NSObject
{
    NSString *_configuration;
    unsigned long long _topStoriesPosition;
    unsigned long long _topStoriesPrecedingGroupsCount;
    unsigned long long _trendingStoriesPosition;
    unsigned long long _trendingStoriesPrecedingGroupsCount;
    unsigned long long _coverArticlesPosition;
    unsigned long long _coverArticlesPrecedingGroupsCount;
    unsigned long long _editorialPosition;
    unsigned long long _editorialPrecedingGroupsCount;
    double _weekendGreatStoriesYouMissedTimeRange;
}

@property(readonly, nonatomic) double weekendGreatStoriesYouMissedTimeRange; // @synthesize weekendGreatStoriesYouMissedTimeRange=_weekendGreatStoriesYouMissedTimeRange;
@property(readonly, nonatomic) unsigned long long editorialPrecedingGroupsCount; // @synthesize editorialPrecedingGroupsCount=_editorialPrecedingGroupsCount;
@property(readonly, nonatomic) unsigned long long editorialPosition; // @synthesize editorialPosition=_editorialPosition;
@property(readonly, nonatomic) unsigned long long coverArticlesPrecedingGroupsCount; // @synthesize coverArticlesPrecedingGroupsCount=_coverArticlesPrecedingGroupsCount;
@property(readonly, nonatomic) unsigned long long coverArticlesPosition; // @synthesize coverArticlesPosition=_coverArticlesPosition;
@property(readonly, nonatomic) unsigned long long trendingStoriesPrecedingGroupsCount; // @synthesize trendingStoriesPrecedingGroupsCount=_trendingStoriesPrecedingGroupsCount;
@property(readonly, nonatomic) unsigned long long trendingStoriesPosition; // @synthesize trendingStoriesPosition=_trendingStoriesPosition;
@property(readonly, nonatomic) unsigned long long topStoriesPrecedingGroupsCount; // @synthesize topStoriesPrecedingGroupsCount=_topStoriesPrecedingGroupsCount;
@property(readonly, nonatomic) unsigned long long topStoriesPosition; // @synthesize topStoriesPosition=_topStoriesPosition;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithJSONConfiguration:(id)arg1;

@end

