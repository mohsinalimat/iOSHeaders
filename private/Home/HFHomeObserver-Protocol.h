//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HMHomeDelegate-Protocol.h>

@class CLLocation, HMActionSet, HMHome, HMResidentDevice, HMRoom, HMServiceGroup, HMUser, NSArray, NSSet, NSString;

@protocol HFHomeObserver <HMHomeDelegate>

@optional
- (void)home:(HMHome *)arg1 didUpdateMediaPassword:(NSString *)arg2;
- (void)home:(HMHome *)arg1 didUpdateMediaPeerToPeerEnabled:(_Bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(_Bool)arg2;
- (void)home:(HMHome *)arg1 didRemoveResidentDevice:(HMResidentDevice *)arg2;
- (void)home:(HMHome *)arg1 didAddResidentDevice:(HMResidentDevice *)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccessControlForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccesoryInvitationsForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateStateForOutgoingInvitations:(NSArray *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForServiceGroup:(HMServiceGroup *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForRoom:(HMRoom *)arg2;
- (void)homeDidUpdateApplicationData:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)home:(HMHome *)arg1 remoteAccessStateDidChange:(unsigned long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateWallpaperForRoom:(HMRoom *)arg2;
- (void)homeDidUpdateWallpaper:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didExecuteActionSets:(NSSet *)arg2 failedActionSets:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 didWriteValuesForCharacteristics:(NSSet *)arg2 failedCharacteristics:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 didReadValuesForCharacteristics:(NSSet *)arg2 failedCharacteristics:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 willExecuteActionSets:(NSSet *)arg2;
- (void)home:(HMHome *)arg1 willWriteValuesForCharacteristics:(NSSet *)arg2;
- (void)home:(HMHome *)arg1 willReadValuesForCharacteristics:(NSSet *)arg2;
@end

