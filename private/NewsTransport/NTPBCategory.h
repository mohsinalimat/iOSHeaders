//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBCategory : PBCodable <NSCopying>
{
    NSMutableArray *_categoryHierarchys;
    NSMutableArray *_curatedTagIds;
    NSString *_entityId;
    NSString *_name;
    NSMutableArray *_recommendedChannels;
    NSMutableArray *_recommendedTopics;
}

+ (Class)curatedTagIdsType;
+ (Class)categoryHierarchyType;
+ (Class)recommendedChannelsType;
+ (Class)recommendedTopicsType;
@property(retain, nonatomic) NSMutableArray *curatedTagIds; // @synthesize curatedTagIds=_curatedTagIds;
@property(retain, nonatomic) NSMutableArray *categoryHierarchys; // @synthesize categoryHierarchys=_categoryHierarchys;
@property(retain, nonatomic) NSMutableArray *recommendedChannels; // @synthesize recommendedChannels=_recommendedChannels;
@property(retain, nonatomic) NSMutableArray *recommendedTopics; // @synthesize recommendedTopics=_recommendedTopics;
@property(retain, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)curatedTagIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)curatedTagIdsCount;
- (void)addCuratedTagIds:(id)arg1;
- (void)clearCuratedTagIds;
- (id)categoryHierarchyAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoryHierarchysCount;
- (void)addCategoryHierarchy:(id)arg1;
- (void)clearCategoryHierarchys;
- (id)recommendedChannelsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendedChannelsCount;
- (void)addRecommendedChannels:(id)arg1;
- (void)clearRecommendedChannels;
- (id)recommendedTopicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendedTopicsCount;
- (void)addRecommendedTopics:(id)arg1;
- (void)clearRecommendedTopics;
@property(readonly, nonatomic) _Bool hasEntityId;
@property(readonly, nonatomic) _Bool hasName;

@end

