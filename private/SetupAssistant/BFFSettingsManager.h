//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSNumber;

@interface BFFSettingsManager : NSObject
{
    NSMutableArray *_stashedPaths;
    NSMutableDictionary *_stashedPreferences;
    NSMutableDictionary *_stashedManagedConfigurationSettings;
    NSMutableDictionary *_stashedButtonHaptics;
    NSNumber *_stashedAssistantEnabled;
    NSNumber *_stashedLocationServicesEnabled;
    NSData *_stashedWatchData;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (_Bool)_removeSafeHaven;
- (id)_shovePath:(id)arg1 toPath:(id)arg2;
- (id)_preferencesForDomain:(id)arg1;
- (void)_restoreWatchData;
- (void)_restoreStashedFiles;
- (void)_applyLocationServices;
- (void)_applyAssistantPreferences;
- (void)_applyStashedButtonHaptics;
- (void)_applyStashedManagedConfiguration;
- (void)_applyStashedPreferences;
- (unsigned long long)_restoreConfiguration;
- (void)applySafeHavenStash;
- (void)reset;
- (_Bool)_stashPaths;
- (_Bool)_stashConfiguration;
- (void)hideStashInSafeHaven;
- (void)removeObjectForBuddyKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forBuddyKey:(id)arg2;
- (void)setAssistantEnabled:(_Bool)arg1;
- (void)stashWatchData:(id)arg1;
- (void)stashLocationServicesChoice:(_Bool)arg1;
- (void)clearHapticTypeForButtonKind:(long long)arg1;
- (void)stashHapticType:(long long)arg1 forButtonKind:(long long)arg2;
- (void)stashPath:(id)arg1;
- (void)setObject:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)setBool:(_Bool)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)removeBoolSettingForManagedConfigurationSetting:(id)arg1;
- (void)setBool:(_Bool)arg1 forManagedConfigurationSetting:(id)arg2;
- (_Bool)hasStashedValuesOnDisk;
- (_Bool)hasStashedValues;
- (id)init;

@end

