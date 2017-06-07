//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData;

@interface HDFitnessFriendsCloudKitCodableNotificationEvent : PBCodable <NSCopying>
{
    double _date;
    long long _triggerSnapshotIndex;
    long long _type;
    NSData *_triggerUUID;
    struct {
        unsigned int date:1;
        unsigned int triggerSnapshotIndex:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) long long triggerSnapshotIndex; // @synthesize triggerSnapshotIndex=_triggerSnapshotIndex;
@property(retain, nonatomic) NSData *triggerUUID; // @synthesize triggerUUID=_triggerUUID;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double date; // @synthesize date=_date;
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
@property(nonatomic) _Bool hasTriggerSnapshotIndex;
@property(readonly, nonatomic) _Bool hasTriggerUUID;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasDate;

@end

