//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoSetPreferredPaymentApplicationResponse : PBCodable <NSCopying>
{
    NSString *_passID;
    NSString *_preferredApplicationAID;
}

@property(retain, nonatomic) NSString *preferredApplicationAID; // @synthesize preferredApplicationAID=_preferredApplicationAID;
@property(retain, nonatomic) NSString *passID; // @synthesize passID=_passID;
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
@property(readonly, nonatomic) _Bool hasPreferredApplicationAID;
@property(readonly, nonatomic) _Bool hasPassID;

@end

