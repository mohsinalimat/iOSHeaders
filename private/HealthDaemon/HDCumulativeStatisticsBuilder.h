//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDStatisticsBuilder.h>

@class HDCumulativeCollectionCalculator, HDLastIntervalInfo, HKStatistics;

@interface HDCumulativeStatisticsBuilder : HDStatisticsBuilder
{
    HDCumulativeCollectionCalculator *_collectionCalculator;
    HDLastIntervalInfo *_lastIntervalInfo;
    HKStatistics *_lastStatistics;
}

@property(retain, nonatomic) HKStatistics *lastStatistics; // @synthesize lastStatistics=_lastStatistics;
@property(retain, nonatomic) HDLastIntervalInfo *lastIntervalInfo; // @synthesize lastIntervalInfo=_lastIntervalInfo;
- (void).cxx_destruct;
- (_Bool)_setupStatistics:(id)arg1 withCalculator:(id)arg2;
- (id)_collectionCalculatorWithBucketBoundaries:(id)arg1;
- (id)_statisticsWithTimePeriod:(id)arg1 samples:(id)arg2 lastPeriod:(_Bool)arg3 error:(id *)arg4;
- (id)_updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 error:(id *)arg3;
- (_Bool)_initialStatisticsForCollection:(id)arg1 timePeriod:(id)arg2 database:(id)arg3 shouldStopProcessing:(CDUnknownBlockType)arg4 shouldSuspend:(CDUnknownBlockType)arg5 batchHandler:(CDUnknownBlockType)arg6 error:(id *)arg7;

@end

