//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFMessage.h>

@class HAPPairingIdentity, HMDDevice, NSString;

@interface HMFMessage (RemoteMessage)
@property(readonly, nonatomic) HAPPairingIdentity *remoteUserPairingIdentity;
@property(readonly, nonatomic) HMDDevice *remoteSourceDevice;
@property(readonly, nonatomic) NSString *remoteSourceID;
@property(readonly, nonatomic, getter=isRemote) _Bool remote;
@end

