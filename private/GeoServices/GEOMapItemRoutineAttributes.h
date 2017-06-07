//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, NSUUID;

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying>
{
    double _eventDate;
    NSString *_eventName;
    NSString *_loiIdentifierString;
    int _loiType;
    _Bool _isEventAllDay;
    struct {
        unsigned int eventDate:1;
        unsigned int loiType:1;
        unsigned int isEventAllDay:1;
    } _has;
}

@property(retain, nonatomic) NSString *loiIdentifierString; // @synthesize loiIdentifierString=_loiIdentifierString;
@property(nonatomic) _Bool isEventAllDay; // @synthesize isEventAllDay=_isEventAllDay;
@property(nonatomic) double eventDate; // @synthesize eventDate=_eventDate;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLoiIdentifierString;
@property(nonatomic) _Bool hasIsEventAllDay;
@property(nonatomic) _Bool hasEventDate;
@property(readonly, nonatomic) _Bool hasEventName;
- (int)StringAsLoiType:(id)arg1;
- (id)loiTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasLoiType;
@property(nonatomic) int loiType; // @synthesize loiType=_loiType;
- (void)dealloc;
@property(nonatomic) NSUUID *loiIdentifier;

@end

