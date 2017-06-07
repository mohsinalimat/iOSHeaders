//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSSet, PKFelicaGreenCarTicket, PKFelicaShinkansenTicket;

@interface PKFelicaAppletHistory : NSObject <NSSecureCoding>
{
    NSSet *_existingKeys;
    _Bool _blacklisted;
    _Bool _inStation;
    _Bool _inShinkansenStation;
    _Bool _shinkansenTicketActive;
    _Bool _greenCarTicketUsed;
    long long _source;
    long long _type;
    NSNumber *_SPID;
    NSNumber *_balance;
    NSArray *_historyRecords;
    PKFelicaShinkansenTicket *_shinkansenTicket;
    PKFelicaGreenCarTicket *_greenCarTicket;
}

+ (long long)appletTypeForDictionary:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) PKFelicaGreenCarTicket *greenCarTicket; // @synthesize greenCarTicket=_greenCarTicket;
@property(readonly, copy, nonatomic) PKFelicaShinkansenTicket *shinkansenTicket; // @synthesize shinkansenTicket=_shinkansenTicket;
@property(readonly, copy, nonatomic) NSArray *historyRecords; // @synthesize historyRecords=_historyRecords;
@property(readonly, copy, nonatomic) NSNumber *balance; // @synthesize balance=_balance;
@property(readonly, nonatomic, getter=isGreenCarTicketUsed) _Bool greenCarTicketUsed; // @synthesize greenCarTicketUsed=_greenCarTicketUsed;
@property(readonly, nonatomic, getter=isShinkansenTicketActive) _Bool shinkansenTicketActive; // @synthesize shinkansenTicketActive=_shinkansenTicketActive;
@property(readonly, nonatomic, getter=isInShinkansenStation) _Bool inShinkansenStation; // @synthesize inShinkansenStation=_inShinkansenStation;
@property(readonly, nonatomic, getter=isInStation) _Bool inStation; // @synthesize inStation=_inStation;
@property(readonly, nonatomic, getter=isBlacklisted) _Bool blacklisted; // @synthesize blacklisted=_blacklisted;
@property(readonly, copy, nonatomic) NSNumber *SPID; // @synthesize SPID=_SPID;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)sanitizeValuesWithState:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 source:(long long)arg2;
- (id)init;

@end

