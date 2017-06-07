//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData;

@interface _MRCryptoPairingMessageProtobuf : PBCodable <NSCopying>
{
    NSData *_pairingData;
    int _state;
    int _status;
    _Bool _isRetrying;
    _Bool _isUsingSystemPairing;
    struct {
        unsigned int state:1;
        unsigned int status:1;
        unsigned int isRetrying:1;
        unsigned int isUsingSystemPairing:1;
    } _has;
}

@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) _Bool isUsingSystemPairing; // @synthesize isUsingSystemPairing=_isUsingSystemPairing;
@property(nonatomic) _Bool isRetrying; // @synthesize isRetrying=_isRetrying;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *pairingData; // @synthesize pairingData=_pairingData;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasState;
@property(nonatomic) _Bool hasIsUsingSystemPairing;
@property(nonatomic) _Bool hasIsRetrying;
@property(nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasPairingData;
- (void)dealloc;

@end

