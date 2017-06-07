//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields, _INPBString;

@interface _INPBMoveFileIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _entityTypes;
    _INPBString *_destinationName;
    NSMutableArray *_entityNames;
    _INPBString *_sourceName;
    _Bool _overwrite;
    _Bool _success;
    struct {
        unsigned int overwrite:1;
        unsigned int success:1;
    } _has;
}

+ (Class)entityNameType;
+ (id)options;
@property(retain, nonatomic) _INPBString *destinationName; // @synthesize destinationName=_destinationName;
@property(retain, nonatomic) _INPBString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSMutableArray *entityNames; // @synthesize entityNames=_entityNames;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool overwrite; // @synthesize overwrite=_overwrite;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDestinationName;
@property(readonly, nonatomic) _Bool hasSourceName;
- (id)entityNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)entityNamesCount;
- (void)addEntityName:(id)arg1;
- (void)clearEntityNames;
- (int)StringAsEntityTypes:(id)arg1;
- (id)entityTypesAsString:(int)arg1;
- (void)setEntityTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)entityTypeAtIndex:(unsigned long long)arg1;
- (void)addEntityType:(int)arg1;
- (void)clearEntityTypes;
@property(readonly, nonatomic) int *entityTypes;
@property(readonly, nonatomic) unsigned long long entityTypesCount;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasOverwrite;
- (void)dealloc;

@end
