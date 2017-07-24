//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKWorkout.h>

@interface HKWorkout (FitnessUI)
+ (unsigned long long)fiui_associatedMetricForGoalType:(unsigned long long)arg1;
+ (_Bool)fiui_shouldTrackPaceWithOdometerForActivityType:(unsigned long long)arg1;
+ (_Bool)_isHeartRateSupportedInPowerSettingsForActivityType:(unsigned long long)arg1;
+ (_Bool)_isHeartRateSupportedInPrivacySettings;
+ (_Bool)fiui_isHeartRateSupportedForActivityType:(unsigned long long)arg1 isIndoor:(_Bool)arg2;
+ (id)fiui_supportedGoalTypesForActivityType:(id)arg1;
+ (id)fiui_supportedMetricsForActivityType:(id)arg1;
+ (double)fiui_weightedAverageHeartRateWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)fiui_splitsFromDistanceSamples:(id)arg1 distanceInMetersPerSplit:(double)arg2;
- (long long)fiui_strokeStyle;
- (long long)fiui_swimmingLocationType;
- (id)fiui_lapLength;
- (double)fiui_averageTimePerLap;
- (id)fiui_connectedGymBrandName;
- (_Bool)fiui_isConnectedGymWorkout;
- (double)fiui_averagePace;
- (id)_fiui_averagePaceQty;
- (_Bool)fiui_hasAveragePace;
- (double)fiui_averagePower;
- (long long)fiui_averageCadence;
- (double)fiui_totalStepCount;
- (id)fiui_elevation;
- (_Bool)fiui_hasElevation;
- (_Bool)fiui_hasWeatherData;
- (long long)fiui_numberOfEventsOfType:(long long)arg1;
- (id)fiui_eventsOfType:(long long)arg1;
- (double)fiui_completionFactor;
- (id)fiui_activityType;
@end

