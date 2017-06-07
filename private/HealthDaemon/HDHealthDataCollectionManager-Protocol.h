//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDDataCollectionObserverState, HDDeviceEntity, HKObject, HKObjectType, NSArray;

@protocol HDHealthDataCollectionManager <NSObject>
- (void)stopDataCollectionForType:(HKObjectType *)arg1 observer:(id)arg2;
- (void)startDataCollectionForType:(HKObjectType *)arg1 observer:(id)arg2 collectionInterval:(double)arg3;
- (void)removeDataCollectionObserver:(id)arg1;
- (void)removeDataCollectionObserver:(id)arg1 type:(HKObjectType *)arg2;
- (void)dataCollectionObserver:(id)arg1 didChangeState:(HDDataCollectionObserverState *)arg2;
- (void)updateCollectionInterval:(double)arg1 type:(HKObjectType *)arg2 observer:(id)arg3;
- (void)addDataCollectionObserver:(id)arg1 type:(HKObjectType *)arg2 collectionInterval:(double)arg3 state:(HDDataCollectionObserverState *)arg4;
- (void)immediateUpdateForType:(HKObjectType *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (double)defaultCollectionIntervalForType:(HKObjectType *)arg1;
- (void)sensorDataArrayReceived:(NSArray *)arg1 deviceEntity:(HDDeviceEntity *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)sensorDataReceived:(HKObject *)arg1 deviceEntity:(HDDeviceEntity *)arg2;
@end
