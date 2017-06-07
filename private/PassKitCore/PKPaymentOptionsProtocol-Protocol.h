//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class CNContact, NSDictionary, PKPaymentPass, PKRemotePaymentInstrument;

@protocol PKPaymentOptionsProtocol <NSObject>
@property(retain, nonatomic) CNContact *defaultContactName;
@property(retain, nonatomic) CNContact *defaultContactPhone;
@property(retain, nonatomic) CNContact *defaultContactEmail;
@property(readonly, nonatomic) NSDictionary *defaultBillingAddresses;
@property(retain, nonatomic) CNContact *defaultShippingAddress;
- (void)setDefaultBillingAddress:(CNContact *)arg1 forPaymentPass:(PKPaymentPass *)arg2;
- (CNContact *)defaultBillingAddressForRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1;
- (CNContact *)defaultBillingAddressForPaymentPass:(PKPaymentPass *)arg1;
@end

