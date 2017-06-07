//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDKeyValueEntity.h>

@interface HDProtectedKeyValueEntity : HDKeyValueEntity
{
}

+ (long long)_deviceLocalCategory;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)_keyForDataType:(id)arg1 error:(id *)arg2;
+ (id)keyForUserCharacteristicType:(id)arg1;
+ (_Bool)setUserCharacteristic:(id)arg1 forType:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)modificationDateForCharacteristicWithType:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)userCharacteristicForType:(id)arg1 profile:(id)arg2 entity:(id *)arg3 error:(id *)arg4;
+ (id)codableAchievementValuesForKeys:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)enumerateAchievementValuesForKeys:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id *)arg4 usingBlock:(CDUnknownBlockType)arg5;
+ (id)achievementValueForKey:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)achievementStringValueForKey:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)achievementValueForKey:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)removeAchievementValuesForKeys:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)setAchievementValuesWithDictionary:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)setAchievementValuesWithDictionary:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)removeUserDefaultForKey:(id)arg1 bundleIdentifier:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)setUserDefaultValue:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (id)userDefaultForKey:(id)arg1 bundleIdentifier:(id)arg2 profile:(id)arg3 error:(id *)arg4;

@end

