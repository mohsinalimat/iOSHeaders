//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentPass.h>

@interface PKPaymentPass (NanoPassKit)
- (void)npkSetPreferredPaymentApplication:(id)arg1;
- (id)npkPreferredInAppPaymentApplication;
- (id)npkPreferredContactlessPaymentApplication;
- (id)npkSortedDeviceInAppPaymentApplications;
- (id)npkSortedDeviceContactlessPaymentApplications;
- (_Bool)npkHasUserSelectableInAppPaymentApplications;
- (_Bool)npkHasUserSelectableContactlessPaymentApplications;
- (id)npkDeviceInAppPaymentApplications;
- (id)npkDeviceContactlessPaymentApplications;
@end

