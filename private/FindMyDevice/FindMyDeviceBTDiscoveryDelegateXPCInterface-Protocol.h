//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FindMyDevice/NSObject-Protocol.h>

@class NSError, NSObject;
@protocol FMDBluetoothDiscoveryDevice;

@protocol FindMyDeviceBTDiscoveryDelegateXPCInterface <NSObject>
- (oneway void)didLoseDevice:(NSObject<FMDBluetoothDiscoveryDevice> *)arg1;
- (oneway void)didDiscoverDevice:(NSObject<FMDBluetoothDiscoveryDevice> *)arg1;
- (oneway void)didEndDiscoveryWithError:(NSError *)arg1;
@end

