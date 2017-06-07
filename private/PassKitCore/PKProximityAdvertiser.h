//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SFService;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKProximityAdvertiser : NSObject
{
    SFService *_sharingService;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_advertiserQueue;
    double _timeoutDuration;
    _Bool _isAdvertising;
}

@property(readonly, nonatomic) _Bool isAdvertising; // @synthesize isAdvertising=_isAdvertising;
- (void).cxx_destruct;
- (void)endAdvertising;
- (void)startAdvertisingForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

