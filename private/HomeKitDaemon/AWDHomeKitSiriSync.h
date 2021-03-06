//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDHomeKitSiriSync : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _currentConfigurationVersion;
    unsigned int _duration;
    unsigned int _lastSyncedConfigurationVersion;
    NSMutableArray *_reasons;
    unsigned int _serverConfigurationVersion;
    struct {
        unsigned int timestamp:1;
        unsigned int currentConfigurationVersion:1;
        unsigned int duration:1;
        unsigned int lastSyncedConfigurationVersion:1;
        unsigned int serverConfigurationVersion:1;
    } _has;
}

+ (Class)reasonsType;
@property(nonatomic) unsigned int serverConfigurationVersion; // @synthesize serverConfigurationVersion=_serverConfigurationVersion;
@property(nonatomic) unsigned int lastSyncedConfigurationVersion; // @synthesize lastSyncedConfigurationVersion=_lastSyncedConfigurationVersion;
@property(nonatomic) unsigned int currentConfigurationVersion; // @synthesize currentConfigurationVersion=_currentConfigurationVersion;
@property(retain, nonatomic) NSMutableArray *reasons; // @synthesize reasons=_reasons;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
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
@property(nonatomic) _Bool hasServerConfigurationVersion;
@property(nonatomic) _Bool hasLastSyncedConfigurationVersion;
@property(nonatomic) _Bool hasCurrentConfigurationVersion;
- (id)reasonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)reasonsCount;
- (void)addReasons:(id)arg1;
- (void)clearReasons;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;

@end

