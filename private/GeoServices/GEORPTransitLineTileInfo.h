//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEORPTransitLineTileInfo : PBCodable <NSCopying>
{
    unsigned long long _transitLineMuid;
    NSString *_transitLineName;
    NSString *_transitSystemName;
    struct {
        unsigned int transitLineMuid:1;
    } _has;
}

@property(retain, nonatomic) NSString *transitSystemName; // @synthesize transitSystemName=_transitSystemName;
@property(retain, nonatomic) NSString *transitLineName; // @synthesize transitLineName=_transitLineName;
@property(nonatomic) unsigned long long transitLineMuid; // @synthesize transitLineMuid=_transitLineMuid;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTransitSystemName;
@property(readonly, nonatomic) _Bool hasTransitLineName;
@property(nonatomic) _Bool hasTransitLineMuid;

@end

