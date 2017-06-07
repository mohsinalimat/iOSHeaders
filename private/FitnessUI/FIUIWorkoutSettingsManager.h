//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIUIWorkoutActivityType, NPSDomainAccessor, NPSManager, NSMutableArray, NSMutableDictionary;

@interface FIUIWorkoutSettingsManager : NSObject
{
    FIUIWorkoutActivityType *_workoutActivityType;
    NSMutableDictionary *_settingsByActivityType;
    NSMutableDictionary *_settingOverridesByMetric;
    NSMutableArray *_enabledMetrics;
    NPSDomainAccessor *_domainAccessor;
    NPSManager *_syncManager;
}

@property(retain, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
- (void).cxx_destruct;
- (void)_writeToDomain;
- (void)_migratePaceViewSettingIfNeeded;
- (void)_readFromDomain;
- (void)reloadMetrics;
- (long long)disabledIndexForMetricType:(unsigned long long)arg1;
- (void)moveMetricType:(unsigned long long)arg1 toEnabledIndex:(long long)arg2;
- (void)setEnabled:(_Bool)arg1 forMetricType:(unsigned long long)arg2 didChange:(_Bool *)arg3;
- (id)orderedDisabledMetrics;
- (id)supportedMetrics;
- (id)orderedEnabledAndSupportedMetrics;
- (id)orderedSupportedMetrics;
- (id)orderedEnabledMetrics;
- (_Bool)isMetricEnabled:(unsigned long long)arg1;
- (id)initWithWorkoutActivityType:(id)arg1;
- (id)init;

@end

