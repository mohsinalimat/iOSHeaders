//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class HAPPairingIdentity, NSArray, NSDate, NSNumber;

@interface HMDUserManagementOperationModel : HMDBackingStoreModelObject
{
}

+ (id)properties;
- (id)dependentUUIDs;

// Remaining properties
@property(retain, nonatomic) HAPPairingIdentity *accessoryPairingIdentity; // @dynamic accessoryPairingIdentity;
@property(retain, nonatomic) NSArray *dependencies; // @dynamic dependencies;
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSNumber *operationType; // @dynamic operationType;
@property(retain, nonatomic) HAPPairingIdentity *ownerPairingIdentity; // @dynamic ownerPairingIdentity;
@property(retain, nonatomic) HAPPairingIdentity *userPairingIdentity; // @dynamic userPairingIdentity;

@end

