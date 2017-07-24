//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKAuthenticatorDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationServiceProtocol-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationStateMachineDelegate-Protocol.h>
#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, PKAuthenticator, PKPaymentAuthorizationFooterView, PKPaymentAuthorizationLayout, PKPaymentAuthorizationPasswordButtonView, PKPaymentAuthorizationStateMachine, PKPaymentAuthorizationSummaryItemsView, PKPaymentAuthorizationTotalView, PKPaymentPreferencesViewController, UITableView, UIView;
@protocol PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol;

@interface PKPaymentAuthorizationServiceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, PKAuthenticatorDelegate, PKPaymentAuthorizationStateMachineDelegate, PKPaymentAuthorizationServiceProtocol>
{
    PKPaymentAuthorizationLayout *_layout;
    UIView *_contentView;
    UITableView *_detailTableView;
    PKPaymentAuthorizationSummaryItemsView *_summaryItemsView;
    PKPaymentAuthorizationTotalView *_totalView;
    PKPaymentAuthorizationFooterView *_footerView;
    PKPaymentAuthorizationPasswordButtonView *_passwordButtonView;
    UIView *_passphraseSeparatorView;
    NSLayoutConstraint *_contentViewRightConstraint;
    PKPaymentPreferencesViewController *_shippingMethodPreferencesController;
    PKPaymentPreferencesViewController *_shippingAddressPreferencesController;
    PKPaymentPreferencesViewController *_shippingContactPreferencesController;
    PKPaymentPreferencesViewController *_paymentCardPreferencesController;
    _Bool _visible;
    _Bool _hostApplicationResignedActive;
    _Bool _hostApplicationEnteredBackground;
    _Bool _treatingHostAsBackgrounded;
    _Bool _requestingInAppPIN;
    long long _preferencesStyle;
    struct __IOHIDEventSystemClient *_hidSystemClient;
    unsigned long long _biometryAttempts;
    PKPaymentAuthorizationStateMachine *_stateMachine;
    PKAuthenticator *_authenticator;
    id <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> _delegate;
}

@property(nonatomic) __weak id <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(retain, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void).cxx_destruct;
- (void)_removeSimulatorHIDListener;
- (void)_startSimulatorHIDListener;
- (void)_setVisible:(_Bool)arg1;
- (id)_evaluationRequest;
- (long long)_authenticatorPolicy;
- (id)_compactNavigationController;
- (long long)_totalViewStyle;
- (void)_updatePreferredContentSize:(struct CGSize)arg1;
- (void)_updatePreferredContentSize;
- (void)_updatePreferencesWithErrors:(id)arg1;
- (void)_updateShippingMethods;
- (void)_setupPaymentPassAndBillingAddress;
- (void)_setupShippingContact;
- (void)_setupShippingAddress;
- (void)_setupShippingMethods;
- (void)_setupWithPaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3;
- (void)_handleModelUpdate;
- (Class)_viewPresenterClassForDataItem:(id)arg1;
- (Class)_tableViewClassForDataItem:(id)arg1;
- (void)_removePassphraseViewFromHierarchy;
- (void)_addPassphraseViewControllerToHierarchy:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resumeAndUpdateContentSize;
- (void)cancelPressed:(id)arg1;
- (void)_payWithPasswordPressed:(id)arg1;
- (void)_payWithPasscodePressed:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)signInViewController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)dismissPassphraseViewController;
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (void)dismissPasscodeViewController;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)authenticator:(id)arg1 didRequestUserAction:(long long)arg2;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)_didSucceed;
- (void)_didFailWithFatalError:(id)arg1;
- (void)_didFailWithError:(id)arg1;
- (void)_didCancel:(_Bool)arg1;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)_updateBackgroundedState:(_Bool)arg1;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationWillResignActive:(_Bool)arg1;
- (void)handleHostApplicationDidCancel;
- (void)setFooterState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3;
- (void)_selectOptionsForDataItem:(id)arg1;
- (void)_startEvaluation;
- (void)_suspendAuthentication;
- (void)_resumeAuthenticationWithPreviousError:(id)arg1;
- (void)_invalidPaymentDataWithParam:(id)arg1;
- (void)_processClientCallback:(id)arg1;
- (_Bool)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (id)handlePaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_createSubviews;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

