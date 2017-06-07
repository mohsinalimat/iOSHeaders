//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFTimer.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface HMFExponentialBackoffTimer : HMFTimer
{
    _Bool _increasing;
    double _minimumTimeInterval;
    double _maximumTimeInterval;
    long long _exponentialFactor;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property(readonly, nonatomic, getter=isIncreasing) _Bool increasing; // @synthesize increasing=_increasing;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) long long exponentialFactor; // @synthesize exponentialFactor=_exponentialFactor;
@property(readonly, nonatomic) double maximumTimeInterval; // @synthesize maximumTimeInterval=_maximumTimeInterval;
@property(readonly, nonatomic) double minimumTimeInterval; // @synthesize minimumTimeInterval=_minimumTimeInterval;
- (void).cxx_destruct;
- (void)reset;
- (void)_fire;
@property(nonatomic) double timeInterval;
- (id)initWithMinimumTimeInterval:(double)arg1 maximumTimeInterval:(double)arg2 exponentialFactor:(long long)arg3 options:(unsigned long long)arg4;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;

@end
