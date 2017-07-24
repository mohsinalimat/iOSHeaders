//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CommunicationsSetupUI/NSObject-Protocol.h>

@class IMCloudKitEventNotificationManager, IMCloudKitSyncProgress, IMCloudKitSyncState, IMCloudKitSyncStatistics, NSError, NSString;

@protocol IMCloudKitEventHandler <NSObject>

@optional
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didPerformAdditionalStorageRequiredCheck:(unsigned long long)arg2 forAccountId:(NSString *)arg3 error:(NSError *)arg4;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 syncProgressDidUpdate:(IMCloudKitSyncProgress *)arg2;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didFetchSyncStatistics:(IMCloudKitSyncStatistics *)arg2 error:(NSError *)arg3;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 syncStateDidChange:(IMCloudKitSyncState *)arg2;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didChangeEnabled:(_Bool)arg2 error:(NSError *)arg3;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didDisableAllDevices:(_Bool)arg2 error:(NSError *)arg3;
@end
