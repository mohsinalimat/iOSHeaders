//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/VSAuthenticationViewControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSIdentityProviderRequestManagerDelegate-Protocol.h>

@class NSOperationQueue, NSString, UIBarButtonItem, VSAuditToken, VSIdentityProvider, VSIdentityProviderRequestManager, VSImageLoadOperation, VSViewModel;
@protocol VSIdentityProviderViewControllerDelegate;

@interface VSIdentityProviderViewController : UIViewController <VSAuthenticationViewControllerDelegate, VSIdentityProviderRequestManagerDelegate>
{
    _Bool _canIssuePrivacyVouchers;
    _Bool _cancellationAllowed;
    VSIdentityProvider *_identityProvider;
    id <VSIdentityProviderViewControllerDelegate> _delegate;
    VSAuditToken *_auditToken;
    NSOperationQueue *_privateQueue;
    VSImageLoadOperation *_logoLoadOperation;
    VSViewModel *_viewModel;
    VSIdentityProviderRequestManager *_requestManager;
    UIBarButtonItem *_signInButtonItem;
    UIBarButtonItem *_cancelButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *cancelButtonItem; // @synthesize cancelButtonItem=_cancelButtonItem;
@property(retain, nonatomic) UIBarButtonItem *signInButtonItem; // @synthesize signInButtonItem=_signInButtonItem;
@property(retain, nonatomic) VSIdentityProviderRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) VSViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) VSImageLoadOperation *logoLoadOperation; // @synthesize logoLoadOperation=_logoLoadOperation;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
@property(nonatomic) _Bool canIssuePrivacyVouchers; // @synthesize canIssuePrivacyVouchers=_canIssuePrivacyVouchers;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) __weak id <VSIdentityProviderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)identityProviderRequestManager:(id)arg1 didAuthenticateAccount:(id)arg2 supportingApps:(id)arg3 forRequest:(id)arg4;
- (void)identityProviderRequestManager:(id)arg1 finishedRequest:(id)arg2 withResult:(id)arg3;
- (void)authenticationViewControllerDidCancel:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)enqueueRequest:(id)arg1;
- (void)_dismiss;
- (void)_showViewController:(id)arg1;
- (id)_logoLoadOperationForPreferredImageSize:(struct CGSize)arg1;
- (void)_hideNavigationBarButtons;
- (void)_showNavigationBarButtons;
- (void)_stopValidationAndShowButtons:(_Bool)arg1;
- (void)_startValidation;
- (void)_showValidationAlertForError:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_signInButtonPressed:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithIdentityProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

