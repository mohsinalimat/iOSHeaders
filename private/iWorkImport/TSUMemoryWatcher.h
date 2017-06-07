//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSUFlushingManager;

__attribute__((visibility("hidden")))
@interface TSUMemoryWatcher : NSObject
{
    TSUFlushingManager *_flushingManager;
    _Bool _going;
    _Bool _stop;
    int _warningRsizeMb;
    int _urgentRsizeMb;
}

- (void)_simulateMemoryWarning:(id)arg1;
- (void)_periodicallySimulateMemoryWarning:(id)arg1;
- (void)stopObserving;
- (void)beginObserving;
- (void)dealloc;
- (id)initWithFlushingManager:(id)arg1;

@end

