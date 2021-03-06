//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MAAsset;
@protocol OS_dispatch_queue;

@interface DCAssetFetcher : NSObject
{
    NSObject<OS_dispatch_queue> *_assetSerializationQueue;
    MAAsset *_cachedAsset;
}

+ (id)sharedFetcher;
- (void).cxx_destruct;
- (id)_validateAsset:(id)arg1 error:(id *)arg2;
- (void)_handleSuccessForQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleMissingMetadataWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_assetQuery;
- (void)_queryMetadataWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchAssetWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchPublicKeyMetadataIgnoringCachesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchPublicKeyAssetWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

