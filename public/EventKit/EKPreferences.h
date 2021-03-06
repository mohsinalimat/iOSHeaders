//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CalPreferences, NSArray;

@interface EKPreferences : NSObject
{
    CalPreferences *_preferences;
}

+ (id)shared;
- (void).cxx_destruct;
@property(nonatomic) _Bool alertInviteeDeclines;
@property(nonatomic) _Bool showDeclinedEvents;
@property(retain, nonatomic) NSArray *selectedCalendarIdentifiers;
@property(retain, nonatomic) NSArray *deselectedCalendarSyncHashes;
@property(retain, nonatomic) NSArray *deselectedCalendarIdentifiers;
@property(readonly) _Bool bypassSplashScreen;
@property(nonatomic) unsigned long long lastConfirmedSplashScreenVersion;
@property(nonatomic) _Bool remindMeAboutThisInCalendarWidgetEnabled;
@property(nonatomic) _Bool alwaysSetArrivedAndSettledForReminders;
@property(nonatomic) _Bool useShortReminderRefireInterval;
@property(nonatomic) _Bool useShortReminderSnoozeInterval;
@property(nonatomic) _Bool refiringReminderAlarmsEnabled;
@property(nonatomic) double travelEngineThrottlePeriod;
- (id)init;

@end

