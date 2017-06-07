//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FriendKit/FKFriendGroupDelegate-Protocol.h>

@class FKDelayedOperation, NPSManager, NSArray, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface FKFriendsManager : NSObject <FKFriendGroupDelegate>
{
    NSString *_domain;
    unsigned long long _maxFriendGroups;
    unsigned long long _maxFriendsPerGroup;
    _Bool _shouldAddEmptyTrailingGroup;
    struct __CFString *_friendsChangedExternallyNotificationName;
    struct __CFString *_friendGroupTitleChangedExternallyNotificationName;
    _Bool _shouldDeduplicateFriendList;
    _Bool _shouldRemoveDestinationlessFriends;
    NSMutableArray *_friendList;
    NSMutableArray *_friendGroups;
    NPSManager *_npsManager;
    NSTimer *_addressBookRefreshTimer;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSObject<OS_dispatch_queue> *_changeLogQueue;
    unsigned long long _postCount;
    NSHashTable *_sourcedPersons;
    NSMapTable *_identifiersToPersonMap;
    _Bool _needsFriendListSync;
    _Bool _needsAddressBookRefresh;
    _Bool _didCompleteInitialLoading;
    NSMutableSet *_highPriorityDestinations;
    NSArray *_pendingDestinations;
    NSMutableDictionary *_cachedStatuses;
    NSTimer *_idsQueryTimeoutTimer;
    _Bool _refreshAgainstContactsEnabled;
    _Bool _lastLoadHadChanges;
    NSString *_serviceName;
    FKDelayedOperation *_saveOperation;
    NSMutableDictionary *_changeLog;
}

+ (id)collapseChangeLogsIntoChangeLog:(id)arg1;
+ (void)setRefreshAgainstContactsOnInitEnabled:(_Bool)arg1 domain:(id)arg2;
+ (void)setFriendGroupTitleChangedExternallyNotificationName:(id)arg1 domain:(id)arg2;
+ (void)setFriendsChangedExternallyNotificationName:(id)arg1 domain:(id)arg2;
+ (void)setEnableEmptyTrailingGroup:(_Bool)arg1 domain:(id)arg2;
+ (void)setGroupSize:(unsigned long long)arg1 domain:(id)arg2;
+ (void)setMaxGroupCount:(unsigned long long)arg1 domain:(id)arg2;
+ (id)managerForDomain:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *changeLog; // @synthesize changeLog=_changeLog;
@property(retain, nonatomic) FKDelayedOperation *saveOperation; // @synthesize saveOperation=_saveOperation;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic, getter=didLastLoadHaveChanges) _Bool lastLoadHadChanges; // @synthesize lastLoadHadChanges=_lastLoadHadChanges;
@property(nonatomic, getter=isRefreshAgainstContactsEnabled) _Bool refreshAgainstContactsEnabled; // @synthesize refreshAgainstContactsEnabled=_refreshAgainstContactsEnabled;
- (void).cxx_destruct;
- (void)markFriendListAsNormalized;
- (void)saveFriendGroupTitles;
- (_Bool)refreshAgainstAddressBook;
- (_Bool)_addressBookSequenceNumberDidChange;
- (void)_updateLastKnownAddressBookSequenceNumber:(int)arg1;
- (int)_lastKnownAddressBookSequenceNumber;
- (_Bool)_changeLogContainsFriendAdditionsOrUpdates;
- (void)_addEntryToChangeLogForPerson:(id)arg1 changeType:(id)arg2;
- (id)_copyAndResetChangeLog;
- (unsigned long long)_changeLogCount;
- (void)_removeFriendsAtIndices:(id)arg1;
- (void)_removeDestinationlessFriendsIfNecessary;
- (void)_deduplicateFriendListIfNecessary;
- (void)_cleanUpFriendListIfNecessary;
- (void)_updateFriends:(id)arg1;
- (void)_addressBookChanged:(id)arg1;
- (void)_groupTitleChangedExternally;
- (void)_loadGroupTitles;
- (void)_friendsChangedExternally;
- (void)_personValuesChanged:(id)arg1;
- (void)_postChangeNotificationIfNecessary;
- (unsigned long long)_numberOfFriendsInList:(id)arg1;
- (long long)_firstEmptyPosition;
- (unsigned long long)_indexForPosition:(unsigned long long)arg1 inGroup:(id)arg2;
- (_Bool)_shouldBypassDestinationStatusCheck;
- (void)_idsQueryTimeoutTimerFired;
- (void)_stopIDSQueryTimeoutTimer;
- (void)_startIDSQueryTimeoutTimer;
- (void)_queryDestinations:(id)arg1;
- (id)reachableDestinationsForPerson:(id)arg1;
- (long long)statusForPerson:(id)arg1 requery:(_Bool)arg2;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (long long)_compareStatus:(long long)arg1 toStatus:(long long)arg2;
- (void)refreshDestinationStatuses;
- (id)_destinations;
- (void)_createAddressToPersonDictionary;
- (void)_removePersonFromIdentifiersToPersonMap:(id)arg1;
- (void)_addPersonToIdentifiersToPersonMap:(id)arg1;
- (void)_storeSourcedPerson:(id)arg1;
- (id)personWithABRecordGUID:(id)arg1;
- (id)personWithDestinations:(id)arg1;
- (struct __CFString *)_notificationForExternalListChange;
- (void)_incrementExternalChangePostCount;
- (void)_save;
- (void)save;
- (id)_friendAtPosition:(unsigned long long)arg1;
- (id)personLikePerson:(id)arg1;
- (_Bool)containsFriendWithABRecordGUID:(id)arg1;
- (unsigned long long)positionOfFriendInGroup:(id)arg1;
- (_Bool)isPersonFriend:(id)arg1;
- (_Bool)addFriend:(id)arg1;
- (id)allPeople;
- (void)friendGroup:(id)arg1 didMoveFriends:(id)arg2;
- (void)friendGroup:(id)arg1 didRemoveFriend:(id)arg2 atPosition:(unsigned long long)arg3;
- (void)friendGroup:(id)arg1 didSetFriend:(id)arg2 atPosition:(unsigned long long)arg3;
- (_Bool)shouldAllowAddingContact:(id)arg1 withContactStore:(id)arg2 personValueCache:(id)arg3;
- (void)_postGroupListChangedNotification;
- (void)_aggdLogFriendGroupCount;
- (void)_aggdLogFriendCount;
- (void)_aggdSetValue:(long long)arg1 forScalarKey:(struct __CFString *)arg2;
- (void)purgeEmptyFriendGroups;
- (void)syncFriendGroup:(id)arg1;
- (void)_removeGroupAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupIndexContainingFriend:(id)arg1;
- (_Bool)canAddFriend;
- (_Bool)_canAddFriendGroup;
- (void)_updateFriendGroups;
- (_Bool)_shouldAddEmptyGroup;
- (void)_addCuratedFriends:(id)arg1;
- (id)_curatedFriendList;
- (void)_loadFriendList;
- (void)reloadFriendList;
- (void)_createEmptyFriendList;
- (void)_addEmptyGroup;
- (id)friendGroups;
- (void)dealloc;
- (id)initWithDomain:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

