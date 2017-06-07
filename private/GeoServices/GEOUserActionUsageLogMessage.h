//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapLaunchDetails, GEOMapsServerMetadata, GEOPlaceActionDetails, GEORouteDetails, NSString;

@interface GEOUserActionUsageLogMessage : PBCodable <NSCopying>
{
    int _locationBucket;
    GEOMapLaunchDetails *_mapLaunchDetails;
    GEOPlaceActionDetails *_placeActionDetails;
    NSString *_providerId;
    GEORouteDetails *_routeDetails;
    GEOMapsServerMetadata *_serverMetadata;
    int _uiTarget;
    NSString *_usageEventKey;
    NSString *_usageEventValue;
    struct {
        unsigned int locationBucket:1;
        unsigned int uiTarget:1;
    } _has;
}

@property(retain, nonatomic) GEOMapsServerMetadata *serverMetadata; // @synthesize serverMetadata=_serverMetadata;
@property(retain, nonatomic) GEOMapLaunchDetails *mapLaunchDetails; // @synthesize mapLaunchDetails=_mapLaunchDetails;
@property(retain, nonatomic) GEORouteDetails *routeDetails; // @synthesize routeDetails=_routeDetails;
@property(retain, nonatomic) GEOPlaceActionDetails *placeActionDetails; // @synthesize placeActionDetails=_placeActionDetails;
@property(retain, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property(retain, nonatomic) NSString *usageEventValue; // @synthesize usageEventValue=_usageEventValue;
@property(retain, nonatomic) NSString *usageEventKey; // @synthesize usageEventKey=_usageEventKey;
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
@property(readonly, nonatomic) _Bool hasMapLaunchDetails;
@property(readonly, nonatomic) _Bool hasRouteDetails;
@property(readonly, nonatomic) _Bool hasPlaceActionDetails;
@property(readonly, nonatomic) _Bool hasProviderId;
@property(readonly, nonatomic) _Bool hasUsageEventValue;
@property(readonly, nonatomic) _Bool hasUsageEventKey;
- (void)dealloc;

@end

