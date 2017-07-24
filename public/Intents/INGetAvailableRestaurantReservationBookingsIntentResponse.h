//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntentResponse.h>

#import <Intents/INGetAvailableRestaurantReservationBookingsIntentResponseExport-Protocol.h>

@class INTermsAndConditions, NSArray, NSString;

@interface INGetAvailableRestaurantReservationBookingsIntentResponse : INIntentResponse <INGetAvailableRestaurantReservationBookingsIntentResponseExport>
{
    NSString *_localizedRestaurantDescriptionText;
    NSString *_localizedBookingAdvisementText;
    INTermsAndConditions *_termsAndConditions;
    NSArray *_availableBookings;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *availableBookings; // @synthesize availableBookings=_availableBookings;
@property(copy, nonatomic) INTermsAndConditions *termsAndConditions; // @synthesize termsAndConditions=_termsAndConditions;
@property(copy, nonatomic) NSString *localizedBookingAdvisementText; // @synthesize localizedBookingAdvisementText=_localizedBookingAdvisementText;
@property(copy, nonatomic) NSString *localizedRestaurantDescriptionText; // @synthesize localizedRestaurantDescriptionText=_localizedRestaurantDescriptionText;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
@property(readonly, nonatomic) long long code;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithAvailableBookings:(id)arg1 code:(long long)arg2 userActivity:(id)arg3;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

