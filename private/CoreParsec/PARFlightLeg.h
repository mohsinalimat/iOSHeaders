//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PARFlightAirport;

@interface PARFlightLeg : NSObject
{
    NSString *_status;
    long long _departureScheduledTime;
    long long _departureEstimatedTime;
    NSString *_departureTerminal;
    NSString *_departureGate;
    PARFlightAirport *_departureAirport;
    long long _arrivalScheduledTime;
    long long _arrivalEstimatedTime;
    NSString *_arrivalTerminal;
    NSString *_arrivalGate;
    NSString *_divertedAirportCode;
    PARFlightAirport *_arrivalAirport;
}

@property(retain, nonatomic) PARFlightAirport *arrivalAirport; // @synthesize arrivalAirport=_arrivalAirport;
@property(retain, nonatomic) NSString *divertedAirportCode; // @synthesize divertedAirportCode=_divertedAirportCode;
@property(retain, nonatomic) NSString *arrivalGate; // @synthesize arrivalGate=_arrivalGate;
@property(retain, nonatomic) NSString *arrivalTerminal; // @synthesize arrivalTerminal=_arrivalTerminal;
@property(nonatomic) long long arrivalEstimatedTime; // @synthesize arrivalEstimatedTime=_arrivalEstimatedTime;
@property(nonatomic) long long arrivalScheduledTime; // @synthesize arrivalScheduledTime=_arrivalScheduledTime;
@property(retain, nonatomic) PARFlightAirport *departureAirport; // @synthesize departureAirport=_departureAirport;
@property(retain, nonatomic) NSString *departureGate; // @synthesize departureGate=_departureGate;
@property(retain, nonatomic) NSString *departureTerminal; // @synthesize departureTerminal=_departureTerminal;
@property(nonatomic) long long departureEstimatedTime; // @synthesize departureEstimatedTime=_departureEstimatedTime;
@property(nonatomic) long long departureScheduledTime; // @synthesize departureScheduledTime=_departureScheduledTime;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)description;

@end

