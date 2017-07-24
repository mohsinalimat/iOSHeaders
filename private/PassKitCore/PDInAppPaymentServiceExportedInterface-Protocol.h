//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSNumber, NSString, NSXPCListenerEndpoint, PKPaymentRequest;

@protocol PDInAppPaymentServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)paymentHardwareStatusWithCompletion:(void (^)(_Bool, unsigned long long))arg1;
- (void)paymentServicesMerchantURL:(void (^)(_Bool, NSURL *))arg1;
- (void)merchantStatusCheck:(NSString *)arg1 merchantDomain:(NSString *)arg2 sourceApplicationSecondaryIdentifier:(NSString *)arg3 handler:(void (^)(_Bool, NSError *))arg4;
- (void)retrievePaymentListenerEndpointForHostIdentifier:(NSString *)arg1 handler:(void (^)(_Bool, NSXPCListenerEndpoint *))arg2;
- (void)registerPaymentListenerEndpoint:(NSXPCListenerEndpoint *)arg1 forHostIdentifier:(NSString *)arg2 handler:(void (^)(_Bool))arg3;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(PKPaymentRequest *)arg1 forHostIdentifier:(NSString *)arg2 orientation:(NSNumber *)arg3 handler:(void (^)(_Bool, NSError *))arg4;
@end

