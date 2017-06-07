//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPhotoOptions : PBCodable <NSCopying>
{
    CDStruct_95bda58d _photoSizes;
    int _maxPhotos;
    int _photoType;
    CDStruct_86c1f53f _has;
}

@property(nonatomic) int maxPhotos; // @synthesize maxPhotos=_maxPhotos;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsPhotoSizes:(id)arg1;
- (id)photoSizesAsString:(int)arg1;
- (void)setPhotoSizes:(int *)arg1 count:(unsigned long long)arg2;
- (int)photoSizeAtIndex:(unsigned long long)arg1;
- (void)addPhotoSize:(int)arg1;
- (void)clearPhotoSizes;
@property(readonly, nonatomic) int *photoSizes;
@property(readonly, nonatomic) unsigned long long photoSizesCount;
- (int)StringAsPhotoType:(id)arg1;
- (id)photoTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPhotoType;
@property(nonatomic) int photoType; // @synthesize photoType=_photoType;
- (void)dealloc;

@end

