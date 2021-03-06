//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CMSwimTrackerInternal : NSObject
{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    _Bool fStartedUpdates;
    CDUnknownBlockType fHandler;
    unsigned long long fStrokeCountOffset;
    double fDistanceOffset;
    unsigned long long fLapCountOffset;
    double fActiveTime;
    unsigned long long fSegmentCountOffset;
}

- (void)_handleUpdates:(id)arg1;
- (void)_querySwimUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_stopUpdates;
- (void)_startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_stopWatchdogCheckins;
- (void)_startWatchdogCheckins;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

