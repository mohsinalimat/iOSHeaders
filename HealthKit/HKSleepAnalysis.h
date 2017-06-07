//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDateInterval;

@interface HKSleepAnalysis : NSObject
{
    _Bool _containsAsleepSamples;
    NSDateInterval *_dateInterval;
    NSArray *_sleepDays;
    long long _consistencyCount;
    double _averageEfficiency;
    double _averageTimeInBed;
    double _averageTimeAsleep;
    long long _averageNumberOfInterruptions;
}

+ (id)emptyAnalysis;
@property(readonly, nonatomic) long long averageNumberOfInterruptions; // @synthesize averageNumberOfInterruptions=_averageNumberOfInterruptions;
@property(readonly, nonatomic) double averageTimeAsleep; // @synthesize averageTimeAsleep=_averageTimeAsleep;
@property(readonly, nonatomic) double averageTimeInBed; // @synthesize averageTimeInBed=_averageTimeInBed;
@property(readonly, nonatomic) double averageEfficiency; // @synthesize averageEfficiency=_averageEfficiency;
@property(readonly, nonatomic) long long consistencyCount; // @synthesize consistencyCount=_consistencyCount;
@property(readonly, nonatomic) _Bool containsAsleepSamples; // @synthesize containsAsleepSamples=_containsAsleepSamples;
@property(readonly, copy, nonatomic) NSArray *sleepDays; // @synthesize sleepDays=_sleepDays;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)arg1 sleepDays:(id)arg2 containsAsleepSamples:(_Bool)arg3 consistencyCount:(long long)arg4 averageEfficiency:(double)arg5 averageTimeInBed:(double)arg6 averageTimeAlseep:(double)arg7 averageNumberOfInterruptions:(long long)arg8;

@end
