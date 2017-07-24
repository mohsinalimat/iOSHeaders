//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/UIActivityItemApplicationExtensionSource-Protocol.h>
#import <PhotosUI/UIActivityItemDeferredSource-Protocol.h>
#import <PhotosUI/UIActivityItemSource-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSProgress, NSString, NSURL, PFSharingRemaker, PHAsset, PHAssetExportRequest, PLVideoRemaker, _PUActivityItemSourceOperation;

@interface PUActivityItemSource : NSObject <UIActivityItemDeferredSource, UIActivityItemApplicationExtensionSource, UIActivityItemSource>
{
    PHAsset *_asset;
    NSDictionary *_cachedSharingVariants;
    NSMutableSet *_onDemandExports;
    NSMutableDictionary *_sharingURLs;
    NSString *_sharingUUID;
    NSString *_assetOriginalFilename;
    _Bool _hasRecognizedVideoAdjustments;
    _PUActivityItemSourceOperation *_currentOperation;
    PLVideoRemaker *_remaker;
    CDUnknownBlockType _remakerCompletionHandler;
    id _strongSelf;
    PFSharingRemaker *_photoRemaker;
    NSArray *_nonLocalAssetsActivities;
    _Bool _useStillImage;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _postCompletionHandler;
    long long __remakerWasCancelled;
    PHAssetExportRequest *__assetExportRequest;
    NSProgress *__exportProgress;
    CDUnknownBlockType __exportProgressHandler;
    NSDictionary *__pasteboardRepresentation;
    NSURL *__assetsLibraryURL;
}

+ (id)_photosInternalActivities;
+ (id)_sharingErrorWithCode:(long long)arg1 underlyingError:(id)arg2 localizedDescription:(id)arg3 additionalInfo:(id)arg4;
+ (_Bool)supportsAssetLocalIdentifierForActivityType:(id)arg1;
+ (_Bool)supportsPhotoIrisBundleForActivityType:(id)arg1;
@property(retain, setter=_setAssetsLibraryURL:) NSURL *_assetsLibraryURL; // @synthesize _assetsLibraryURL=__assetsLibraryURL;
@property(retain, setter=_setPasteboardRepresentation:) NSDictionary *_pasteboardRepresentation; // @synthesize _pasteboardRepresentation=__pasteboardRepresentation;
@property(copy, nonatomic, setter=_setExportProgressHandler:) CDUnknownBlockType _exportProgressHandler; // @synthesize _exportProgressHandler=__exportProgressHandler;
@property(retain, nonatomic, setter=_setExportProgress:) NSProgress *_exportProgress; // @synthesize _exportProgress=__exportProgress;
@property(retain, nonatomic, setter=_setAssetExportRequest:) PHAssetExportRequest *_assetExportRequest; // @synthesize _assetExportRequest=__assetExportRequest;
@property(setter=_setRemakerWasCancelled:) long long _remakerWasCancelled; // @synthesize _remakerWasCancelled=__remakerWasCancelled;
@property(copy) CDUnknownBlockType postCompletionHandler; // @synthesize postCompletionHandler=_postCompletionHandler;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) _Bool useStillImage; // @synthesize useStillImage=_useStillImage;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)_removeTempIrisBundleFile;
- (void)_removeTempPhotoRemakerFile;
- (void)_removeTempVideoRemakerFile;
- (void)_removeTempFiles;
- (void)_setResourceURL:(id)arg1 forType:(long long)arg2;
- (id)_resourceURLForType:(long long)arg1;
- (id)_createManagedURLForResourceAtURL:(id)arg1 shouldMove:(_Bool)arg2 forType:(long long)arg3;
- (_Bool)_copyResourceAtURL:(id)arg1 toURL:(id)arg2 shouldMove:(_Bool)arg3;
- (id)_generateURLForType:(long long)arg1 desiredPathExtension:(id)arg2;
- (id)_outboundResourcesDirectoryURL;
- (void)_cleanupProgress;
- (void)_cleanupRemaker;
- (void)_cleanupPhotoRemaker;
- (void)_cancelVideoRemaking:(id)arg1;
- (void)remakeVideoWithTrimStartTime:(double)arg1 endTime:(double)arg2 forMail:(_Bool)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)remakePhotoWithURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_isColorOptimizationNeededForAsset:(id)arg1 imageURL:(id)arg2;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerApplicationExtensionItem:(id)arg1;
- (void)_runOnDemandExportForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingExportRequest;
- (void)_beginObservingExportRequest:(id)arg1 withProgressHandler:(CDUnknownBlockType)arg2;
- (id)_itemForActivityType:(id)arg1;
- (void)_fetchAlternateForActivityType:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchPhotoIrisForActivityType:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchVideoForActivityType:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchImageForActivityType:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_runExportRequestWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_createTempPhotoIrisBundle;
- (_Bool)_wantsPhotoIrisBundleForActivityType:(id)arg1;
- (void)_operation:(id)arg1 prepareItemForActivityType:(id)arg2;
- (id)_newPasteboardRepresentationForURL:(id)arg1;
- (id)_newOperationForActivityType:(id)arg1;
- (id)_uniformTypeIdentifierForActivityType:(id)arg1;
- (unsigned long long)_maxFileSizeLimitForActivityType:(id)arg1 asset:(id)arg2;
- (_Bool)_shouldExcludeAlternateVariantForActivityType:(id)arg1;
- (_Bool)_wantsAlternateVariantForActivityType:(id)arg1;
- (_Bool)_wantsCompatibleFormatForActivityType:(id)arg1;
- (_Bool)_wantsIrisRemakerURLForActivityType:(id)arg1;
- (_Bool)_wantsPhotoRemakerURLForActivityType:(id)arg1;
- (id)_customAccessibilityLabel;
- (_Bool)_wantsVideoRemakerForActivityType:(id)arg1;
- (_Bool)_wantsAssetsLibraryURLForActivityType:(id)arg1;
- (_Bool)_wantsLocalAssetsForActivityType:(id)arg1;
- (void)cancelRemaking;
- (void)cancel;
- (id)_sharingVariants;
- (void)runWithActivityType:(id)arg1;
- (id)_activityOperationQueue;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 useStillImage:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

