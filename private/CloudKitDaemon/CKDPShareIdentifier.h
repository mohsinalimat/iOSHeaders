//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPShareIdentifier : PBCodable <NSCopying>
{
    CKDPIdentifier *_value;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
}

@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(retain, nonatomic) CKDPIdentifier *value; // @synthesize value=_value;
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
@property(readonly, nonatomic) _Bool hasZoneIdentifier;
@property(readonly, nonatomic) _Bool hasValue;

@end

