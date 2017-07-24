//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AppleAccountUI/RemoteUIControllerDelegate-Protocol.h>
#import <AppleAccountUI/UITableViewDataSource-Protocol.h>
#import <AppleAccountUI/UITableViewDelegate-Protocol.h>
#import <AppleAccountUI/UITextFieldDelegate-Protocol.h>
#import <AppleAccountUI/UITextViewDelegate-Protocol.h>

@class AAUIBuddyView, AAUIHeaderView, NSArray, NSString, UILabel, UITableView, UITableViewCell;
@protocol AAUISignInViewControllerDelegate;

@interface AAUISignInViewController : UIViewController <RemoteUIControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UITextViewDelegate>
{
    AAUIHeaderView *_tableHeaderView;
    UITableView *_tableView;
    UITableViewCell *_usernameCell;
    UITableViewCell *_passwordCell;
    AAUIBuddyView *_tableFooterView;
    NSArray *_compactConstraints;
    NSArray *_expandedConstraints;
    _Bool _shouldAnticipatePiggybacking;
    _Bool _allowsAccountCreation;
    _Bool _showServiceIcons;
    long long _akServiceType;
    id <AAUISignInViewControllerDelegate> _delegate;
}

+ (void)phoneNumberSupportedWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool showServiceIcons; // @synthesize showServiceIcons=_showServiceIcons;
@property(nonatomic) _Bool allowsAccountCreation; // @synthesize allowsAccountCreation=_allowsAccountCreation;
@property(nonatomic) __weak id <AAUISignInViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setShouldAnticipatePiggybacking:) _Bool _shouldAnticipatePiggybacking; // @synthesize _shouldAnticipatePiggybacking;
@property(nonatomic, setter=_setAkServiceType:) long long _akServiceType; // @synthesize _akServiceType;
- (void).cxx_destruct;
- (void)_updateConstraintsForTraitCollection:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (double)_compressedHeightForView:(id)arg1 containedInView:(id)arg2;
- (double)heightForFooterInTableView:(id)arg1;
- (double)heightForHeaderInTableView:(id)arg1;
- (id)viewForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)_delegate_signInViewControllerDidCancel;
- (void)_delegate_signInViewControllerDidCompleteWithAuthenticationResults:(id)arg1;
- (void)_updateContentInsetWithHeight:(double)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_endObservingKeyboardWillShowNotifications;
- (void)_beginObservingKeyboardWillShowNotifications;
- (void)_textFieldDidChange:(id)arg1;
- (void)_endObservingTextFieldDidChangeNotifications;
- (void)_beginObservingTextFieldDidChangeNotifications;
- (void)_presentAppleIDPrivacyInformationPane;
- (id)_authorizationValueForAuthenticationResults:(id)arg1;
- (void)_repairCloudAccountWithAuthenticationResults:(id)arg1;
- (void)_attemptAuthenticationWithContext:(id)arg1;
- (void)_attemptAuthentication;
- (void)_presentForgotAppleIDPane;
- (void)_presentCreateAppleIDPane;
- (void)_actionButtonSelected:(id)arg1;
- (void)_nextButtonSelected:(id)arg1;
- (void)_cancelButtonSelected:(id)arg1;
- (void)_setEnabled:(_Bool)arg1;
- (id)_fontForFooter;
- (id)_attributedStringForFooter;
- (_Bool)_isGreenTeaCapable;
- (_Bool)_hasValidCredentials;
- (id)_tableFooterView;
- (id)_passwordCell;
- (id)_usernameCell;
- (id)_tableView;
- (id)_tableHeaderView;
- (id)_nextBarButtonItem;
- (id)_cancelBarButtonItem;
@property(readonly, nonatomic) UILabel *messageLabel;
@property(readonly, nonatomic) UILabel *titleLabel;
- (id)authenticationContext;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) AAUIBuddyView *view; // @dynamic view;

@end

