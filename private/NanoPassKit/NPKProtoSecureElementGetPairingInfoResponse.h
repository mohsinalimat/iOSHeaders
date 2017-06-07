//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoSecureElementGetPairingInfoResponse : PBCodable <NSCopying>
{
    NSData *_challengeResponse;
    NSData *_cryptogram;
    _Bool _pending;
    _Bool _success;
    CDStruct_5ee4970e _has;
}

@property(retain, nonatomic) NSData *challengeResponse; // @synthesize challengeResponse=_challengeResponse;
@property(retain, nonatomic) NSData *cryptogram; // @synthesize cryptogram=_cryptogram;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
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
@property(readonly, nonatomic) _Bool hasChallengeResponse;
@property(readonly, nonatomic) _Bool hasCryptogram;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasPending;

@end

