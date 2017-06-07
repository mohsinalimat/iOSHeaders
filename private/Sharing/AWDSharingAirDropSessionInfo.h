//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Sharing/NSCopying-Protocol.h>

@class NSString;

@interface AWDSharingAirDropSessionInfo : PBCodable <NSCopying>
{
    unsigned long long _startTimestamp;
    unsigned long long _timestamp;
    NSString *_browserID;
    NSString *_bundleID;
    unsigned int _firstDiscovery;
    unsigned int _maxPeersDiscovered;
    unsigned int _sessionDuration;
    NSString *_sessionID;
    unsigned int _totalPeersDiscovered;
    unsigned int _transfersCompleted;
    unsigned int _transfersInitiated;
    _Bool _legacyMode;
    struct {
        unsigned int startTimestamp:1;
        unsigned int timestamp:1;
        unsigned int firstDiscovery:1;
        unsigned int maxPeersDiscovered:1;
        unsigned int sessionDuration:1;
        unsigned int totalPeersDiscovered:1;
        unsigned int transfersCompleted:1;
        unsigned int transfersInitiated:1;
        unsigned int legacyMode:1;
    } _has;
}

@property(retain, nonatomic) NSString *browserID; // @synthesize browserID=_browserID;
@property(nonatomic) unsigned int transfersCompleted; // @synthesize transfersCompleted=_transfersCompleted;
@property(nonatomic) unsigned int transfersInitiated; // @synthesize transfersInitiated=_transfersInitiated;
@property(nonatomic) unsigned int maxPeersDiscovered; // @synthesize maxPeersDiscovered=_maxPeersDiscovered;
@property(nonatomic) unsigned int totalPeersDiscovered; // @synthesize totalPeersDiscovered=_totalPeersDiscovered;
@property(nonatomic) unsigned int sessionDuration; // @synthesize sessionDuration=_sessionDuration;
@property(nonatomic) unsigned int firstDiscovery; // @synthesize firstDiscovery=_firstDiscovery;
@property(nonatomic) unsigned long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) _Bool legacyMode; // @synthesize legacyMode=_legacyMode;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
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
@property(readonly, nonatomic) _Bool hasBrowserID;
@property(nonatomic) _Bool hasTransfersCompleted;
@property(nonatomic) _Bool hasTransfersInitiated;
@property(nonatomic) _Bool hasMaxPeersDiscovered;
@property(nonatomic) _Bool hasTotalPeersDiscovered;
@property(nonatomic) _Bool hasSessionDuration;
@property(nonatomic) _Bool hasFirstDiscovery;
@property(nonatomic) _Bool hasStartTimestamp;
@property(nonatomic) _Bool hasLegacyMode;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasTimestamp;

@end

