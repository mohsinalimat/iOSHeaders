//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _IDSContinuity;

@interface IDSContinuity : NSObject
{
    _IDSContinuity *_internal;
}

- (void)stopTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)startTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)stopTrackingPeer:(id)arg1;
- (void)startTrackingPeer:(id)arg1;
- (void)disconnectFromPeer:(id)arg1;
- (void)connectToPeer:(id)arg1;
- (void)stopScanningForType:(long long)arg1;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 withOptions:(id)arg4 boostedScan:(_Bool)arg5 duplicates:(_Bool)arg6;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 withOptions:(id)arg5 boostedScan:(_Bool)arg6 duplicates:(_Bool)arg7;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 withOptions:(id)arg4 boostedScan:(_Bool)arg5;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 withOptions:(id)arg5 boostedScan:(_Bool)arg6;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 withOptions:(id)arg4;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 withOptions:(id)arg5;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3 withOptions:(id)arg4;
- (void)stopAdvertisingOfType:(long long)arg1;
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;
@property(readonly) long long state;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

@end

