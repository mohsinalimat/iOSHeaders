//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABDebugPanelExperimentBranch, NSMutableArray, PBUnknownFields;

@interface GEOABClientDebugPanelExperimentBranch : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_configKeyValues;
    GEOABDebugPanelExperimentBranch *_debugExperimentBranch;
}

+ (Class)configKeyValueType;
@property(retain, nonatomic) NSMutableArray *configKeyValues; // @synthesize configKeyValues=_configKeyValues;
@property(retain, nonatomic) GEOABDebugPanelExperimentBranch *debugExperimentBranch; // @synthesize debugExperimentBranch=_debugExperimentBranch;
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
- (id)configKeyValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)configKeyValuesCount;
- (void)addConfigKeyValue:(id)arg1;
- (void)clearConfigKeyValues;
@property(readonly, nonatomic) _Bool hasDebugExperimentBranch;
- (void)dealloc;

@end

