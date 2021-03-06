//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOCarInfo, GEOMapRegion, GEOMapsServerMetadata, GEOPlaceActionDetails, GEORouteDetails, NSString;

@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying>
{
    struct GEOSessionID _sessionID;
    double _sessionRelativeTimestamp;
    double _zoomLevel;
    int _actionType;
    GEOCarInfo *_carInfo;
    int _locationBucket;
    GEOMapRegion *_mapRegion;
    GEOPlaceActionDetails *_placeActionDetails;
    NSString *_providerId;
    GEORouteDetails *_routeDetails;
    int _sequenceNumber;
    GEOMapsServerMetadata *_serverMetadata;
    int _uiTarget;
    struct {
        unsigned int sessionID:1;
        unsigned int sessionRelativeTimestamp:1;
        unsigned int zoomLevel:1;
        unsigned int actionType:1;
        unsigned int locationBucket:1;
        unsigned int sequenceNumber:1;
        unsigned int uiTarget:1;
    } _has;
}

+ (id)feedbackCollectionWithTraits:(id)arg1 placeActionDetails:(id)arg2 uiTarget:(int)arg3;
+ (id)feedbackCollectionWithTraits:(id)arg1 placeActionDetails:(id)arg2 routeDetails:(id)arg3;
+ (id)feedbackCollectionWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
+ (id)feedbackCollectionWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
@property(retain, nonatomic) GEOMapsServerMetadata *serverMetadata; // @synthesize serverMetadata=_serverMetadata;
@property(retain, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property(retain, nonatomic) GEORouteDetails *routeDetails; // @synthesize routeDetails=_routeDetails;
@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) GEOCarInfo *carInfo; // @synthesize carInfo=_carInfo;
@property(retain, nonatomic) GEOPlaceActionDetails *placeActionDetails; // @synthesize placeActionDetails=_placeActionDetails;
@property(nonatomic) double sessionRelativeTimestamp; // @synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp;
@property(nonatomic) struct GEOSessionID sessionID; // @synthesize sessionID=_sessionID;
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
- (int)StringAsUiTarget:(id)arg1;
- (id)uiTargetAsString:(int)arg1;
@property(nonatomic) _Bool hasUiTarget;
@property(nonatomic) int uiTarget; // @synthesize uiTarget=_uiTarget;
- (int)StringAsLocationBucket:(id)arg1;
- (id)locationBucketAsString:(int)arg1;
@property(nonatomic) _Bool hasLocationBucket;
@property(nonatomic) int locationBucket; // @synthesize locationBucket=_locationBucket;
@property(readonly, nonatomic) _Bool hasServerMetadata;
@property(readonly, nonatomic) _Bool hasProviderId;
@property(readonly, nonatomic) _Bool hasRouteDetails;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) _Bool hasZoomLevel;
@property(readonly, nonatomic) _Bool hasMapRegion;
@property(readonly, nonatomic) _Bool hasCarInfo;
@property(readonly, nonatomic) _Bool hasPlaceActionDetails;
@property(nonatomic) _Bool hasSessionRelativeTimestamp;
- (int)StringAsActionType:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasActionType;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) _Bool hasSessionID;
- (id)initWithTraits:(id)arg1;
- (id)initWithTraits:(id)arg1 placeActionDetails:(id)arg2 uiTarget:(int)arg3;
- (id)initWithTraits:(id)arg1 placeActionDetails:(id)arg2 routeDetails:(id)arg3;
- (id)initWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)initWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;

@end

