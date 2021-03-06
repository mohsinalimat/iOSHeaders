//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MAAsset, NSDictionary;
@protocol OS_dispatch_queue;

@interface SFDeviceAssetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    MAAsset *_deviceAssetManagement;
    NSDictionary *_productTypesMappingTable;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (id)localFileURLForAsset:(id)arg1;
- (id)additionalMappedProducts;
- (void)addKeyValuePair:(id)arg1 with:(id)arg2 toQuery:(id)arg3;
- (id)onqueue_mappedProductTypeForProductType:(id)arg1;
- (void)onqueue_validateProductTypeInQuery:(id)arg1;
- (void)onqueue_findAssetBundleForDeviceQuery:(id)arg1 installedOnly:(_Bool)arg2 preciseMatch:(_Bool)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)bundleAtURL:(id)arg1 error:(id *)arg2;
- (void)onqueue_purgeAssetsMatchingQuery:(id)arg1;
- (void)purgeAssetsMatchingQuery:(id)arg1;
- (void)onqueue_getAssetBundleForDeviceQuery:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getAssetBundleForDeviceQuery:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)onqueue_invalidate;
- (void)invalidate;
- (void)onqueue_updateMetaData;
- (void)onqueue_activate;
- (void)activate;
- (id)init;

@end

