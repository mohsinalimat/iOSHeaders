//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>

@class NSString, PKPaymentWebService;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentAddDebitCardViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentSetupDelegate>
{
    PKPaymentWebService *_webService;
    id <PKPaymentSetupViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (void)_handleProvisioningError:(id)arg1;
- (void)_presentPaymentSetupController;
- (void)_completeAddDebitCardFlow;
- (void)_setupLater;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)viewDidLoad;
- (id)initWithPaymentWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

