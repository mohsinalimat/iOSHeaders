//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgStateMapViewLocation : PBCodable <NSCopying>
{
    int _locationBucket;
    _Bool _isCurrentLocationInViewport;
    struct {
        unsigned int locationBucket:1;
        unsigned int isCurrentLocationInViewport:1;
    } _has;
}

@property(nonatomic) _Bool isCurrentLocationInViewport; // @synthesize isCurrentLocationInViewport=_isCurrentLocationInViewport;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsCurrentLocationInViewport;
- (int)StringAsLocationBucket:(id)arg1;
- (id)locationBucketAsString:(int)arg1;
@property(nonatomic) _Bool hasLocationBucket;
@property(nonatomic) int locationBucket; // @synthesize locationBucket=_locationBucket;

@end

