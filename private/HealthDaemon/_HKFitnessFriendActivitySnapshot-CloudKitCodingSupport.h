//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKFitnessFriendActivitySnapshot.h>

#import <HealthDaemon/HDFitnessFriendsCloudKitCodable-Protocol.h>

@class HDFitnessFriendsCloudKitCodableActivitySnapshot, NSString;

@interface _HKFitnessFriendActivitySnapshot (CloudKitCodingSupport) <HDFitnessFriendsCloudKitCodable>
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2 uploadedDate:(id)arg3;
+ (id)fitnessFriendActivitySnapshotWithRecord:(id)arg1 friendUUID:(id)arg2;
- (id)recordWithZoneID:(id)arg1;
@property(readonly, nonatomic) HDFitnessFriendsCloudKitCodableActivitySnapshot *codableSnapshot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

