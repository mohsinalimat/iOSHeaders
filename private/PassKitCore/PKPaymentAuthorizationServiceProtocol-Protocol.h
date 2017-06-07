//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, NSError, PKPaymentMerchantSession, PKPaymentRequest;

@protocol PKPaymentAuthorizationServiceProtocol <NSObject>
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(NSArray *)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(NSArray *)arg2 paymentSummaryItems:(NSArray *)arg3;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(NSArray *)arg2;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(PKPaymentMerchantSession *)arg1 error:(NSError *)arg2;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationWillResignActive:(_Bool)arg1;

@optional
- (void)prepareWithPaymentRequest:(PKPaymentRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)handleDismissWithCompletion:(void (^)(void))arg1;
- (void)handleHostApplicationDidCancel;
@end

