//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSArray;

@interface HDDemoDataVitalsSampleGenerator : HDDemoDataBaseSampleGenerator
{
    NSArray *_diurnalBPVariationTable;
    NSArray *_diurnalTempVariationTable;
    double _nextHeartRateSampleTime;
    double _nextRespirationRateSampleTime;
    double _nextBloodPressureSampleTime;
    double _nextBodyTempSampleTime;
    double _nextOxygenSaturationSampleTime;
    double _nextPeripheralPerfusionIndexSampleTime;
    double _lastPeripheralPerfusionIndexValue;
}

@property(nonatomic) double lastPeripheralPerfusionIndexValue; // @synthesize lastPeripheralPerfusionIndexValue=_lastPeripheralPerfusionIndexValue;
@property(nonatomic) double nextPeripheralPerfusionIndexSampleTime; // @synthesize nextPeripheralPerfusionIndexSampleTime=_nextPeripheralPerfusionIndexSampleTime;
@property(nonatomic) double nextOxygenSaturationSampleTime; // @synthesize nextOxygenSaturationSampleTime=_nextOxygenSaturationSampleTime;
@property(nonatomic) double nextBodyTempSampleTime; // @synthesize nextBodyTempSampleTime=_nextBodyTempSampleTime;
@property(nonatomic) double nextBloodPressureSampleTime; // @synthesize nextBloodPressureSampleTime=_nextBloodPressureSampleTime;
@property(nonatomic) double nextRespirationRateSampleTime; // @synthesize nextRespirationRateSampleTime=_nextRespirationRateSampleTime;
@property(nonatomic) double nextHeartRateSampleTime; // @synthesize nextHeartRateSampleTime=_nextHeartRateSampleTime;
@property(copy, nonatomic) NSArray *diurnalTempVariationTable; // @synthesize diurnalTempVariationTable=_diurnalTempVariationTable;
@property(copy, nonatomic) NSArray *diurnalBPVariationTable; // @synthesize diurnalBPVariationTable=_diurnalBPVariationTable;
- (void).cxx_destruct;
- (double)_computeBodyTempInCelsiusForDemoPerson:(id)arg1 atTime:(double)arg2 addNoise:(_Bool)arg3;
- (long long)_computeBloodPressureForDemoPerson:(id)arg1 atTime:(double)arg2 baseBloodPressure:(double)arg3 stdDev:(double)arg4;
- (long long)_computeRespirationRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (long long)_computeHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (long long)_computeMaxHRForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)peripheralPerfusionIndexForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)oxygenSaturationForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)bodyTempInCelsiusForDemoPerson:(id)arg1 atTime:(double)arg2;
- (struct HDDemoDataBloodPressure)bloodPressureForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)respirationRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)heartRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

