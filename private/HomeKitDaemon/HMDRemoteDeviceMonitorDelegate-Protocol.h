//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDDevice, HMDRemoteDeviceMonitor;

@protocol HMDRemoteDeviceMonitorDelegate <NSObject>

@optional
- (void)remoteDeviceMonitor:(HMDRemoteDeviceMonitor *)arg1 deviceIsReachable:(HMDDevice *)arg2;
- (void)remoteDeviceMonitor:(HMDRemoteDeviceMonitor *)arg1 deviceIsUnreachable:(HMDDevice *)arg2;
@end

