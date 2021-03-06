//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstallCoordination/IXSOwnedDataPromiseProxy-Protocol.h>

@class IXPlaceholderAttributes, NSArray, NSUUID;

@protocol IXSPlaceholderProxy <IXSOwnedDataPromiseProxy>
- (oneway void)_remote_setConfigurationCompleteWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)_remote_getPlugInPlaceholderPromises:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)_remote_hasPlugInPlaceholderPromises:(void (^)(_Bool, NSError *))arg1;
- (oneway void)_remote_setPlugInPlaceholderPromiseUUIDs:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)_remote_getEntitlementsPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg1;
- (oneway void)_remote_hasEntitlementsPromise:(void (^)(_Bool, NSError *))arg1;
- (oneway void)_remote_setEntitlementsPromiseUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)_remote_getIconPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg1;
- (oneway void)_remote_hasIconPromise:(void (^)(_Bool, NSError *))arg1;
- (oneway void)_remote_setIconPromiseUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)_remote_getAttributesWithCompletion:(void (^)(IXPlaceholderAttributes *, NSError *))arg1;
- (oneway void)_remote_setAttributes:(IXPlaceholderAttributes *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)_remote_getLaunchProhibitedWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (oneway void)_remote_setLaunchProhibited:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)_remote_getSinfDataWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (oneway void)_remote_setSinfPromiseUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)_remote_getMetadataWithCompletion:(void (^)(MIStoreMetadata *, NSError *))arg1;
- (oneway void)_remote_setMetadataPromiseUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
@end

