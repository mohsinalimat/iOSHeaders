//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLPhotoBakedThumbnailsDelegate-Protocol.h>

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSRecursiveLock, PLXPCTransaction;

@interface PLImageWriter : NSObject <PLPhotoBakedThumbnailsDelegate>
{
    NSMutableArray *_highPriorityJobs;
    NSCountedSet *_unfinishedHighPriorityJobs;
    unsigned long long _highPrioritySequentialJobCount;
    NSMutableArray *_lowPriorityJobs;
    NSCountedSet *_unfinishedLowPriorityJobs;
    NSRecursiveLock *_jobsLock;
    int _unfinishedJobCount;
    int _jobQueueAvailabilityToken;
    _Bool _writerThreadRunning;
    _Bool _databaseIsCorrupt;
    PLXPCTransaction *_transaction;
    NSMutableDictionary *_inProgressAvalancheFds;
}

+ (void)decorateThumbnailInRect:(struct CGRect)arg1 size:(struct CGSize)arg2 duration:(id)arg3 inContext:(struct CGContext *)arg4 format:(id)arg5;
+ (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext *)arg2;
+ (_Bool)setAdjustmentsForNewPhoto:(id)arg1 withEffectFilterName:(id)arg2 filteredImagePath:(id)arg3 isSubstandardRender:(_Bool)arg4;
+ (id)sharedWriter;
- (void)_writerThread;
- (void)_processJob:(id)arg1;
- (void)_processSyncedVideoSaveJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processVideoSaveJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setAdjustmentsForNewVideo:(id)arg1 withAdjustmentsDictionary:(id)arg2;
- (void)_processVideoJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_transferVideoFromIncomingPath:(id)arg1 toDestinationPath:(id)arg2 shouldRemoveIncoming:(_Bool *)arg3 error:(id *)arg4;
- (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)_decorateThumbnail:(id)arg1;
- (void)_processDaemonJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processCrashRecoveryJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_photoIrisPairingDidSucceed:(_Bool)arg1 fileIndicatorPath:(id)arg2 photoAsset:(id)arg3 photoLibrary:(id)arg4;
- (void)_handlePhotoIrisCrashRecoveryForPhotoIndicatorFiles:(id)arg1;
- (void)_handlePhotoIrisCrashRecoveryForVideos:(id)arg1;
- (id)_fetchPhotoAssetForUUID:(id)arg1 moc:(id)arg2;
- (id)_fetchPhotoAssetForMediaGroupUUID:(id)arg1 moc:(id)arg2;
- (void)_handleAvalancheCrashRecovery:(id)arg1;
- (void)_processIngestedSyncedAssetJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processSavePhotoStreamImageToCameraRollJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_enablePhotoStreamJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processDeletePhotoStreamDataJob:(id)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processAutodeleteEmptyAlbumJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processImportImageJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processAvalanchesValidationJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processAvalancheJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processBatchImageJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeInProgressExtendedAttributesForFileAtURL:(id)arg1;
- (void)_processImageJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAvalancheInProgress:(_Bool)arg1 uuid:(id)arg2;
- (id)uuidFromIncomingFilename:(id)arg1;
- (void)_removeTransientKeys:(id)arg1;
- (id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg1 assetType:(unsigned int)arg2 extension:(id)arg3;
- (id)cameraAssetPathForNewAssetWithExtension:(id)arg1;
- (_Bool)enqueueJob:(id)arg1;
- (void)_decrementJobCount:(id)arg1;
- (void)_incrementJobCount:(id)arg1;
- (void)_postJobQueueNotificationIsAvailable:(_Bool)arg1;
- (_Bool)canEnqueueJob:(id)arg1;
- (_Bool)_isHighPriorityJob:(id)arg1;
- (void)dealloc;
- (id)init;

@end

