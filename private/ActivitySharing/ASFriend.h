//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivitySharing/NSCopying-Protocol.h>
#import <ActivitySharing/NSSecureCoding-Protocol.h>

@class ASContact, NSDate, NSDictionary, NSNumber, NSString, NSUUID, _HKFitnessFriendActivitySnapshot;

@interface ASFriend : NSObject <NSSecureCoding, NSCopying>
{
    NSNumber *_currentCacheIndex;
    NSDictionary *_snapshots;
    NSDictionary *_friendAchievements;
    NSDictionary *_friendWorkouts;
    ASContact *_contact;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) ASContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSDictionary *friendWorkouts; // @synthesize friendWorkouts=_friendWorkouts;
@property(retain, nonatomic) NSDictionary *friendAchievements; // @synthesize friendAchievements=_friendAchievements;
@property(retain, nonatomic) NSDictionary *snapshots; // @synthesize snapshots=_snapshots;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (struct _HKFitnessFriendActivitySnapshot *)snapshotWithGoalsCarriedForwardForSnapshotIndex:(id)arg1;
- (struct _HKFitnessFriendActivitySnapshot *)_emptySnapshotWithGoalsCarriedForwardForSnapshotIndex:(long long)arg1;
@property(readonly, nonatomic) _HKFitnessFriendActivitySnapshot *currentSnapshotWithGoalsCarriedForward;
@property(readonly, nonatomic, getter=isMe) _Bool me;
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSNumber *currentCacheIndex; // @synthesize currentCacheIndex=_currentCacheIndex;
@property(readonly, nonatomic) _HKFitnessFriendActivitySnapshot *currentSnapshot;
- (id)currentDateComponents;
- (id)timeZone;
@property(readonly, nonatomic) _HKFitnessFriendActivitySnapshot *mostRecentSnapshot;
@property(readonly, nonatomic) NSDate *dateForLatestRelationshipStart;
- (_Bool)isHidingActivityDataFromMeForDate:(id)arg1;
@property(readonly, nonatomic) NSDate *dateActivityDataInitiallyBecameVisibleToMe;
@property(readonly, nonatomic) NSDate *dateForLatestDataHidden;
@property(readonly, nonatomic) NSDate *dateForLatestDataHiddenFromMe;
@property(readonly, nonatomic) NSDate *dateForLatestOutgoingInviteRequest;
@property(readonly, nonatomic) _Bool inviteRequestToMeWasAccepted;
@property(readonly, nonatomic) _Bool hasInviteRequestFromMe;
@property(readonly, nonatomic) _Bool sentInviteRequestToMe;
@property(readonly, nonatomic) _Bool isAwaitingInviteResponseFromMe;
@property(readonly, nonatomic) _Bool isMuted;
- (_Bool)isActivityDataVisibleToMeForDate:(id)arg1;
@property(readonly, nonatomic) _Bool isFriendshipCurrentlyActive;
@property(readonly, nonatomic) _Bool isCurrentlyHidingActivityDataFromMe;
@property(readonly, nonatomic) _Bool isMyActivityDataCurrentlyHidden;
@property(readonly, nonatomic) _Bool canSeeMyActivityData;
@property(readonly, nonatomic) _Bool isActivityDataCurrentlyVisibleToMe;
@property(readonly) NSUUID *UUID;
- (id)initWithActivitySnapshots:(id)arg1 friendAchievements:(id)arg2 friendWorkouts:(id)arg3 contact:(id)arg4;
- (id)as_invitedDurationString;
- (id)as_simpleHiddenFromString;
- (id)as_simpleSharingDurationString;
- (id)as_detailedSharingDurationString;

@end

