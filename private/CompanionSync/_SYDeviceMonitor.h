//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSUUID;
@protocol OS_dispatch_queue;

@interface _SYDeviceMonitor : NSObject
{
    NSMutableSet *_devices;
    NSUUID *_currentTargetDeviceUUID;
    NSObject<OS_dispatch_queue> *_syncQ;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)allDevices;
- (id)currentTargetableDevice;
- (id)deviceForPairingID:(id)arg1;
- (id)deviceForNRDevice:(id)arg1;
- (void)removeNRDevice:(id)arg1;
- (void)addNRDevice:(id)arg1;
- (void)_deviceDidUnpair:(id)arg1;
- (void)_deviceDidPair:(id)arg1;
- (void)deviceBecameTargetable:(id)arg1;
- (void)_clearDeviceList;
- (void)_rebuildDeviceList;
- (id)init;

@end

