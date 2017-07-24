//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSMutableSet, NSString;

@interface TTYSettings : NSObject
{
    NSLock *_synchronizeDomainsLock;
    NSMutableSet *_registeredNotifications;
    NSMutableSet *_synchronizePreferences;
    NSMutableDictionary *_updateBlocks;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(retain, nonatomic) NSMutableSet *synchronizePreferences; // @synthesize synchronizePreferences=_synchronizePreferences;
@property(retain, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
- (void).cxx_destruct;
@property(nonatomic) _Bool internalOverrideTTYAvailability;
@property(retain, nonatomic) NSString *preferredRelayNumber;
@property(nonatomic) _Bool ttyShouldBeRealtime;
@property(nonatomic) double lastDBVacuum;
@property(nonatomic) double lastCallCountReset;
@property(nonatomic) long long outgoingTTYCallCount;
@property(nonatomic) long long incomingTTYCallCount;
@property(nonatomic) _Bool incomingCallsTTY;
@property(nonatomic) _Bool TTYSoftwareEnabled;
@property(nonatomic) _Bool TTYHardwareEnabled;
- (id)_valueForPreferenceKey:(id)arg1;
- (void)_synchronizeIfNecessary:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (id)notificationForSelector:(SEL)arg1;
- (void)_registerForNotification:(id)arg1;
- (SEL)selectorForPreferenceKey:(id)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (id)_selectorMap;
- (id)_notificationForPreferenceKey:(id)arg1;
- (void)_handlePreferenceChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

