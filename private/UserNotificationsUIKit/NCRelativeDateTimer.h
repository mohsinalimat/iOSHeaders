//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, NSTimer;
@protocol NCRelativeDateTimerDelegate;

@interface NCRelativeDateTimer : NSObject
{
    NSCalendar *_gregorian;
    NSTimer *_timer;
    NSDate *_date;
    id <NCRelativeDateTimerDelegate> _delegate;
    int _currResolution;
    long long _currValue;
}

+ (void)invalidateTimer:(id)arg1;
+ (void)addTimerToMainRunLoop:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (double)_nextFireInterval:(id)arg1 resolution:(int)arg2 comparedToNow:(long long)arg3;
- (void)_fireAndUpdateTimerIfNecessary;
- (id)_timeDifferenceFromDate:(id)arg1;
- (void)invalidate;
- (void)fireAndSchedule;
- (double)nextFireInterval;
- (id)date;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)_fireForWakeEvent:(id)arg1;
- (void)_fireForLocaleEvent:(id)arg1;
- (void)_fireForEvent;
- (void)dealloc;
- (id)init;

@end

