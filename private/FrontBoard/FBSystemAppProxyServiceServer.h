//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/FBSystemServiceFacility.h>

@class FBServiceClientAuthenticator;

@interface FBSystemAppProxyServiceServer : FBSystemServiceFacility
{
    FBServiceClientAuthenticator *_badgeValueAuthenticator;
    FBServiceClientAuthenticator *_deleteSnapshotsAuthenticator;
    FBServiceClientAuthenticator *_shutdownAuthenticator;
    FBServiceClientAuthenticator *_keyboardFocusAuthenticator;
    FBServiceClientAuthenticator *_dataResetAuthenticator;
}

+ (id)sharedInstance;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)_handleSetKeyboardFocusApplication:(id)arg1 forClient:(id)arg2;
- (void)_handleShutdown:(id)arg1 forClient:(id)arg2;
- (void)_handleTerminateApplicationGroup:(id)arg1;
- (void)_handleTerminateApplication:(id)arg1;
- (void)_handleActions:(id)arg1;
- (void)_handleGetProcessHandle:(id)arg1 forClient:(id)arg2;
- (void)_handleActivateApplication:(id)arg1 forClient:(id)arg2;
- (void)_handleCanActivateApplication:(id)arg1;
- (void)_handlePidForApplication:(id)arg1;
- (void)_handleGetPasscodeLockedOrBlockedStatus:(id)arg1 forClient:(id)arg2;
- (void)_handleSystemApplicationBundleIdentifier:(id)arg1;
- (void)_handleSetNextWakeInterval:(id)arg1 forClient:(id)arg2;
- (void)_handleAppRequestBrightness:(id)arg1 forClient:(id)arg2;
- (void)_handleSuspendApplication:(id)arg1 forClient:(id)arg2;
- (void)_handleDeleteAllApplicationSnapshots:(id)arg1 forClient:(id)arg2;
- (void)_handleDataReset:(id)arg1 forClient:(id)arg2;
- (void)_handleGetBadgeValue:(id)arg1 forClient:(id)arg2;
- (void)_handleSetBadgeValue:(id)arg1 forClient:(id)arg2;
- (void)_handleGetActiveInterfaceOrientation:(id)arg1 forClient:(id)arg2;
- (void)_handleUIAppCheckIn:(id)arg1 forClient:(id)arg2;
- (void)dealloc;
- (id)_initWithQueue:(id)arg1;

@end

