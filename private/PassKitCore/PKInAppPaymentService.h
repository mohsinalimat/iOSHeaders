//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PKXPCService;

@interface PKInAppPaymentService : NSObject
{
    PKXPCService *_remoteService;
}

- (void).cxx_destruct;
- (void)paymentHardwareStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)paymentServicesMerchantURL:(CDUnknownBlockType)arg1;
- (void)merchantStatusCheck:(id)arg1 merchantDomain:(id)arg2 sourceApplicationSecondaryIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostIdentifier:(id)arg2 orientation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)retrievePaymentListenerEndpointForHostIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerPaymentListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (id)init;

@end

