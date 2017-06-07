//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLDiskSpaceManagement : NSObject
{
}

+ (long long)_processCloudSharedAsset:(id)arg1 shouldFreeSpace:(_Bool)arg2;
+ (unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)arg1 shouldFreeSpace:(_Bool)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)_scanFilesInPhotoMetadataDirectoryShouldFreeSpace:(_Bool)arg1 bytesToPurge:(unsigned long long)arg2 skipAssets:(id)arg3;
+ (unsigned long long)_scanFilesInCloudSharingCacheDataDirectoryShouldFreeSpace:(_Bool)arg1 bytesToPurge:(unsigned long long)arg2;
+ (unsigned long long)_scanFilesInReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(_Bool)arg1 bytesToPurge:(unsigned long long)arg2;
+ (unsigned long long)purgeExpiredOutboundSharingAssets;
+ (unsigned long long)_performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(_Bool)arg2 fromPhotoLibrary:(id)arg3 keepRecentlyViewedAssets:(_Bool)arg4;
+ (unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(_Bool)arg2 fromPhotoLibrary:(id)arg3;
+ (unsigned long long)purgeCloudSharingAssetsIfNotRecentlyViewedFromPhotoLibrary:(id)arg1;

@end

