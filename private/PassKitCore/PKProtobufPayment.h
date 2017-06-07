//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, PKProtobufPaymentToken, PKProtobufShippingMethod;

@interface PKProtobufPayment : PBCodable <NSCopying>
{
    NSData *_billingContact;
    NSData *_shippingContact;
    PKProtobufShippingMethod *_shippingMethod;
    PKProtobufPaymentToken *_token;
}

@property(retain, nonatomic) PKProtobufShippingMethod *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property(retain, nonatomic) NSData *shippingContact; // @synthesize shippingContact=_shippingContact;
@property(retain, nonatomic) NSData *billingContact; // @synthesize billingContact=_billingContact;
@property(retain, nonatomic) PKProtobufPaymentToken *token; // @synthesize token=_token;
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
@property(readonly, nonatomic) _Bool hasShippingMethod;
@property(readonly, nonatomic) _Bool hasShippingContact;
@property(readonly, nonatomic) _Bool hasBillingContact;
@property(readonly, nonatomic) _Bool hasToken;

@end

