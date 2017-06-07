//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Sharing/NSCopying-Protocol.h>

@class NSString;

@interface AWDSharingProximityiOSSetupTriggered : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_sessionUUID;
    int _smoothedRSSI;
    unsigned int _userActionType;
    unsigned int _userMs;
    struct {
        unsigned int timestamp:1;
        unsigned int smoothedRSSI:1;
        unsigned int userActionType:1;
        unsigned int userMs:1;
    } _has;
}

@property(nonatomic) unsigned int userMs; // @synthesize userMs=_userMs;
@property(nonatomic) unsigned int userActionType; // @synthesize userActionType=_userActionType;
@property(nonatomic) int smoothedRSSI; // @synthesize smoothedRSSI=_smoothedRSSI;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) _Bool hasUserMs;
@property(nonatomic) _Bool hasUserActionType;
@property(nonatomic) _Bool hasSmoothedRSSI;
@property(readonly, nonatomic) _Bool hasSessionUUID;
@property(nonatomic) _Bool hasTimestamp;

@end
