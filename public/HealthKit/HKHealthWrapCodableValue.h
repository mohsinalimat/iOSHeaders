//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HKHealthWrapCodableValue : PBCodable <NSCopying>
{
    long long _integer;
    NSData *_bytes;
    NSString *_string;
    int _type;
    struct {
        unsigned int integer:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) long long integer; // @synthesize integer=_integer;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(retain, nonatomic) NSData *bytes; // @synthesize bytes=_bytes;
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
@property(nonatomic) _Bool hasInteger;
@property(readonly, nonatomic) _Bool hasString;
@property(readonly, nonatomic) _Bool hasBytes;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

