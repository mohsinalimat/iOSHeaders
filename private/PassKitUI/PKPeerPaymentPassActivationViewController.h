//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PKPaymentProvisioningController, PKPeerPaymentCredential, PKPeerPaymentWebService, PKTableHeaderView, UIImage;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPeerPaymentPassActivationViewController : UIViewController
{
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    PKPeerPaymentCredential *_credential;
    id <PKPaymentSetupViewControllerDelegate> _delegate;
    unsigned long long _state;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKTableHeaderView *_headerView;
    UIImage *_passSnapShot;
}

- (void).cxx_destruct;
- (void)_handleError:(id)arg1;
- (void)_completeProvisioningFlow;
- (id)_titleStringForState;
- (_Bool)_hasDebitCard;
- (void)_donePressed;
- (void)_setState:(unsigned long long)arg1;
- (void)_setShowCheckmark:(_Bool)arg1;
- (void)_setShowSpinner:(_Bool)arg1;
- (void)_beginSetup;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 credential:(id)arg4 passSnapShot:(id)arg5;

@end

