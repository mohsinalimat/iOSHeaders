//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlayAudioSessionEndedOnClient : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _futileRetransmits;
    int _reason;
    unsigned int _retransmits;
    NSString *_sessionUUID;
    unsigned int _slowKeepAlives;
    struct {
        unsigned int timestamp:1;
        unsigned int duration:1;
        unsigned int futileRetransmits:1;
        unsigned int reason:1;
        unsigned int retransmits:1;
        unsigned int slowKeepAlives:1;
    } _has;
}

@property(nonatomic) unsigned int futileRetransmits; // @synthesize futileRetransmits=_futileRetransmits;
@property(nonatomic) unsigned int retransmits; // @synthesize retransmits=_retransmits;
@property(nonatomic) unsigned int slowKeepAlives; // @synthesize slowKeepAlives=_slowKeepAlives;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasFutileRetransmits;
@property(nonatomic) _Bool hasRetransmits;
@property(nonatomic) _Bool hasSlowKeepAlives;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasReason;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end

