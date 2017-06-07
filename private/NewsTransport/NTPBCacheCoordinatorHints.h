//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBCacheCoordinatorHints : PBCodable <NSCopying>
{
    long long _version;
    NSMutableArray *_cacheHints;
    struct {
        unsigned int version:1;
    } _has;
}

+ (Class)cacheHintsType;
@property(retain, nonatomic) NSMutableArray *cacheHints; // @synthesize cacheHints=_cacheHints;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)cacheHintsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cacheHintsCount;
- (void)addCacheHints:(id)arg1;
- (void)clearCacheHints;
@property(nonatomic) _Bool hasVersion;
- (void)dealloc;

@end

