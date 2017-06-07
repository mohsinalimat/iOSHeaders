//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataSleepSampleGenerator : HDDemoDataBaseSampleGenerator
{
    double _nextSleepDurationSampleTime;
}

@property(nonatomic) double nextSleepDurationSampleTime; // @synthesize nextSleepDurationSampleTime=_nextSleepDurationSampleTime;
- (_Bool)_isDemoPersonSleeping:(id)arg1 atTime:(double)arg2;
- (_Bool)_isDemoPersonAwake:(id)arg1 atTime:(double)arg2;
- (double)_computeSleepTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (double)_computeAwakeTimeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)sleepSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 startDate:(id)arg3;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

