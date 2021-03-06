//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSDate, NSDictionary, NSOrderedSet, PARSession, SFRankingFeedback;

@interface NTParsecZKWNewsOperation : FCOperation
{
    PARSession *_session;
    NSDate *_fetchDate;
    NSOrderedSet *_resultSearchResultIDs;
    NSDictionary *_resultSearchResultsBySearchResultID;
    SFRankingFeedback *_resultRankingFeedback;
    CDUnknownBlockType _newsCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType newsCompletionHandler; // @synthesize newsCompletionHandler=_newsCompletionHandler;
@property(copy, nonatomic) SFRankingFeedback *resultRankingFeedback; // @synthesize resultRankingFeedback=_resultRankingFeedback;
@property(copy, nonatomic) NSDictionary *resultSearchResultsBySearchResultID; // @synthesize resultSearchResultsBySearchResultID=_resultSearchResultsBySearchResultID;
@property(copy, nonatomic) NSOrderedSet *resultSearchResultIDs; // @synthesize resultSearchResultIDs=_resultSearchResultIDs;
@property(copy, nonatomic) NSDate *fetchDate; // @synthesize fetchDate=_fetchDate;
@property(retain, nonatomic) PARSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setTimeoutDuration:(double)arg1;
- (_Bool)validateOperation;
- (id)init;

@end

