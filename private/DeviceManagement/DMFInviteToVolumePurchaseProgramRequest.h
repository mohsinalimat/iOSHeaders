//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class NSString, NSURL;

@interface DMFInviteToVolumePurchaseProgramRequest : CATTaskRequest
{
    NSURL *_invitationURL;
    NSString *_programID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *programID; // @synthesize programID=_programID;
@property(copy, nonatomic) NSURL *invitationURL; // @synthesize invitationURL=_invitationURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

