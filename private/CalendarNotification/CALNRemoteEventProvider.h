//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarNotification/CALNRemoteDataProvider.h>

@class NSMutableDictionary;

@interface CALNRemoteEventProvider : CALNRemoteDataProvider
{
    NSMutableDictionary *_alertRecordIDsToAlertInfos;
    NSMutableDictionary *_alertRecordIDsToRefreshTimes;
    CDUnknownBlockType _countOfSuggestedNotificationsToIgnoreBlock;
    CDUnknownBlockType _reloadNotificationsBlock;
    CDUnknownBlockType _requestHypothesisRefresh;
    CDUnknownBlockType _cancelHypothesisRefreshRequest;
    CDUnknownBlockType _ceaseTravelMonitoringEvent;
    CDUnknownBlockType _sendTravelAdviceFeedback;
}

+ (_Bool)_date:(id)arg1 isWithinEightMinutesOfDate:(id)arg2;
+ (_Bool)_mayCeaseRouteMonitoringForAlertInfo:(id)arg1;
+ (_Bool)_alertHasTravelInformation:(id)arg1;
+ (_Bool)_timeToLeaveStateAlreadyDisplayedBasedOnHypothesis:(id)arg1 alertInfo:(id)arg2 date:(id)arg3;
+ (long long)_spanForNewStatusWithEvent:(id)arg1;
+ (id)timeToLeaveStringForAlertInfo:(id)arg1;
+ (double)requestHypothesisRefreshInterval;
+ (id)userActivityUserInfoForEvent:(id)arg1;
+ (_Bool)_shouldRequestReportAProblemAction;
+ (id)_launchOptionsDirectionsModeForLocationRoutingMode:(long long)arg1;
+ (id)_launchOptionsDirectionsModeForTransportType:(int)arg1;
+ (id)_directionsModeForAlertInfo:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType sendTravelAdviceFeedback; // @synthesize sendTravelAdviceFeedback=_sendTravelAdviceFeedback;
@property(copy, nonatomic) CDUnknownBlockType ceaseTravelMonitoringEvent; // @synthesize ceaseTravelMonitoringEvent=_ceaseTravelMonitoringEvent;
@property(copy, nonatomic) CDUnknownBlockType cancelHypothesisRefreshRequest; // @synthesize cancelHypothesisRefreshRequest=_cancelHypothesisRefreshRequest;
@property(copy, nonatomic) CDUnknownBlockType requestHypothesisRefresh; // @synthesize requestHypothesisRefresh=_requestHypothesisRefresh;
@property(copy, nonatomic) CDUnknownBlockType reloadNotificationsBlock; // @synthesize reloadNotificationsBlock=_reloadNotificationsBlock;
@property(copy, nonatomic) CDUnknownBlockType countOfSuggestedNotificationsToIgnoreBlock; // @synthesize countOfSuggestedNotificationsToIgnoreBlock=_countOfSuggestedNotificationsToIgnoreBlock;
- (void).cxx_destruct;
- (unsigned long long)_ttlEventTrackerTravelStateForHypothesisTravelState:(long long)arg1;
- (unsigned long long)_ttlEventTrackerETATypeForHypothesis:(id)arg1;
- (unsigned long long)_ttlEventTrackerTransportTypeForGEOTransportType:(int)arg1;
- (unsigned long long)_ttlEventTrackerAlertTypeForDate:(id)arg1 hypothesis:(id)arg2;
- (void)_recordDisplayOfInitialTimeToLeaveAlert;
- (void)_recordDisplayOfInitialTimeToLeaveAlertWithDate:(id)arg1 event:(id)arg2 hypothesis:(id)arg3 wasFoundInApps:(_Bool)arg4;
- (void)_recordUpcomingEventAlertSuppression;
- (void)_clearHypothesisAndUpdateBulletinForAlertInfo:(id)arg1;
- (void)_clearTravelAdvisoryHypotheses;
- (void)_significantTimeChanged;
- (void)_removeRefreshTimerForEventWithExternalURL:(id)arg1;
- (void)_refreshTimerFired:(id)arg1;
- (void)_setUpRefreshTimerAt:(id)arg1 forEventWithExternalURL:(id)arg2;
- (void)_updateRefreshTimerForEventWithExternalURL:(id)arg1;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (id)btaJobNameForEvent:(id)arg1;
- (void)_receivedHypothesis:(id)arg1 forEventWithExternalURL:(id)arg2;
@property(readonly, nonatomic) CDUnknownBlockType eventSignficantlyChangedBlock;
@property(readonly, nonatomic) CDUnknownBlockType authorizationChangedBlock;
@property(readonly, nonatomic) CDUnknownBlockType adviceReceivedBlock;
- (void)protectedAcknowledgeAlarm:(_Bool)arg1 forBulletinWithEntityID:(id)arg2 externalID:(id)arg3 extraActions:(CDUnknownBlockType)arg4;
- (void)bulletinAcknowledgedWithResponse:(id)arg1 acknowledgeAlarm:(_Bool)arg2 extraActions:(CDUnknownBlockType)arg3;
- (id)_resourceChangeURIFromBulletin:(id)arg1;
- (void)_reportJunkCalendarItemForRecordID:(id)arg1;
- (void)_deleteCalendarItemForRecordID:(id)arg1 span:(long long)arg2;
- (void)_setParticipantStatus:(long long)arg1 recordID:(id)arg2;
- (void)respond:(_Bool)arg1 toCalendarInvite:(id)arg2 isJunk:(_Bool)arg3;
- (void)performCalendarItemForRecordID:(id)arg1 action:(CDUnknownBlockType)arg2;
- (_Bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (id)displayNameForSubsectionID:(id)arg1;
- (id)defaultSubsectionInfos;
- (void)dataProviderDidLoad;
- (void)_trackDirectionsEngagedForTTLAlertForAlertInfo:(id)arg1;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)sectionParameters;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)sortDescriptors;
- (id)defaultSectionInfo;
- (id)universalSectionIdentifier;
- (id)sectionIdentifier;
- (id)locationStringForAlertInfo:(id)arg1;
- (id)dateTimeStringForEventDate:(id)arg1 alwaysIncludeDate:(_Bool)arg2 allDayEvent:(_Bool)arg3;
- (id)messageStringForAlertInfo:(id)arg1;
- (id)titleStringForAlertInfo:(id)arg1;
- (id)_snoozeActionWithAlertInfo:(id)arg1;
- (id)_reportAProblemActionForAlertInfo:(id)arg1;
- (id)_snoozeOrReportAProblemActionForAlertInfo:(id)arg1;
- (id)directionsActionForAlertInfo:(id)arg1;
- (id)supplementaryActionsForAlertInfo:(id)arg1 bulletin:(id)arg2 compactLayout:(_Bool)arg3;
- (id)defaultURLForAlertInfo:(id)arg1;
- (id)viewActionForAlertInfo:(id)arg1;
- (id)_expirationDateForResourceChange:(id)arg1;
- (id)_expirationDateForEventInvitation:(id)arg1;
- (void)_setEventRepresentationForNotification:(id)arg1 bulletin:(id)arg2;
- (id)_representationForRequest:(id)arg1 timeToLeaveString:(id)arg2 eventIfExists:(id)arg3 displayTimeZone:(id)arg4;
- (void)_setPropertiesOnBulletinRequest:(id)arg1 fromResourceChange:(id)arg2 contactIdentifier:(id *)arg3;
- (id)bulletinRequestWithCalendarNotification:(id)arg1;
- (id)_iconImageDataForDate:(id)arg1 calendar:(id)arg2;
- (id)_iconForDate:(id)arg1 calendar:(id)arg2;
- (id)bulletinRequestForAlertInfo:(id)arg1;
- (void)notificationCountChanged:(id)arg1;
- (_Bool)shouldWithdrawBulletin:(id)arg1 forItem:(id)arg2;
- (void)willPostBulletinForAlertInfo:(id)arg1;
- (void)protectedRemoveBulletinForID:(id)arg1;
- (void)protectedSaveBulletin:(id)arg1 forAlertInfo:(id)arg2 usingID:(id)arg3;
- (void)handleDarwinNotification:(id)arg1;
- (_Bool)allowsLocationAlerts;
- (void)fetchDataFromContext;
- (_Bool)shouldWithdrawBeforePostingBulletinForAlert:(id)arg1;
- (_Bool)shouldModfyBulletinForAlert:(id)arg1;
- (void)acknowledgeLocationAlertWithURL:(id)arg1 entityID:(id)arg2;
- (id)protectedItemForBulletinRecordID:(id)arg1;
- (id)entityScheme;
- (id)initWithNotificationFetchBlock:(CDUnknownBlockType)arg1;

@end

