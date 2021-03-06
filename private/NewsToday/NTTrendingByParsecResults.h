//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, SFRankingFeedback;

@interface NTTrendingByParsecResults : NSObject <NSCoding>
{
    NSArray *_articleIDs;
    NSDictionary *_headlineCacheExpirationDatesByArticleID;
    NSDictionary *_searchResultsByArticleID;
    SFRankingFeedback *_rankingFeedback;
    NSDate *_fetchedDate;
}

@property(copy, nonatomic) NSDate *fetchedDate; // @synthesize fetchedDate=_fetchedDate;
@property(copy, nonatomic) SFRankingFeedback *rankingFeedback; // @synthesize rankingFeedback=_rankingFeedback;
@property(copy, nonatomic) NSDictionary *searchResultsByArticleID; // @synthesize searchResultsByArticleID=_searchResultsByArticleID;
@property(copy, nonatomic) NSDictionary *headlineCacheExpirationDatesByArticleID; // @synthesize headlineCacheExpirationDatesByArticleID=_headlineCacheExpirationDatesByArticleID;
@property(copy, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

