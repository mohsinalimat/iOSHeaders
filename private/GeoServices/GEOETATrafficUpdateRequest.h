//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEOLocation, GEOPDABClientDatasetMetadata, GEORouteAttributes, GEOTFTrafficSnapshot, NSData, NSMutableArray, NSString;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying>
{
    struct GEOSessionID _sessionID;
    struct GEOTimepoint _clientTimepoint;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_destinationWaypointTypeds;
    NSData *_directionsResponseID;
    unsigned int _maxAlternateRouteCount;
    unsigned int _previouslyRejectedRerouteSavings;
    NSString *_requestingAppId;
    int _rerouteStatus;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_routes;
    NSMutableArray *_serviceTags;
    NSData *_sessionState;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    NSData *_tripID;
    _Bool _includeBetterRouteSuggestion;
    _Bool _needServerLatency;
    _Bool _useClientTimepointAsNow;
    _Bool _useLiveTrafficAsFallback;
    struct {
        unsigned int sessionID:1;
        unsigned int clientTimepoint:1;
        unsigned int maxAlternateRouteCount:1;
        unsigned int previouslyRejectedRerouteSavings:1;
        unsigned int rerouteStatus:1;
        unsigned int includeBetterRouteSuggestion:1;
        unsigned int needServerLatency:1;
        unsigned int useClientTimepointAsNow:1;
        unsigned int useLiveTrafficAsFallback:1;
    } _has;
}

+ (Class)serviceTagType;
+ (Class)destinationWaypointTypedType;
+ (Class)routeType;
@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(retain, nonatomic) NSString *requestingAppId; // @synthesize requestingAppId=_requestingAppId;
@property(retain, nonatomic) NSData *tripID; // @synthesize tripID=_tripID;
@property(retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata; // @synthesize abClientMetadata=_abClientMetadata;
@property(retain, nonatomic) GEOCommonOptions *commonOptions; // @synthesize commonOptions=_commonOptions;
@property(retain, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property(nonatomic) unsigned int previouslyRejectedRerouteSavings; // @synthesize previouslyRejectedRerouteSavings=_previouslyRejectedRerouteSavings;
@property(retain, nonatomic) NSMutableArray *destinationWaypointTypeds; // @synthesize destinationWaypointTypeds=_destinationWaypointTypeds;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets; // @synthesize additionalEnabledMarkets=_additionalEnabledMarkets;
@property(nonatomic) struct GEOSessionID sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(retain, nonatomic) GEOLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(readonly, nonatomic) _Bool hasRequestingAppId;
@property(readonly, nonatomic) _Bool hasTripID;
@property(nonatomic) _Bool hasMaxAlternateRouteCount;
@property(nonatomic) unsigned int maxAlternateRouteCount; // @synthesize maxAlternateRouteCount=_maxAlternateRouteCount;
@property(readonly, nonatomic) _Bool hasAbClientMetadata;
@property(readonly, nonatomic) _Bool hasCommonOptions;
- (int)StringAsRerouteStatus:(id)arg1;
- (id)rerouteStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasRerouteStatus;
@property(nonatomic) int rerouteStatus; // @synthesize rerouteStatus=_rerouteStatus;
@property(readonly, nonatomic) _Bool hasSessionState;
@property(nonatomic) _Bool hasPreviouslyRejectedRerouteSavings;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationWaypointTypedsCount;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)clearDestinationWaypointTypeds;
@property(readonly, nonatomic) _Bool hasAdditionalEnabledMarkets;
@property(nonatomic) _Bool hasSessionID;
@property(readonly, nonatomic) _Bool hasDirectionsResponseID;
@property(readonly, nonatomic) _Bool hasClientCapabilities;
- (id)routeAtIndex:(unsigned long long)arg1;
- (unsigned long long)routesCount;
- (void)addRoute:(id)arg1;
- (void)clearRoutes;
@property(nonatomic) _Bool hasIncludeBetterRouteSuggestion;
@property(nonatomic) _Bool includeBetterRouteSuggestion; // @synthesize includeBetterRouteSuggestion=_includeBetterRouteSuggestion;
@property(readonly, nonatomic) _Bool hasRouteAttributes;
@property(readonly, nonatomic) _Bool hasCurrentUserLocation;
@property(nonatomic) _Bool hasNeedServerLatency;
@property(nonatomic) _Bool needServerLatency;
@property(nonatomic) _Bool hasUseClientTimepointAsNow;
@property(nonatomic) _Bool useClientTimepointAsNow;
@property(nonatomic) _Bool hasClientTimepoint;
@property(nonatomic) struct GEOTimepoint clientTimepoint;
@property(nonatomic) _Bool hasUseLiveTrafficAsFallback;
@property(nonatomic) _Bool useLiveTrafficAsFallback;
@property(retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property(readonly, nonatomic) _Bool hasTrafficSnapshot;

@end

