//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKWorkout.h>

@interface HKWorkout (Metrics)
+ (unsigned long long)FU_associatedMetricForGoalType:(unsigned long long)arg1;
+ (_Bool)FU_shouldTrackPaceWithOdometerForActivityType:(unsigned long long)arg1;
+ (_Bool)_isHeartRateSupportedInPowerSettingsForActivityType:(unsigned long long)arg1;
+ (_Bool)_isHeartRateSupportedInPrivacySettings;
+ (_Bool)FU_isHeartRateSupportedForActivityType:(unsigned long long)arg1 isIndoor:(_Bool)arg2;
+ (id)FU_supportedGoalTypesForActivityType:(id)arg1;
+ (id)FU_supportedMetricsForActivityType:(id)arg1;
@end

