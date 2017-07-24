//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/ICEnvironmentMonitorObserver-Protocol.h>

@class NSMapTable, NSMutableArray, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface MPStreamingDownloadSessionController : NSObject <ICEnvironmentMonitorObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMapTable *_assetDownloadSessionToDownloadSession;
    NSMapTable *_assetDownloadSessionToPlaybackMetadata;
    NSMutableArray *_assetDownloadSessionsPendingStart;
    unsigned long long _pausingAllDownloadsTransactionCount;
    struct vector<unsigned long long, std::__1::allocator<unsigned long long>> _prioritizedDownloadTokens;
    NSOperationQueue *_streamingOperationQueue;
}

+ (id)sharedDownloadSessionController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_unregisterForNotificationsForPlaybackItemMetadata:(id)arg1;
- (void)_unregisterForNotificationsForAssetDownloadSession:(id)arg1;
- (void)_unregisterDownloadSession:(id)arg1;
- (id)_sinfsByCleaningSinfs:(id)arg1;
- (void)_registerForNotificationsForPlaybackItemMetadata:(id)arg1;
- (void)_registerForNotificationsForAssetDownloadSession:(id)arg1;
- (void)_removeFileForAssetDownloadSession:(id)arg1 playbackItemMetadata:(id)arg2;
- (id)_preferredAssetFlavorsForAssetQuality:(unsigned long long)arg1;
- (void)_postFailedForDownloadSession:(id)arg1 withError:(id)arg2;
- (void)_postFailedForDownloadSession:(id)arg1;
- (id)_newDownloadSessionForRequest:(id)arg1 sourceURL:(id)arg2 downloadKey:(id)arg3 sinfs:(id)arg4 pathExtension:(id)arg5 assetFlavor:(id)arg6 allowAssetCaching:(_Bool)arg7 allowITunesContentConfiguration:(_Bool)arg8 protectionType:(unsigned long long)arg9 returningAssetDownloadSession:(id *)arg10;
- (void)_handlePrioritizationForFinishingAssetDownloadSession:(id)arg1;
- (void)_handleNewDownloadSession:(id)arg1 withAssetDownloadSession:(id)arg2 forPlaybackItemMetadata:(id)arg3;
- (void)_getNetworkConstraintsForPlaybackItemMetadata:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_downloadKeyCookieWithValue:(id)arg1 URL:(id)arg2;
- (void)_auditNetworkConstraintsForAssetDownloadSession:(id)arg1 playbackItemMetadata:(id)arg2;
- (void)_auditAssetDownloadSession:(id)arg1 withNetworkConstraints:(id)arg2;
- (unsigned long long)_assetQualityForAssetFlavor:(id)arg1;
- (id)_assetDownloadSessionForDownloadSession:(id)arg1;
- (void)_playbackItemMetadataNetworkConstraintsDidChangeNotification:(id)arg1;
- (void)_assetDownloadSessionFileSizeAvailableNotification:(id)arg1;
- (void)_assetDownloadSessionDownloadSucceededNotification:(id)arg1;
- (void)_assetDownloadSessionDownloadFailedNotification:(id)arg1;
- (void)startDownloadSession:(id)arg1;
- (void)releaseDownloadSession:(id)arg1;
- (void)endPrioritizingDownloadSession:(id)arg1;
- (void)beginPrioritizingDownloadSession:(id)arg1;
- (void)acquireDownloadSessionWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)endPausingAllDownloadSessions;
- (void)beginPausingAllDownloadSessions;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

