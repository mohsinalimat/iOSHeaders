//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibrary/ICCameraDeviceDelegate-Protocol.h>
#import <PhotoLibrary/ICDeviceDelegate-Protocol.h>

@class ICCameraDevice, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PLCameraImportQueue, PLImportFileManager, PLMutableCameraImportQueue;
@protocol PLCameraImporterDelegate;

@interface PLCameraImporter : NSObject <ICDeviceDelegate, ICCameraDeviceDelegate>
{
    PLMutableCameraImportQueue *_thumbnailQueue;
    PLCameraImportQueue *_downloadQueue;
    PLCameraImportQueue *_importQueue;
    PLCameraImportQueue *_deleteQueue;
    NSMutableArray *_orphanItems;
    NSMutableArray *_coalescedDeletedItems;
    _Bool _importInProgress;
    NSMutableDictionary *_parentFolderMapping;
    _Bool _autosplitEvents;
    long long _eventSplitGranularity;
    PLImportFileManager *_importFileManager;
    _Bool _stopAfterNextItemImport;
    _Bool _importItemInProgress;
    NSMutableSet *_avalanchesImported;
    _Bool _isAppleDevice;
    id <PLCameraImporterDelegate> _delegate;
    NSMutableDictionary *_itemsMapping;
    NSMutableArray *_items;
    ICCameraDevice *_camera;
    NSString *_importSessionIdentifier;
}

@property(nonatomic) _Bool isAppleDevice; // @synthesize isAppleDevice=_isAppleDevice;
@property(copy, nonatomic) NSString *importSessionIdentifier; // @synthesize importSessionIdentifier=_importSessionIdentifier;
@property(retain, nonatomic) ICCameraDevice *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableDictionary *itemsMapping; // @synthesize itemsMapping=_itemsMapping;
@property(nonatomic) __weak id <PLCameraImporterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cameraDevice:(id)arg1 didReceiveMetadata:(id)arg2 forItem:(id)arg3 error:(id)arg4;
- (void)cameraDevice:(id)arg1 didReceiveThumbnail:(struct CGImage *)arg2 forItem:(id)arg3 error:(id)arg4;
- (void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2;
- (void)_coalescedRemoveImportItems;
- (void)cameraDevice:(id)arg1 didAddItems:(id)arg2;
- (void)device:(id)arg1 didEncounterError:(id)arg2;
- (void)device:(id)arg1 didCloseSessionWithError:(id)arg2;
- (void)deviceDidBecomeReady:(id)arg1;
- (void)device:(id)arg1 didOpenSessionWithError:(id)arg2;
- (void)didRemoveDevice:(id)arg1;
- (void)_deleteImportItemsFromDiskInBackground:(id)arg1;
- (void)_removeImportItemsAtPathsInBackground:(id)arg1;
- (void)_deleteImportItemFromDisk:(id)arg1;
- (void)_didFinishDeletingItems:(id)arg1;
- (void)removeItems:(id)arg1;
- (void)_deleteImportItems:(id)arg1;
- (void)stopImport;
- (void)_stopImport;
- (void)_didFinishImportingItems:(id)arg1;
- (void)importItems:(id)arg1;
- (void)didReceiveImportNotification:(id)arg1;
- (void)_photoLibraryFinishedImportForPhoto:(id)arg1 atPath:(id)arg2 error:(id)arg3;
- (void)didImportImportItem:(id)arg1 error:(id)arg2;
- (id)_avalancheUUIDForItem:(id)arg1 atMaterPath:(id)arg2;
- (id)_sidecarsForItem:(id)arg1;
- (void)importImportItem:(id)arg1;
- (void)_downloadImportItems:(id)arg1;
- (void)_clearImportItemsForDownload:(id)arg1;
- (void)_separateItems:(id)arg1 intoEventsWithGranularity:(long long)arg2;
- (unsigned long long)approximateBytesRequiredToImportItem:(id)arg1;
- (void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void *)arg4;
- (void)didReceiveThumbnail:(struct CGImage *)arg1 forCameraFile:(id)arg2 error:(id)arg3;
- (void)_requestNextThumbnailFromQueue;
- (void)didReceiveThumbnailForImportItem:(id)arg1 error:(id)arg2;
- (void)_enqueueItemsToThumbnailQueue:(id)arg1;
- (void)readThumbnailsForImportItems:(id)arg1;
- (void)didReceiveMetadata:(id)arg1 forCameraFile:(id)arg2 error:(id)arg3;
- (void)readMetadataForImportItems:(id)arg1;
- (void)camaraDidEnumerateContents;
- (void)readImportItems;
- (id)importItemForCameraFile:(id)arg1;
- (void)removeImportItemsForCameraFiles:(id)arg1;
- (void)addImportItemsFromCameraFiles:(id)arg1;
- (void)_addImportItemFromCameraFile:(id)arg1;
- (id)allImportItems;
- (_Bool)isImporting;
- (_Bool)deviceIsLocked;
- (void)cameraDidError:(id)arg1;
- (unsigned long long)contentPercentCompleted;
- (unsigned long long)estimatedNumberOfItems;
- (void)ejectCamera;
- (id)cameraKind;
- (id)cameraName;
- (void)didDisconnectFromCamera:(id)arg1 error:(id)arg2;
- (void)didConnectToCamera:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

