//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PKPeerPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class NSString, PKPeerPaymentService;

@interface PKPeerPaymentWebServiceTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol>
{
    PKPeerPaymentService *_peerPaymentService;
}

+ (id)localTargetDevice;
- (void).cxx_destruct;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setUserHasDisabledPeerPayment:(_Bool)arg1;
- (_Bool)userHasDisabledPeerPayment;
- (id)bridgedClientInfo;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (id)account;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

