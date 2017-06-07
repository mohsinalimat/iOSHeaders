//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTimeRange : PBCodable <NSCopying>
{
    unsigned int _from;
    unsigned int _to;
    _Bool _allDay;
    struct {
        unsigned int from:1;
        unsigned int to:1;
        unsigned int allDay:1;
    } _has;
}

@property(nonatomic) _Bool allDay; // @synthesize allDay=_allDay;
@property(nonatomic) unsigned int to; // @synthesize to=_to;
@property(nonatomic) unsigned int from; // @synthesize from=_from;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAllDay;
@property(nonatomic) _Bool hasTo;
@property(nonatomic) _Bool hasFrom;
- (id)initWithPlaceDataTimeRange:(struct GEOPDLocalTimeRange *)arg1;

@end

