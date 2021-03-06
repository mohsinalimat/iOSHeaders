//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class NSArray, NSDictionary, SFRankingFeedback;

@interface NTCatchUpOperationResults : NSObject <NSCopying>
{
    NSArray *_headlines;
    NSDictionary *_headlineCacheExpirationDatesByArticleID;
    NSDictionary *_searchResultsByArticleID;
    SFRankingFeedback *_rankingFeedback;
}

@property(copy, nonatomic) SFRankingFeedback *rankingFeedback; // @synthesize rankingFeedback=_rankingFeedback;
@property(copy, nonatomic) NSDictionary *searchResultsByArticleID; // @synthesize searchResultsByArticleID=_searchResultsByArticleID;
@property(copy, nonatomic) NSDictionary *headlineCacheExpirationDatesByArticleID; // @synthesize headlineCacheExpirationDatesByArticleID=_headlineCacheExpirationDatesByArticleID;
@property(copy, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
- (void).cxx_destruct;
- (id)resultsByCombiningWithResults:(id)arg1;
- (id)copyWithHeadlines:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeadlines:(id)arg1 headlineCacheExpirationDatesByArticleID:(id)arg2 searchResultsByArticleID:(id)arg3 rankingFeedback:(id)arg4;
- (id)initWithHeadlines:(id)arg1 searchResultsByArticleID:(id)arg2 rankingFeedback:(id)arg3;
- (id)init;

@end

