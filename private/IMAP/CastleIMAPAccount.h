//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAP/IMAPAccount.h>

@class ACAccount, ACAccountStore, DeliveryAccount, MFLock, NSMutableDictionary, NSString, NSURL;

@interface CastleIMAPAccount : IMAPAccount
{
    MFLock *_appleAccountLock;
    ACAccount *_appleAccount;
    DeliveryAccount *_deliveryAccount;
    unsigned int _readyForPushRegistration:1;
    NSMutableDictionary *_aliasChanges;
    NSString *_updatedDefaultEmail;
}

+ (id)newChildAccountWithParentAccount:(id)arg1 error:(id *)arg2;
+ (_Bool)primaryDeliveryAccountIsDynamic;
+ (_Bool)usernameIsEmailAddress;
+ (_Bool)isPredefinedAccountType;
+ (id)accountTypeString;
+ (id)displayedAccountTypeString;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)emailAddressHostPart;
+ (id)accountTypeIdentifier;
- (_Bool)shouldFetchACEDBInfoForError:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (_Bool)supportsArchiving;
- (id)iconString;
- (_Bool)isEnabledForDataclass:(id)arg1;
- (void)pushUpdateForAliasData;
- (id)_prepareAliasData;
- (_Bool)_updateEmailAddressAndAliases;
- (_Bool)updateEmailAliases;
- (id)_headerStringFromDate:(id)arg1;
- (void)setEnabled:(_Bool)arg1 forEmailAddress:(id)arg2;
- (void)setLocallyEnabled:(_Bool)arg1 forEmailAddress:(id)arg2;
- (void)setDefaultEmailAddress:(id)arg1;
- (void)setLocalDefaultEmailAddress:(id)arg1;
- (id)_defaultEmailAddressFromData:(id)arg1;
- (id)_emailsFromData:(id)arg1;
- (id)_aliasesFromOldData:(id)arg1;
- (id)_aliasesFromData:(id)arg1;
- (id)_aliasAuthorizationHeader;
- (id)_aliasUserAgent;
@property(readonly, nonatomic) NSURL *aliasLookupURL;
- (id)_deliveryAccountCreateIfNeeded:(_Bool)arg1;
- (_Bool)derivesDeliveryAccountInfoFromMailAccount;
@property(readonly, nonatomic) _Bool deliveryUsesSSL;
@property(readonly, nonatomic) unsigned int deliveryPortNumber;
@property(readonly, nonatomic) NSString *deliveryHostname;
- (void)handleOverQuotaResponse:(id)arg1;
- (void)handleAlertResponse:(id)arg1;
- (id)passwordFromKeychain;
- (void)_removePasswordInKeychain;
- (void)setPasswordInKeychain:(id)arg1;
- (id)_fromEmailAddressesIncludingDisabled:(_Bool)arg1;
- (id)fromEmailAddressesIncludingDisabled;
- (id)fromEmailAddresses;
- (id)emailAddressesAndAliasesList;
- (id)emailAddresses;
- (id)firstEmailAddress;
- (id)preferredAuthScheme;
- (unsigned long long)credentialAccessibility;
- (id)authTokenWithError:(id *)arg1;
@property(readonly, retain, nonatomic) NSString *authToken;
@property(readonly, retain, nonatomic) NSString *personID;
- (id)displayUsername;
- (id)username;
- (void)setUsername:(id)arg1;
- (_Bool)allowsTrustPrompt;
- (_Bool)usesSSL;
- (unsigned int)portNumber;
- (id)hostname;
- (void)setUsesSSL:(_Bool)arg1;
- (void)setPortNumber:(unsigned int)arg1;
- (void)setHostname:(id)arg1;
- (id)uniqueIdForPersistentConnection;
- (void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2;
- (id)_mailPropertyFromAppleAccountForKey:(id)arg1;
@property(readonly, nonatomic) ACAccountStore *accountStore;
- (void)_accountsChanged:(id)arg1;
- (void)_resetAppleAccount;
@property(readonly, nonatomic) ACAccount *appleAccount;
- (void)startListeningForNotifications;
- (_Bool)canReceiveNewMailNotifications;
- (_Bool)canAttemptPushRegistration;
- (_Bool)shouldRegisterForPush;
- (id)statisticsKind;
- (_Bool)isEquivalentTo:(id)arg1 hostname:(id)arg2 username:(id)arg3;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (_Bool)shouldDisplayHostnameInErrorMessages;

@end

