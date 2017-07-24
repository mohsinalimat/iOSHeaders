//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMPedometerProxy;

@interface CMPedometer : NSObject
{
    CMPedometerProxy *_pedometerProxy;
}

+ (long long)authorizationStatus;
+ (_Bool)isPedometerEventTrackingAvailable;
+ (_Bool)isCadenceAvailable;
+ (_Bool)isPaceAvailable;
+ (_Bool)isFloorCountingAvailable;
+ (_Bool)isDistanceAvailable;
+ (_Bool)isStepCountingAvailable;
@property(readonly, nonatomic) CMPedometerProxy *pedometerProxy; // @synthesize pedometerProxy=_pedometerProxy;
- (void)queryRemoteStepCadenceToStrideLengthBinsWithHandler:(CDUnknownBlockType)arg1;
- (void)queryStepCadenceToStrideLengthBinsWithHandler:(CDUnknownBlockType)arg1;
- (void)queryRemoteRawSpeedToKValueBinsWithHandler:(CDUnknownBlockType)arg1;
- (void)queryRawSpeedToKValueBinsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)sendStrideCalibrationHistoryToFile:(id)arg1;
- (void)stopPedometerEventUpdates;
- (void)startPedometerEventUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)queryPedometerDataSinceRecord:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)_pedometerDataWithRecordID:(long long)arg1;
- (void)stopPedometerUpdates;
- (void)startPedometerUpdatesFromDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

