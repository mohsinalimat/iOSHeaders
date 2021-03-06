//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBBillDetailsValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBPaymentAmountValue, _INPBString;

@interface _INPBPayBillIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBBillDetailsValue *_billDetails;
    _INPBFinancialAccountValue *_fromAccount;
    _INPBPaymentAmountValue *_transactionAmount;
    _INPBString *_transactionNote;
    _INPBDateTimeRange *_transactionScheduledDate;
}

+ (id)options;
@property(retain, nonatomic) _INPBString *transactionNote; // @synthesize transactionNote=_transactionNote;
@property(retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate; // @synthesize transactionScheduledDate=_transactionScheduledDate;
@property(retain, nonatomic) _INPBPaymentAmountValue *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(retain, nonatomic) _INPBBillDetailsValue *billDetails; // @synthesize billDetails=_billDetails;
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
@property(readonly, nonatomic) _Bool hasTransactionNote;
@property(readonly, nonatomic) _Bool hasTransactionScheduledDate;
@property(readonly, nonatomic) _Bool hasTransactionAmount;
@property(readonly, nonatomic) _Bool hasBillDetails;
@property(readonly, nonatomic) _Bool hasFromAccount;

@end

