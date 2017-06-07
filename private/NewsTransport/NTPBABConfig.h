//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NTPBConfig;

@interface NTPBABConfig : PBCodable <NSCopying>
{
    long long _populationCeiling;
    long long _populationFloor;
    NSMutableArray *_configBuckets;
    NTPBConfig *_configControl;
    struct {
        unsigned int populationCeiling:1;
        unsigned int populationFloor:1;
    } _has;
}

+ (Class)configBucketsType;
@property(retain, nonatomic) NSMutableArray *configBuckets; // @synthesize configBuckets=_configBuckets;
@property(retain, nonatomic) NTPBConfig *configControl; // @synthesize configControl=_configControl;
@property(nonatomic) long long populationCeiling; // @synthesize populationCeiling=_populationCeiling;
@property(nonatomic) long long populationFloor; // @synthesize populationFloor=_populationFloor;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)configBucketsAtIndex:(unsigned long long)arg1;
- (unsigned long long)configBucketsCount;
- (void)addConfigBuckets:(id)arg1;
- (void)clearConfigBuckets;
@property(readonly, nonatomic) _Bool hasConfigControl;
@property(nonatomic) _Bool hasPopulationCeiling;
@property(nonatomic) _Bool hasPopulationFloor;

@end

