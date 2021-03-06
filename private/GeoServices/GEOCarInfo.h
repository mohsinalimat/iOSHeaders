//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOScreenDimension, NSString, PBUnknownFields;

@interface GEOCarInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOScreenResolution _screenResolution;
    CDStruct_95bda58d _engineTypes;
    CDStruct_95bda58d _inputMethods;
    int _brightness;
    NSString *_carName;
    int _colorRange;
    int _deviceConnection;
    NSString *_manufacturer;
    NSString *_model;
    int _navAidedDrivingStatus;
    GEOScreenDimension *_screenDimension;
    _Bool _destinationSharingEnabled;
    struct {
        unsigned int screenResolution:1;
        unsigned int brightness:1;
        unsigned int colorRange:1;
        unsigned int deviceConnection:1;
        unsigned int navAidedDrivingStatus:1;
        unsigned int destinationSharingEnabled:1;
    } _has;
}

+ (id)carInfoWithTraits:(id)arg1;
@property(nonatomic) int brightness; // @synthesize brightness=_brightness;
@property(nonatomic) int colorRange; // @synthesize colorRange=_colorRange;
@property(retain, nonatomic) GEOScreenDimension *screenDimension; // @synthesize screenDimension=_screenDimension;
@property(retain, nonatomic) NSString *carName; // @synthesize carName=_carName;
@property(nonatomic) _Bool destinationSharingEnabled; // @synthesize destinationSharingEnabled=_destinationSharingEnabled;
@property(nonatomic) struct GEOScreenResolution screenResolution; // @synthesize screenResolution=_screenResolution;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
- (void).cxx_destruct;
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
- (int)StringAsInputMethods:(id)arg1;
- (id)inputMethodsAsString:(int)arg1;
- (void)setInputMethods:(int *)arg1 count:(unsigned long long)arg2;
- (int)inputMethodAtIndex:(unsigned long long)arg1;
- (void)addInputMethod:(int)arg1;
- (void)clearInputMethods;
@property(readonly, nonatomic) int *inputMethods;
@property(readonly, nonatomic) unsigned long long inputMethodsCount;
@property(nonatomic) _Bool hasBrightness;
@property(nonatomic) _Bool hasColorRange;
@property(readonly, nonatomic) _Bool hasScreenDimension;
@property(readonly, nonatomic) _Bool hasCarName;
- (int)StringAsEngineTypes:(id)arg1;
- (id)engineTypesAsString:(int)arg1;
- (void)setEngineTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)engineTypeAtIndex:(unsigned long long)arg1;
- (void)addEngineType:(int)arg1;
- (void)clearEngineTypes;
@property(readonly, nonatomic) int *engineTypes;
@property(readonly, nonatomic) unsigned long long engineTypesCount;
- (int)StringAsNavAidedDrivingStatus:(id)arg1;
- (id)navAidedDrivingStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasNavAidedDrivingStatus;
@property(nonatomic) int navAidedDrivingStatus; // @synthesize navAidedDrivingStatus=_navAidedDrivingStatus;
@property(nonatomic) _Bool hasDestinationSharingEnabled;
- (int)StringAsDeviceConnection:(id)arg1;
- (id)deviceConnectionAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceConnection;
@property(nonatomic) int deviceConnection; // @synthesize deviceConnection=_deviceConnection;
@property(nonatomic) _Bool hasScreenResolution;
@property(readonly, nonatomic) _Bool hasModel;
@property(readonly, nonatomic) _Bool hasManufacturer;
- (void)dealloc;
- (id)initWithTraits:(id)arg1;

@end

