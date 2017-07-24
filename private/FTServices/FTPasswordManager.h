//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FTServices/FTPasswordManager-Protocol.h>

@class ACAccountStore, IMUserNotificationCenter, NSMutableSet, NSString;

@interface FTPasswordManager : NSObject <FTPasswordManager>
{
    NSMutableSet *_runningQueries;
    ACAccountStore *_accountStore;
    IMUserNotificationCenter *_userNotificationCenter;
}

+ (id)_loginUserNotificationForService:(id)arg1 user:(id)arg2 isForBadPassword:(_Bool)arg3 showForgetPassword:(_Bool)arg4 shouldRememberPassword:(_Bool)arg5;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isiCloudSignedIn;
- (id)iCloudUsername;
- (id)_primaryAppleAccount;
- (id)profileIDForACAccount:(id)arg1;
- (id)acAccountWithProfileID:(id)arg1 username:(id)arg2 accountStore:(id)arg3;
- (void)cancelRequestID:(id)arg1 serviceIdentifier:(id)arg2;
- (id)_accountOptionsDictForRenewCredentialsForService:(id)arg1 username:(id)arg2;
- (void)setHandlesForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 handles:(id)arg4;
- (void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 accountStatus:(id)arg6 outRequestID:(id *)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 outRequestID:(id *)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)setPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 password:(id)arg4 outRequestID:(id *)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(_Bool)arg4 showForgotPassword:(_Bool)arg5 outRequestID:(id *)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)requestPasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(_Bool)arg3 showForgotPassword:(_Bool)arg4 shouldRememberPassword:(_Bool)arg5 outRequestID:(id *)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)fetchAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id *)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)fetchPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id *)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)cleanUpAccountsBasedOnInUseUsernames:(id)arg1 profileIDs:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)cleanUpAccountsWithUsername:(id)arg1 orProfileID:(id)arg2 basedOnInUseUsernames:(id)arg3 profileIDs:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)_accountBasedOnProfileID:(id)arg1 orUsername:(id)arg2 inStore:(id)arg3;
- (id)_accountWithProfileIDMatchingUser:(id)arg1 inStore:(id)arg2;
- (id)_accountWithProfileID:(id)arg1 username:(id)arg2 inStore:(id)arg3;
- (id)_profileIDForUsername:(id)arg1 inStore:(id)arg2;
- (id)_accountWithUsernameAlias:(id)arg1 inStore:(id)arg2;
- (id)_accountWithUsername:(id)arg1 inStore:(id)arg2;
- (id)_findIDSAccountsInStore:(id)arg1 withCriteria:(CDUnknownBlockType)arg2;
- (id)_findIDSAccountInStore:(id)arg1 withCriteria:(CDUnknownBlockType)arg2;
- (id)_keychainAuthTokenForUsername:(id)arg1 service:(id)arg2;
- (void)_setKeychainAuthToken:(id)arg1 forUsername:(id)arg2 service:(id)arg3;
- (id)_keychainPasswordForUsername:(id)arg1 service:(id)arg2;
- (void)_setKeychainPassword:(id)arg1 forUsername:(id)arg2 service:(id)arg3;
- (_Bool)supportsAuthTokenRequests;
- (id)initWithUserNotificationCenter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

