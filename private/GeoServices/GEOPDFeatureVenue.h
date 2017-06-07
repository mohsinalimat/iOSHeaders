//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueContainer, NSMutableArray, PBUnknownFields;

@interface GEOPDFeatureVenue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_buildings;
    NSMutableArray *_levels;
    GEOPDVenueContainer *_venueContainer;
}

+ (Class)levelType;
+ (Class)buildingType;
@property(retain, nonatomic) NSMutableArray *levels; // @synthesize levels=_levels;
@property(retain, nonatomic) NSMutableArray *buildings; // @synthesize buildings=_buildings;
@property(retain, nonatomic) GEOPDVenueContainer *venueContainer; // @synthesize venueContainer=_venueContainer;
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
- (id)levelAtIndex:(unsigned long long)arg1;
- (unsigned long long)levelsCount;
- (void)addLevel:(id)arg1;
- (void)clearLevels;
- (id)buildingAtIndex:(unsigned long long)arg1;
- (unsigned long long)buildingsCount;
- (void)addBuilding:(id)arg1;
- (void)clearBuildings;
@property(readonly, nonatomic) _Bool hasVenueContainer;

@end
