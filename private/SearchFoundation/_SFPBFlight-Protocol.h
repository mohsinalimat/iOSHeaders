//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBFlightLeg;

@protocol _SFPBFlight <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasCarrierPhoneNumber;
@property(copy, nonatomic) NSString *carrierPhoneNumber;
@property(readonly, nonatomic) _Bool hasOperatorFlightNumber;
@property(copy, nonatomic) NSString *operatorFlightNumber;
@property(readonly, nonatomic) _Bool hasOperatorCarrierCode;
@property(copy, nonatomic) NSString *operatorCarrierCode;
@property(copy, nonatomic) NSArray *legs;
@property(readonly, nonatomic) _Bool hasFlightNumber;
@property(copy, nonatomic) NSString *flightNumber;
@property(readonly, nonatomic) _Bool hasCarrierName;
@property(copy, nonatomic) NSString *carrierName;
@property(readonly, nonatomic) _Bool hasCarrierCode;
@property(copy, nonatomic) NSString *carrierCode;
@property(readonly, nonatomic) _Bool hasFlightID;
@property(copy, nonatomic) NSString *flightID;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBFlightLeg *)legsAtIndex:(unsigned long long)arg1;
- (unsigned long long)legsCount;
- (void)addLegs:(_SFPBFlightLeg *)arg1;
- (void)clearLegs;
@end

