//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields, _INPBCurrencyAmountValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBPaymentAmountValue;

@interface _INPBTransferMoneyIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBFinancialAccountValue *_fromAccount;
    _INPBFinancialAccountValue *_toAccount;
    _INPBPaymentAmountValue *_transactionAmount;
    NSString *_transactionNote;
    _INPBDateTimeRange *_transactionScheduledDate;
    _INPBCurrencyAmountValue *_transferFee;
}

+ (id)options;
@property(retain, nonatomic) _INPBCurrencyAmountValue *transferFee; // @synthesize transferFee=_transferFee;
@property(retain, nonatomic) NSString *transactionNote; // @synthesize transactionNote=_transactionNote;
@property(retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate; // @synthesize transactionScheduledDate=_transactionScheduledDate;
@property(retain, nonatomic) _INPBPaymentAmountValue *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(retain, nonatomic) _INPBFinancialAccountValue *toAccount; // @synthesize toAccount=_toAccount;
@property(retain, nonatomic) _INPBFinancialAccountValue *fromAccount; // @synthesize fromAccount=_fromAccount;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTransferFee;
@property(readonly, nonatomic) _Bool hasTransactionNote;
@property(readonly, nonatomic) _Bool hasTransactionScheduledDate;
@property(readonly, nonatomic) _Bool hasTransactionAmount;
@property(readonly, nonatomic) _Bool hasToAccount;
@property(readonly, nonatomic) _Bool hasFromAccount;

@end

