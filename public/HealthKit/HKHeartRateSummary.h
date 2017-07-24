//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKHeartRateSummaryStatistics;

@interface HKHeartRateSummary : NSObject <NSSecureCoding>
{
    long long _activityCacheIndex;
    HKHeartRateSummaryStatistics *_allDayStatistics;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HKHeartRateSummaryStatistics *allDayStatistics; // @synthesize allDayStatistics=_allDayStatistics;
@property(nonatomic) long long activityCacheIndex; // @synthesize activityCacheIndex=_activityCacheIndex;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActivityCacheIndex:(long long)arg1 allDayStatistics:(id)arg2;

@end

