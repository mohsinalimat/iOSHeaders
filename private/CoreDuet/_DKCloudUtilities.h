//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKAccountInfo;
@protocol OS_dispatch_group;

@interface _DKCloudUtilities : NSObject
{
    NSObject<OS_dispatch_group> *_fetchInProgressGroup;
    CKAccountInfo *_accountInfo;
    _Bool _isCloudSyncAvailable;
    _Bool _isSingleDevice;
}

+ (void)setUnitTesting:(_Bool)arg1;
+ (_Bool)isUnitTesting;
+ (void)setCloudKitEnabled:(_Bool)arg1;
+ (_Bool)isCloudKitEnabled;
+ (id)containerIdentifier;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateNumberOfSyncedDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteRemoteStateWithReply:(CDUnknownBlockType)arg1;
- (void)setCloudSyncAvailable:(_Bool)arg1;
- (void)_fetchAccountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchCloudKitConfigurationAndStatus;
- (void)_accountDidChange:(id)arg1;
@property(readonly, nonatomic) _Bool isSingleDevice;
@property(readonly, nonatomic) _Bool isCloudSyncAvailable;
- (void)dealloc;
- (id)init;

@end
