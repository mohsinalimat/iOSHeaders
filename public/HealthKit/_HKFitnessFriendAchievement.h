//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSDate, NSNumber, NSString, NSUUID;

@interface _HKFitnessFriendAchievement : HKSample <NSCopying>
{
    NSUUID *_friendUUID;
    NSString *_definitionIdentifier;
    NSDate *_completedDate;
    NSNumber *_value;
    unsigned long long _workoutActivityType;
}

+ (_Bool)supportsSecureCoding;
+ (id)fitnessFriendAchievementFromHKAchievement:(id)arg1;
+ (id)achievementWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned long long)arg4 friendUUID:(id)arg5;
@property(nonatomic) unsigned long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(retain, nonatomic) NSDate *completedDate; // @synthesize completedDate=_completedDate;
@property(retain, nonatomic) NSString *definitionIdentifier; // @synthesize definitionIdentifier=_definitionIdentifier;
@property(retain, nonatomic) NSUUID *friendUUID; // @synthesize friendUUID=_friendUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)hkAchievementFromFriendAchievement;

@end

