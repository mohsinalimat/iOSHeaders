//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NTPBGroupViewExposure : PBCodable <NSCopying>
{
    int _feedAutoSubscribeType;
    NSData *_feedViewExposureId;
    int _groupArticleCountInForYou;
    int _groupDisplayRankInForYou;
    NSString *_groupFeedId;
    int _groupFormationReason;
    int _groupPresentationReason;
    int _groupType;
    NSMutableArray *_groupedArticleIds;
    int _topStoryMandatoryArticleCount;
    int _topStoryOptionalArticleCount;
    _Bool _isSubscribedToGroupFeed;
    struct {
        unsigned int feedAutoSubscribeType:1;
        unsigned int groupArticleCountInForYou:1;
        unsigned int groupDisplayRankInForYou:1;
        unsigned int groupFormationReason:1;
        unsigned int groupPresentationReason:1;
        unsigned int groupType:1;
        unsigned int topStoryMandatoryArticleCount:1;
        unsigned int topStoryOptionalArticleCount:1;
        unsigned int isSubscribedToGroupFeed:1;
    } _has;
}

+ (Class)groupedArticleIdsType;
@property(nonatomic) int topStoryOptionalArticleCount; // @synthesize topStoryOptionalArticleCount=_topStoryOptionalArticleCount;
@property(nonatomic) int topStoryMandatoryArticleCount; // @synthesize topStoryMandatoryArticleCount=_topStoryMandatoryArticleCount;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(nonatomic) _Bool isSubscribedToGroupFeed; // @synthesize isSubscribedToGroupFeed=_isSubscribedToGroupFeed;
@property(nonatomic) int groupArticleCountInForYou; // @synthesize groupArticleCountInForYou=_groupArticleCountInForYou;
@property(nonatomic) int groupDisplayRankInForYou; // @synthesize groupDisplayRankInForYou=_groupDisplayRankInForYou;
@property(retain, nonatomic) NSMutableArray *groupedArticleIds; // @synthesize groupedArticleIds=_groupedArticleIds;
@property(retain, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsFeedAutoSubscribeType:(id)arg1;
- (id)feedAutoSubscribeTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedAutoSubscribeType;
@property(nonatomic) int feedAutoSubscribeType; // @synthesize feedAutoSubscribeType=_feedAutoSubscribeType;
- (int)StringAsGroupFormationReason:(id)arg1;
- (id)groupFormationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupFormationReason;
@property(nonatomic) int groupFormationReason; // @synthesize groupFormationReason=_groupFormationReason;
- (int)StringAsGroupPresentationReason:(id)arg1;
- (id)groupPresentationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupPresentationReason;
@property(nonatomic) int groupPresentationReason; // @synthesize groupPresentationReason=_groupPresentationReason;
@property(nonatomic) _Bool hasTopStoryOptionalArticleCount;
@property(nonatomic) _Bool hasTopStoryMandatoryArticleCount;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
@property(nonatomic) _Bool hasIsSubscribedToGroupFeed;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(nonatomic) _Bool hasGroupArticleCountInForYou;
@property(nonatomic) _Bool hasGroupDisplayRankInForYou;
- (id)groupedArticleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupedArticleIdsCount;
- (void)addGroupedArticleIds:(id)arg1;
- (void)clearGroupedArticleIds;
@property(readonly, nonatomic) _Bool hasGroupFeedId;

@end

