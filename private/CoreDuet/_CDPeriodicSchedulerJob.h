//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _CDPeriodicSchedulerJob : NSObject
{
    long long _period;
    NSString *_jobName;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    NSObject<OS_xpc_object> *_executionCriteria;
}

+ (id)jobWithPeriod:(long long)arg1 schedulerJobName:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(readonly) NSObject<OS_xpc_object> *executionCriteria; // @synthesize executionCriteria=_executionCriteria;
@property(readonly) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSString *jobName; // @synthesize jobName=_jobName;
@property(readonly) long long period; // @synthesize period=_period;
- (void).cxx_destruct;
- (id)initWithPeriod:(long long)arg1 schedulerJobName:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithPeriod:(long long)arg1 schedulerJobName:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;

@end
