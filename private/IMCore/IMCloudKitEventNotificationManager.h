//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMCloudKitSyncState, IMEventNotificationManager, IMWeakReferenceCollection, NSTimer;
@protocol IMCloudKitEventHandlerAccountInfoProvider;

@interface IMCloudKitEventNotificationManager : NSObject
{
    id <IMCloudKitEventHandlerAccountInfoProvider> _accountInfoProvider;
    double _progressPollingInterval;
    IMWeakReferenceCollection *_eventHandlers;
    IMEventNotificationManager *_notificationManager;
    NSTimer *_fetchStatsTimer;
}

+ (id)sharedInstance;
+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
@property __weak NSTimer *fetchStatsTimer; // @synthesize fetchStatsTimer=_fetchStatsTimer;
@property(retain) IMEventNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly) IMWeakReferenceCollection *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property double progressPollingInterval; // @synthesize progressPollingInterval=_progressPollingInterval;
@property __weak id <IMCloudKitEventHandlerAccountInfoProvider> accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
- (void).cxx_destruct;
- (void)startFetchingSyncProgress;
- (id)_createSyncProgressWithStatistics:(id)arg1;
- (void)_sendProgressToEventHandlersWithSyncStatistics:(id)arg1;
- (void)_rescheduleFetchSyncProgress;
- (_Bool)_wantsSyncProgress;
- (void)_timerExpiredForSyncStatsFetching:(id)arg1;
- (void)_cancelStatsFetchingTimer;
- (void)fetchSyncStateStatistics;
- (void)_sendSyncStatisticsToEventHandlers:(id)arg1 error:(id)arg2;
- (void)_fetchSyncStateStatistics:(CDUnknownBlockType)arg1;
- (void)performAdditionalStorageRequiredCheck;
- (void)disableAllSyncEnabledCloudKitDevices;
@property _Bool didPromptForCloudKitSync;
- (void)startPeriodicSync;
- (_Bool)accountHasiMessageEnabled;
- (void)setCloudKitSyncEnabled:(_Bool)arg1;
- (void)pauseEventNotifications:(_Bool)arg1;
- (void)_syncStateDidChange:(id)arg1;
- (void)_sendSyncStateChangedEventToEventHandlers;
@property(readonly) IMCloudKitSyncState *syncState;
- (void)visitEventHandlers:(CDUnknownBlockType)arg1;
- (void)removeEventHandler:(id)arg1;
- (void)addEventHandler:(id)arg1;
- (id)_createSyncNotEnabledError;
- (id)cloudKitHooks;
- (id)init;
- (void)cancelEventNotificationsForEventHandler:(id)arg1;
- (void)performAdditionalStorageRequiredCheck:(id)arg1;
- (_Bool)isCloudKitSyncEnabled;
- (id)lastSyncDate;
- (_Bool)isSyncing;
- (_Bool)canEnableCloudKitSync;
- (_Bool)isCloudKitSyncAvailable;
- (void)setCloudKitSyncEnabled:(_Bool)arg1 eventHandler:(id)arg2;
- (void)startReceivingAllSyncStateChangedEvents:(id)arg1;
- (void)fetchSyncStateStatistics:(id)arg1;
- (void)disableAllSyncEnabledCloudKitDevices:(id)arg1;
- (void)startPeriodicSync:(id)arg1;
- (_Bool)isFetchingRepeatingSyncStatsForEventHandler:(id)arg1;
- (void)stopPeriodicallyFetchingSyncStateForEventHandler:(id)arg1;
- (void)fetchSyncStateStatisticsWithRepeatingTimeInterval:(double)arg1 eventHandler:(id)arg2;
- (id)initWithCloudKitHooks:(id)arg1;

@end
