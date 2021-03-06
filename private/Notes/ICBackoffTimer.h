//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface ICBackoffTimer : NSObject
{
    id _userInfo;
    double _initialTimeInterval;
    id _target;
    SEL _selector;
    unsigned long long _backoffCount;
    double _maxTimeInterval;
    NSTimer *_timer;
}

@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double maxTimeInterval; // @synthesize maxTimeInterval=_maxTimeInterval;
@property(nonatomic) unsigned long long backoffCount; // @synthesize backoffCount=_backoffCount;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) double initialTimeInterval; // @synthesize initialTimeInterval=_initialTimeInterval;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)fire;
- (void)scheduleToFire;
- (_Bool)isScheduled;
- (void)invalidate;
- (void)fire:(id)arg1;
- (double)nextTimeInterval;
- (void)dealloc;
- (id)initWithInitialInterval:(double)arg1 maxInterval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (id)init;

@end

