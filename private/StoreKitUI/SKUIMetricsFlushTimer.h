//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_source;

@interface SKUIMetricsFlushTimer : NSObject
{
    NSHashTable *_metricsControllers;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _timerStartTime;
}

+ (id)sharedTimer;
- (void).cxx_destruct;
- (void)_performFlush;
- (void)_cancelFlushTimer;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)removeMetricsController:(id)arg1;
- (void)reloadFlushInterval;
- (void)flushAllMetricsControllers;
- (void)addMetricsController:(id)arg1;
- (void)dealloc;
- (id)init;

@end

