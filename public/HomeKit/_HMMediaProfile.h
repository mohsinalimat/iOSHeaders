//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/_HMAccessoryProfile.h>

@class HMAccessorySettings, HMMediaSession, _HMAccessorySettingGroup;
@protocol _HMMediaProfileDelegate;

@interface _HMMediaProfile : _HMAccessoryProfile
{
    HMAccessorySettings *_accessorySettings;
    _HMAccessorySettingGroup *_rootGroup;
    HMMediaSession *_mediaSession;
    id <_HMMediaProfileDelegate> _delegate;
}

+ (_Bool)supportsSecureCoding;
@property __weak id <_HMMediaProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_handleMediaSessionUpdated:(id)arg1;
- (id)_mediaSessionWithUUID:(id)arg1;
- (void)_notifyDelegateOfUpdatedMediaSession:(id)arg1;
@property(retain) HMMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
- (void)_handleRootSettingsUpdated:(id)arg1;
- (void)notifyDelegateOfUpdatedRootGroup:(id)arg1;
- (void)setRootGroup:(id)arg1;
@property(readonly) _HMAccessorySettingGroup *rootGroup; // @synthesize rootGroup=_rootGroup;
@property __weak HMAccessorySettings *accessorySettings; // @synthesize accessorySettings=_accessorySettings;
- (void)_registerNotificationHandlers;
- (void)configureWithAccessory:(id)arg1 home:(id)arg2 context:(id)arg3;

@end

