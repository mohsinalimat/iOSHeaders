//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/GEOTransitIncident-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>

@class NSDate, NSMutableArray, NSString, PBUnknownFields;

@interface MSPTransitStorageIncident : PBCodable <GEOTransitIncident, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    NSMutableArray *_affectedEntities;
    unsigned int _creationDatetime;
    unsigned int _endDatetime;
    NSString *_fullDescription;
    long long _iconType;
    unsigned int _lastUpdatedDatetime;
    NSString *_messageForNonRoutable;
    NSString *_messageForRoutePlanning;
    NSString *_messageForRouteStepping;
    unsigned int _startDatetime;
    NSString *_summary;
    NSString *_title;
    _Bool _blockingIncident;
    struct {
        unsigned int muid:1;
        unsigned int creationDatetime:1;
        unsigned int endDatetime:1;
        unsigned int iconType:1;
        unsigned int lastUpdatedDatetime:1;
        unsigned int startDatetime:1;
        unsigned int blockingIncident:1;
    } _has;
}

+ (Class)affectedEntitiesType;
@property(retain, nonatomic) NSMutableArray *affectedEntities; // @synthesize affectedEntities=_affectedEntities;
@property(nonatomic) _Bool blockingIncident; // @synthesize blockingIncident=_blockingIncident;
@property(nonatomic) unsigned int lastUpdatedDatetime; // @synthesize lastUpdatedDatetime=_lastUpdatedDatetime;
@property(nonatomic) unsigned int creationDatetime; // @synthesize creationDatetime=_creationDatetime;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(nonatomic) unsigned int endDatetime; // @synthesize endDatetime=_endDatetime;
@property(nonatomic) unsigned int startDatetime; // @synthesize startDatetime=_startDatetime;
@property(retain, nonatomic) NSString *messageForNonRoutable; // @synthesize messageForNonRoutable=_messageForNonRoutable;
@property(retain, nonatomic) NSString *messageForRouteStepping; // @synthesize messageForRouteStepping=_messageForRouteStepping;
@property(retain, nonatomic) NSString *messageForRoutePlanning; // @synthesize messageForRoutePlanning=_messageForRoutePlanning;
@property(retain, nonatomic) NSString *fullDescription; // @synthesize fullDescription=_fullDescription;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (id)affectedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)affectedEntitiesCount;
- (void)addAffectedEntities:(id)arg1;
- (void)clearAffectedEntities;
@property(nonatomic) _Bool hasBlockingIncident;
@property(nonatomic) _Bool hasLastUpdatedDatetime;
@property(nonatomic) _Bool hasCreationDatetime;
- (long long)StringAsIconType:(id)arg1;
- (id)iconTypeAsString:(long long)arg1;
@property(nonatomic) _Bool hasIconType;
@property(nonatomic) _Bool hasEndDatetime;
@property(nonatomic) _Bool hasStartDatetime;
@property(readonly, nonatomic) _Bool hasMessageForNonRoutable;
@property(readonly, nonatomic) _Bool hasMessageForRouteStepping;
@property(readonly, nonatomic) _Bool hasMessageForRoutePlanning;
@property(readonly, nonatomic) _Bool hasFullDescription;
@property(readonly, nonatomic) _Bool hasSummary;
@property(readonly, nonatomic) _Bool hasTitle;
@property(nonatomic) _Bool hasMuid;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSDate *lastUpdated;
@property(readonly, nonatomic) NSDate *creationDate;
- (id)initWithIncident:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

