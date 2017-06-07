//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSURL, WBSCacheRetainReleasePolicy;
@protocol OS_dispatch_queue, WBSSiteMetadataImageCacheDelegate;

@interface WBSSiteMetadataImageCache : NSObject
{
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_imagesForKeyStrings;
    NSMutableSet *_pendingKeyStringRequests;
    NSMutableSet *_missingImageKeyStrings;
    WBSCacheRetainReleasePolicy *_cachePolicy;
    NSMutableDictionary *_cacheSettings;
    struct unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter>> _cacheSettingsWriter;
    _Bool _terminating;
    NSURL *_imageDirectoryURL;
    long long _imageType;
    id <WBSSiteMetadataImageCacheDelegate> _delegate;
}

@property(nonatomic) __weak id <WBSSiteMetadataImageCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isTerminating) _Bool terminating; // @synthesize terminating=_terminating;
@property(readonly, nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(readonly, nonatomic) NSURL *imageDirectoryURL; // @synthesize imageDirectoryURL=_imageDirectoryURL;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_internalQueueDispatchBarrierAsync:(CDUnknownBlockType)arg1;
- (void)_internalQueueDispatchAsync:(CDUnknownBlockType)arg1;
- (void)_internalQueueDispatchSync:(CDUnknownBlockType)arg1;
- (void)_internalSetSetting:(id)arg1 forKey:(id)arg2;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)_internalSettingForKey:(id)arg1;
- (id)settingForKey:(id)arg1;
- (void)_notifyDidFinishLoadingSettings;
- (void)_saveCacheSettingsSoon;
- (id)_cacheSettingsFileURL;
- (void)_internalRemoveImagesFromCacheForKeyStrings:(id)arg1;
- (void)removeImagesFromCacheForKeyStrings:(id)arg1;
- (_Bool)isImageRetainedForKeyString:(id)arg1;
- (void)releaseImagesForKeyStrings:(id)arg1;
- (void)releaseImageForKeyString:(id)arg1;
- (void)releaseImageWithKeyStringProvider:(CDUnknownBlockType)arg1;
- (void)_internalReleaseImageForKeyString:(id)arg1;
- (void)retainImagesForKeyStrings:(id)arg1;
- (void)retainImageForKeyString:(id)arg1;
- (void)retainImageWithKeyStringProvider:(CDUnknownBlockType)arg1;
- (void)_internalSetImageState:(long long)arg1 forKeyString:(id)arg2;
- (void)setImageState:(long long)arg1 forKeyString:(id)arg2;
- (long long)_internalImageStateForKeyString:(id)arg1;
- (long long)imageStateForKeyString:(id)arg1;
- (void)_internalRemoveAllImages;
- (void)removeAllImages;
- (void)_internalSaveImageToDisk:(id)arg1 forKeyString:(id)arg2;
- (void)saveImageToDisk:(id)arg1 forKeyString:(id)arg2;
- (id)_internalImageForKeyString:(id)arg1;
- (id)imageForKeyString:(id)arg1;
- (void)_removeImagesPassingTest:(CDUnknownBlockType)arg1;
- (void)_didLoadImage:(id)arg1 forKeyString:(id)arg2;
- (id)_loadImageFromDiskForKeyString:(id)arg1;
- (id)_fileNameForKeyString:(id)arg1;
- (id)_fileLocationForKeyString:(id)arg1;
- (void)_requestImageForKeyString:(id)arg1;
- (void)_dispatchDiskAccessBlock:(CDUnknownBlockType)arg1;
- (void)_emptyCacheDirectory;
- (void)emptyCache;
- (void)savePendingChangesBeforeTermination;
- (void)_internalPurgeUnneededImages;
- (void)purgeUnneededImages;
- (void)_internalSetUpImageCache;
- (void)setUpImageCache;
- (id)_diskAccessQueueName;
- (id)_internalQueueName;
- (id)initWithImageDirectoryURL:(id)arg1 imageType:(long long)arg2;
- (id)init;

@end

