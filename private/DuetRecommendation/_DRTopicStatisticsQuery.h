//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKQuery.h>

#import <DuetRecommendation/_DKExecutableQuery-Protocol.h>

@class NSObject, NSPredicate, _DRTopicInterestSummary;
@protocol OS_dispatch_queue;

@interface _DRTopicStatisticsQuery : _DKQuery <_DKExecutableQuery>
{
    NSObject<OS_dispatch_queue> *_defaultQueue;
    NSPredicate *_predicate;
    _DRTopicInterestSummary *_summary;
}

+ (id)sumExpression;
+ (id)countExpression;
+ (id)topicStatisticsQueryWithFilter:(id)arg1;
+ (id)topicStatisticsQuery;
@property(retain) _DRTopicInterestSummary *summary; // @synthesize summary=_summary;
- (void).cxx_destruct;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (void)clearSummary;
- (id)initWithPredicate:(id)arg1;

@end

