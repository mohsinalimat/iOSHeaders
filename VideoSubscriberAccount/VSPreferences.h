//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSUserDefaults, VSDevice;

@interface VSPreferences : NSObject
{
    NSUserDefaults *_userDefaults;
    VSDevice *_device;
}

@property(retain, nonatomic) VSDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (void)noteDidAcknowledgeUnsupportedIdentityProvider:(id)arg1;
- (_Bool)hasAcknowledgedUnsupportedIdentityProvider:(id)arg1;
- (void)noteDidSendWelcomeMessage;
@property(readonly, nonatomic) _Bool hasSentWelcomeMessage;
@property(nonatomic) long long cachedStoreProviderStatus;
@property(nonatomic) long long cachedDeveloperProviderStatus;
@property(nonatomic) long long cachedAvailabilityStatus;
@property(readonly, nonatomic) _Bool shouldAlwaysAllowRemoteInspection;
@property(readonly, nonatomic) _Bool shouldDisableRequestTimeouts;
@property(readonly, copy, nonatomic) NSURL *overridingAppBootURL;

@end
