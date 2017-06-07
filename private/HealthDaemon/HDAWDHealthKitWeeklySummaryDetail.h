//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitWeeklySummaryDetail : PBCodable <NSCopying>
{
    long long _mostRecentGoal;
    long long _numTimesGoalAchieved;
    long long _selectedGoal;
    struct {
        unsigned int mostRecentGoal:1;
        unsigned int numTimesGoalAchieved:1;
        unsigned int selectedGoal:1;
    } _has;
}

@property(nonatomic) long long selectedGoal; // @synthesize selectedGoal=_selectedGoal;
@property(nonatomic) long long numTimesGoalAchieved; // @synthesize numTimesGoalAchieved=_numTimesGoalAchieved;
@property(nonatomic) long long mostRecentGoal; // @synthesize mostRecentGoal=_mostRecentGoal;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSelectedGoal;
@property(nonatomic) _Bool hasNumTimesGoalAchieved;
@property(nonatomic) _Bool hasMostRecentGoal;

@end

