//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SetupAssistant/AKAppleIDAuthenticationDelegate-Protocol.h>

@class AKAppleIDAuthenticationContext, NSString;

@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate>
{
    AKAppleIDAuthenticationContext *_authContext;
}

+ (_Bool)isSettingUpMultiUser;
+ (_Bool)isMultiUser;
+ (id)delegateBundleIDsForManagedAccount;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)writeAccountConfigurationIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)_languageConfigurationDictionary;
- (void)_upgradeShortLivedTokenCompletion:(CDUnknownBlockType)arg1;
- (void)_createAppleAccountWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)recoverEMCSWithCompletion:(CDUnknownBlockType)arg1;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_runSilentLoginUpgradeWithCompletion:(CDUnknownBlockType)arg1;
- (void)switchToLoginWindowDueToError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)needsToUpgradeShortLivedToken;
- (void)ingestManagedBuddyData;
- (void)postUserSwitchContextHasBeenUsed;
@property(readonly, nonatomic) _Bool passwordChangeFlowNeedsToRun;
@property(readonly, copy, nonatomic) NSString *shortLivedToken;
- (void)userSwitchContextHasBeenUsed;
- (_Bool)isLoginUser;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

