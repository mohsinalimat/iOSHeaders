//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INTermsAndConditions, NSArray, NSString;

@protocol INGetAvailableRestaurantReservationBookingsIntentResponseExport <NSObject, JSExport>
@property(readonly, nonatomic) NSArray *availableBookings;
@property(copy, nonatomic) INTermsAndConditions *termsAndConditions;
@property(copy, nonatomic) NSString *localizedBookingAdvisementText;
@property(copy, nonatomic) NSString *localizedRestaurantDescriptionText;
@property(readonly, nonatomic) long long code;
- (id)init;
@end

