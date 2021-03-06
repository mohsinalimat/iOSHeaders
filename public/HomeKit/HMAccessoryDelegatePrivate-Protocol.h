//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMAccessoryDelegate-Protocol.h>

@class ACAccount, HMAccessory, HMCharacteristic, HMFSoftwareVersion, HMService, NSString;

@protocol HMAccessoryDelegatePrivate <HMAccessoryDelegate>

@optional
- (void)accessory:(HMAccessory *)arg1 didUpdateLoggedInAccount:(ACAccount *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateSoftwareVersion:(HMFSoftwareVersion *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateFirmwareUpdateAvailable:(_Bool)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateStoreID:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBundleID:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateHasAuthorizationDataForCharacteristic:(HMCharacteristic *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBulletinBoardNotificationServiceGroupForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBulletinBoardNotificationForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateApplicationDataForService:(HMService *)arg2;
- (void)accessoryDidUpdateAdditionalSetupRequired:(HMAccessory *)arg1;
- (void)accessoryDidUpdateApplicationData:(HMAccessory *)arg1;
@end

