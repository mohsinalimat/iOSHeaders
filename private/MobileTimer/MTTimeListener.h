//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentNotificationListener-Protocol.h>

@class MTAlarmScheduler, MTTimerScheduler, NSString;

@interface MTTimeListener : NSObject <MTAgentNotificationListener>
{
    MTAlarmScheduler *_alarmScheduler;
    MTTimerScheduler *_timerScheduler;
}

@property(retain, nonatomic) MTTimerScheduler *timerScheduler; // @synthesize timerScheduler=_timerScheduler;
@property(retain, nonatomic) MTAlarmScheduler *alarmScheduler; // @synthesize alarmScheduler=_alarmScheduler;
- (void).cxx_destruct;
- (void)handleNotification:(id)arg1;
- (_Bool)handlesNotification:(id)arg1;
- (id)initWithAlarmScheduler:(id)arg1 timerScheduler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

