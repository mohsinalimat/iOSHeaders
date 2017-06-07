//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBSearchExecute : PBCodable <NSCopying>
{
    NSString *_campaignId;
    NSString *_campaignType;
    NSMutableArray *_channelResultFeedIds;
    NSString *_creativeId;
    int _searchExecutionMethod;
    int _searchLocation;
    NSString *_searchString;
    NSString *_storeFrontId;
    NSString *_topResultFeedId;
    NSMutableArray *_topicResultFeedIds;
    int _totalResults;
    struct {
        unsigned int searchExecutionMethod:1;
        unsigned int searchLocation:1;
        unsigned int totalResults:1;
    } _has;
}

+ (Class)channelResultFeedIdsType;
+ (Class)topicResultFeedIdsType;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *storeFrontId; // @synthesize storeFrontId=_storeFrontId;
@property(retain, nonatomic) NSMutableArray *channelResultFeedIds; // @synthesize channelResultFeedIds=_channelResultFeedIds;
@property(retain, nonatomic) NSMutableArray *topicResultFeedIds; // @synthesize topicResultFeedIds=_topicResultFeedIds;
@property(retain, nonatomic) NSString *topResultFeedId; // @synthesize topResultFeedId=_topResultFeedId;
@property(nonatomic) int totalResults; // @synthesize totalResults=_totalResults;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCreativeId;
@property(readonly, nonatomic) _Bool hasCampaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
@property(readonly, nonatomic) _Bool hasStoreFrontId;
- (id)channelResultFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelResultFeedIdsCount;
- (void)addChannelResultFeedIds:(id)arg1;
- (void)clearChannelResultFeedIds;
- (id)topicResultFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicResultFeedIdsCount;
- (void)addTopicResultFeedIds:(id)arg1;
- (void)clearTopicResultFeedIds;
@property(readonly, nonatomic) _Bool hasTopResultFeedId;
@property(nonatomic) _Bool hasTotalResults;
- (int)StringAsSearchExecutionMethod:(id)arg1;
- (id)searchExecutionMethodAsString:(int)arg1;
@property(nonatomic) _Bool hasSearchExecutionMethod;
@property(nonatomic) int searchExecutionMethod; // @synthesize searchExecutionMethod=_searchExecutionMethod;
- (int)StringAsSearchLocation:(id)arg1;
- (id)searchLocationAsString:(int)arg1;
@property(nonatomic) _Bool hasSearchLocation;
@property(nonatomic) int searchLocation; // @synthesize searchLocation=_searchLocation;
@property(readonly, nonatomic) _Bool hasSearchString;

@end

