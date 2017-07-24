//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABClientConfig, GEOABSecondPartyPlaceRequestClientMetaData, NSMutableArray, NSString, PBUnknownFields;

@interface GEOABAssignmentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _branchExpirationTtlHours;
    unsigned long long _refreshIntervalSeconds;
    double _timestamp;
    NSMutableArray *_assignments;
    GEOABClientConfig *_clientConfig;
    GEOABSecondPartyPlaceRequestClientMetaData *_mapsAbClientMetadata;
    GEOABSecondPartyPlaceRequestClientMetaData *_parsecClientMetadata;
    GEOABSecondPartyPlaceRequestClientMetaData *_rapClientMetadata;
    NSString *_requestGuid;
    GEOABSecondPartyPlaceRequestClientMetaData *_siriClientMetadata;
    NSString *_sourceURL;
    _Bool _invalidatePoiCache;
    _Bool _invalidateTileCache;
    struct {
        unsigned int branchExpirationTtlHours:1;
        unsigned int refreshIntervalSeconds:1;
        unsigned int timestamp:1;
        unsigned int invalidatePoiCache:1;
        unsigned int invalidateTileCache:1;
    } _has;
}

+ (Class)assignmentType;
@property(nonatomic) unsigned long long branchExpirationTtlHours; // @synthesize branchExpirationTtlHours=_branchExpirationTtlHours;
@property(retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *mapsAbClientMetadata; // @synthesize mapsAbClientMetadata=_mapsAbClientMetadata;
@property(retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *rapClientMetadata; // @synthesize rapClientMetadata=_rapClientMetadata;
@property(retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *siriClientMetadata; // @synthesize siriClientMetadata=_siriClientMetadata;
@property(retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *parsecClientMetadata; // @synthesize parsecClientMetadata=_parsecClientMetadata;
@property(retain, nonatomic) GEOABClientConfig *clientConfig; // @synthesize clientConfig=_clientConfig;
@property(nonatomic) unsigned long long refreshIntervalSeconds; // @synthesize refreshIntervalSeconds=_refreshIntervalSeconds;
@property(nonatomic) _Bool invalidatePoiCache; // @synthesize invalidatePoiCache=_invalidatePoiCache;
@property(nonatomic) _Bool invalidateTileCache; // @synthesize invalidateTileCache=_invalidateTileCache;
@property(retain, nonatomic) NSMutableArray *assignments; // @synthesize assignments=_assignments;
@property(retain, nonatomic) NSString *requestGuid; // @synthesize requestGuid=_requestGuid;
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
@property(nonatomic) _Bool hasBranchExpirationTtlHours;
@property(readonly, nonatomic) _Bool hasMapsAbClientMetadata;
@property(readonly, nonatomic) _Bool hasRapClientMetadata;
@property(readonly, nonatomic) _Bool hasSiriClientMetadata;
@property(readonly, nonatomic) _Bool hasParsecClientMetadata;
@property(readonly, nonatomic) _Bool hasClientConfig;
@property(nonatomic) _Bool hasRefreshIntervalSeconds;
@property(nonatomic) _Bool hasInvalidatePoiCache;
@property(nonatomic) _Bool hasInvalidateTileCache;
- (id)assignmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)assignmentsCount;
- (void)addAssignment:(id)arg1;
- (void)clearAssignments;
@property(readonly, nonatomic) _Bool hasRequestGuid;
- (id)_clientConfigValueForKey:(id)arg1;
- (id)_querySubstringForServiceType:(int)arg1 placeRequestType:(int)arg2;
- (id)_experimentAssignmentForServiceType:(int)arg1 placeRequestType:(int)arg2;
@property(retain, nonatomic) NSString *sourceURL;
@property(readonly, nonatomic) _Bool hasSourceURL;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;

@end

