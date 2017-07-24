//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>

@class NSString, PKPeerPaymentIdentityVerificationController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKIdentityVerificationLegalExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate>
{
    PKPeerPaymentIdentityVerificationController *_controller;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
}

- (void).cxx_destruct;
- (void)_cancel;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)loadView;
- (id)initWithContext:(long long)arg1 setupDelegate:(id)arg2 identityVerificationController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

