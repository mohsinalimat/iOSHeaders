//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NTPBConfig;

@interface NTPBMultiABConfig : PBCodable <NSCopying>
{
    long long _moduloForHashing;
    NSMutableArray *_abConfigs;
    NTPBConfig *_defaultConfig;
    CDStruct_3f5c4e18 _has;
}

+ (Class)abConfigsType;
@property(retain, nonatomic) NSMutableArray *abConfigs; // @synthesize abConfigs=_abConfigs;
@property(nonatomic) long long moduloForHashing; // @synthesize moduloForHashing=_moduloForHashing;
@property(retain, nonatomic) NTPBConfig *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)abConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)abConfigsCount;
- (void)addAbConfigs:(id)arg1;
- (void)clearAbConfigs;
@property(nonatomic) _Bool hasModuloForHashing;
@property(readonly, nonatomic) _Bool hasDefaultConfig;

@end

