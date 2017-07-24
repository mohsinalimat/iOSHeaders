//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/BBRemoteDataProvider-Protocol.h>

@class BBDataProviderProxy, CALNPersistedNotificationsContext, EKTimedEventStorePurger, NSMutableDictionary, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface CALNRemoteDataProvider : NSObject <BBRemoteDataProvider>
{
    NSObject<OS_dispatch_queue> *_alertQueue;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSMutableDictionary *_alarmBulletins;
    NSMutableDictionary *_notificationBulletins;
    _Bool _ignoreLowLevelDatabaseChangedNotifications;
    NSTimer *_syncTimer;
    _Bool _pendingChanges;
    CDUnknownBlockType _fetchNotificationReferences;
    _Bool _notificationsNeedLoad;
    CALNPersistedNotificationsContext *_context;
    BBDataProviderProxy *_proxy;
    EKTimedEventStorePurger *_timedEventStorePurger;
}

+ (id)requestedDarwinNotifications;
+ (id)logHandle;
@property(retain, nonatomic) EKTimedEventStorePurger *timedEventStorePurger; // @synthesize timedEventStorePurger=_timedEventStorePurger;
@property(retain) BBDataProviderProxy *proxy; // @synthesize proxy=_proxy;
@property(readonly) CALNPersistedNotificationsContext *context; // @synthesize context=_context;
@property(readonly) NSObject<OS_dispatch_queue> *alertQueue; // @synthesize alertQueue=_alertQueue;
@property(readonly) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
- (void).cxx_destruct;
- (void)reloadNotificationsIfNeeded;
- (void)reloadNotifications;
- (_Bool)_loadNotifications;
- (id)notificationBulletins;
- (void)protectedAcknowledgeAlarm:(_Bool)arg1 forBulletinWithEntityID:(id)arg2 externalID:(id)arg3 extraActions:(CDUnknownBlockType)arg4;
- (void)bulletinAcknowledgedWithResponse:(id)arg1 acknowledgeAlarm:(_Bool)arg2 extraActions:(CDUnknownBlockType)arg3;
- (void)clearAlerts:(id)arg1;
- (void)removeAlerts:(id)arg1;
- (void)acknowledgeAlerts:(id)arg1 includeRefiringAlerts:(_Bool)arg2;
- (id)alarmBulletins;
- (void)_syncTimerFired:(id)arg1;
- (void)_killSyncTimer;
- (void)_resetSyncTimer;
- (_Bool)syncsBulletinDismissal;
- (void)dataProviderDidLoad;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)sortDescriptors;
- (id)sectionIdentifier;
- (id)defaultURLForAlertInfo:(id)arg1;
- (id)expirationDateForAlertInfo:(id)arg1;
- (id)messageStringForAlertInfo:(id)arg1;
- (id)titleStringForAlertInfo:(id)arg1;
- (id)supplementaryActionsForAlertInfo:(id)arg1 bulletin:(id)arg2 compactLayout:(_Bool)arg3;
- (id)viewActionForAlertInfo:(id)arg1;
- (id)closeActionForAlertInfo:(id)arg1;
- (id)bulletinRequestWithCalendarNotification:(id)arg1;
- (id)bulletinRequestForAlertInfo:(id)arg1;
- (id)bulletinRequestWithRecordID:(id)arg1 publisherBulletinID:(id)arg2;
- (void)notificationsChanged;
- (void)notificationCountChanged:(id)arg1;
- (void)unalertedNotificationsReceived:(id)arg1 withNotificationReferences:(id)arg2;
- (void)alertInfosFired:(id)arg1;
- (void)withdrawNotificationBulletin:(id)arg1;
- (void)withdrawAlertBulletin:(id)arg1;
- (_Bool)shouldWithdrawBulletin:(id)arg1 forItem:(id)arg2;
- (void)postBulletinForAlertInfo:(id)arg1;
- (void)willPostBulletinForAlertInfo:(id)arg1;
- (_Bool)shouldPostBulletinForAlertInfo:(id)arg1;
- (_Bool)saveNotificationBulletin:(id)arg1 replace:(_Bool)arg2;
- (void)protectedRemoveBulletinForID:(id)arg1;
- (void)protectedSaveBulletin:(id)arg1 forAlertInfo:(id)arg2 usingID:(id)arg3;
- (void)_timeZoneChanged:(id)arg1;
- (void)_calendarNotificationSettingChanged;
- (void)firstUnlock;
- (void)_significantTimeChanged;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)databaseChanged;
- (void)_calDatabaseChangedNotificationReceived;
- (void)handleDarwinNotification:(id)arg1;
- (void)fetchDataFromContext;
- (_Bool)shouldWithdrawBeforePostingBulletinForAlert:(id)arg1;
- (_Bool)shouldModfyBulletinForAlert:(id)arg1;
- (void)acknowledgeLocationAlertWithURL:(id)arg1 entityID:(id)arg2;
- (id)alarmForCalendarItem:(id)arg1 matchingExternalID:(id)arg2;
- (id)eventStoreWithDispatch:(_Bool)arg1;
- (id)protectedEventStore;
- (id)eventStore;
- (id)protectedItemForBulletinRecordID:(id)arg1;
- (id)entityScheme;
- (void)dealloc;
- (id)initWithNotificationFetchBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

