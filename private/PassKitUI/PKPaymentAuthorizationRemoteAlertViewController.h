//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import <PassKitUI/PKPaymentAuthorizationHostProtocol-Protocol.h>

@class NSString, NSXPCConnection, PKInAppPaymentService, PKPaymentAuthorizationRemoteAlertViewControllerExportedObject, PKPaymentAuthorizationServiceNavigationController, PKPaymentRequest;

@interface PKPaymentAuthorizationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentAuthorizationHostProtocol>
{
    _Bool _didForceDismiss;
    long long _hostAppInterfaceOrientation;
    NSString *_hostApplicationIdentifier;
    PKPaymentAuthorizationServiceNavigationController *_navigationController;
    PKPaymentAuthorizationRemoteAlertViewControllerExportedObject *_exportedObject;
    PKInAppPaymentService *_inAppPaymentService;
    NSXPCConnection *_hostConnection;
    PKPaymentRequest *_paymentRequest;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property(retain, nonatomic) NSXPCConnection *hostConnection; // @synthesize hostConnection=_hostConnection;
@property(retain, nonatomic) PKInAppPaymentService *inAppPaymentService; // @synthesize inAppPaymentService=_inAppPaymentService;
@property(retain, nonatomic) PKPaymentAuthorizationRemoteAlertViewControllerExportedObject *exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) PKPaymentAuthorizationServiceNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (void)_forceDismiss;
- (void)_dismiss;
- (id)_remoteObjectProxy;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationWillStart;
- (void)handleLockButtonPressed;
- (void)handleHomeButtonPressed;
- (void)setUserInfo:(id)arg1;
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)_willAppearInRemoteViewController;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

