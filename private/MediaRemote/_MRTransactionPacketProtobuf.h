//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString, _MRTransactionKeyProtobuf;

@interface _MRTransactionPacketProtobuf : PBCodable <NSCopying>
{
    unsigned long long _totalLength;
    unsigned long long _totalWritePosition;
    NSString *_identifier;
    _MRTransactionKeyProtobuf *_key;
    NSData *_packetData;
    struct {
        unsigned int totalLength:1;
        unsigned int totalWritePosition:1;
    } _has;
}

+ (void)initialize;
@property(nonatomic) unsigned long long totalWritePosition; // @synthesize totalWritePosition=_totalWritePosition;
@property(nonatomic) unsigned long long totalLength; // @synthesize totalLength=_totalLength;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSData *packetData; // @synthesize packetData=_packetData;
@property(retain, nonatomic) _MRTransactionKeyProtobuf *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTotalWritePosition;
@property(nonatomic) _Bool hasTotalLength;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasPacketData;
@property(readonly, nonatomic) _Bool hasKey;
- (void)dealloc;
- (id)customDictionaryRepresentation;

@end

