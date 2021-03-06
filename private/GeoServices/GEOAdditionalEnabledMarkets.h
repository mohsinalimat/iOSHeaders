//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, PBUnknownFields;

@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_transitMarkets;
}

+ (Class)transitMarketType;
+ (id)additionalEnabledMarkets;
+ (id)_additionalEnabledTransitMarkets;
@property(retain, nonatomic) NSMutableArray *transitMarkets; // @synthesize transitMarkets=_transitMarkets;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)transitMarketAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitMarketsCount;
- (void)addTransitMarket:(id)arg1;
- (void)clearTransitMarkets;
@property(readonly, nonatomic) NSArray *queryItems;
@property(readonly, nonatomic) NSDictionary *queryParameters;
- (void)reload;

@end

