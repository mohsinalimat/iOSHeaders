//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSTimer;
@protocol OS_os_activity;

@interface HFUpdateLogger : NSObject
{
    _Bool _didReachSoftTimeout;
    NSObject<OS_os_activity> *_loggerActivity;
    NSString *_clientDescription;
    NSDate *_startDate;
    double _softTimeoutInterval;
    NSTimer *_softTimeoutTimer;
}

+ (id)history;
+ (id)runningLoggers;
@property(nonatomic) _Bool didReachSoftTimeout; // @synthesize didReachSoftTimeout=_didReachSoftTimeout;
@property(retain, nonatomic) NSTimer *softTimeoutTimer; // @synthesize softTimeoutTimer=_softTimeoutTimer;
@property(nonatomic) double softTimeoutInterval; // @synthesize softTimeoutInterval=_softTimeoutInterval;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *clientDescription; // @synthesize clientDescription=_clientDescription;
@property(retain, nonatomic) NSObject<OS_os_activity> *loggerActivity; // @synthesize loggerActivity=_loggerActivity;
- (void).cxx_destruct;
- (id)description;
- (void)_handleTimeout:(id)arg1;
- (void)finish;
- (id)initWithTimeout:(double)arg1 description:(id)arg2;

@end

