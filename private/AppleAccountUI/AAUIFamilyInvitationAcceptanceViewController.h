//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccountUI/AAUIBleachedNavigationController.h>

#import <AppleAccountUI/AAUIConfirmIdentityViewControllerDelegate-Protocol.h>
#import <AppleAccountUI/RemoteUIControllerDelegate-Protocol.h>

@class AAFamilyInvite, AAGrandSlamSigner, ACAccount, ACAccountStore, NSMutableURLRequest, NSOperationQueue, NSString, RemoteUIController;
@protocol AAUIFamilyInvitationAcceptanceDelegate;

@interface AAUIFamilyInvitationAcceptanceViewController : AAUIBleachedNavigationController <AAUIConfirmIdentityViewControllerDelegate, RemoteUIControllerDelegate>
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    AAFamilyInvite *_invite;
    RemoteUIController *_remoteUIController;
    NSOperationQueue *_inviteOperationQueue;
    NSMutableURLRequest *_startRemoteUIRequest;
    NSMutableURLRequest *_currentRemoteUIRequest;
}

- (void).cxx_destruct;
- (void)_sendUserToiTunesSettings;
- (void)_loadiTunesLinkingRemoteUI;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)_showErrorAlert;
- (void)confirmIdentityViewController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2;
- (void)_cancelButtonWasTapped:(id)arg1;
- (id)_createCancelButton;
- (id)initWithInvite:(id)arg1 appleAccount:(id)arg2 grandSlamSigner:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <AAUIFamilyInvitationAcceptanceDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

