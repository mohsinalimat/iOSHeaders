//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUIKTimeToLeaveDescriptionGenerator : NSObject
{
}

+ (id)_travelTimeDrivingSubstringWithEta:(id)arg1 location:(id)arg2 includeTransportType:(_Bool)arg3;
+ (id)_travelTimeDrivingSubstringWithEta:(id)arg1 location:(id)arg2 routeName:(id)arg3 includeTransportType:(_Bool)arg4;
+ (id)_travelTimeDrivingStringExcludingTrafficWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3;
+ (id)_travelTimeDrivingStringIncludingTrafficWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3;
+ (id)_travelTimeDrivingStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3;
+ (id)_travelTimeWalkingStringWithEta:(id)arg1 location:(id)arg2;
+ (id)_travelTimeWalkingStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3;
+ (id)_travelTimeStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3;
+ (id)_travelTimeOnTimeTransitStringWithEta:(id)arg1;
+ (id)_travelTimeOnTimeDrivingStringWithEta:(id)arg1;
+ (id)_travelTimeOnTimeWalkingStringWithEta:(id)arg1;
+ (id)_travelTimeRunningLateTransitStringWithEta:(id)arg1 location:(id)arg2;
+ (id)travelTimeRunningLateStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3;
+ (id)_travelTimeLeaveNowDrivingSubstringWithEta:(id)arg1 location:(id)arg2 includeTransportType:(_Bool)arg3;
+ (id)_travelTimeLeaveNowDrivingSubstringWithEta:(id)arg1 location:(id)arg2 routeName:(id)arg3 includeTransportType:(_Bool)arg4;
+ (id)_travelTimeLeaveNowDrivingStringExcludingTrafficWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3;
+ (id)_travelTimeLeaveNowDrivingStringIncludingTrafficWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3;
+ (id)_travelTimeLeaveNowDrivingStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3;
+ (id)_travelTimeLeaveNowTransitStringWithLocation:(id)arg1;
+ (id)_travelTimeLeaveNowTransitStringWithEta:(id)arg1 location:(id)arg2;
+ (id)_travelTimeLeaveNowWalkingStringWithEta:(id)arg1 location:(id)arg2;
+ (id)_travelTimeLeaveNowWalkingStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3;
+ (id)travelTimeLeaveNowStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3;
+ (id)travelTimeApproachingDepartureDateTransitStringWithDepartureDate:(id)arg1 location:(id)arg2;
+ (id)travelTimeApproachingDepartureDateStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3;
+ (id)_attributedEtaString:(double)arg1 fontName:(id)arg2 fontSize:(double)arg3;
+ (id)departureDateString:(id)arg1;
+ (id)_etaString:(double)arg1;
+ (id)timeToLeaveAttributedStringWithAttributes:(id)arg1 hypothesis:(id)arg2 location:(id)arg3;
+ (id)timeToLeaveStringWithEta:(double)arg1 transportType:(int)arg2 runningLate:(_Bool)arg3;
+ (id)timeToLeaveStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3;
+ (id)timeToLeaveStringWithHypothesis:(id)arg1 location:(id)arg2;
+ (id)explanatoryText;

@end

