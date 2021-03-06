//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDHomePresenceCheck-Protocol.h>

@class NSDictionary;

@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck>
{
    NSDictionary *_userPresenceMap;
}

+ (id)presenceRemoteWithDictionary:(id)arg1 presenceIdentifierDict:(id)arg2;
@property(readonly, nonatomic) NSDictionary *userPresenceMap; // @synthesize userPresenceMap=_userPresenceMap;
- (void).cxx_destruct;
- (_Bool)isAnyUserAtHome;
- (_Bool)isNoUserAtHome;
- (_Bool)areUsersNotAtHome:(id)arg1;
- (_Bool)areUsersAtHome:(id)arg1;
- (_Bool)isUserNotAtHome:(id)arg1;
- (_Bool)isUserAtHome:(id)arg1;
- (id)regionForUser:(id)arg1;
- (id)description;
- (void)_initializeWithPresenceMap:(id)arg1;
- (void)_initializeWithPresenceIdentifierMap:(id)arg1;
- (id)initWithDictionary:(id)arg1 presenceIdentifierDict:(id)arg2;

@end

