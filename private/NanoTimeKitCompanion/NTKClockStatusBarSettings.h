//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSManager;
@protocol OS_dispatch_queue;

@interface NTKClockStatusBarSettings : NSObject
{
    NPSManager *_npsManager;
    _Bool _notificationsIndicatorEnabled;
    NSObject<OS_dispatch_queue> *_prefsQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_notifyClientsOfChange;
- (void)_handlePrefsChanged;
- (void)setNotificationsIndicatorEnabled:(_Bool)arg1;
- (_Bool)_isNotificationsIndicatorEnabledInPreferences;
- (_Bool)isNotificationsIndicatorEnabled;
- (void)dealloc;
- (id)init;

@end

