//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILocalNotification.h>

#import <UIKit/NSSecureCoding-Protocol.h>

@class CLRegion, NSCalendar, NSData, NSDate, NSNumber, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface UIConcreteLocalNotification : UILocalNotification <NSSecureCoding>
{
    NSDate *fireDate;
    NSTimeZone *timeZone;
    unsigned long long repeatInterval;
    NSCalendar *repeatCalendar;
    int totalRepeatCount;
    int remainingRepeatCount;
    CLRegion *region;
    _Bool regionTriggersOnce;
    NSString *alertBody;
    _Bool hasAction;
    NSString *alertAction;
    NSString *alertLaunchImage;
    NSString *alertTitle;
    NSString *soundName;
    long long applicationIconBadgeNumber;
    NSData *userInfoData;
    _Bool hideAlertTitle;
    _Bool allowSnooze;
    int soundType;
    NSNumber *audioVolume;
    _Bool interruptAudioAndLockDevice;
    _Bool resumeApplicationInBackground;
    _Bool fireNotificationsWhenAppRunning;
    _Bool showAlarmStatusBarItem;
    NSString *customLockSliderLabel;
    NSString *firedNotificationName;
    NSString *snoozedNotificationName;
    NSString *category;
    NSString *vibrationName;
    _Bool isTransient;
    _Bool fromSnooze;
    NSString *threadIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void)setAudioVolume:(id)arg1;
- (id)audioVolume;
- (void)setThreadIdentifier:(id)arg1;
- (id)threadIdentifier;
- (void)setFromSnooze:(_Bool)arg1;
- (_Bool)isFromSnooze;
- (void)setVibrationName:(id)arg1;
- (id)vibrationName;
- (void)setAlertTitle:(id)arg1;
- (id)alertTitle;
- (void)setRegionTriggersOnce:(_Bool)arg1;
- (_Bool)regionTriggersOnce;
- (void)setRegion:(id)arg1;
- (id)region;
- (void)setIsTransient:(_Bool)arg1;
- (_Bool)isTransient;
- (void)setCategory:(id)arg1;
- (id)category;
- (void)setSnoozedNotificationName:(id)arg1;
- (id)snoozedNotificationName;
- (void)setFiredNotificationName:(id)arg1;
- (id)firedNotificationName;
- (void)setCustomLockSliderLabel:(id)arg1;
- (id)customLockSliderLabel;
- (void)setShowAlarmStatusBarItem:(_Bool)arg1;
- (_Bool)showAlarmStatusBarItem;
- (void)setFireNotificationsWhenAppRunning:(_Bool)arg1;
- (_Bool)fireNotificationsWhenAppRunning;
- (void)setResumeApplicationInBackground:(_Bool)arg1;
- (_Bool)resumeApplicationInBackground;
- (void)setInterruptAudioAndLockDevice:(_Bool)arg1;
- (_Bool)interruptAudioAndLockDevice;
- (int)soundType;
- (void)setAllowSnooze:(_Bool)arg1;
- (_Bool)allowSnooze;
- (void)setHideAlertTitle:(_Bool)arg1;
- (_Bool)hideAlertTitle;
- (void)setRemainingRepeatCount:(int)arg1;
- (int)remainingRepeatCount;
- (int)totalRepeatCount;
- (void)setApplicationIconBadgeNumber:(long long)arg1;
- (long long)applicationIconBadgeNumber;
- (void)setSoundName:(id)arg1;
- (id)soundName;
- (void)setAlertLaunchImage:(id)arg1;
- (id)alertLaunchImage;
- (void)setAlertAction:(id)arg1;
- (id)alertAction;
- (void)setHasAction:(_Bool)arg1;
- (_Bool)hasAction;
- (void)setAlertBody:(id)arg1;
- (id)alertBody;
- (void)setRepeatCalendar:(id)arg1;
- (id)repeatCalendar;
- (void)setRepeatInterval:(unsigned long long)arg1;
- (unsigned long long)repeatInterval;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (void)setFireDate:(id)arg1;
- (id)fireDate;
- (void).cxx_destruct;
- (_Bool)isTriggeredByRegion;
- (_Bool)isTriggeredByDate;
- (void)validate;
- (void)clearNonSystemProperties;
- (_Bool)isValid;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (id)description;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)_setUserInfoData:(id)arg1;
- (long long)compareFireDates:(id)arg1;
- (float)soundVolume;
- (void)setSoundVolume:(float)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)setTotalRepeatCount:(int)arg1;
- (void)setSoundType:(int)arg1;

@end

