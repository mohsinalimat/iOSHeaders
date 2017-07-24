//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/APSConnectionDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, UNSAttachmentsService, UNSNotificationRepository, UNSNotificationSettingsService;
@protocol OS_dispatch_queue, UNSRemoteNotificationServerObserver, _DASActivityScheduler;

@interface UNSRemoteNotificationServer : NSObject <APSConnectionDelegate>
{
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationSettingsService *_notificationSettingsService;
    UNSAttachmentsService *_attachmentsService;
    id <_DASActivityScheduler> _duetActivityScheduler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_extensionQueue;
    NSObject<OS_dispatch_queue> *_apsQueue;
    NSMutableSet *_foregroundBundleIdentifiers;
    NSMutableSet *_runningBundleIdentifiers;
    NSMutableSet *_userNotificationEnabledBundleIdentifiers;
    NSSet *_backgroundAppRefreshBlackList;
    NSMutableDictionary *_bundleIdentifiersToClients;
    NSMutableDictionary *_bundleIdentifiersToAppDescriptions;
    NSMutableDictionary *_environmentsToConnections;
    NSMutableSet *_bundleIdentifiersNeedingToken;
    id <UNSRemoteNotificationServerObserver> _observer;
}

+ (id)_newPushServiceConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3;
+ (id)_environmentFromAuditToken:(CDStruct_6ad76789 *)arg1;
+ (id)environmentFromAuditToken:(CDStruct_6ad76789 *)arg1;
@property(nonatomic) id <UNSRemoteNotificationServerObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)_queue_removeClientForBundleIdentifier:(id)arg1;
- (void)_queue_invalidateTokenForBundleIdentifier:(id)arg1;
- (void)allowsRemoteNotificationsForBundleIdentifier:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)backgroundRefreshApplicationsDidChange;
- (void)_queue_requestTokenForClient:(id)arg1 withBundleIdentifier:(id)arg2;
- (void)_queue_setBackgroundAppRefreshAllowed:(_Bool)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_registerApplicationWithBundleIdentifier:(id)arg1 forEnvironment:(id)arg2 appWantsPush:(_Bool)arg3;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
- (void)requestRemoteNotificationTokenWithEnvironment:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_userNotificationsChangedStateForBundleIdentifier:(id)arg1 becameEnabled:(_Bool)arg2;
- (id)_queue_allTopicsForApplication:(id)arg1;
- (id)_portNameForEnvironmentName:(id)arg1;
- (void)_queue_calculateTopics;
- (_Bool)_queue_isUserNotificationEnabled:(id)arg1;
- (void)_queue_applicationsDidDenyNotificationSettings:(id)arg1;
- (void)_queue_applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (_Bool)_queue_isUserNotificationEnabledForApplication:(id)arg1;
- (_Bool)_queue_isPushedEnabledForApplication:(id)arg1;
- (_Bool)_queue_isBackgroundAppRefreshAllowedForBundleIdentifier:(id)arg1;
- (_Bool)_queue_isContentAvailableRemoteNotificationSupportedForBundleIdentifier:(id)arg1;
- (void)_queue_applicationDidTerminate:(id)arg1;
- (void)_queue_applicationDidLaunch:(id)arg1;
- (_Bool)_queue_isApplicationRunning:(id)arg1;
- (void)_queue_applicationDidBecomeBackground:(id)arg1;
- (void)_queue_applicationDidBecomeForeground:(id)arg1;
- (_Bool)_queue_isApplicationForeground:(id)arg1;
- (void)_queue_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_moveTopicsForApplication:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3;
- (void)_queue_backgroundRefreshApplicationsDidChange;
- (void)_queue_reloadBackgroundAppRefreshBlackList;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (id)_queue_appDescriptionForBundleIdentifier:(id)arg1;
- (void)_queue_removeAppDescriptionForBundleIdentifier:(id)arg1;
- (void)_queue_addApplicationDescriptions:(id)arg1;
- (void)_scheduleContentAvailablePushActivityForMessage:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3;
- (void)_queue_modifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 extension:(id)arg4;
- (void)_queue_tryToModifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3;
- (_Bool)_queue_canDeliverMessageToBundle:(id)arg1;
- (void)_queue_didReceiveIncomingMessage:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)_queue_connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_queue_connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)applicationsDidDenyNotificationSettings:(id)arg1;
- (void)applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)dealloc;
- (id)_initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 attachmentsService:(id)arg3 queue:(id)arg4 extensionQueue:(id)arg5 apsQueue:(id)arg6 duetActivityScheduler:(id)arg7;
- (id)initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 attachmentsService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

