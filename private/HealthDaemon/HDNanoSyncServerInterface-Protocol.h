//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSUUID;

@protocol HDNanoSyncServerInterface <NSObject>
- (void)remote_waitForLastChanceSyncWithDevicePairingID:(NSUUID *)arg1 timeout:(double)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_resetNanoSyncWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

