//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSDictionary, NSMutableDictionary, NSString;

@interface MFAccount : NSObject
{
    ACAccount *_persistentAccount;
    struct os_unfair_lock_s _persistentAccountLock;
    NSMutableDictionary *_unsavedAccountProperties;
    NSString *_sourceApplicationBundleIdentifier;
}

+ (id)supportedDataclasses;
+ (id)saslProfileName;
+ (_Bool)isSSLEditable;
+ (_Bool)usesSSL;
+ (_Bool)isCommonPortNumber:(unsigned int)arg1;
+ (unsigned int)defaultSecurePortNumber;
+ (unsigned int)defaultPortNumber;
+ (id)hostname;
+ (id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2;
+ (void *)legacyKeychainProtocol;
+ (id)displayedShortAccountTypeString;
+ (id)displayedAccountTypeString;
+ (id)accountTypeString;
+ (_Bool)_setBasicProperty:(id)arg1 forKey:(id)arg2 persistentAccount:(id)arg3;
+ (id)_basicPropertyForKey:(id)arg1 persistentAccount:(id)arg2;
+ (id)propertiesWhichRequireValidation;
+ (id)predefinedValueForKey:(id)arg1;
+ (_Bool)isPredefinedAccountType;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (id)accountTypeIdentifier;
+ (id)_accountClass;
+ (id)_newPersistentAccount;
+ (id)accountWithPersistentAccount:(id)arg1;
+ (id)authSchemesForAccountClass;
+ (id)accountWithProperties:(id)arg1;
+ (id)excludedAccountPropertyKeys;
+ (id)newAccountWithDictionary:(id)arg1;
+ (_Bool)shouldHealAccounts;
+ (void)setShouldHealAccounts:(_Bool)arg1;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
- (id)copyDiagnosticInformation;
- (_Bool)isSyncingNotes;
- (_Bool)isEnabledForDataclass:(id)arg1;
- (id)enabledDataclasses;
- (id)loginDisabledErrorWithTitle:(id)arg1;
- (id)inaccessiblePasswordErrorWithTitle:(id)arg1;
- (id)missingPasswordErrorWithTitle:(id)arg1;
- (_Bool)shouldDisplayHostnameInErrorMessages;
- (_Bool)enableAccount;
- (_Bool)shouldEnableAfterError:(id)arg1;
- (id)nameForMailboxUid:(id)arg1;
@property(readonly) NSString *syncStoreIdentifier;
@property(readonly) NSString *uniqueId;
- (_Bool)_connectAndAuthenticate:(id)arg1;
- (void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2;
- (id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3;
- (_Bool)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (id)secureConnectionSettings;
- (id)insecureConnectionSettings;
- (id)alternateConnectionSettings;
- (void)applySettingsAsDefault:(id)arg1;
- (id)defaultConnectionSettings;
- (id)certUIService;
- (id)authenticatedConnection;
- (_Bool)requiresAuthentication;
- (Class)connectionClass;
- (id)_newConnection;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)preferredAuthScheme;
- (void)accountInfoDidChange;
- (void)setClientCertificates:(id)arg1;
- (id)clientCertificates;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)setTryDirectSSL:(_Bool)arg1;
- (_Bool)allowsTrustPrompt;
- (void)setUsesSSL:(_Bool)arg1;
- (_Bool)usesSSL;
- (void)validateConnections;
- (void)releaseAllForcedConnections;
- (void)releaseAllConnections;
- (struct __CFString *)connectionServiceType;
- (id)secureServiceName;
- (id)serviceName;
- (void)setPortNumber:(unsigned int)arg1;
- (unsigned int)defaultSecurePortNumber;
- (unsigned int)defaultPortNumber;
- (unsigned int)portNumber;
- (_Bool)fetchTokensIfNecessary:(id *)arg1;
@property(readonly) NSString *managedTag;
@property(readonly) ACAccount *accountForRenewingCredentials;
- (_Bool)promptUserForWebLoginWithURL:(id)arg1 shouldConfirm:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)promptUserForPasswordWithTitle:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)renewCredentialsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_renewCredentialsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)setOAuth2Token:(id)arg1 refreshToken:(id)arg2 error:(id *)arg3;
- (id)oauth2Token;
- (_Bool)setCredentialItem:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;
- (id)credentialItemForKey:(id)arg1 error:(id *)arg2;
- (id)credentialItemForKey:(id)arg1;
- (unsigned long long)credentialAccessibility;
- (id)password;
- (id)_passwordWithError:(id *)arg1;
- (id)_password;
- (void)setPassword:(id)arg1;
- (id)_credentialCreateIfNecessary:(_Bool)arg1 error:(id *)arg2;
- (id)_credentialCreateIfNecessary:(_Bool)arg1;
- (id)_credential;
- (_Bool)supportsMailDrop;
- (_Bool)isManaged;
@property(retain, nonatomic) NSString *hostname;
@property(retain, nonatomic) NSString *username;
@property(retain, nonatomic) NSString *displayName;
- (_Bool)canGoOffline;
- (void)setActive:(_Bool)arg1;
- (_Bool)isActive;
- (_Bool)_boolForAccountInfoKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)_objectForAccountInfoKey:(id)arg1;
- (id)valueInAccountPropertiesForKey:(id)arg1;
- (void)removeValueInAccountPropertiesForKey:(id)arg1;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (void)_setAccountProperties:(id)arg1;
- (void)_queueAccountInfoDidChange;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)accountPropertyForKey:(id)arg1;
@property(readonly) NSDictionary *properties;
- (id)accountClass;
@property(readonly) NSString *type;
@property(readonly) NSString *parentAccountIdentifier;
@property(readonly) ACAccount *parentAccount;
@property(readonly) NSString *identifier;
- (void)removePersistentAccount;
- (void)savePersistentAccount;
@property(readonly) ACAccount *persistentAccount;
- (void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2;
- (void)setPersistentAccount:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPersistentAccount:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProperties:(id)arg1;
- (id)init;
- (_Bool)shouldFetchACEDBInfoForError:(id)arg1;

@end

