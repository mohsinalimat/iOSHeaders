//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Navigation/NSCopying-Protocol.h>

@class GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, GEOLocation, GEORouteAttributes, NSString;

@interface MNRoutePlanningDetails : PBCodable <NSCopying>
{
    GEOComposedWaypoint *_destination;
    GEOLocation *_lastLocation;
    int _navigationType;
    GEOComposedWaypoint *_origin;
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    GEORouteAttributes *_routeAttributes;
    unsigned int _routeIndex;
    NSString *_traceFileName;
    int _transportType;
    _Bool _copyTracesToCrashReporterDirectory;
    _Bool _guidancePromptsEnabled;
    _Bool _isForReconnecting;
    _Bool _isTraceRecording;
    _Bool _shouldPrepare;
    struct {
        unsigned int navigationType:1;
        unsigned int routeIndex:1;
        unsigned int transportType:1;
        unsigned int copyTracesToCrashReporterDirectory:1;
        unsigned int guidancePromptsEnabled:1;
        unsigned int isForReconnecting:1;
        unsigned int isTraceRecording:1;
        unsigned int shouldPrepare:1;
    } _has;
}

@property(nonatomic) _Bool copyTracesToCrashReporterDirectory; // @synthesize copyTracesToCrashReporterDirectory=_copyTracesToCrashReporterDirectory;
@property(retain, nonatomic) NSString *traceFileName; // @synthesize traceFileName=_traceFileName;
@property(retain, nonatomic) GEOLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(nonatomic) unsigned int routeIndex; // @synthesize routeIndex=_routeIndex;
@property(retain, nonatomic) GEODirectionsResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
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
@property(nonatomic) _Bool hasCopyTracesToCrashReporterDirectory;
@property(nonatomic) _Bool hasIsTraceRecording;
@property(nonatomic) _Bool isTraceRecording; // @synthesize isTraceRecording=_isTraceRecording;
@property(readonly, nonatomic) _Bool hasTraceFileName;
@property(readonly, nonatomic) _Bool hasLastLocation;
@property(nonatomic) _Bool hasShouldPrepare;
@property(nonatomic) _Bool shouldPrepare; // @synthesize shouldPrepare=_shouldPrepare;
@property(nonatomic) _Bool hasIsForReconnecting;
@property(nonatomic) _Bool isForReconnecting; // @synthesize isForReconnecting=_isForReconnecting;
@property(nonatomic) _Bool hasGuidancePromptsEnabled;
@property(nonatomic) _Bool guidancePromptsEnabled; // @synthesize guidancePromptsEnabled=_guidancePromptsEnabled;
- (int)StringAsNavigationType:(id)arg1;
- (id)navigationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasNavigationType;
@property(nonatomic) int navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) _Bool hasRouteAttributes;
@property(nonatomic) _Bool hasRouteIndex;
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasRequest;
@property(readonly, nonatomic) _Bool hasDestination;
@property(readonly, nonatomic) _Bool hasOrigin;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransportType;

@end

