//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AssetsLibrary/ALAssetsLibraryAsset-Protocol.h>

@class ALAssetsLibrary, NSString, PLManagedAsset, PLPhotoLibrary, PLSidecarFile;

__attribute__((visibility("hidden")))
@interface ALAssetRepresentationPrivate : NSObject <ALAssetsLibraryAsset>
{
    ALAssetsLibrary *_library;
    _Bool _isValid;
    PLManagedAsset *_photo;
    PLSidecarFile *_sidecar;
    NSString *_extension;
    PLPhotoLibrary *_photoLibrary;
}

+ (void)_clearFileDescriptorQueue;
+ (int)_updateFileDescriptor:(int)arg1 forPersistentURL:(id)arg2;
+ (int)_fileDescriptorForPersistentURL:(id)arg1;
+ (void)_setupFileDescriptorQueue;
@property(retain, nonatomic) PLPhotoLibrary *_photoLibrary; // @synthesize _photoLibrary;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) PLSidecarFile *sidecar; // @synthesize sidecar=_sidecar;
@property(retain, nonatomic) PLManagedAsset *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (void)_performBlockAndWait:(CDUnknownBlockType)arg1;
- (_Bool)_isVideo;
- (_Bool)_isImage;
- (void)libraryDidChange;
@property(nonatomic) ALAssetsLibrary *library;
- (void)dealloc;
- (id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

