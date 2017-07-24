//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface ARExposureLightEstimationTechnique : ARTechnique
{
    float _sphericalHarmonics[27];
    NSObject<OS_dispatch_semaphore> *_resultSemaphore;
    float _lastLightIntensity;
}

- (void).cxx_destruct;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (id)init;

@end

