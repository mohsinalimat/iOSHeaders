//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOLocalTime : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _timeRoundedToHour;
    float _timezoneOffsetFromGmtInHours;
    struct {
        unsigned int timeRoundedToHour:1;
        unsigned int timezoneOffsetFromGmtInHours:1;
    } _has;
}

@property(nonatomic) float timezoneOffsetFromGmtInHours; // @synthesize timezoneOffsetFromGmtInHours=_timezoneOffsetFromGmtInHours;
@property(nonatomic) unsigned long long timeRoundedToHour; // @synthesize timeRoundedToHour=_timeRoundedToHour;
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
@property(nonatomic) _Bool hasTimezoneOffsetFromGmtInHours;
@property(nonatomic) _Bool hasTimeRoundedToHour;
- (id)initWithCFAbsoluteTime:(double)arg1;
- (id)initWithDate:(id)arg1;

@end

