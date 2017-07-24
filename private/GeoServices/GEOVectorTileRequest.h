//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOVectorTileRequest : PBRequest <NSCopying>
{
    unsigned long long _lineId;
    NSString *_accessKey;
    NSString *_countryCode;
    NSString *_languageCode;
    float _latitudeHint;
    float _longitudeHint;
    unsigned int _scale;
    unsigned int _size;
    unsigned int _style;
    unsigned int _version;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    _Bool _preflight;
    CDStruct_49b73a17 _has;
}

@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) float latitudeHint; // @synthesize latitudeHint=_latitudeHint;
@property(nonatomic) float longitudeHint; // @synthesize longitudeHint=_longitudeHint;
@property(retain, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
@property(nonatomic) unsigned int scale; // @synthesize scale=_scale;
@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(nonatomic) unsigned long long lineId; // @synthesize lineId=_lineId;
@property(nonatomic) _Bool preflight; // @synthesize preflight=_preflight;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int z; // @synthesize z=_z;
@property(nonatomic) unsigned int y; // @synthesize y=_y;
@property(nonatomic) unsigned int x; // @synthesize x=_x;
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
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(nonatomic) _Bool hasLatitudeHint;
@property(nonatomic) _Bool hasLongitudeHint;
@property(readonly, nonatomic) _Bool hasAccessKey;
@property(nonatomic) _Bool hasScale;
@property(nonatomic) _Bool hasSize;
@property(nonatomic) _Bool hasLineId;
@property(nonatomic) _Bool hasPreflight;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(nonatomic) _Bool hasStyle;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) _Bool hasZ;
@property(nonatomic) _Bool hasY;
@property(nonatomic) _Bool hasX;

@end

