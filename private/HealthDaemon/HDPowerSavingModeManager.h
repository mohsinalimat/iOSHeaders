//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RadiosPreferences;
@protocol OS_dispatch_queue;

@interface HDPowerSavingModeManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    RadiosPreferences *_radioPrefs;
    _Bool _powerSavingModeEnabled;
    _Bool _inActiveSession;
}

- (void).cxx_destruct;
- (void)_queue_powerSavingModeDidChange;
- (void)_powerSavingModeDidChange;
- (void)_stopObservingPowerSavingModeSetting;
- (void)_startObservingPowerSavingModeSetting;
- (void)_queue_disablePowerSavingIfNeeded;
- (void)_queue_enablePowerSavingIfNeeded;
- (void)queue_workoutPausedOrEnded;
- (void)queue_workoutStartedOrResumed;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

