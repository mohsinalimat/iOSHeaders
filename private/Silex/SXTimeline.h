//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;

@interface SXTimeline : NSObject
{
    double _duration;
    double _time;
    NSMutableArray *_timeline;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *timeline; // @synthesize timeline=_timeline;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)executeActionsForTime:(double)arg1 withDuration:(double)arg2;
- (double)executionTimeOfTime:(double)arg1 withinDuration:(double)arg2;
- (_Bool)hasPassedTimeOffset:(double)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 at:(double)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 after:(double)arg2;
- (void)resetTime;
- (void)cancelScheduledBlocks;
- (void)cancelDelayedBlock;
- (void)dealloc;
- (id)init;

@end

