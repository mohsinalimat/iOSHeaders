//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NRDeviceCollectionDiff, NSString, NSUUID;

@protocol NanoRegistryPrivateDaemonDelegate
- (void)xpcGetLastMigrationRequestPhoneNameWithCompletion:(void (^)(NSString *))arg1;
- (void)xpcBeginMigrationWithDeviceID:(NSUUID *)arg1 passcode:(NSString *)arg2 withBlock:(void (^)(void))arg3;
- (void)xpcSetMigrationConsented:(_Bool)arg1 forDeviceID:(NSUUID *)arg2 withBlock:(void (^)(void))arg3;
- (void)xpcIsWatchSetupPushActiveWithBlock:(void (^)(_Bool))arg1;
- (void)xpcStopWatchSetupPushWithBlock:(void (^)(void))arg1;
- (void)xpcStartWatchSetupPushWithBlock:(void (^)(void))arg1;
- (void)xpcApplyDiff:(NRDeviceCollectionDiff *)arg1 block:(void (^)(void))arg2;
- (void)xpcPingActiveGizmoWithPriority:(long long)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(void (^)(_Bool, double, double))arg3;
- (void)xpcSubmitServerRequestReportWithRequestType:(NSString *)arg1 duration:(double)arg2 errorCode:(unsigned int)arg3 block:(void (^)(void))arg4;
@end

