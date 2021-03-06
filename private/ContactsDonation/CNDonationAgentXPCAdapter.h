//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDonationAgentAdapter-Protocol.h>

@class NSString;

@interface CNDonationAgentXPCAdapter : NSObject <CNDonationAgentAdapter>
{
}

+ (id)newXPCConnection;
+ (void)removeAllRejectionsWithScope:(id)arg1;
+ (void)rejectValuesWithClusterIdentifier:(id)arg1 scope:(id)arg2;
+ (void)rejectValueWithDonationIdentifier:(id)arg1 scope:(id)arg2;
+ (void)changeFromAccount:(id)arg1 toAccount:(id)arg2 scope:(id)arg3;
+ (void)meCardDonationsWithScope:(id)arg1;
+ (void)fetchDonatedMeCardWithScope:(id)arg1;
+ (void)removeDonatedMeCardValuesForIdentifiers:(id)arg1 scope:(id)arg2;
+ (void)donateMeCardValues:(id)arg1 scope:(id)arg2;
- (id)donatedMeCardEither;
- (id)removeAllRejections;
- (id)rejectValuesWithClusterIdentifier:(id)arg1;
- (id)changeFromAccount:(id)arg1 toAccount:(id)arg2;
- (id)rejectValueWithDonationIdentifier:(id)arg1;
- (id)meCardDonations;
- (id)fetchDonatedMeCard;
- (id)removeDonatedMeCardValuesForIdentifiers:(id)arg1;
- (id)donateMeCardValues:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

