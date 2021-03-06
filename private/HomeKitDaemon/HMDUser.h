//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HAPPairingIdentity, HMDAccount, HMDHome, HMUserPresenceAuthorization, NSMutableArray, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDUser : HMFObject <HMFDumpState, HMDBackingStoreObjectProtocol, NSSecureCoding>
{
    NSMutableArray *_relayAccessTokens;
    _Bool _remoteAccessAllowed;
    _Bool _remoteGateway;
    unsigned long long _privilege;
    HMDHome *_home;
    NSString *_userID;
    HMUserPresenceAuthorization *_presenceAuthStatus;
    NSString *_relayIdentifier;
    HAPPairingIdentity *_pairingIdentity;
    NSString *_displayName;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (id)userWithDictionary:(id)arg1 forHomeIdentifier:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)destinationWithUserID:(id)arg1;
+ (id)userWithName:(id)arg1 userID:(id)arg2 forHomeIdentifier:(id)arg3 publicKey:(id)arg4 homeManager:(id)arg5;
+ (id)currentUserWithPrivilege:(unsigned long long)arg1 forHomeIdentifier:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)dictionaryEncoding;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionUserUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)updateRelayAccessTokens:(id)arg1;
- (_Bool)mergeFromUser:(id)arg1 dataVersion:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *encodingRemoteDisplayName;
- (id)initWithCoder:(id)arg1;
- (id)residentCopy;
- (id)userCopy;
- (void)removeRelayAccessTokenForAccessory:(id)arg1;
- (void)addRelayAccessToken:(id)arg1 accessory:(id)arg2;
- (void)removeRelayAccessToken:(id)arg1;
- (void)addRelayAccessToken:(id)arg1;
- (id)relayAccessTokenForAccessory:(id)arg1;
- (_Bool)containsRelayAccessToken:(id)arg1;
- (id)relayAccessTokens;
@property(copy, nonatomic) NSString *relayIdentifier; // @synthesize relayIdentifier=_relayIdentifier;
- (void)configureWithHome:(id)arg1;
- (_Bool)updateAdministrator:(_Bool)arg1;
@property(readonly, getter=isValid) _Bool valid;
@property(readonly, nonatomic) _Bool isOwner;
@property(readonly, nonatomic) _Bool isAdministrator;
@property(nonatomic, getter=isRemoteGateway) _Bool remoteGateway; // @synthesize remoteGateway=_remoteGateway;
- (_Bool)updateRemoteAccessAllowed:(_Bool)arg1;
@property(nonatomic, getter=isRemoteAccessAllowed) _Bool remoteAccessAllowed; // @synthesize remoteAccessAllowed=_remoteAccessAllowed;
@property(readonly, nonatomic, getter=isCurrentUser) _Bool currentUser;
- (id)publicKey;
- (id)pairingUsername;
@property(readonly) _Bool requiresMakoSupport;
@property(retain, nonatomic) HAPPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (_Bool)refreshDisplayName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
@property(readonly, copy) HMDAccount *account;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic) unsigned long long privilege; // @synthesize privilege=_privilege;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)_compatiblePrivilege;
- (id)dumpState;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithUserID:(id)arg1 displayName:(id)arg2 forHomeIdentifier:(id)arg3 uuid:(id)arg4 pairingIdentity:(id)arg5 privilege:(unsigned long long)arg6;
- (id)initWithUserID:(id)arg1 forHomeIdentifier:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4;
- (id)initWithModelObject:(id)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end

