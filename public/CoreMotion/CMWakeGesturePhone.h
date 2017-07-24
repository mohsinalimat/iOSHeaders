//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CMWakeGestureManager.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CMWakeGesturePhone : CMWakeGestureManager
{
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    _Bool gestureUpdatesStarted;
    struct Dispatcher *fWakeDispatcher;
    struct Dispatcher *fPowerStateDispatcher;
    struct unique_ptr<CMWakeGestureVisitor, std::__1::default_delete<CMWakeGestureVisitor>> fWakeGestureVisitor;
    long long fCurrentState;
    int fMeasureLatencyState;
    double fWakePacketTimestamp;
    struct IONotificationPort *fIoNotifyPort;
    unsigned int fIoNotification;
    unsigned int backlightService;
    double fLastNotificationTime;
    int fScreenDimmingNotificationToken;
    int fLockScreenToken;
    double fLastDisplayOnTime;
    NSString *fProcessName;
    _Bool fIsRunningInPrimaryProcess;
    _Bool fEnableLatencyAlert;
    _Bool fEnableAudioAlert;
    int fLatencyAlertThreshold;
}

+ (id)stringForGestureState:(long long)arg1;
+ (id)stringForViewPose:(unsigned char)arg1;
+ (id)stringForStartPose:(unsigned char)arg1;
+ (id)stringForMode:(unsigned char)arg1;
+ (id)stringForNotification:(unsigned char)arg1;
+ (_Bool)hasSlowBootArgs;
+ (_Bool)isWakeGestureAvailable;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onBacklightServiceUpdated:(unsigned int)arg1;
- (void)onPowerStateUpdated:(const struct Sample *)arg1;
- (void)onWakeUpdated:(const struct Sample *)arg1;
- (void)onNotificationControl:(id)arg1;
- (void)playAlert;
- (void)loadPreferences;
- (void)invokeDelegateWithState:(long long)arg1;
- (_Bool)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2;
- (void)stopWakeGestureUpdates;
- (void)startWakeGestureUpdates;
- (void)dealloc;
- (id)init;
- (void)reenableDetectedStateRecognition;

@end

