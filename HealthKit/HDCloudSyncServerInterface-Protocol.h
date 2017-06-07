//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString;

@protocol HDCloudSyncServerInterface <NSObject>
- (void)remote_fetchCloudSyncStatusWithCompletion:(void (^)(NSDate *, _Bool, NSError *))arg1;
- (void)remote_fetchCloudDescriptionWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)remote_forceCloudResetWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_createCloudShareWithRecipient:(NSString *)arg1 sampleTypes:(NSArray *)arg2 maxSampleAge:(NSNumber *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
@end
