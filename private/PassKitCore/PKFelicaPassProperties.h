//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSDecimalNumber, NSNumber, NSString;

@interface PKFelicaPassProperties : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _shinkansenTicketActive;
    _Bool _greenCarTicketUsed;
    _Bool _blacklisted;
    _Bool _inStation;
    _Bool _inShinkansenStation;
    _Bool _hasGreenCarTicket;
    _Bool _hasShinkansenTicket;
    NSString *_currencyCode;
    NSString *_appletFormat;
    NSDecimalNumber *_transitBalance;
    NSDateComponents *_shinkansenValidityStartDate;
    NSNumber *_shinkansenValidityTerm;
    NSString *_shinkansenOriginStation;
    NSString *_shinkansenDestinationStation;
    NSDateComponents *_shinkansenDepartureTime;
    NSDateComponents *_shinkansenArrivalTime;
    NSString *_shinkansenTrainName;
    NSNumber *_shinkansenCarNumber;
    NSNumber *_shinkansenSeatRow;
    NSNumber *_shinkansenSeatNumber;
    NSString *_shinkansenSecondaryOriginStation;
    NSString *_shinkansenSecondaryDestinationStation;
    NSDateComponents *_shinkansenSecondaryDepartureTime;
    NSDateComponents *_shinkansenSecondaryArrivalTime;
    NSString *_shinkansenSecondaryTrainName;
    NSNumber *_shinkansenSecondaryCarNumber;
    NSNumber *_shinkansenSecondarySeatRow;
    NSNumber *_shinkansenSecondarySeatNumber;
    NSString *_greenCarOriginStation;
    NSString *_greenCarDestinationStation;
    NSDateComponents *_greenCarValidityStartDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)passPropertiesForPass:(id)arg1;
@property(nonatomic) _Bool hasShinkansenTicket; // @synthesize hasShinkansenTicket=_hasShinkansenTicket;
@property(nonatomic) _Bool hasGreenCarTicket; // @synthesize hasGreenCarTicket=_hasGreenCarTicket;
@property(copy, nonatomic) NSDateComponents *greenCarValidityStartDate; // @synthesize greenCarValidityStartDate=_greenCarValidityStartDate;
@property(copy, nonatomic) NSString *greenCarDestinationStation; // @synthesize greenCarDestinationStation=_greenCarDestinationStation;
@property(copy, nonatomic) NSString *greenCarOriginStation; // @synthesize greenCarOriginStation=_greenCarOriginStation;
@property(copy, nonatomic) NSNumber *shinkansenSecondarySeatNumber; // @synthesize shinkansenSecondarySeatNumber=_shinkansenSecondarySeatNumber;
@property(copy, nonatomic) NSNumber *shinkansenSecondarySeatRow; // @synthesize shinkansenSecondarySeatRow=_shinkansenSecondarySeatRow;
@property(copy, nonatomic) NSNumber *shinkansenSecondaryCarNumber; // @synthesize shinkansenSecondaryCarNumber=_shinkansenSecondaryCarNumber;
@property(copy, nonatomic) NSString *shinkansenSecondaryTrainName; // @synthesize shinkansenSecondaryTrainName=_shinkansenSecondaryTrainName;
@property(copy, nonatomic) NSDateComponents *shinkansenSecondaryArrivalTime; // @synthesize shinkansenSecondaryArrivalTime=_shinkansenSecondaryArrivalTime;
@property(copy, nonatomic) NSDateComponents *shinkansenSecondaryDepartureTime; // @synthesize shinkansenSecondaryDepartureTime=_shinkansenSecondaryDepartureTime;
@property(copy, nonatomic) NSString *shinkansenSecondaryDestinationStation; // @synthesize shinkansenSecondaryDestinationStation=_shinkansenSecondaryDestinationStation;
@property(copy, nonatomic) NSString *shinkansenSecondaryOriginStation; // @synthesize shinkansenSecondaryOriginStation=_shinkansenSecondaryOriginStation;
@property(copy, nonatomic) NSNumber *shinkansenSeatNumber; // @synthesize shinkansenSeatNumber=_shinkansenSeatNumber;
@property(copy, nonatomic) NSNumber *shinkansenSeatRow; // @synthesize shinkansenSeatRow=_shinkansenSeatRow;
@property(copy, nonatomic) NSNumber *shinkansenCarNumber; // @synthesize shinkansenCarNumber=_shinkansenCarNumber;
@property(copy, nonatomic) NSString *shinkansenTrainName; // @synthesize shinkansenTrainName=_shinkansenTrainName;
@property(copy, nonatomic) NSDateComponents *shinkansenArrivalTime; // @synthesize shinkansenArrivalTime=_shinkansenArrivalTime;
@property(copy, nonatomic) NSDateComponents *shinkansenDepartureTime; // @synthesize shinkansenDepartureTime=_shinkansenDepartureTime;
@property(copy, nonatomic) NSString *shinkansenDestinationStation; // @synthesize shinkansenDestinationStation=_shinkansenDestinationStation;
@property(copy, nonatomic) NSString *shinkansenOriginStation; // @synthesize shinkansenOriginStation=_shinkansenOriginStation;
@property(copy, nonatomic) NSNumber *shinkansenValidityTerm; // @synthesize shinkansenValidityTerm=_shinkansenValidityTerm;
@property(copy, nonatomic) NSDateComponents *shinkansenValidityStartDate; // @synthesize shinkansenValidityStartDate=_shinkansenValidityStartDate;
@property(nonatomic, getter=isInShinkansenStation) _Bool inShinkansenStation; // @synthesize inShinkansenStation=_inShinkansenStation;
@property(nonatomic, getter=isInStation) _Bool inStation; // @synthesize inStation=_inStation;
@property(nonatomic, getter=isBlacklisted) _Bool blacklisted; // @synthesize blacklisted=_blacklisted;
@property(nonatomic, getter=isGreenCarTicketUsed) _Bool greenCarTicketUsed; // @synthesize greenCarTicketUsed=_greenCarTicketUsed;
@property(nonatomic, getter=isShinkansenTicketActive) _Bool shinkansenTicketActive; // @synthesize shinkansenTicketActive=_shinkansenTicketActive;
@property(copy, nonatomic) NSDecimalNumber *transitBalance; // @synthesize transitBalance=_transitBalance;
@property(copy, nonatomic) NSString *appletFormat; // @synthesize appletFormat=_appletFormat;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
- (void).cxx_destruct;
- (id)_stringForRow:(id)arg1 seat:(id)arg2;
- (id)displayableShinkansenSecondarySeat;
- (id)displayableShinkansenSeat;
- (id)decimalTransitBalance;
- (id)displayableTransitBalance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFelicaAppletState:(id)arg1 paymentApplication:(id)arg2;

@end

