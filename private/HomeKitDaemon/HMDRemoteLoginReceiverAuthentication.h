//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginAuthentication.h>

@class ACAccountStore;
@protocol HMDRemoteLoginReceiverAuthenticationDelegate;

@interface HMDRemoteLoginReceiverAuthentication : HMDRemoteLoginAuthentication
{
    id <HMDRemoteLoginReceiverAuthenticationDelegate> _delegate;
    ACAccountStore *_store;
}

+ (id)logCategory;
@property(readonly, nonatomic) ACAccountStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) __weak id <HMDRemoteLoginReceiverAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_completedAuthenticationRequest:(id)arg1 loggedInAccount:(id)arg2;
- (void)_handleAuthenticationResults:(id)arg1 error:(id)arg2 targetedAccountType:(unsigned long long)arg3;
- (void)_authenticateAccount:(id)arg1 targetedAccountType:(unsigned long long)arg2;
- (void)_authenticateStoreWithAuthenticationResults:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_authenticateForAccountType:(unsigned long long)arg1 usingAuthenticationResults:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_saveRemoteVerifiedAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5;

@end

