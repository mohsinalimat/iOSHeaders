//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, ACAccountType;
@protocol OS_dispatch_queue;

@interface AKAccountManager : NSObject
{
    ACAccountStore *_accountStore;
    ACAccountType *_authKitAccountType;
    ACAccountType *_appleIDAccountType;
    ACAccountType *_iCloudAccountType;
    NSObject<OS_dispatch_queue> *_accountQueue;
}

+ (_Bool)isAccountsFrameworkAvailable;
+ (id)sharedInstance;
@property(retain, nonatomic) ACAccountStore *store; // @synthesize store=_accountStore;
- (void).cxx_destruct;
@property(readonly, nonatomic) ACAccountType *appleIDAccountType;
- (id)_iCloudAccountType;
- (id)_altDSIDForiCloudAccount:(id)arg1;
- (id)_aliasesForiCloudAccount:(id)arg1;
- (id)transportableAuthKitAccount:(id)arg1;
- (_Bool)isPrimaryiCloudAccount:(id)arg1;
- (id)iCloudAccountForAltDSID:(id)arg1;
- (id)iCloudAccountForAppleID:(id)arg1;
- (_Bool)hasPrimaryiCloudAccountForAltDSID:(id)arg1;
- (_Bool)hasPrimaryiCloudAccountForAppleID:(id)arg1;
- (void)removeUnusedAuthKitAccounts;
- (id)stringRepresentationForService:(long long)arg1;
- (id)activeServiceNamesForAccount:(id)arg1;
- (id)servicesUsingAccount:(id)arg1;
- (void)setAccount:(id)arg1 inUse:(_Bool)arg2 byService:(long long)arg3;
- (void)_removeTokenForKeys:(id)arg1 forAccount:(id)arg2;
- (void)_removeTokenKey:(id)arg1 forAccount:(id)arg2;
- (void)removeContinuationTokenForAccount:(id)arg1;
- (void)removeAllPasswordResetTokens;
- (id)mostRecentlyUsedAuthKitAccount;
- (id)appleIDAccountWithAppleID:(id)arg1;
- (id)appleIDAccountWithAltDSID:(id)arg1;
- (id)allAuthKitAccounts;
@property(readonly, nonatomic) ACAccountType *authKitAccountType;
- (id)authKitAccountWithAppleID:(id)arg1;
- (id)authKitAccountWithDSID:(id)arg1;
- (id)authKitAccountWithAltDSID:(id)arg1;
- (id)_tokenWithName:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;
- (void)removeMasterTokenForAccount:(id)arg1;
- (id)masterTokenForAccount:(id)arg1;
- (id)passwordResetTokenBackupForAccount:(id)arg1 error:(id *)arg2;
- (id)passwordResetTokenForAccount:(id)arg1 error:(id *)arg2;
- (id)continuationTokenForAccount:(id)arg1 error:(id *)arg2;
- (id)hearbeatTokenForAccount:(id)arg1 error:(id *)arg2;
- (id)passwordResetTokenBackupForAccount:(id)arg1;
- (id)passwordResetTokenForAccount:(id)arg1;
- (id)continuationTokenForAccount:(id)arg1;
- (id)hearbeatTokenForAccount:(id)arg1;
- (void)setSecurityLevel:(unsigned long long)arg1 forAccount:(id)arg2;
- (unsigned long long)securityLevelForAccount:(id)arg1;
- (void)setAliases:(id)arg1 forAccount:(id)arg2;
- (id)aliasesForAccount:(id)arg1;
- (void)setDSID:(id)arg1 forAccount:(id)arg2;
- (id)DSIDForAccount:(id)arg1;
- (void)setAltDSID:(id)arg1 forAccount:(id)arg2;
- (id)altDSIDForAccount:(id)arg1;
- (id)init;

@end

