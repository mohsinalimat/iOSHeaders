//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PLThrottleTimer : NSObject
{
    id _target;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _timeoutId;
    unsigned long long _maxTimeoutId;
    _Bool _isPingedSinceLastFire;
    _Bool _isPaused;
    _Bool _isInvalid;
    SEL _action;
    double _timeout;
    double _maxTimeout;
}

@property(readonly, nonatomic) double maxTimeout; // @synthesize maxTimeout=_maxTimeout;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setPaused:(_Bool)arg1;
- (void)ping;
- (void)_inqScheduleTimeout:(_Bool)arg1 maxTimeout:(_Bool)arg2;
- (void)_inqFireWithTimeout:(_Bool)arg1 timeoutId:(unsigned long long)arg2 maxTimeout:(_Bool)arg3 maxTimeoutId:(unsigned long long)arg4;
@property(readonly, nonatomic) __weak id target;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 timeout:(double)arg3 maxTimeout:(double)arg4;

@end

