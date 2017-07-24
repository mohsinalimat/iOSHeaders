//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Navigation/NSCopying-Protocol.h>

@class GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, GEORoute, GEOTransitDecoderData, GEOTransitSuggestedRoute, NSData, NSMutableArray;

@interface MNActiveRouteDetails : PBCodable <NSCopying>
{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _trafficIncidentOffsets;
    NSData *_activeRouteInfoData;
    int _alternateRouteIndex;
    GEOTransitDecoderData *_decoderData;
    GEOComposedWaypoint *_destination;
    int _navigationType;
    GEOComposedWaypoint *_origin;
    unsigned int _reconnectionRouteIndex;
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    GEORoute *_route;
    NSData *_routeDetailsID;
    unsigned int _routeIndex;
    GEOTransitSuggestedRoute *_suggestedRoute;
    NSMutableArray *_trafficIncidents;
    int _transportType;
    struct {
        unsigned int alternateRouteIndex:1;
        unsigned int navigationType:1;
        unsigned int reconnectionRouteIndex:1;
        unsigned int routeIndex:1;
        unsigned int transportType:1;
    } _has;
}

+ (Class)trafficIncidentsType;
+ (id)activeRouteDetailsForActiveRouteInfo:(id)arg1;
+ (id)_activeRouteDetailsForRoute:(id)arg1;
@property(nonatomic) unsigned int routeIndex; // @synthesize routeIndex=_routeIndex;
@property(retain, nonatomic) NSData *activeRouteInfoData; // @synthesize activeRouteInfoData=_activeRouteInfoData;
@property(retain, nonatomic) NSMutableArray *trafficIncidents; // @synthesize trafficIncidents=_trafficIncidents;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) unsigned int reconnectionRouteIndex; // @synthesize reconnectionRouteIndex=_reconnectionRouteIndex;
@property(retain, nonatomic) GEODirectionsResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) GEOTransitDecoderData *decoderData; // @synthesize decoderData=_decoderData;
@property(retain, nonatomic) GEOTransitSuggestedRoute *suggestedRoute; // @synthesize suggestedRoute=_suggestedRoute;
@property(retain, nonatomic) GEORoute *route; // @synthesize route=_route;
@property(retain, nonatomic) NSData *routeDetailsID; // @synthesize routeDetailsID=_routeDetailsID;
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
@property(nonatomic) _Bool hasAlternateRouteIndex;
@property(nonatomic) int alternateRouteIndex; // @synthesize alternateRouteIndex=_alternateRouteIndex;
@property(nonatomic) _Bool hasRouteIndex;
@property(readonly, nonatomic) _Bool hasActiveRouteInfoData;
- (void)setTrafficIncidentOffsets:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)trafficIncidentOffsetsAtIndex:(unsigned long long)arg1;
- (void)addTrafficIncidentOffsets:(unsigned int)arg1;
- (void)clearTrafficIncidentOffsets;
@property(readonly, nonatomic) unsigned int *trafficIncidentOffsets;
@property(readonly, nonatomic) unsigned long long trafficIncidentOffsetsCount;
- (id)trafficIncidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficIncidentsCount;
- (void)addTrafficIncidents:(id)arg1;
- (void)clearTrafficIncidents;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) _Bool hasReconnectionRouteIndex;
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasRequest;
@property(readonly, nonatomic) _Bool hasDestination;
@property(readonly, nonatomic) _Bool hasOrigin;
- (int)StringAsNavigationType:(id)arg1;
- (id)navigationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasNavigationType;
@property(nonatomic) int navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) _Bool hasDecoderData;
@property(readonly, nonatomic) _Bool hasSuggestedRoute;
@property(readonly, nonatomic) _Bool hasRoute;
@property(readonly, nonatomic) _Bool hasRouteDetailsID;
- (void)dealloc;
- (id)activeRouteInfo;

@end

