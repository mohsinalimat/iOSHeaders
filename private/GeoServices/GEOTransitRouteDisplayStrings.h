//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSMutableArray;

@interface GEOTransitRouteDisplayStrings : PBCodable <NSCopying>
{
    NSMutableArray *_advisorys;
    GEOFormattedString *_badge;
    GEOFormattedString *_duration;
    GEOFormattedString *_durationList;
    GEOFormattedString *_planningDescription;
    GEOFormattedString *_travelDescription;
}

+ (Class)advisoryType;
@property(retain, nonatomic) GEOFormattedString *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) NSMutableArray *advisorys; // @synthesize advisorys=_advisorys;
@property(retain, nonatomic) GEOFormattedString *travelDescription; // @synthesize travelDescription=_travelDescription;
@property(retain, nonatomic) GEOFormattedString *durationList; // @synthesize durationList=_durationList;
@property(retain, nonatomic) GEOFormattedString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) GEOFormattedString *planningDescription; // @synthesize planningDescription=_planningDescription;
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
@property(readonly, nonatomic) _Bool hasBadge;
- (id)advisoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)advisorysCount;
- (void)addAdvisory:(id)arg1;
- (void)clearAdvisorys;
@property(readonly, nonatomic) _Bool hasTravelDescription;
@property(readonly, nonatomic) _Bool hasDurationList;
@property(readonly, nonatomic) _Bool hasDuration;
@property(readonly, nonatomic) _Bool hasPlanningDescription;

@end

