//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _CPResultRankingFeedback, _CPResultSectionForFeedback;

@protocol _CPSectionRankingFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasPersonalizationScore;
@property(nonatomic) double personalizationScore;
@property(readonly, nonatomic) _Bool hasLocalSectionPosition;
@property(nonatomic) unsigned int localSectionPosition;
@property(readonly, nonatomic) _Bool hasSection;
@property(retain, nonatomic) _CPResultSectionForFeedback *section;
@property(copy, nonatomic) NSArray *results;
@property(readonly, nonatomic) _Bool hasTimestamp;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPResultRankingFeedback *)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)addResults:(_CPResultRankingFeedback *)arg1;
- (void)clearResults;
@end

