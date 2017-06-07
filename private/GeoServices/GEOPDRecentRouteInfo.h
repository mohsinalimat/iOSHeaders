//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, PBUnknownFields;

@interface GEOPDRecentRouteInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSData *_routeId;
    NSData *_sessionState;
    NSData *_zilchPoints;
}

@property(retain, nonatomic) NSData *routeId; // @synthesize routeId=_routeId;
@property(retain, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;
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
@property(readonly, nonatomic) _Bool hasRouteId;
@property(readonly, nonatomic) _Bool hasSessionState;
@property(readonly, nonatomic) _Bool hasZilchPoints;
- (void)dealloc;

@end

