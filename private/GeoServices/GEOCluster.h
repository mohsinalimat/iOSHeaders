//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPlaceResult;

@interface GEOCluster : PBCodable <NSCopying>
{
    CDStruct_95bda58d _indexs;
    GEOPlaceResult *_container;
}

@property(retain, nonatomic) GEOPlaceResult *container; // @synthesize container=_container;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setIndexs:(int *)arg1 count:(unsigned long long)arg2;
- (int)indexAtIndex:(unsigned long long)arg1;
- (void)addIndex:(int)arg1;
- (void)clearIndexs;
@property(readonly, nonatomic) int *indexs;
@property(readonly, nonatomic) unsigned long long indexsCount;
@property(readonly, nonatomic) _Bool hasContainer;
- (void)dealloc;

@end

