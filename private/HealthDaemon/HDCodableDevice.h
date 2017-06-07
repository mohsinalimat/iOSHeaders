//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HDCodableDevice : PBCodable <NSCopying>
{
    double _creationDate;
    NSString *_fDAUDI;
    NSString *_firmwareVersion;
    NSString *_hardwareVersion;
    NSString *_localIdentifier;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_name;
    NSString *_softwareVersion;
    NSData *_uuid;
    CDStruct_dc48a425 _has;
}

@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *fDAUDI; // @synthesize fDAUDI=_fDAUDI;
@property(retain, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(retain, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(retain, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(retain, nonatomic) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
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
@property(nonatomic) _Bool hasCreationDate;
@property(readonly, nonatomic) _Bool hasUuid;
@property(readonly, nonatomic) _Bool hasFDAUDI;
@property(readonly, nonatomic) _Bool hasLocalIdentifier;
@property(readonly, nonatomic) _Bool hasSoftwareVersion;
@property(readonly, nonatomic) _Bool hasFirmwareVersion;
@property(readonly, nonatomic) _Bool hasHardwareVersion;
@property(readonly, nonatomic) _Bool hasModel;
@property(readonly, nonatomic) _Bool hasManufacturer;
@property(readonly, nonatomic) _Bool hasName;

@end

