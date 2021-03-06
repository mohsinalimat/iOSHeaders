//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject;
@protocol HMFTimerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HMFTimer : HMFObject
{
    double _timeInterval;
    unsigned long long _leeway;
    _Bool _running;
    id <HMFTimerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _options;
}

+ (id)shortDescription;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) unsigned long long leeway; // @synthesize leeway=_leeway;
@property __weak id <HMFTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void).cxx_destruct;
- (void)_handleExpiration;
- (void)_fire;
- (void)fire;
- (void)_kick;
- (void)kick;
- (void)_suspend;
- (void)suspend;
- (void)_resume;
- (void)resume;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (id)init;

@end

