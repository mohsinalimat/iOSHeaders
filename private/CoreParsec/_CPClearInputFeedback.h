//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>

@interface _CPClearInputFeedback : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _triggerEvent;
    CDStruct_ce7c5ddc _has;
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsTriggerEvent:(id)arg1;
- (id)triggerEventAsString:(int)arg1;
@property(nonatomic) _Bool hasTriggerEvent;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;

@end

