//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBForYouWidgetSectionSpecificConfig : PBCodable <NSCopying>
{
    unsigned long long _cutoffTime;
    unsigned long long _headlinesPerFeedFetchCount;
    unsigned long long _subscriptionsFetchCount;
    int _fetchingBin;
    struct {
        unsigned int cutoffTime:1;
        unsigned int headlinesPerFeedFetchCount:1;
        unsigned int subscriptionsFetchCount:1;
        unsigned int fetchingBin:1;
    } _has;
}

@property(nonatomic) unsigned long long headlinesPerFeedFetchCount; // @synthesize headlinesPerFeedFetchCount=_headlinesPerFeedFetchCount;
@property(nonatomic) unsigned long long subscriptionsFetchCount; // @synthesize subscriptionsFetchCount=_subscriptionsFetchCount;
@property(nonatomic) unsigned long long cutoffTime; // @synthesize cutoffTime=_cutoffTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasFetchingBin;
@property(nonatomic) int fetchingBin; // @synthesize fetchingBin=_fetchingBin;
@property(nonatomic) _Bool hasHeadlinesPerFeedFetchCount;
@property(nonatomic) _Bool hasSubscriptionsFetchCount;
@property(nonatomic) _Bool hasCutoffTime;

@end

