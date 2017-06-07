//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString;

@interface PKProtobufShippingMethod : PBCodable <NSCopying>
{
    long long _amount;
    NSString *_detail;
    NSString *_identifier;
    NSString *_label;
    unsigned int _type;
    CDStruct_9fb36b4c _has;
}

@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
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
@property(readonly, nonatomic) _Bool hasDetail;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasLabel;
@property(nonatomic) _Bool hasAmount;

@end

