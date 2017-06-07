//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FKFriendsManager, HKHealthStore, NSArray, SOSLegacyContactsManager;
@protocol OS_dispatch_semaphore;

@interface SOSContactsManager : NSObject
{
    int _healthContactsNotificationToken;
    SOSLegacyContactsManager *_legacyContactsManager;
    NSArray *_medicalIDEmergencyContacts;
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_semaphore> *_initialStateSemaphore;
    FKFriendsManager *_friendsManager;
    struct _opaque_pthread_mutex_t _medicalIDEmergencyContactsMutex;
}

+ (_Bool)authorizedToUseContactStore;
+ (id)contactStore;
+ (void)preloadContactStoreIfNecessary;
@property(retain, nonatomic) FKFriendsManager *friendsManager; // @synthesize friendsManager=_friendsManager;
@property(nonatomic) struct _opaque_pthread_mutex_t medicalIDEmergencyContactsMutex; // @synthesize medicalIDEmergencyContactsMutex=_medicalIDEmergencyContactsMutex;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *initialStateSemaphore; // @synthesize initialStateSemaphore=_initialStateSemaphore;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (void)_medicalContactsDidChange;
- (void)_waitForInitialState;
@property(retain, nonatomic) NSArray *medicalIDEmergencyContacts; // @synthesize medicalIDEmergencyContacts=_medicalIDEmergencyContacts;
- (void)_medicalIDEmergencyContactsWithCompletion:(CDUnknownBlockType)arg1;
- (void)contactStoreDidChange;
- (id)_userDefaults;
@property(readonly, nonatomic) SOSLegacyContactsManager *legacyContactsManager;
- (id)phoneNumbersToMessage;
- (_Bool)hasValidContactsToMessage;
- (void)removeSOSFriend:(id)arg1 destinationNumber:(id)arg2;
- (_Bool)_isEmergencyNumber:(id)arg1;
- (_Bool)addSOSFriend:(id)arg1 destinationNumber:(id)arg2 error:(id *)arg3;
- (_Bool)addContactAsSOSFriend:(id)arg1 destinationNumber:(id)arg2 error:(id *)arg3;
- (id)_contactFromFriend:(id)arg1;
- (id)SOSFormattedDestinationForFriend:(id)arg1 withDestinationNumber:(id)arg2;
- (id)SOSDestinationsForFriend:(id)arg1;
- (id)SOSFriendsDestinations;
- (id)SOSFriends;
@property(readonly, nonatomic) _Bool SOSContactsExist;
- (id)SOSContactDestinations;
- (void)SOSContactsWithTimeout:(double)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

