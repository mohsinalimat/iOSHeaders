//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOAlightNotificationFeedback, GEOETARoute, GEOStep, MNActiveRouteDetails, MNActiveRouteInfo, MNAudioOutputSetting, MNGuidanceEventFeedback, MNGuidanceLaneInfo, MNGuidanceSignInfo, MNLocationDetails, MNNavigationSessionManager, MNTracePlaybackDetails, MNTrafficIncidentAlertDetails, NSArray, NSDate, NSError, NSString, NSUUID;

@protocol MNNavigationSessionManagerDelegate <NSObject>
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateTracePlaybackDetails:(MNTracePlaybackDetails *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didStartUsingVoiceLanguage:(NSString *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateAudioRouteSelection:(unsigned long long)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateCurrentAudioSettingForVoicePrompt:(MNAudioOutputSetting *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateCurrentAudioSetting:(MNAudioOutputSetting *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateAudioSettings:(NSArray *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didStartSpeakingPrompt:(NSString *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateFeedback:(GEOAlightNotificationFeedback *)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didInvalidateTrafficIncidentAlert:(MNTrafficIncidentAlertDetails *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateTrafficIncidentAlert:(MNTrafficIncidentAlertDetails *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didReceiveTrafficIncidentAlert:(MNTrafficIncidentAlertDetails *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 updatedGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 newGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 hideLaneDirectionsForId:(NSUUID *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 showLaneDirections:(MNGuidanceLaneInfo *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 usePersistentDisplay:(_Bool)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 updateSignsWithInfo:(MNGuidanceSignInfo *)arg2;
- (void)navigationSessionManagerEndGuidanceUpdate:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManagerBeginGuidanceUpdate:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManagerHideSecondaryStep:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 displaySecondaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 displayPrimaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 proceedToRouteDistance:(double)arg2 displayString:(NSString *)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateAlternateRoutes:(NSArray *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(MNActiveRouteDetails *)arg3;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didRerouteWithDetails:(MNActiveRouteDetails *)arg2 locationDetails:(MNLocationDetails *)arg3 withAlternateRoutes:(NSArray *)arg4;
- (void)navigationSessionManagerDidCancelReroute:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManagerWillReroute:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateTrafficForETARoute:(GEOETARoute *)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4 forRoute:(MNActiveRouteInfo *)arg5;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateETAResponseForRoute:(MNActiveRouteInfo *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateDisplayETA:(NSDate *)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(MNActiveRouteInfo *)arg4;
- (void)navigationSessionManagerWillResumeFromPause:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManagerWillPause:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManagerDidArrive:(MNNavigationSessionManager *)arg1;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateLocation:(MNLocationDetails *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)navigationSessionManager:(MNNavigationSessionManager *)arg1 didUpdateActiveRouteDetails:(MNActiveRouteDetails *)arg2;
@end

