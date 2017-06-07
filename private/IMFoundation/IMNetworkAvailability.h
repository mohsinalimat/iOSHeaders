//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSTimer;

@interface IMNetworkAvailability : NSObject
{
    NSString *_guid;
    NSTimer *_timer;
    void *_context;
    double _timeout;
    double _wifiTimeout;
    double _startTime;
    unsigned long long _flags;
    unsigned long long _options;
    CDUnknownBlockType _completionBlock;
}

@property(nonatomic) void *context; // @synthesize context=_context;
- (void)cancel;
- (void)start;
- (void)_setTimer;
- (void)_timerHit:(id)arg1;
- (void)_cancel;
- (void)dealloc;
- (id)initWithFlags:(unsigned long long)arg1 timeout:(double)arg2 wifiTimeout:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 timeout:(double)arg3 wifiTimeout:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

