//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMHomeInvitationData.h>

@class NSString, NSUUID;

@interface HMOutgoingHomeInvitationData : HMHomeInvitationData
{
    NSString *_inviteeUserID;
    NSString *_inviteeName;
    NSUUID *_inviteeUUID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSUUID *inviteeUUID; // @synthesize inviteeUUID=_inviteeUUID;
@property(readonly, copy, nonatomic) NSString *inviteeName; // @synthesize inviteeName=_inviteeName;
@property(readonly, copy, nonatomic) NSString *inviteeUserID; // @synthesize inviteeUserID=_inviteeUserID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInviteeUserID:(id)arg1 inviteeName:(id)arg2 invitationState:(long long)arg3 expiryDate:(id)arg4;

@end

