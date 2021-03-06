//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBAirport, _SFPBDate;

@protocol _SFPBFlightLeg <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasBaggageClaim;
@property(copy, nonatomic) NSString *baggageClaim;
@property(readonly, nonatomic) _Bool hasTitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hasDivertedAirport;
@property(retain, nonatomic) _SFPBAirport *divertedAirport;
@property(readonly, nonatomic) _Bool hasArrivalAirport;
@property(retain, nonatomic) _SFPBAirport *arrivalAirport;
@property(readonly, nonatomic) _Bool hasArrivalGate;
@property(copy, nonatomic) NSString *arrivalGate;
@property(readonly, nonatomic) _Bool hasArrivalTerminal;
@property(copy, nonatomic) NSString *arrivalTerminal;
@property(readonly, nonatomic) _Bool hasArrivalActualTime;
@property(retain, nonatomic) _SFPBDate *arrivalActualTime;
@property(readonly, nonatomic) _Bool hasArrivalPublishedTime;
@property(retain, nonatomic) _SFPBDate *arrivalPublishedTime;
@property(readonly, nonatomic) _Bool hasDepartureAirport;
@property(retain, nonatomic) _SFPBAirport *departureAirport;
@property(readonly, nonatomic) _Bool hasDepartureGate;
@property(copy, nonatomic) NSString *departureGate;
@property(readonly, nonatomic) _Bool hasDepartureTerminal;
@property(copy, nonatomic) NSString *departureTerminal;
@property(readonly, nonatomic) _Bool hasDepartureActualTime;
@property(retain, nonatomic) _SFPBDate *departureActualTime;
@property(readonly, nonatomic) _Bool hasDeparturePublishedTime;
@property(retain, nonatomic) _SFPBDate *departurePublishedTime;
@property(readonly, nonatomic) _Bool hasStatus;
@property(nonatomic) int status;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

